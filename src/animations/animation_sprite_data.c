#include <pokeagb\pokeagb.h>
#include "../../generated/images/battle_animations/impact1.h"
#include "../../generated/images/battle_animations/burn.h"
#include "../../generated/images/battle_animations/poison.h"
#include "../../generated/images/battle_animations/paralyze.h"
#include "../../generated/images/battle_animations/freeze.h"
#include "../../generated/images/battle_animations/confused.h"
#include "../../generated/images/battle_animations/infatuation.h"
#include "../../generated/images/battle_animations/sleep.h"
#include "../../generated/images/battle_animations/smoke.h"
#include "../../generated/images/battle_animations/glowball.h"
#include "../../generated/images/battle_animations/pokeball.h"
#include "../../generated/images/battle_animations/impact2.h"
#include "../../generated/images/battle_animations/impact2.h"
#include "../../generated/images/battle_animations/pokeball_particles.h"
#include "../../generated/images/battle_animations/capture_star.h"
#include "../../generated/images/battle_animations/yesno.h"
#include "../../generated/images/battle_animations/yesno_cursor.h"
#include "../../generated/images/battle_animations/fist.h"
#include "../../generated/images/battle_animations/circular.h"
#include "../../generated/images/battle_animations/blendimpact1.h"
#include "../../generated/images/battle_animations/watersplash.h"
#include "../../generated/images/battle_animations/chop.h"
#include "../../generated/images/battle_animations/slap.h"
#include "../../generated/images/battle_animations/bigfist.h"
#include "../../generated/images/battle_animations/smallfire.h"
#include "../../generated/images/battle_animations/bigbluefist.h"



extern const struct Frame (**nullframe)[];
extern const struct RotscaleFrame (**nullrsf)[];

// the impact sprite from tackle
const struct CompressedSpriteSheet impact1Sprite = {(void*)&impact1Tiles, 32 * 4 * 4, 400};
const struct SpritePalette impact1Palette = {&impact1Pal, 400};

const struct OamData impact1Oam = {
    .size = 2,
    .priority = 3,
};


// the burn animation sprite
const struct CompressedSpriteSheet burnSprite = {(void*)&burnTiles, 32 * 2 * 4, 401};
const struct SpritePalette burnPalette = {&burnPal, 401};

// burn sprite to shrink
const struct RotscaleFrame burnAffineTable[] = {
    {-20, -20, 0, 10, 0},
    {0x7FFF, 0, 0, 0, 0}
};

const struct OamData burnOam = {
    .affine_mode = 1,
    .shape = 2,
    .size = 2,
    .priority = 1,
};
const u32 burnAffinePtr = (u32)&burnAffineTable;


// poison ailment sprite
const struct CompressedSpriteSheet poisonSprite = {(void*)&poisonTiles, 32 * 2 * 2, 402};
const struct SpritePalette poisonPalette = {&poisonPal, 402};

const struct OamData poisonOam = {
    .size = 1,
    .priority = 1,
};

// paralyze ailment sprite
const struct CompressedSpriteSheet paralyzeSprite = {(void*)&paralyzeTiles, 32 * 4 * 4 * 3, 403};
const struct SpritePalette paralyzePalette = {&paralyzePal, 403};

const struct OamData paralyzeOam = {
    .size = 2,
    .priority = 1,
};

const struct Frame paralyzeLoop[] = {
    {0, 0x200},
    {8, 5},
    {16, 5},
    {20, 5},
    {24, 5},
    {32, 5},
    {0xFFFE, 0},
};
const struct Frame* paralyzeLoopPtr[] = {paralyzeLoop};

// freeze ailment sprite
const struct CompressedSpriteSheet freezeSprite = {(void*)&freezeTiles, 32 * 4 * 4, 404};
const struct SpritePalette freezePalette = {&freezePal, 404};

// freeze sprite to grow
const struct RotscaleFrame freezeAffineTable[] = {
    {-200, -200, 0, 1, 0},
    {10, 10, 0, 15, 0},
    {0, 0, 0, 10, 0},
    {0x7FFF, 0, 0, 0, 0}
};

// freeze sprite grow slow and rotate slow
const struct RotscaleFrame freezeAffine2Table[] = {
    {-200, -200, 0, 1, 0},
    {5, 5, 5, 20, 0},
    {0x7FFF, 0, 0, 0, 0}
};

const struct OamData freezeOam = {
    .affine_mode = 1,
    .size = 2,
    .priority = 3,
};
const u32 freezeAffinePtr = (u32)&freezeAffineTable;
const u32 freezeAffine2Ptr = (u32)&freezeAffine2Table;


// confused sprite
const struct CompressedSpriteSheet confusedSprite = {(void*)&confusedTiles, 32 * 2 * 2 * 3, 405};
const struct SpritePalette confusedPalette = {&confusedPal, 405};

const struct OamData confusedOam = {
    .size = 1,
    .priority = 1,
};

const struct Frame confusedLoop[] = {
    {0, 20},
    {4, 20},
    {8, 20},
    {0xFFFE, 0},
};
const struct Frame* confusedLoopPtr[] = {confusedLoop};


// infactuation sprite
const struct CompressedSpriteSheet infatuationSprite = {(void*)&infatuationTiles, 32 * 2 * 2, 406};
const struct SpritePalette infatuationPalette = {&infatuationPal, 406};

const struct OamData infatuationOam = {
    .size = 1,
    .priority = 1,
};


// Sleep sprite
const struct CompressedSpriteSheet sleepSprite = {(void*)&sleepTiles, 32 * 4 * 4, 407};
const struct SpritePalette sleepPalette = {&sleepPal, 407};

const struct RotscaleFrame sleepAffineTable[] = {
    {-150, -150, -30, 1, 0},
    {2, 2, 2, 5, 0},
    {0, 0, 0, 8, 0},
    {2, 2, 2, 5, 0},
    {0, 0, 0, 8, 0},
    {2, 2, 2, 5, 0},
    {0, 0, 0, 8, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 sleepAffinePtr = (u32)&sleepAffineTable;

const struct OamData sleepOam = {
    .affine_mode = 1,
    .size = 2,
    .priority = 1,
};

// Smoke sprite
const struct CompressedSpriteSheet smokeSprite = {(void*)&smokeTiles, 32 * 4 * 4 * 3, 407};
const struct SpritePalette smokePalette = {&smokePal, 407};

const struct OamData smokeOam = {
    .size = 2,
    .priority = 1,
};

const struct Frame smokeLoop[] = {
    {0, 5},
    {16, 5},
    {32, 5},
    {0xFFFF, 0},
};
const struct Frame* smokeLoopPtr[] = {smokeLoop};

// glowball sprite
const struct CompressedSpriteSheet glowballSprite = {(void*)&glowballTiles, 32 * 2 * 2, 408};
const struct SpritePalette glowballPalette = {&glowballPal, 408};

const struct OamData glowballOam = {
    .affine_mode = 1,
    .size = 1,
    .priority = 1,
};

const struct RotscaleFrame glowballAffineTable[] = {
    {0, 0, 0, 1, 0},
    {-10, -10, 0, 30, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 glowballAffinePtr = (u32)&glowballAffineTable;

const struct RotscaleFrame glowballSmallerAffineTable[] = {
    {-100, -100, 0, 1, 0},
    {-10, -10, 0, 20, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 glowballSmallerAffinePtr = (u32)&glowballSmallerAffineTable;

const struct RotscaleFrame glowballRevAffineTable[] = {
    {-300, -300, 0, 1, 0},
    {10, 10, 0, 30, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 glowballRevAffinePtr = (u32)&glowballRevAffineTable;

// pokeball sprite
const struct CompressedSpriteSheet pokeballSprite = {(void*)&pokeballTiles, 32 * 2 * 2 * 3, 409};
const struct SpritePalette pokeballPalette = {&pokeballPal, 409};

const struct OamData pokeballOam = {
    .affine_mode = 1,
    .size = 1,
    .priority = 1,
};

const struct Frame pokeballOpen[] = {
    {0, 5},
    {4, 5},
    {0xFFFF, 0},
};

const struct Frame pokeballClose[] = {
    {4, 5},
    {0, 5},
    {0xFFFF, 0},
};

const struct Frame* pokeballFrames[] = {
    pokeballOpen,
    pokeballClose,
};


const struct RotscaleFrame pokeballLeftTiltAffineTable[] = {
    {0, 0, 0, 1, 0},
    {0, 0, -6, 5, 0},
    {0, 0, 0, 5, 0},
    {0, 0, 6, 5, 0},
    {0, 0, 6, 3, 0},
    {0, 0, 0, 3, 0},
    {0, 0, -6, 3, 0},
    {0x7FFF, 0, 0, 0, 0}
};

const struct RotscaleFrame pokeballRightTiltAffineTable[] = {
    {0, 0, 0, 1, 0},
    {0, 0, 6, 5, 0},
    {0, 0, 0, 5, 0},
    {0, 0, -6, 5, 0},
    {0, 0, -6, 3, 0},
    {0, 0, 0, 3, 0},
    {0, 0, 6, 3, 0},
    {0x7FFF, 0, 0, 0, 0}
};

const struct Frame* pokeballOpenPtr[] = {pokeballOpen};
const u32 pokeballLeftTiltAffineTablePtr = (u32)&pokeballLeftTiltAffineTable;
const u32 pokeballRightTiltAffineTablePtr = (u32)&pokeballRightTiltAffineTable;

// impact2 sprite
const struct CompressedSpriteSheet impact2Sprite = {(void*)&impact2Tiles, 32 * 4 * 4, 410};
const struct SpritePalette impact2Palette = {&impact2Pal, 410};

const struct OamData impact2Oam = {
    .size = 2,
    .priority = 3,
};

// Pokeball particles when opened or closed
const struct CompressedSpriteSheet pokeballParticleSprite = {(void*)&pokeball_particlesTiles, 32 * 1 * 1 * 3, 411};
const struct SpritePalette pokeballParticlePalette = {&pokeball_particlesPal, 411};

const struct OamData pokeballParticleOam = {
    .size = 0,
    .priority = 1,
};

const struct Frame pokeballParticleLoop[] = {
    {0, 5},
    {1, 5},
    {2, 5},
    {0xFFFE, 0},
};
const struct Frame* pokeballParticleLoopPtr[] = {pokeballParticleLoop};

// Pokeball capture sucess stars particle
const struct CompressedSpriteSheet starParticleSprite = {(void*)&capture_starTiles, 32 * 1 * 1, 412};
const struct SpritePalette starParticlePalette = {&capture_starPal, 412};

const struct OamData StarParticleOam = {
    .size = 0,
    .priority = 0,
};

// Yes no choice box for..whatever choices
const struct CompressedSpriteSheet yesnoBoxSprite = {(void*)&yesnoTiles, 32 * 8 * 8, 413};
const struct SpritePalette yesnoBoxPalette = {&yesnoPal, 413};

const struct OamData yesnoBoxOam = {
    .size = 3,
    .priority = 1,
};

// a cursor meant for the yesno box
const struct CompressedSpriteSheet yesnoCursorSprite = {(void*)&yesno_cursorTiles, 32 * 8 * 8, 414};
const struct SpritePalette yesnoCursorPalette = {&yesno_cursorPal, 414};

const struct OamData yesnoCursorOam = {
    .size = 1,
    .priority = 0,
};

// fist sprite
const struct CompressedSpriteSheet fistSprite = {(void*)&fistTiles, 32 * 4 * 4, 415};
const struct SpritePalette fistPalette = {&fistPal, 415};

const struct OamData fistOam = { // semi transparent fist
    .priority = 3,
    .affine_mode = 1,
    .size = 2,
};

const struct OamData fistOam2 = {
    .priority = 1,
    .affine_mode = 1,
    .size = 2,
};

// H-scaling, V-scaling, Rotation, duration, fill
const struct RotscaleFrame fistAffineTable[] = {
    {-100, -100, 0, 1, 0},
    {20, 20, 0, 8, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 fistAffinePtr = (u32)&fistAffineTable;

// fist that rotates slightly
const struct RotscaleFrame fistAffineTable2[] = {
    {0, 0, 3, 5, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 fistAffinePtr2 = (u32)&fistAffineTable2;

// fist that starts rotating and shrinking, then reverts all rotation/shrinking
const struct RotscaleFrame fistAffineTable3[] = {
    {-450, -450, 0, 1, 0},
    {6, 6, -7, 24, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 fistAffinePtr3 = (u32)&fistAffineTable3;


// circular sprite
const struct CompressedSpriteSheet circularSprite = {(void*)&circularTiles, 32 * 2 * 2, 416};
const struct SpritePalette circularPalette = {&circularPal, 416};

const struct OamData circularOam = {
    .affine_mode = 1,
    .priority = 3,
    .size = 1,
};

const struct RotscaleFrame circularAffineTable[] = {
    {8, 8, 0, 32, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 circularAffinePtr = (u32)&circularAffineTable;

// the impact sprite from tackle - but white for blendability
const struct CompressedSpriteSheet bimpact1Sprite = {(void*)&blendimpact1Tiles, 32 * 4 * 4, 417};
const struct SpritePalette bimpact1Palette = {&blendimpact1Pal, 417};

const struct OamData bimpact1Oam = {
    .size = 2,
    .priority = 3,
};

// a splash of dispersing water
const struct CompressedSpriteSheet watersplashSprite = {(void*)&watersplashTiles, 32 * 8 * 8 * 4, 418};
const struct SpritePalette watersplashPalette = {&watersplashPal, 418};

const struct OamData watersplashOam = {
    .size = 3,
    .priority = 2,
};


const struct Frame watersplashLoop[] = {
    {0, 5},
    {64, 5},
    {128, 5},
    {192, 5},
    {0xFFFE, 0},
};
const struct Frame* watersplashLoopPtr[] = {watersplashLoop};


// Chop hand from Karate chop
const struct CompressedSpriteSheet chopSprite = {(void*)&chopTiles, 32 * 4 * 4 * 2, 419};
const struct CompressedSpriteSheet chopSpriteSideways = {(void*)&chopTiles, 32 * 4 * 4 * 2, 419};
const struct SpritePalette chopPalette = {&chopPal, 419};

const struct OamData chopOam = {
    .size = 2,
    .priority = 1,
};

const struct Frame chopLeftFrame[] = {
    {16, 1},
    {0xFFFF, 0},
};
const struct Frame* chopLeftFramePtr[] = {chopLeftFrame};

// Slap hand from double slap
const struct CompressedSpriteSheet slapSprite = {(void*)&slapTiles, 32 * 4 * 4 * 3, 420};
const struct SpritePalette slapPalette = {&slapPal, 420};

const struct OamData slapOam = {
    .size = 2,
    .priority = 3,
};

const struct Frame slapFrames[] = {
    {0, 12},
    {16, 4},
    {32, 12},
    {32, 12},
    {16, 4},
    {0, 12},
    {0xFFFF, 0},
};
const struct Frame* slapFramesPtr[] = {slapFrames};


// Big red fist from mega punch, and blue fist from ice punch
const struct CompressedSpriteSheet bigfistSprite = {(void*)&bigfistTiles, 32 * 8 * 8, 421};
const struct CompressedSpriteSheet bigbluefistSprite = {(void*)&bigbluefistTiles, 32 * 8 * 8, 423};
const struct SpritePalette bigfistPalette = {&bigfistPal, 421};
const struct SpritePalette bigbluefistPalette = {&bigbluefistPal, 423};

const struct OamData bigfistOam = {
    .affine_mode = 1,
    .size = 3,
    .priority = 2,
};

const struct RotscaleFrame bigfistShrinkAffineTable[] = {
    {-140, -140, 0, 1, 0},
    {0x7FFF, 0, 0, 0, 0}
};
const u32 bigfistShrinkAffinePtr = (u32)&bigfistShrinkAffineTable;

// The small fire from fire punch
const struct CompressedSpriteSheet smallfireSprite = {(void*)&smallfireTiles, 32 * 2 * 4 * 4, 422};
const struct SpritePalette smallfirePalette = {&smallfirePal, 422};

const struct OamData smallfireOam = {
    .shape = 2,
    .size = 2,
    .priority = 2,
};

const struct OamData smallfireAffOam = {
    .affine_mode = 1,
    .shape = 2,
    .size = 2,
    .priority = 3,
};

// smallfire sprite to shrink
const struct RotscaleFrame smallfireAffineTable[] = {
    {-6, -6, 0, 20, 0},
    {0x7FFF, 0, 0, 0, 0}
};

const struct Frame smallfireFrames[] = {
    {0, 5},
    {8, 5},
    {16, 5},
    {24, 5},
    {0xFFFE, 0}
};

const u32 smallfireAffinePtr = (u32)&smallfireAffineTable;
const struct Frame* smallfireFramesPtr = {smallfireFrames};

/*
	OAM DATA:

    // priority 3 = all battlers
    // priority 2 = hp boxes
    // priority 1 free
    // priortiy 0 free
	priority: 0-3; 0=Highest

	affine_mode: 0=Normal, 1=Affine
	h_flip 1=flip horizontally
    v_flip 1=flip vertically

	shape: 0=Square,1=Horizontal,2=Vertical
	size:
     * Size  Square   Horizontal  Vertical
     * 0     8x8      16x8        8x16
     * 1     16x16    32x8        8x32
     * 2     32x32    32x16       16x32
     * 3     64x64    64x32       32x64
*/
