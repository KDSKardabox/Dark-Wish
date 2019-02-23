#include <pokeagb/pokeagb.h>
#include "animation_core.h"
#include "../global.h"
#include "../battle/battle_actions/actions.h"
#include "../battle/battle_data/battle_state.h"
#include "../battle/battle_data/pkmn_bank_stats.h"


void ScriptCmd_loadspritefull(void);
void ScriptCmd_deletesprite(void);
void ScriptCmd_rendersprite(void);
void ScriptCmd_copyvar(void);
void ScriptCmd_setvar(void);
void ScriptCmd_addvar(void);
void ScriptCmd_subvar(void);
void ScriptCmd_mulvar(void);
void ScriptCmd_divvar(void);
void ScriptCmd_goto(void);
void ScriptCmd_movesprite(void);
void ScriptCmd_waitthread(void);
void ScriptCmd_RunAnimAvailableThread(void);
void ScriptCmd_waitframes(void);
void ScriptCmd_animatesprite(void);
void ScriptCmd_spriteshow(void);
void ScriptCmd_spritehide(void);
void ScriptCmd_setspritepal(void);
void ScriptCmd_spritetobg(void);
void ScriptCmd_spritesblend(void);
void ScriptCmd_spritebgclear(void);
void ScriptCmd_excludeblend(void);
void ScriptCmd_includeblend(void);
void SpriteCmd_darkensprites(void);
void SpriteCmd_lightensprites(void);
void ScripCmd_clearpalbuff(void);
void ScriptCmd_palbufferspriteandbgs(void);
void ScriptCmd_palfade(void);
void SpriteCmd_movewave(void);
void ScriptCmd_uploadbg(void);
void ScriptCmd_showbg(void);
void ScriptCmd_hidebg(void);
void ScriptCmd_flashsprite(void);
void ScriptCmd_getattacker(void);
void ScriptCmd_getdefender(void);
void ScriptCmd_getattackercoords(void);
void ScriptCmd_getdefendercoords(void);
void ScriptCmd_quakebg(void);
void ScriptCmd_call(void);
void ScriptCmd_return(void);
void ScriptCmd_if(void);
void ScriptCmd_compare(void);
void ScriptCmd_comparevars(void);
void ScriptCmd_sideofsprite(void);
void ScriptCmd_fastsetbattlers(void);
void ScriptCmd_shakehpbox(void);
void ScriptCmd_randrange(void);
void ScriptCmd_addvars(void);
void ScriptCmd_subvars(void);
void ScriptCmd_runtask(void);
void ScriptCmd_quakesprite(void);
void ScriptCmd_setframessprite(void);
void ScriptCmd_loadsprite(void);
void ScriptCmd_fadespritebg(void);
void ScriptCmd_waittask(void);

extern const struct Frame (**nullframe)[];
extern const struct RotscaleFrame (**nullrsf)[];
extern void TaskMoveSprite(u8 taskId);
extern void TaskWaitFrames(u8 taskId);
extern void TaskWaitFade(u8 taskId);
extern void TaskFlashSprite(u8 taskId);
extern void TaskQuakeBg(u8 taskId);
extern void TaskQuakeSprite(u8 taskId);
extern void TaskHPBoxBobFast(u8 taskId);
extern void TaskWaitForTask(u8 taskId);
extern void battle_loop(void);

const AnimScriptFunc gAnimTable[] = {
    ScriptCmd_loadspritefull, // 0
    ScriptCmd_deletesprite, // 1
    ScriptCmd_rendersprite, // 2
    ScriptCmd_copyvar, // 3
    ScriptCmd_setvar, // 4
    ScriptCmd_addvar, // 5
    ScriptCmd_subvar, // 6
    ScriptCmd_mulvar, // 7
    ScriptCmd_divvar, // 8
    ScriptCmd_goto, // 9
    ScriptCmd_movesprite, // 10
    ScriptCmd_waitthread, // 11
    ScriptCmd_RunAnimAvailableThread, //12
    ScriptCmd_waitframes, //13
    ScriptCmd_animatesprite, //14
    ScriptCmd_spriteshow, // 15
    ScriptCmd_spritehide, // 16
    ScriptCmd_setspritepal, // 17
    ScriptCmd_spritetobg, // 18
    ScriptCmd_spritebgclear, // 19
    ScriptCmd_spritesblend, // 20
    ScriptCmd_excludeblend, // 21
    SpriteCmd_darkensprites, // 22
    SpriteCmd_lightensprites, // 23
    ScripCmd_clearpalbuff, // 24
    ScriptCmd_palbufferspriteandbgs, // 25
    ScriptCmd_palfade, // 26
    SpriteCmd_movewave, // 27
    ScriptCmd_uploadbg, // 28
    ScriptCmd_showbg, // 29
    ScriptCmd_hidebg, // 30
    ScriptCmd_includeblend, // 31
    ScriptCmd_flashsprite, // 32
    ScriptCmd_getattacker, // 33
    ScriptCmd_getdefender, // 34
    ScriptCmd_getattackercoords, // 35
    ScriptCmd_getdefendercoords, // 36
    ScriptCmd_quakebg, // 37
    ScriptCmd_call, // 38
    ScriptCmd_return, // 39
    ScriptCmd_if, // 40
    ScriptCmd_compare, // 41
    ScriptCmd_comparevars, // 42
    ScriptCmd_sideofsprite, // 43
    ScriptCmd_fastsetbattlers, // 44
    ScriptCmd_shakehpbox, // 45
    ScriptCmd_randrange, // 46
    ScriptCmd_addvars, // 47
    ScriptCmd_subvars, // 48
    ScriptCmd_runtask, // 49
    ScriptCmd_quakesprite, // 50
    ScriptCmd_setframessprite, // 51
    ScriptCmd_loadsprite, // 52
    ScriptCmd_fadespritebg, // 53
    ScriptCmd_waittask, // 54
};


void InitializeAnimationCore(u8* scr1, u8* scr2, u8* scr3, u8* scr4)
{
    // Allocate and assign script pointers to each thread
    gAnimationCore = (struct AnimationCore*)malloc_and_clear(sizeof(struct AnimationCore));
    gAnimationCore->animScriptPtr[0] = scr1;
    gAnimationCore->animScriptPtr[1] = scr2;
    gAnimationCore->animScriptPtr[2] = scr3;
    gAnimationCore->animScriptPtr[3] = scr4;
}


void RunCurrentCommand()
{
    u8 cmd = ANIMSCR_READ_BYTE;
    dprintf("running command id %d for script %x in thread %d\n", cmd, (u32)ANIMSCR_SCRIPT, ANIMSCR_THREAD);
    if (cmd == 0xFF) {
        ANIMSCR_SCRIPT = NULL;
        ANIMSCR_CMD_NEXT;
        //gAnimationCore->waitAll = true;
        return;
    }
    gAnimTable[cmd]();
}

/* this will only load the graphics themselves. Later must be initialized as objects */
void ScriptCmd_loadspritefull()
{
    // alignment for read
	ANIMSCR_MOVE(3);
    // read pal and gfx from script pointer
    struct CompressedSpriteSheet* gfx = (struct CompressedSpriteSheet*)ANIMSCR_READ_WORD;
    struct SpritePalette* pal = (struct SpritePalette*)ANIMSCR_READ_WORD;
    struct OamData* oam = (struct OamData*)ANIMSCR_READ_WORD;
    struct Template spriteTemp = {gfx->tag, pal->tag, oam, nullframe, gfx, nullrsf, (SpriteCallback)oac_nullsub};
    LoadCompressedSpriteSheetUsingHeap(gfx);
    LoadCompressedSpritePaletteUsingHeap(pal);
    u8 spriteId = template_instanciate_forward_search(&spriteTemp, 0, 0, 0);
    gSprites[spriteId].invisible = true;
    var_800D = spriteId;
    ANIMSCR_CMD_NEXT;
}

/* load copy of a previously loaded sprite */
void ScriptCmd_loadsprite()
{
    // alignment for read
	ANIMSCR_MOVE(3);
    struct CompressedSpriteSheet* gfx = (struct CompressedSpriteSheet*)ANIMSCR_READ_WORD;
    struct SpritePalette* pal = (struct SpritePalette*)ANIMSCR_READ_WORD;
    struct OamData* oam = (struct OamData*)ANIMSCR_READ_WORD;
    struct Template spriteTemp = {gfx->tag, pal->tag, oam, nullframe, gfx, nullrsf, (SpriteCallback)oac_nullsub};
    u8 spriteId = template_instanciate_forward_search(&spriteTemp, 0, 0, 0);
    gSprites[spriteId].invisible = true;
    var_800D = spriteId;
    ANIMSCR_CMD_NEXT;
}

/* Deletes a sprite from the gfx tag */
void ScriptCmd_deletesprite()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    // read tag
    u16 var = ANIMSCR_READ_HWORD;
    var = VarGet(var);
    FreeSpriteOamMatrix(&gSprites[var]);
    obj_free(&gSprites[var]);
    ANIMSCR_CMD_NEXT;
}

/* show a loaded sprite using it's tag */
void ScriptCmd_rendersprite()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    // read tag
    u16 var = ANIMSCR_READ_HWORD;
    var = VarGet(var);
    // read positional arguements
    u16 xcontainer = ANIMSCR_READ_HWORD;
    s16 x = VarGet(xcontainer);
    u16 ycontainer = ANIMSCR_READ_HWORD;
    s16 y = VarGet(ycontainer);
    // read animation data
    struct RotscaleFrame (**rotscale_table)[] = (void*)ANIMSCR_READ_WORD;
    struct Sprite* s = &gSprites[var];
    s->pos1.x = x;
    s->pos1.y = y;
    s->rotscale_table = rotscale_table;
    s->invisible = false;
    ANIMSCR_CMD_NEXT;
}

/* Var related script commands */
void ScriptCmd_copyvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 dst = ANIMSCR_READ_HWORD;
    u16 src = ANIMSCR_READ_HWORD;
    VarSet(dst, VarGet(src));
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_setvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    VarSet(var, value);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_addvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    VarSet(var, VarGet(var) + value);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_addvars()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 varA = ANIMSCR_READ_HWORD;
    u16 varB = ANIMSCR_READ_HWORD;
    VarSet(varA, VarGet(varA) + VarGet(varB));
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_subvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    VarSet(var, VarGet(var) - value);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_subvars()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 varA = ANIMSCR_READ_HWORD;
    u16 varB = ANIMSCR_READ_HWORD;
    VarSet(varA, VarGet(varA) - VarGet(varB));
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_mulvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    VarSet(var, VarGet(var) * value);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_divvar()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    VarSet(var, VarGet(var) / value);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_goto()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u32 scriptPtr = ANIMSCR_READ_WORD;
    ANIMSCR_SCRIPT = (void*)scriptPtr;
    ANIMSCR_CMD_NEXT;
}


/* Moves a sprite to a position by an amount per frame */
void ScriptCmd_movesprite()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u8 taskId = CreateTask(TaskMoveSprite, 0);
    struct Task* t = &tasks[taskId];

    // set passed args to task
    u16 spriteId = ANIMSCR_READ_HWORD;
    t->priv[0] = VarGet(spriteId);
    t->priv[1] = ANIMSCR_READ_HWORD; // Delta X
    t->priv[2] = ANIMSCR_READ_HWORD; // Delta Y
    t->priv[3] = ANIMSCR_READ_HWORD; // Amount of frames to do animation for
    t->priv[4] = ANIMSCR_THREAD; // execution thread
    // to wait for finish, make sure to put use a waitanim command as the next command.
    ANIMSCR_MOVE(2);
    ANIMSCR_CMD_NEXT;
}

/* sets the thread to a waiting state */
void ScriptCmd_waitthread()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    ANIMSCR_WAITING = true;
    ANIMSCR_CMD_NEXT;
}

/* start a script on an available thread */
void ScriptCmd_RunAnimAvailableThread()
{
    // alignment for read
    ANIMSCR_MOVE(3);
    u8* scriptPtr = (u8*)ANIMSCR_READ_WORD;
    // find an unused script pointer and assign animation script to it
    for (u8 i = 0; i < ANIM_SCR_COUNT; i++) {
        if (gAnimationCore->animScriptPtr[i] == NULL) {
            gAnimationCore->animScriptPtr[i] = scriptPtr;
            break;
        }
    }
    ANIMSCR_CMD_NEXT;
}

/* sets a thread on a waiting state for X amount of frames */
void ScriptCmd_waitframes()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 waitTime = ANIMSCR_READ_HWORD;
    u8 taskId = CreateTask(TaskWaitFrames, 0);
    tasks[taskId].priv[0] = waitTime;
    tasks[taskId].priv[1] = ANIMSCR_THREAD;
    ANIMSCR_WAITING = true;
    ANIMSCR_CMD_NEXT;
}

/* writes an animation struct to a sprite and starts the animation */
void ScriptCmd_animatesprite()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    struct RotscaleFrame (**rotscale_table)[] = (void*)ANIMSCR_READ_WORD;
    gSprites[spriteId].rotscale_table = rotscale_table;
    gSprites[spriteId].final_oam.affine_mode = 1;
    ANIMSCR_CMD_NEXT;
}

/* Sprite show and hide commands */
void ScriptCmd_spriteshow()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    gSprites[spriteId].invisible = false;
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_spritehide()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    gSprites[spriteId].invisible = true;
    ANIMSCR_CMD_NEXT;
}

/* Given a sprite ID, change it's palette */
void ScriptCmd_setspritepal()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    void* palette = (void*)ANIMSCR_READ_WORD;
    // figure out palette number and apply new palette to it
    u8 palSlot = gSprites[spriteId].final_oam.palette_num;
    LoadPalette(palette, 16 * (16 + palSlot), 32);
    ANIMSCR_CMD_NEXT;
}

void DrawSpriteToBG1(u8 spriteId, u8 palslotBG, u8 width, u8 height)
{
    // turn on BG 1 display
    REG_DISPCNT |= DISPCNT_BG1;
    // zerofill tilemap and tileset for BG1
    void* charBase = (void *)0x6008000;
    u16* mapBase = (void*)0x600F000;
    u32 set = 0;
    CpuFastSet((void*)&set, (void*)charBase, CPUModeFS(4096, CPUFSSET));
    CpuFastSet((void*)&set, (void*)mapBase, CPUModeFS(2048, CPUFSSET));

    // copy into BG1 tileset, tiles from the OAM. Note the first tile on the tileset is left empty
    // this is so that the 0filled tiles don't display as the first tile of the image
    u32 tileOffset = gSprites[spriteId].final_oam.tile_num * 32;
    CpuFastSet((void*)(0x6010000 + tileOffset), charBase + 32, CPUModeFS(32 * width * height, CPUFSCPY));

    // create tilemap
    u8 offset = 1; // this is 1 because the first tile in the tileset is 0 filled
    for (u8 xTile = 0; xTile < width; xTile++) {
        for (u8 yTile = 0; yTile < height; yTile++) {
            mapBase[xTile * 32 + yTile] = offset | (palslotBG << 12);
            offset++;
        }
    }

    // write sprite palette to BG
    u8 spritePalSlot = gSprites[spriteId].final_oam.palette_num;
    void* spritepal = (void*)(ADDR_OAMPALRAM + (spritePalSlot * 32));
    void* bgpal = (void*)(ADDR_PALRAM + (32 * palslotBG));
    CpuFastSet(spritepal, bgpal, CPUModeFS(32, CPUFSCPY));
    LoadPalette(spritepal, 16 * palslotBG, 32);

    // BG position to sprite position
    REG_BG1HOFS = -gSprites[spriteId].pos1.x + (4 * width);
    REG_BG1VOFS = -gSprites[spriteId].pos1.y + (4 * height);
    ChangeBgX(1, (-gSprites[spriteId].pos1.x + (4 * width)) * 256, 0);
    ChangeBgY(1, (-gSprites[spriteId].pos1.y + (4 * height)) * 256, 0);
    REG_BG1CNT = BGCNT_PRIORITY1 | BGCNT_TILESTART2 | BGCNT_MAPSTART(30) | BGCNT_TILEMAPSIZE0;
    gSprites[spriteId].invisible = true;
}


/* Copy Sprite to BG layer (typically done for blending) */
void ScriptCmd_spritetobg()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    u16 tilewidth = ANIMSCR_READ_HWORD;
    u16 tileheight = ANIMSCR_READ_HWORD;
    DrawSpriteToBG1(spriteId, 4, tilewidth, tileheight);
    ANIMSCR_CMD_NEXT;
}

/* Clears bg1, the bg which sprites are mirrored to */
void ScriptCmd_spritebgclear()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    void* charBase = (void *)0x6008000;
    u16* mapBase = (void*)0x600F000;
    u32 set = 0;
    CpuFastSet((void*)&set, (void*)charBase, CPUModeFS(4096, CPUFSSET));
    CpuFastSet((void*)&set, (void*)mapBase, CPUModeFS(2048, CPUFSSET));
    gSprites[spriteId].invisible = false;
    ANIMSCR_CMD_NEXT;
}

/* Blend sprite bg. This will work if other sprites aren't in the process of blending */
void ScriptCmd_fadespritebg()
{
    // time between color transitions
    u8 delay = ANIMSCR_READ_BYTE;
    // dst color
    u16 blendColor = ANIMSCR_READ_HWORD;
    // fade direction
    u8 dir = ANIMSCR_READ_BYTE;
    // apply delay task or not
    u8 wait = ANIMSCR_READ_BYTE;
    // amount of fade
    u8 amount = ANIMSCR_READ_BYTE;
    if (dir == 0) {
        BeginNormalPaletteFade((1 << 4) , delay, 0x0, amount, blendColor);
    } else {
        BeginNormalPaletteFade((1 << 4) , delay, amount, 0x0, blendColor);
    }
    if (wait != 0) {
        ANIMSCR_WAITING = true;
        u8 taskId = CreateTask(TaskWaitFade, 0);
        tasks[taskId].priv[0] = ANIMSCR_THREAD;
    }
    ANIMSCR_MOVE(1);
    ANIMSCR_CMD_NEXT;
}

/* Given a coefficient for the amount of blending for the sprites and BG 0. Apply blending */
void ScriptCmd_spritesblend()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u8 coefficientA = ANIMSCR_READ_BYTE;
    u8 coefficientB = ANIMSCR_READ_BYTE;
    REG_BLDCNT = (BLDCNT_BG1_SRC | BLDCNT_SPRITES_DST | BLDCNT_ALPHA_BLEND);
    REG_BLDALPHA = BLDALPHA_BUILD(coefficientA, coefficientB);

    // set blending move for the sprite
    ANIMSCR_CMD_NEXT;
}

/* Exclude a sprite from blending */
void ScriptCmd_excludeblend()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    gSprites[spriteId].final_oam.obj_mode = 1; // semi-transparent
    ANIMSCR_CMD_NEXT;
}

/* Include a sprite to blend
   typically only used after a sprite has been excluded
*/
void ScriptCmd_includeblend()
{
    // alignment for read
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    gSprites[spriteId].final_oam.obj_mode = 0; // semi-transparent
    ANIMSCR_CMD_NEXT;
}

/* Sprite Darken */
void SpriteCmd_darkensprites()
{
    u8 factor = ANIMSCR_READ_BYTE;
    u8 incBgs = ANIMSCR_READ_BYTE;
    u16 blendTargets = (BLDCNT_DARKEN | BLDCNT_SPRITES_SRC);
    if (incBgs & 1)
        blendTargets |= (BLDCNT_BG0_SRC);
    if (incBgs & 2)
        blendTargets |= (BLDCNT_BG1_SRC);
    if (incBgs & 4)
        blendTargets |= (BLDCNT_BG2_SRC);
    if (incBgs & 8)
        blendTargets |= (BLDCNT_BG3_SRC);
    if (incBgs == 0)
        blendTargets |= (BLDCNT_BACKDROP_SRC);

    REG_BLDCNT = blendTargets;
    // darken factor
    REG_BLDY = factor;
    ANIMSCR_MOVE(1);
    ANIMSCR_CMD_NEXT;
}

/* Sprite Lighten */
void SpriteCmd_lightensprites()
{
    u8 factor = ANIMSCR_READ_BYTE;
    u8 incBgs = ANIMSCR_READ_BYTE;
    u16 blendTargets = (BLDCNT_SPRITES_SRC | BLDCNT_LIGHTEN);
    if (incBgs & 1)
        blendTargets |= (BLDCNT_BG0_SRC);
    if (incBgs & 2)
        blendTargets |= (BLDCNT_BG1_SRC);
    if (incBgs & 4)
        blendTargets |= (BLDCNT_BG2_SRC);
    if (incBgs & 8)
        blendTargets |= (BLDCNT_BG3_SRC);
    if (incBgs & 16)
        blendTargets |= (BLDCNT_BACKDROP_SRC);
    REG_BLDCNT = blendTargets;
    // lighten factor
    REG_BLDY = factor;
    ANIMSCR_MOVE(1);
    ANIMSCR_CMD_NEXT;
}

/* clears the current thread's palette buffer */
void ScripCmd_clearpalbuff()
{
    ANIMSCR_MOVE(3);
    ANIMSCR_PALBUFF = 0;
    ANIMSCR_CMD_NEXT;
}

/* add a sprite to the current thread's palette buffer. */
void ScriptCmd_palbufferspriteandbgs()
{
    u8 incBgs = ANIMSCR_READ_BYTE;
    u32 palbuff = ANIMSCR_PALBUFF;
    if (incBgs != 0)
        palbuff |= 0xFFFF;
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    u8 palSlot = gSprites[spriteId].final_oam.palette_num;
    ANIMSCR_PALBUFF |= ((1 << (palSlot + 16)));
    ANIMSCR_CMD_NEXT;
}

/* Pal fading on buffered sprites and BGs */
void ScriptCmd_palfade()
{
    // time between color transitions
    u8 delay = ANIMSCR_READ_BYTE;
    // dst color
    u16 blendColor = ANIMSCR_READ_HWORD;
    // fade direction
    u8 dir = ANIMSCR_READ_BYTE;
    // apply delay task or not
    u8 wait = ANIMSCR_READ_BYTE;
    // amount of fade
    u8 amount = ANIMSCR_READ_BYTE;
    if (dir == 0) {
        BeginNormalPaletteFade(ANIMSCR_PALBUFF , delay, 0x0, amount, blendColor);
    } else {
        BeginNormalPaletteFade(ANIMSCR_PALBUFF , delay, amount, 0x0, blendColor);
    }
    if (wait != 0) {
        ANIMSCR_WAITING = true;
        u8 taskId = CreateTask(TaskWaitFade, 0);
        tasks[taskId].priv[0] = ANIMSCR_THREAD;
    }
    ANIMSCR_MOVE(1);
    ANIMSCR_CMD_NEXT;
}

/* move sprite in a wave with amplitude and slope */
#define bounces sprite->data[0]
#define bouncesPast sprite->data[3]
#define xDelta sprite->data[1]
#define yDelta sprite->data[2]
#define X sprite->data[4]
#define amplitude sprite->data[5]
#define waveOrBounce sprite->data[6]
#define frequency sprite->data[7]
void SCBWaveMovement(struct Sprite* sprite)
{
    sprite->pos1.x += Div(xDelta, 256);
    sprite->pos1.y += Div(yDelta, 256);
    bouncesPast += 1;
    if (bouncesPast > bounces)
        sprite->callback = oac_nullsub;
    // apply sin curve to Y position
    if (yDelta < 0)
        sprite->pos1.y -= Sin(X, amplitude);
    else
        sprite->pos1.y += Sin(X, amplitude);
    // update wave frequency
    X = (X + frequency) & waveOrBounce;
}

void SpriteCmd_movewave()
{
    // alignment
    ANIMSCR_MOVE(1);
    // get sprites
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    u16 destSpriteId = ANIMSCR_READ_HWORD;
    destSpriteId = VarGet(destSpriteId);
    struct Sprite* sprite = &gSprites[spriteId];
    struct Sprite* s2 = &gSprites[destSpriteId];
    // set bounce properties
    X = 0; // starts sin(x) on X = 0. Can phase shift forward, not backwards
    bounces = 30;
    amplitude = ANIMSCR_READ_BYTE;
    bouncesPast = 0;
    frequency = ANIMSCR_READ_BYTE;
    waveOrBounce = ANIMSCR_READ_BYTE;
    // calculate delta distances per bounce
    s32 x = s2->pos1.x - sprite->pos1.x;
    s32 y = s2->pos1.y - sprite->pos1.y;
    xDelta = Div((x * 256), bounces);
    yDelta = Div((y * 256), bounces);
    // Animate sprite bounce given parameters
    sprite->callback = SCBWaveMovement;
    ANIMSCR_MOVE(3);
    ANIMSCR_CMD_NEXT;
}

#undef bounces
#undef bouncesPast
#undef xDelta
#undef yDelta
#undef X
#undef amplitude
#undef waveOrBounce

/* Upload a BG to BG2.. */
void ScriptCmd_uploadbg()
{
    // alignment purposes
    ANIMSCR_MOVE(1);
    HideBg(2);
    void* charBase = (void*)0x6004000;
    void* mapBase = (void*)0x600E800;
    // load graphical assets tileset
    u16 palSize = ANIMSCR_READ_HWORD;
    void* tileset = (void*)ANIMSCR_READ_WORD;
    void* tilemap = (void*)ANIMSCR_READ_WORD;
    u16* palette = (void*)ANIMSCR_READ_WORD;
    // commit assets to BG
    lz77UnCompVram(tileset, charBase);
    lz77UnCompVram(tilemap, mapBase);
    LoadPalette_compressed(palette, 16 * 9, palSize);
    ANIMSCR_CMD_NEXT;
}

/* Show and hide BGs */
void ScriptCmd_showbg()
{
    u8 bgid = ANIMSCR_READ_BYTE;
    ShowBg(bgid);
    ANIMSCR_MOVE(2);
    ANIMSCR_CMD_NEXT;
}

void ScriptCmd_hidebg()
{
    u8 bgid = ANIMSCR_READ_BYTE;
    HideBg(bgid);
    ANIMSCR_MOVE(2);
    ANIMSCR_CMD_NEXT;
}

/* Flash BG */

/* Flash sprite */
void ScriptCmd_flashsprite()
{
    ANIMSCR_MOVE(1);
    u8 flashDuration = ANIMSCR_READ_BYTE;
    u8 timesToFlash = ANIMSCR_READ_BYTE;
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    u8 taskId = CreateTask(TaskFlashSprite, 0);
    tasks[taskId].priv[0] = spriteId;
    tasks[taskId].priv[1] = flashDuration;
    tasks[taskId].priv[2] = timesToFlash;
    tasks[taskId].priv[3] = ANIMSCR_THREAD;
    tasks[taskId].priv[4] = ANIMSCR_READ_BYTE;
    tasks[taskId].priv[5] = ANIMSCR_READ_HWORD;
    ANIMSCR_MOVE(3);
    ANIMSCR_CMD_NEXT;
}

/* Set attacker to var */
void ScriptCmd_getattacker()
{
    ANIMSCR_MOVE(3);
    VarSet(0x800D, gPkmnBank[ACTION_BANK]->objid);
    ANIMSCR_CMD_NEXT;
}

/* Set defender to var */
void ScriptCmd_getdefender()
{
    ANIMSCR_MOVE(3);
    VarSet(0x800D, gPkmnBank[ACTION_TARGET]->objid);
    ANIMSCR_CMD_NEXT;
}

/* Set attacker coords */
void ScriptCmd_getattackercoords()
{
    ANIMSCR_MOVE(3);
    struct Sprite* sprite = &gSprites[gPkmnBank[ACTION_BANK]->objid];
    VarSet(0x8000, sprite->pos1.x);
    VarSet(0x8001, sprite->pos1.y);
    ANIMSCR_CMD_NEXT;
}

/* Set defender coords */
void ScriptCmd_getdefendercoords()
{
    ANIMSCR_MOVE(3);
    struct Sprite* sprite = &gSprites[gPkmnBank[ACTION_TARGET]->objid];
    VarSet(0x8000, sprite->pos1.x);
    VarSet(0x8001, sprite->pos1.y);
    ANIMSCR_CMD_NEXT;
}

/* Side of a mon given it's sprite Id */
void ScriptCmd_sideofsprite()
{
    ANIMSCR_MOVE(1);
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId) & 0xFF;
    if (gPkmnBank[ACTION_BANK]->objid == spriteId) {
        ANIMSCR_CONDITION = SIDE_OF(ACTION_BANK);
    } else {
        ANIMSCR_CONDITION = SIDE_OF(ACTION_TARGET);
    }
    ANIMSCR_CMD_NEXT;
}

/* Quake BG */
void ScriptCmd_quakebg()
{
    u8 taskId = CreateTask(TaskQuakeBg, 0);
    tasks[taskId].priv[0] = ANIMSCR_READ_BYTE; // bgid
    tasks[taskId].priv[1] = ANIMSCR_READ_BYTE; // xquake
    tasks[taskId].priv[2] = ANIMSCR_READ_BYTE; // yquake
    tasks[taskId].priv[3] = ANIMSCR_READ_BYTE; // times
    tasks[taskId].priv[4] = ANIMSCR_READ_BYTE; // delay
    tasks[taskId].priv[10] = ANIMSCR_READ_BYTE; // wait bool
    tasks[taskId].priv[11] = ANIMSCR_THREAD; // thread
    ANIMSCR_MOVE(1);
    ANIMSCR_CMD_NEXT;
}

/* Quake Sprite */
void ScriptCmd_quakesprite()
{
    ANIMSCR_MOVE(1);
    u8 taskId = CreateTask(TaskQuakeSprite, 0);
    u16 var = ANIMSCR_READ_HWORD;
    var = VarGet(var);
    tasks[taskId].priv[0] = var; // spriteid
    tasks[taskId].priv[1] = ANIMSCR_READ_BYTE; // xquake
    tasks[taskId].priv[2] = ANIMSCR_READ_BYTE; // yquake
    tasks[taskId].priv[3] = ANIMSCR_READ_BYTE; // times
    tasks[taskId].priv[4] = ANIMSCR_READ_BYTE; // delay
    tasks[taskId].priv[10] = ANIMSCR_READ_BYTE; // wait bool
    tasks[taskId].priv[11] = ANIMSCR_THREAD; // thread
    ANIMSCR_MOVE(3);
    ANIMSCR_CMD_NEXT;
}

/* Call */
void ScriptCmd_call()
{
    ANIMSCR_MOVE(3);
    u8* callLocation = (u8*)ANIMSCR_READ_WORD;
    gAnimationCore->callStack[ANIMSCR_THREAD][ANIMSCR_STACKDEPTH] = ANIMSCR_SCRIPT;
    ANIMSCR_STACKDEPTH++;
    ANIMSCR_SCRIPT = callLocation;
    ANIMSCR_CMD_NEXT;
}

/* Return */
void ScriptCmd_return()
{
    ANIMSCR_SCRIPT = gAnimationCore->callStack[ANIMSCR_THREAD][ANIMSCR_STACKDEPTH - 1];
    ANIMSCR_STACKDEPTH--;
    ANIMSCR_CMD_NEXT;
}

/* if */
void ScriptCmd_if()
{
    bool condition = ANIMSCR_READ_BYTE;
    ANIMSCR_MOVE(2);
    if (ANIMSCR_CONDITION != condition) {
        // skip the condition true clause. This is 1 command and a script arg - 8 bytes including the padding
        ANIMSCR_MOVE(8);
    }
    ANIMSCR_CMD_NEXT;
}

/* compare var to value */
void ScriptCmd_compare()
{
    ANIMSCR_MOVE(1);
    u16 var = ANIMSCR_READ_HWORD;
    u16 value = ANIMSCR_READ_HWORD;
    ANIMSCR_MOVE(2);
    var = VarGet(var);
    if (var < value) {
        ANIMSCR_CONDITION = 0;
    } else if (var == value) {
        ANIMSCR_CONDITION = 1;
    } else if (var > value) {
        ANIMSCR_CONDITION = 2;
    } else if (var <= value) {
        ANIMSCR_CONDITION = 3;
    } else if (var >= value) {
        ANIMSCR_CONDITION = 4;
    }
    ANIMSCR_CMD_NEXT;
}

/* compare var to var */
void ScriptCmd_comparevars()
{
    ANIMSCR_MOVE(1);
    u16 varA = ANIMSCR_READ_HWORD;
    u16 varB = ANIMSCR_READ_HWORD;
    ANIMSCR_MOVE(2);
    varA = VarGet(varA);
    varB = VarGet(varB);
    if (varA < varB) {
        ANIMSCR_CONDITION = 0;
    } else if (varA == varB) {
        ANIMSCR_CONDITION = 1;
    } else if (varA > varB) {
        ANIMSCR_CONDITION = 2;
    } else if (varA <= varB) {
        ANIMSCR_CONDITION = 3;
    } else if (varA >= varB) {
        ANIMSCR_CONDITION = 4;
    }
    ANIMSCR_CMD_NEXT;
}

/* fast get all battlers into predetermined vars */
#define attacker 0x8004
#define defender 0x8005
#define targetx 0x8006
#define targety 0x8007
#define attackerx 0x8008
#define attackery 0x8009
void ScriptCmd_fastsetbattlers()
{
    ANIMSCR_MOVE(3);
    u8 sprattacker = gPkmnBank[ACTION_BANK]->objid;
    u8 sprtarget = gPkmnBank[ACTION_TARGET]->objid;
    VarSet(attacker, sprattacker);
    VarSet(defender, sprtarget);
    VarSet(targetx, gSprites[sprtarget].pos1.x);
    VarSet(targety, gSprites[sprtarget].pos1.y);
    VarSet(attackerx, gSprites[sprattacker].pos1.x);
    VarSet(attackery, gSprites[sprattacker].pos1.y);
    ANIMSCR_CMD_NEXT;
}
#undef attacker
#undef defender
#undef targetx
#undef targety
#undef attacker
#undef attackery

/* Shake HP box of a sprite */
void ScriptCmd_shakehpbox()
{
    ANIMSCR_MOVE(1);
    u16 shakehpof = ANIMSCR_READ_HWORD;
    shakehpof = VarGet(shakehpof);
    u8 bank;
    if (gPkmnBank[ACTION_BANK]->objid == shakehpof) {
        bank = ACTION_BANK;
    } else {
        bank = ACTION_TARGET;
    }
    u8 taskId = CreateTask(TaskHPBoxBobFast, 0);
    tasks[taskId].priv[0] = bank;
    ANIMSCR_CMD_NEXT;
}

/* random range */
void ScriptCmd_randrange()
{
    ANIMSCR_MOVE(1);
    u16 min = ANIMSCR_READ_HWORD;
    u16 max = ANIMSCR_READ_HWORD;
    var_800D = rand_range(min, max);
    ANIMSCR_MOVE(2);
    ANIMSCR_CMD_NEXT;
}

/* Run task */
void ScriptCmd_runtask()
{
    u8 arg = ANIMSCR_READ_BYTE;
    u16 arg2 = ANIMSCR_READ_HWORD;
    u16 arg3 = ANIMSCR_READ_HWORD;
    u16 vararg = ANIMSCR_READ_HWORD;
    TaskCallback t = (TaskCallback)ANIMSCR_READ_WORD;
    u8 taskId = CreateTask(t, 0);
    tasks[taskId].priv[1] = VarGet(vararg);
    tasks[taskId].priv[2] = arg;
    tasks[taskId].priv[3] = arg2;
    tasks[taskId].priv[4] = arg3;
    ANIMSCR_CMD_NEXT;
}

/* wait for a running task to finish */
void ScriptCmd_waittask()
{
    ANIMSCR_MOVE(3);
    u8 taskId = CreateTask(TaskWaitForTask, 0);
    u32* arg = (u32*)&tasks[taskId].priv[0];
    *arg = ANIMSCR_READ_WORD;
    tasks[taskId].priv[3] = ANIMSCR_THREAD;
    ANIMSCR_WAITING = true;
    ANIMSCR_CMD_NEXT;
}

/* Set frames */
void ScriptCmd_setframessprite()
{
    u8 frame = ANIMSCR_READ_BYTE;
    u16 spriteId = ANIMSCR_READ_HWORD;
    spriteId = VarGet(spriteId);
    void* frames = (void*)ANIMSCR_READ_WORD;
    gSprites[spriteId].animation_table = (void*)frames;
    gSprites[spriteId].animCmdIndex = frame;
    AnimateSprite(&gSprites[spriteId]);
    ANIMSCR_CMD_NEXT;
}


void AnimationMain()
{
    u8 counter = 0;
    for (u8 i = 0; i < ANIM_SCR_COUNT; i++) {
        if (gAnimationCore->waitAll)
            return;
        if (gAnimationCore->wait[i] || (gAnimationCore->animScriptPtr[i] == 0)) {
            ANIMSCR_CMD_NEXT;
            if ((gAnimationCore->animScriptPtr[i] == 0))
                counter++;
        } else {
            RunCurrentCommand();
        }
    }
    if (counter == ANIM_SCR_COUNT) {
        // all threads complete. Return
        free(gAnimationCore);
        end_action(CURRENT_ACTION);
        SetMainCallback(battle_loop);
    }
}


void event_play_animation(struct action* current_action)
{
    dprintf("event started to run script: %x\n", (u32)current_action->script);
    InitializeAnimationCore((u8*)current_action->script, NULL, NULL, NULL);
    SetMainCallback(AnimationMain);
}
