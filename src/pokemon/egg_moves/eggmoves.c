#include <pokeagb/pokeagb.h>
#include "../pokemon.h"

u16 horsea_eggmoves[] = {
	MOVE_FLAIL,
	MOVE_AURORABEAM,
	MOVE_OCTAZOOKA,
	MOVE_DISABLE,
	MOVE_SPLASH,
	MOVE_DRAGONRAGE,
	MOVE_DRAGONBREATH,
	MOVE_SIGNALBEAM,
	MOVE_RAZORWIND,
	MOVE_MUDDYWATER,
	MOVE_WATERPULSE,
	MOVE_CLEARSMOG,
	MOVE_OUTRAGE,
	MOVE_NONE,
};

u16 trapinch_eggmoves[] = {
	MOVE_FOCUSENERGY,
	MOVE_QUICKATTACK,
	MOVE_GUST,
	MOVE_FLAIL,
	MOVE_FURYCUTTER,
	MOVE_MUDSHOT,
	MOVE_ENDURE,
	MOVE_EARTHPOWER,
	MOVE_BUGBITE,
	MOVE_SIGNALBEAM,
	MOVE_NONE,
};

u16 togepi_eggmoves[] = {
	MOVE_PRESENT,
	MOVE_MIRRORMOVE,
	MOVE_PECK,
	MOVE_FORESIGHT,
	MOVE_FUTURESIGHT,
	MOVE_NASTYPLOT,
	MOVE_PSYCHOSHIFT,
	MOVE_LUCKYCHANT,
	MOVE_EXTRASENSORY,
	MOVE_SECRETPOWER,
	MOVE_STOREDPOWER,
	MOVE_MORNINGSUN,
	MOVE_NONE,
};

u16 yungoos_eggmoves[] = {
	MOVE_REVENGE,
	MOVE_LASTRESORT,
	MOVE_FIREFANG,
	MOVE_ICEFANG,
	MOVE_THUNDERFANG,
	MOVE_NONE,
};

u16 bunnelby_eggmoves[] = {
	MOVE_SPIKES,
	MOVE_DEFENSECURL,
	MOVE_ROLLOUT,

	MOVE_NONE,
};

u16 bounsweet_eggmoves[] = {
	MOVE_GRASSWHISTLE,
	MOVE_SYNTHESIS,
	MOVE_PLAYROUGH,
	MOVE_FEINT,
	MOVE_CHARM,
	MOVE_ACUPRESSURE,
	MOVE_NONE,
};

u16 mareep_eggmoves[] = {
	MOVE_TAKEDOWN,
	MOVE_BODYSLAM,
	MOVE_SCREECH,
	MOVE_ODORSLEUTH,
	MOVE_CHARGE,
	MOVE_FLATTER,
	MOVE_SANDATTACK,
	MOVE_IRONTAIL,
	MOVE_AFTERYOU,
	MOVE_AGILITY,
	MOVE_EERIEIMPULSE,
	MOVE_ELECTRICTERRAIN,
	MOVE_NONE,
};

u16 spinarak_eggmoves[] = {
	MOVE_PSYBEAM,
	MOVE_DISABLE,
	MOVE_SONICBOOM,
	MOVE_BATONPASS,
	MOVE_PURSUIT,
	MOVE_SIGNALBEAM,
	MOVE_TOXICSPIKES,
	MOVE_TWINEEDLE,
	MOVE_ELECTROWEB,
	MOVE_RAGEPOWDER,
	MOVE_NIGHTSLASH,
	MOVE_MEGAHORN,
	MOVE_LUNGE,
	MOVE_NONE,
};

u16 joltik_eggmoves[] = {
	MOVE_PINMISSILE,
	MOVE_POISONSTING,
	MOVE_CROSSPOISON,
	MOVE_ROCKCLIMB,
	MOVE_PURSUIT,
	MOVE_DISABLE,
	MOVE_FEINTATTACK,
	MOVE_CAMOUFLAGE,
	MOVE_LUNGE,
	MOVE_NONE,
};

u16 dewpider_eggmoves[] = {
	MOVE_POWERSPLIT,
	MOVE_AURORABEAM,
	MOVE_STOCKPILE,
	MOVE_SPITUP,
	MOVE_STICKYWEB,
	MOVE_NONE,
};

u16 zubat_eggmoves[] = {
	MOVE_QUICKATTACK,
	MOVE_PURSUIT,
	MOVE_FEINTATTACK,
	MOVE_GUST,
	MOVE_WHIRLWIND,
	MOVE_CURSE,
	MOVE_NASTYPLOT,
	MOVE_HYPNOSIS,
	MOVE_ZENHEADBUTT,
	MOVE_BRAVEBIRD,
	MOVE_GIGADRAIN,
	MOVE_STEELWING,
	MOVE_DEFOG,
	MOVE_VENOMDRENCH,
	MOVE_NONE,
};

u16 yanma_eggmoves[] = {
	MOVE_WHIRLWIND,
	MOVE_REVERSAL,
	MOVE_LEECHLIFE,
	MOVE_SIGNALBEAM,
	MOVE_SILVERWIND,
	MOVE_FEINT,
	MOVE_FEINTATTACK,
	MOVE_PURSUIT,
	MOVE_DOUBLEEDGE,
	MOVE_SECRETPOWER,
	MOVE_NONE,
};

u16 morelull_eggmoves[] = {
	MOVE_AMNESIA,
	MOVE_POISONPOWDER,
	MOVE_STUNSPORE,
	MOVE_GROWTH,
	MOVE_LEECHSEED,

	MOVE_NONE,
};

u16 vulpix_eggmoves[] = {
	MOVE_FEINTATTACK,
	MOVE_HYPNOSIS,
	MOVE_FLAIL,
	MOVE_SPITE,
	MOVE_DISABLE,
	MOVE_HOWL,
	MOVE_HEATWAVE,
	MOVE_FLAREBLITZ,
	MOVE_EXTRASENSORY,
	MOVE_POWERSWAP,
	MOVE_SECRETPOWER,
	MOVE_HEX,
	MOVE_TAILSLAP,
	MOVE_CAPTIVATE,
	MOVE_NONE,
};

u16 growlithe_eggmoves[] = {
	MOVE_BODYSLAM,
	MOVE_CRUNCH,
	MOVE_THRASH,
	MOVE_FIRESPIN,
	MOVE_HOWL,
	MOVE_HEATWAVE,
	MOVE_DOUBLEEDGE,
	MOVE_FLAREBLITZ,
	MOVE_MORNINGSUN,
	MOVE_COVET,
	MOVE_IRONTAIL,
	MOVE_DOUBLEKICK,
	MOVE_CLOSECOMBAT,
	MOVE_BURNUP,
	MOVE_NONE,
};

u16 pineco_eggmoves[] = {
	MOVE_PINMISSILE,
	MOVE_FLAIL,
	MOVE_SWIFT,
	MOVE_COUNTER,
	MOVE_SANDTOMB,
	MOVE_REVENGE,
	MOVE_DOUBLEEDGE,
	MOVE_TOXICSPIKES,
	MOVE_POWERTRICK,
	MOVE_ENDURE,
	MOVE_STEALTHROCK,
	MOVE_NONE,
};

u16 nincada_eggmoves[] = {
	MOVE_ENDURE,
	MOVE_FEINTATTACK,
	MOVE_GUST,
	MOVE_SILVERWIND,
	MOVE_BUGBUZZ,
	MOVE_NIGHTSLASH,
	MOVE_BUGBITE,
	MOVE_FINALGAMBIT,
	MOVE_NONE,
};

u16 feebas_eggmoves[] = {
	MOVE_MIRRORCOAT,
	MOVE_DRAGONBREATH,
	MOVE_MUDSPORT,
	MOVE_HYPNOSIS,
	MOVE_CONFUSERAY,
	MOVE_MIST,
	MOVE_HAZE,
	MOVE_TICKLE,
	MOVE_BRINE,
	MOVE_IRONTAIL,
	MOVE_DRAGONPULSE,
	MOVE_CAPTIVATE,
	MOVE_NONE,
};

u16 shellder_eggmoves[] = {
	MOVE_BUBBLEBEAM,
	MOVE_TAKEDOWN,
	MOVE_BARRIER,
	MOVE_RAPIDSPIN,
	MOVE_SCREECH,
	MOVE_ICICLESPEAR,
	MOVE_MUDSHOT,
	MOVE_ROCKBLAST,
	MOVE_WATERPULSE,
	MOVE_AQUARING,
	MOVE_AVALANCHE,
	MOVE_TWINEEDLE,
	MOVE_NONE,
};

u16 slowpoke_eggmoves[] = {
	MOVE_BELLYDRUM,
	MOVE_FUTURESIGHT,
	MOVE_STOMP,
	MOVE_MUDSPORT,
	MOVE_SLEEPTALK,
	MOVE_SNORE,
	MOVE_MEFIRST,
	MOVE_BLOCK,
	MOVE_ZENHEADBUTT,
	MOVE_ECHOEDVOICE,
	MOVE_BELCH,

	MOVE_NONE,
};

u16 abra_eggmoves[] = {
	MOVE_ENCORE,
	MOVE_BARRIER,
	MOVE_KNOCKOFF,
	MOVE_FIREPUNCH,
	MOVE_THUNDERPUNCH,
	MOVE_ICEPUNCH,
	MOVE_POWERTRICK,
	MOVE_GUARDSWAP,
	MOVE_SKILLSWAP,
	MOVE_GUARDSPLIT,
	MOVE_PSYCHOSHIFT,
	MOVE_NIGHTSHADE,
	MOVE_PSYCHICTERRAIN,
	MOVE_NONE,
};

u16 espurr_eggmoves[] = {
	MOVE_TRICK,
	MOVE_YAWN,
	MOVE_ASSIST,
	MOVE_BARRIER,
	MOVE_NONE,
};

u16 cottonee_eggmoves[] = {
	MOVE_NATURALGIFT,
	MOVE_ENCORE,
	MOVE_TICKLE,
	MOVE_FAKETEARS,
	MOVE_GRASSWHISTLE,
	MOVE_MEMENTO,
	MOVE_BEATUP,
	MOVE_SWITCHEROO,
	MOVE_WORRYSEED,
	MOVE_CAPTIVATE,
	MOVE_MISTYTERRAIN,
	MOVE_NONE,
};

u16 petilil_eggmoves[] = {
	MOVE_NATURALGIFT,
	MOVE_CHARM,
	MOVE_ENDURE,
	MOVE_INGRAIN,
	MOVE_WORRYSEED,
	MOVE_GRASSWHISTLE,
	MOVE_SWEETSCENT,
	MOVE_BIDE,
	MOVE_HEALINGWISH,
	MOVE_ENCORE,

	MOVE_NONE,
};

u16 shroomish_eggmoves[] = {
	MOVE_FAKETEARS,
	MOVE_CHARM,
	MOVE_HELPINGHAND,
	MOVE_WORRYSEED,
	MOVE_WAKEUPSLAP,
	MOVE_SEEDBOMB,
	MOVE_BULLETSEED,
	MOVE_FOCUSPUNCH,
	MOVE_NATURALGIFT,
	MOVE_DRAINPUNCH,
	MOVE_NONE,
};

u16 swablu_eggmoves[] = {
	MOVE_AGILITY,
	MOVE_HAZE,
	MOVE_PURSUIT,
	MOVE_RAGE,
	MOVE_FEATHERDANCE,
	MOVE_DRAGONRUSH,
	MOVE_POWERSWAP,
	MOVE_ROOST,
	MOVE_HYPERVOICE,
	MOVE_STEELWING,
	MOVE_PLAYROUGH,
	MOVE_NONE,
};

u16 murkrow_eggmoves[] = {
	MOVE_WHIRLWIND,
	MOVE_DRILLPECK,
	MOVE_MIRRORMOVE,
	MOVE_WINGATTACK,
	MOVE_SKYATTACK,
	MOVE_CONFUSERAY,
	MOVE_FEATHERDANCE,
	MOVE_PERISHSONG,
	MOVE_PSYCHOSHIFT,
	MOVE_SCREECH,
	MOVE_FEINTATTACK,
	MOVE_BRAVEBIRD,
	MOVE_ROOST,
	MOVE_ASSURANCE,
	MOVE_FLATTER,
	MOVE_PUNISHMENT,
	MOVE_NONE,
};

u16 cleffa_eggmoves[] = {
	MOVE_PRESENT,
	MOVE_METRONOME,
	MOVE_AMNESIA,
	MOVE_BELLYDRUM,
	MOVE_SPLASH,
	MOVE_MIMIC,
	MOVE_WISH,
	MOVE_FAKETEARS,
	MOVE_COVET,
	MOVE_AROMATHERAPY,
	MOVE_STOREDPOWER,
	MOVE_TICKLE,
	MOVE_MISTYTERRAIN,
	MOVE_HEALPULSE,
	MOVE_NONE,
};

u16 riolu_eggmoves[] = {
	MOVE_CROSSCHOP,
	MOVE_DETECT,
	MOVE_BITE,
	MOVE_MINDREADER,
	MOVE_SKYUPPERCUT,
	MOVE_HIGHJUMPKICK,
	MOVE_AGILITY,
	MOVE_VACUUMWAVE,
	MOVE_CRUNCH,
	MOVE_LOWKICK,
	MOVE_IRONDEFENSE,
	MOVE_BLAZEKICK,
	MOVE_BULLETPUNCH,
	MOVE_FOLLOWME,
	MOVE_CIRCLETHROW,
	MOVE_METEORMASH,
	MOVE_NONE,
};

u16 machop_eggmoves[] = {
	MOVE_MEDITATE,
	MOVE_ROLLINGKICK,
	MOVE_ENCORE,
	MOVE_SMELLINGSALTS,
	MOVE_COUNTER,
	MOVE_CLOSECOMBAT,
	MOVE_FIREPUNCH,
	MOVE_THUNDERPUNCH,
	MOVE_ICEPUNCH,
	MOVE_BULLETPUNCH,
	MOVE_POWERTRICK,
	MOVE_HEAVYSLAM,
	MOVE_KNOCKOFF,
	MOVE_TICKLE,
	MOVE_QUICKGUARD,
	MOVE_NONE,
};

u16 shinx_eggmoves[] = {
	MOVE_ICEFANG,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_QUICKATTACK,
	MOVE_HOWL,
	MOVE_TAKEDOWN,
	MOVE_NIGHTSLASH,
	MOVE_SHOCKWAVE,
	MOVE_SWIFT,
	MOVE_DOUBLEKICK,
	MOVE_SIGNALBEAM,
	MOVE_HELPINGHAND,
	MOVE_EERIEIMPULSE,
	MOVE_FAKETEARS,
	MOVE_NONE,
};

u16 litleo_eggmoves[] = {
	MOVE_ENTRAINMENT,
	MOVE_YAWN,
	MOVE_SNATCH,
	MOVE_FIRESPIN,
	MOVE_FLAREBLITZ,
	MOVE_NONE,
};

u16 houndour_eggmoves[] = {
	MOVE_FIRESPIN,
	MOVE_RAGE,
	MOVE_PURSUIT,
	MOVE_COUNTER,
	MOVE_SPITE,
	MOVE_REVERSAL,
	MOVE_BEATUP,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_NASTYPLOT,
	MOVE_PUNISHMENT,
	MOVE_FEINT,
	MOVE_SUCKERPUNCH,
	MOVE_DESTINYBOND,
	MOVE_NONE,
};

u16 wingull_eggmoves[] = {
	MOVE_MIST,
	MOVE_TWISTER,
	MOVE_AGILITY,
	MOVE_GUST,
	MOVE_WATERSPORT,
	MOVE_AQUARING,
	MOVE_KNOCKOFF,
	MOVE_BRINE,
	MOVE_ROOST,
	MOVE_SOAK,
	MOVE_WIDEGUARD,
	MOVE_NONE,
};

u16 tentacool_eggmoves[] = {
	MOVE_AURORABEAM,
	MOVE_MIRRORCOAT,
	MOVE_RAPIDSPIN,
	MOVE_HAZE,
	MOVE_CONFUSERAY,
	MOVE_KNOCKOFF,
	MOVE_ACUPRESSURE,
	MOVE_MUDDYWATER,
	MOVE_BUBBLE,
	MOVE_AQUARING,
	MOVE_TICKLE,
	MOVE_NONE,
};

u16 remoraid_eggmoves[] = {
	MOVE_AURORABEAM,
	MOVE_OCTAZOOKA,
	MOVE_SUPERSONIC,
	MOVE_HAZE,
	MOVE_SCREECH,
	MOVE_ROCKBLAST,
	MOVE_SNORE,
	MOVE_FLAIL,
	MOVE_WATERSPOUT,
	MOVE_MUDSHOT,
	MOVE_SWIFT,
	MOVE_ACIDSPRAY,
	MOVE_WATERPULSE,
	MOVE_ENTRAINMENT,
	MOVE_NONE,
};

u16 inkay_eggmoves[] = {
	MOVE_SIMPLEBEAM,
	MOVE_POWERSPLIT,
	MOVE_CAMOUFLAGE,
	MOVE_FLATTER,
	MOVE_DESTINYBOND,
	MOVE_GUARDSWAP,

	MOVE_NONE,
};

u16 dwebble_eggmoves[] = {
	MOVE_ENDURE,
	MOVE_IRONDEFENSE,
	MOVE_NIGHTSLASH,
	MOVE_SANDTOMB,
	MOVE_COUNTER,
	MOVE_CURSE,
	MOVE_SPIKES,
	MOVE_BLOCK,
	MOVE_WIDEGUARD,
	MOVE_ROTOTILLER,
	MOVE_NONE,
};

u16 skrelp_eggmoves[] = {
	MOVE_TOXICSPIKES,
	MOVE_PLAYROUGH,
	MOVE_HAZE,
	MOVE_ACIDARMOR,
	MOVE_VENOMDRENCH,

	MOVE_NONE,
};

u16 trubbish_eggmoves[] = {
	MOVE_SPIKES,
	MOVE_ROLLOUT,
	MOVE_HAZE,
	MOVE_CURSE,
	MOVE_ROCKBLAST,
	MOVE_SANDATTACK,
	MOVE_MUDSPORT,
	MOVE_SELFDESTRUCT,
	MOVE_AUTOTOMIZE,
	MOVE_NONE,
};

u16 croagunk_eggmoves[] = {
	MOVE_MEFIRST,
	MOVE_FEINT,
	MOVE_DYNAMICPUNCH,
	MOVE_HEADBUTT,
	MOVE_VACUUMWAVE,
	MOVE_MEDITATE,
	MOVE_FAKEOUT,
	MOVE_WAKEUPSLAP,
	MOVE_SMELLINGSALTS,
	MOVE_CROSSCHOP,
	MOVE_BULLETPUNCH,
	MOVE_COUNTER,
	MOVE_DRAINPUNCH,
	MOVE_ACUPRESSURE,
	MOVE_QUICKGUARD,
	MOVE_NONE,
};

u16 skorupi_eggmoves[] = {
	MOVE_FEINTATTACK,
	MOVE_SCREECH,
	MOVE_SANDATTACK,
	MOVE_SLASH,
	MOVE_CONFUSERAY,
	MOVE_WHIRLWIND,
	MOVE_AGILITY,
	MOVE_PURSUIT,
	MOVE_NIGHTSLASH,
	MOVE_IRONTAIL,
	MOVE_TWINEEDLE,
	MOVE_POISONTAIL,
	MOVE_NONE,
};

u16 carnivine_eggmoves[] = {
	MOVE_SLEEPPOWDER,
	MOVE_STUNSPORE,
	MOVE_RAZORLEAF,
	MOVE_SLAM,
	MOVE_SYNTHESIS,
	MOVE_MAGICALLEAF,
	MOVE_LEECHSEED,
	MOVE_WORRYSEED,
	MOVE_GIGADRAIN,
	MOVE_RAGEPOWDER,
	MOVE_GRASSWHISTLE,
	MOVE_ACIDSPRAY,
	MOVE_NONE,
};

u16 goomy_eggmoves[] = {
	MOVE_ACIDARMOR,
	MOVE_CURSE,
	MOVE_IRONTAIL,
	MOVE_POISONTAIL,
	MOVE_COUNTER,
	MOVE_ENDURE,

	MOVE_NONE,
};

u16 mudbray_eggmoves[] = {
	MOVE_BODYSLAM,
	MOVE_DOUBLEEDGE,
	MOVE_MAGNITUDE,
	MOVE_CLOSECOMBAT,
	MOVE_MUDBOMB,

	MOVE_NONE,
};

u16 gastly_eggmoves[] = {
	MOVE_PSYWAVE,
	MOVE_PERISHSONG,
	MOVE_HAZE,
	MOVE_ASTONISH,
	MOVE_GRUDGE,
	MOVE_FIREPUNCH,
	MOVE_ICEPUNCH,
	MOVE_THUNDERPUNCH,
	MOVE_DISABLE,
	MOVE_SCARYFACE,
	MOVE_CLEARSMOG,
	MOVE_SMOG,
	MOVE_REFLECTTYPE,

	MOVE_NONE,
};

u16 duskull_eggmoves[] = {
	MOVE_IMPRISON,
	MOVE_DESTINYBOND,
	MOVE_PAINSPLIT,
	MOVE_GRUDGE,
	MOVE_MEMENTO,
	MOVE_FEINTATTACK,
	MOVE_OMINOUSWIND,
	MOVE_DARKPULSE,
	MOVE_SKILLSWAP,
	MOVE_HAZE,
	MOVE_NONE,
};

u16 noibat_eggmoves[] = {
	MOVE_SWITCHEROO,
	MOVE_SNATCH,
	MOVE_OUTRAGE,
	MOVE_TAILWIND,
	MOVE_NONE,
};

u16 dunsparce_eggmoves[] = {
	MOVE_BIDE,
	MOVE_ANCIENTPOWER,
	MOVE_BITE,
	MOVE_HEADBUTT,
	MOVE_ASTONISH,
	MOVE_CURSE,
	MOVE_TRUMPCARD,
	MOVE_MAGICCOAT,
	MOVE_SNORE,
	MOVE_AGILITY,
	MOVE_SECRETPOWER,
	MOVE_SLEEPTALK,
	MOVE_HEX,
	MOVE_NONE,
};

u16 mienfoo_eggmoves[] = {
	MOVE_ENDURE,
	MOVE_VITALTHROW,
	MOVE_BATONPASS,
	MOVE_SMELLINGSALTS,
	MOVE_LOWKICK,
	MOVE_FEINT,
	MOVE_MEFIRST,
	MOVE_KNOCKOFF,
	MOVE_NONE,
};

u16 blitzle_eggmoves[] = {
	MOVE_MEFIRST,
	MOVE_TAKEDOWN,
	MOVE_SANDATTACK,
	MOVE_DOUBLEKICK,
	MOVE_SCREECH,
	MOVE_RAGE,
	MOVE_ENDURE,
	MOVE_DOUBLEEDGE,
	MOVE_SHOCKWAVE,
	MOVE_SNATCH,
	MOVE_FEINT,
	MOVE_NONE,
};

u16 ponyta_eggmoves[] = {
	MOVE_FLAMEWHEEL,
	MOVE_THRASH,
	MOVE_DOUBLEKICK,
	MOVE_HYPNOSIS,
	MOVE_CHARM,
	MOVE_DOUBLEEDGE,
	MOVE_HORNDRILL,
	MOVE_MORNINGSUN,
	MOVE_LOWKICK,
	MOVE_CAPTIVATE,
	MOVE_HIGHHORSEPOWER,
	MOVE_NONE,
};

u16 heracross_eggmoves[] = {
	MOVE_HARDEN,
	MOVE_BIDE,
	MOVE_FLAIL,
	MOVE_REVENGE,
	MOVE_PURSUIT,
	MOVE_DOUBLEEDGE,
	MOVE_SEISMICTOSS,
	MOVE_FOCUSPUNCH,
	MOVE_MEGAHORN,
	MOVE_ROCKBLAST,
	MOVE_NONE,
};

u16 scyther_eggmoves[] = {
	MOVE_COUNTER,
	MOVE_BATONPASS,
	MOVE_RAZORWIND,
	MOVE_REVERSAL,
	MOVE_ENDURE,
	MOVE_SILVERWIND,
	MOVE_BUGBUZZ,
	MOVE_NIGHTSLASH,
	MOVE_DEFOG,
	MOVE_STEELWING,
	MOVE_QUICKGUARD,
	MOVE_NONE,
};

u16 eevee_eggmoves[] = {
	MOVE_CHARM,
	MOVE_FLAIL,
	MOVE_ENDURE,
	MOVE_CURSE,
	MOVE_TICKLE,
	MOVE_WISH,
	MOVE_YAWN,
	MOVE_FAKETEARS,
	MOVE_COVET,
	MOVE_DETECT,
	MOVE_NATURALGIFT,
	MOVE_STOREDPOWER,
	MOVE_SYNCHRONOISE,
	MOVE_CAPTIVATE,
	MOVE_NONE,
};

u16 rockruff_eggmoves[] = {
	MOVE_CRUSHCLAW,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_SUCKERPUNCH,
	MOVE_THRASH,
	MOVE_NONE,
};

u16 geodude_eggmoves[] = {
	MOVE_MEGAPUNCH,
	MOVE_BLOCK,
	MOVE_HAMMERARM,
	MOVE_FLAIL,
	MOVE_CURSE,
	MOVE_FOCUSPUNCH,
	MOVE_ROCKCLIMB,
	MOVE_ENDURE,
	MOVE_AUTOTOMIZE,
	MOVE_WIDEGUARD,
	MOVE_NONE,
};

u16 anorith_eggmoves[] = {
	MOVE_RAPIDSPIN,
	MOVE_KNOCKOFF,
	MOVE_SCREECH,
	MOVE_SANDATTACK,
	MOVE_CROSSPOISON,
	MOVE_CURSE,
	MOVE_IRONDEFENSE,
	MOVE_WATERPULSE,
	MOVE_AQUAJET,
	MOVE_NONE,
};

u16 lileep_eggmoves[] = {
	MOVE_BARRIER,
	MOVE_RECOVER,
	MOVE_MIRRORCOAT,
	MOVE_WRINGOUT,
	MOVE_TICKLE,
	MOVE_CURSE,
	MOVE_MEGADRAIN,
	MOVE_ENDURE,
	MOVE_STEALTHROCK,
	MOVE_NONE,
};

u16 chinchou_eggmoves[] = {
	MOVE_FLAIL,
	MOVE_SCREECH,
	MOVE_AMNESIA,
	MOVE_PSYBEAM,
	MOVE_WHIRLPOOL,
	MOVE_AGILITY,
	MOVE_MIST,
	MOVE_SHOCKWAVE,
	MOVE_BRINE,
	MOVE_WATERPULSE,
	MOVE_SOAK,
	MOVE_NONE,
};

u16 spheal_eggmoves[] = {
	MOVE_WATERSPORT,
	MOVE_STOCKPILE,
	MOVE_SWALLOW,
	MOVE_SPITUP,
	MOVE_YAWN,
	MOVE_CURSE,
	MOVE_FISSURE,
	MOVE_SIGNALBEAM,
	MOVE_AQUARING,
	MOVE_ROLLOUT,
	MOVE_SLEEPTALK,
	MOVE_WATERPULSE,
	MOVE_BELLYDRUM,
	MOVE_NONE,
};

u16 pawniard_eggmoves[] = {
	MOVE_REVENGE,
	MOVE_SUCKERPUNCH,
	MOVE_PURSUIT,
	MOVE_HEADBUTT,
	MOVE_STEALTHROCK,
	MOVE_PSYCHOCUT,
	MOVE_MEANLOOK,
	MOVE_QUICKGUARD,
	MOVE_NONE,
};

u16 scraggy_eggmoves[] = {
	MOVE_DRAINPUNCH,
	MOVE_COUNTER,
	MOVE_DRAGONDANCE,
	MOVE_DETECT,
	MOVE_FAKEOUT,
	MOVE_FIREPUNCH,
	MOVE_ICEPUNCH,
	MOVE_THUNDERPUNCH,
	MOVE_AMNESIA,
	MOVE_FEINTATTACK,
	MOVE_ZENHEADBUTT,
	MOVE_QUICKGUARD,
	MOVE_POWERUPPUNCH,
	MOVE_ACIDSPRAY,
	MOVE_NONE,
};

u16 gligar_eggmoves[] = {
	MOVE_METALCLAW,
	MOVE_WINGATTACK,
	MOVE_RAZORWIND,
	MOVE_COUNTER,
	MOVE_SANDTOMB,
	MOVE_AGILITY,
	MOVE_BATONPASS,
	MOVE_DOUBLEEDGE,
	MOVE_FEINT,
	MOVE_NIGHTSLASH,
	MOVE_CROSSPOISON,
	MOVE_POWERTRICK,
	MOVE_ROCKCLIMB,
	MOVE_POISONTAIL,
	MOVE_NONE,
};

u16 skiddo_eggmoves[] = {
	MOVE_DEFENSECURL,
	MOVE_ROLLOUT,
	MOVE_MILKDRINK,
	MOVE_GRASSYTERRAIN,
	MOVE_NONE,
};

u16 drampa_eggmoves[] = {
	MOVE_HURRICANE,
	MOVE_DRAGONRUSH,
	MOVE_RAZORWIND,
	MOVE_MIST,
	MOVE_PLAYROUGH,
	MOVE_NONE,
};

u16 larvitar_eggmoves[] = {
	MOVE_PURSUIT,
	MOVE_STOMP,
	MOVE_OUTRAGE,
	MOVE_FOCUSENERGY,
	MOVE_ANCIENTPOWER,
	MOVE_DRAGONDANCE,
	MOVE_CURSE,
	MOVE_IRONDEFENSE,
	MOVE_ASSURANCE,
	MOVE_IRONHEAD,
	MOVE_STEALTHROCK,
	MOVE_IRONTAIL,
	MOVE_NONE,
};

u16 salandit_eggmoves[] = {
	MOVE_BELCH,
	MOVE_KNOCKOFF,
	MOVE_SANDATTACK,
	MOVE_SNATCH,
	MOVE_FAKEOUT,
	MOVE_NONE,
};

u16 sandile_eggmoves[] = {
	MOVE_DOUBLEEDGE,
	MOVE_ROCKCLIMB,
	MOVE_PURSUIT,
	MOVE_UPROAR,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_BEATUP,
	MOVE_FOCUSENERGY,
	MOVE_COUNTER,
	MOVE_MEANLOOK,
	MOVE_MEFIRST,
	MOVE_POWERTRIP,
	MOVE_NONE,
};

u16 sigilyph_eggmoves[] = {
	MOVE_STOREDPOWER,
	MOVE_PSYCHOSHIFT,
	MOVE_ANCIENTPOWER,
	MOVE_STEELWING,
	MOVE_ROOST,
	MOVE_SKILLSWAP,
	MOVE_FUTURESIGHT,
	MOVE_NONE,
};

u16 maractus_eggmoves[] = {
	MOVE_BULLETSEED,
	MOVE_BOUNCE,
	MOVE_WORRYSEED,
	MOVE_LEECHSEED,
	MOVE_SEEDBOMB,
	MOVE_WOODHAMMER,
	MOVE_SPIKES,
	MOVE_GRASSWHISTLE,
	MOVE_GRASSYTERRAIN,
	MOVE_NONE,
};

u16 cacnea_eggmoves[] = {
	MOVE_GRASSWHISTLE,
	MOVE_ACID,
	MOVE_TEETERDANCE,
	MOVE_DYNAMICPUNCH,
	MOVE_COUNTER,
	MOVE_LOWKICK,
	MOVE_SMELLINGSALTS,
	MOVE_MAGICALLEAF,
	MOVE_SEEDBOMB,
	MOVE_NASTYPLOT,
	MOVE_DISABLE,
	MOVE_BLOCK,
	MOVE_WORRYSEED,
	MOVE_SWITCHEROO,
	MOVE_FELLSTINGER,
	MOVE_BELCH,
	MOVE_ROTOTILLER,
	MOVE_POWERUPPUNCH,
	MOVE_NONE,
};

u16 shuckle_eggmoves[] = {
	MOVE_SWEETSCENT,
	MOVE_KNOCKOFF,
	MOVE_HELPINGHAND,
	MOVE_ACUPRESSURE,
	MOVE_SANDTOMB,
	MOVE_MUDSLAP,
	MOVE_ACID,
	MOVE_ROCKBLAST,
	MOVE_FINALGAMBIT,
	MOVE_NONE,
};

u16 slugma_eggmoves[] = {
	MOVE_ACIDARMOR,
	MOVE_HEATWAVE,
	MOVE_CURSE,
	MOVE_SMOKESCREEN,
	MOVE_MEMENTO,
	MOVE_STOCKPILE,
	MOVE_SPITUP,
	MOVE_SWALLOW,
	MOVE_ROLLOUT,
	MOVE_INFERNO,
	MOVE_EARTHPOWER,
	MOVE_GUARDSWAP,
	MOVE_NONE,
};

u16 torkoal_eggmoves[] = {
	MOVE_ERUPTION,
	MOVE_ENDURE,
	MOVE_SLEEPTALK,
	MOVE_YAWN,
	MOVE_FISSURE,
	MOVE_SKULLBASH,
	MOVE_FLAMEBURST,
	MOVE_CLEARSMOG,
	MOVE_SUPERPOWER,
	MOVE_NONE,
};

u16 turtonator_eggmoves[] = {
	MOVE_WIDEGUARD,
	MOVE_REVENGE,
	MOVE_HEADSMASH,
	MOVE_FIRESPIN,
	MOVE_NONE,
};

u16 larvesta_eggmoves[] = {
	MOVE_STRINGSHOT,
	MOVE_HARDEN,
	MOVE_FORESIGHT,
	MOVE_ENDURE,
	MOVE_ZENHEADBUTT,
	MOVE_MORNINGSUN,
	MOVE_MAGNETRISE,
	MOVE_NONE,
};

u16 swirlix_eggmoves[] = {
	MOVE_AFTERYOU,
	MOVE_YAWN,
	MOVE_BELLYDRUM,
	MOVE_COPYCAT,
	MOVE_STICKYWEB,
	MOVE_NONE,
};

u16 snubbull_eggmoves[] = {
	MOVE_METRONOME,
	MOVE_FEINTATTACK,
	MOVE_PRESENT,
	MOVE_CRUNCH,
	MOVE_HEALBELL,
	MOVE_SNORE,
	MOVE_SMELLINGSALTS,
	MOVE_CLOSECOMBAT,
	MOVE_ICEFANG,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_FOCUSPUNCH,
	MOVE_DOUBLEEDGE,
	MOVE_MIMIC,
	MOVE_FAKETEARS,
	MOVE_NONE,
};

u16 togedemaru_eggmoves[] = {
	MOVE_REVERSAL,
	MOVE_PRESENT,
	MOVE_ENCORE,
	MOVE_TWINEEDLE,
	MOVE_WISH,
	MOVE_FAKEOUT,
	MOVE_TICKLE,
	MOVE_FLAIL,
	MOVE_DISARMINGVOICE,
	MOVE_NONE,
};

u16 sandygast_eggmoves[] = {
	MOVE_AMNESIA,
	MOVE_DESTINYBOND,
	MOVE_ANCIENTPOWER,
	MOVE_STOCKPILE,
	MOVE_SWALLOW,
	MOVE_SPITUP,
	MOVE_CURSE,
	MOVE_NONE,
};

u16 litwick_eggmoves[] = {
	MOVE_ACIDARMOR,
	MOVE_HEATWAVE,
	MOVE_HAZE,
	MOVE_ENDURE,
	MOVE_CAPTIVATE,
	MOVE_ACID,
	MOVE_CLEARSMOG,
	MOVE_POWERSPLIT,
	MOVE_NONE,
};

u16 honedge_eggmoves[] = {
	MOVE_METALSOUND,
	MOVE_SHADOWSNEAK,
	MOVE_DESTINYBOND,
	MOVE_WIDEGUARD,
	MOVE_NONE,
};

u16 spiritomb_eggmoves[] = {
	MOVE_DESTINYBOND,
	MOVE_PAINSPLIT,
	MOVE_SMOKESCREEN,
	MOVE_IMPRISON,
	MOVE_GRUDGE,
	MOVE_SHADOWSNEAK,
	MOVE_CAPTIVATE,
	MOVE_NIGHTMARE,
	MOVE_FOULPLAY,
	MOVE_DISABLE,
	MOVE_NONE,
};

u16 mawile_eggmoves[] = {
	MOVE_POISONFANG,
	MOVE_ANCIENTPOWER,
	MOVE_TICKLE,
	MOVE_SUCKERPUNCH,
	MOVE_ICEFANG,
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_PUNISHMENT,
	MOVE_GUARDSWAP,
	MOVE_CAPTIVATE,
	MOVE_SLAM,
	MOVE_METALBURST,
	MOVE_MISTYTERRAIN,
	MOVE_SEISMICTOSS,
	MOVE_POWERUPPUNCH,
	MOVE_NONE,
};

u16 girafarig_eggmoves[] = {
	MOVE_TAKEDOWN,
	MOVE_AMNESIA,
	MOVE_FORESIGHT,
	MOVE_FUTURESIGHT,
	MOVE_BEATUP,
	MOVE_WISH,
	MOVE_MAGICCOAT,
	MOVE_DOUBLEKICK,
	MOVE_MIRRORCOAT,
	MOVE_RAZORWIND,
	MOVE_SKILLSWAP,
	MOVE_SECRETPOWER,
	MOVE_MEANLOOK,
	MOVE_PSYCHICTERRAIN,
	MOVE_PSYCHICFANGS,
	MOVE_NONE,
};

u16 munchlax_eggmoves[] = {
	MOVE_LICK,
	MOVE_CHARM,
	MOVE_DOUBLEEDGE,
	MOVE_CURSE,
	MOVE_WHIRLWIND,
	MOVE_PURSUIT,
	MOVE_ZENHEADBUTT,
	MOVE_COUNTER,
	MOVE_NATURALGIFT,
	MOVE_AFTERYOU,
	MOVE_SELFDESTRUCT,
	MOVE_BELCH,
	MOVE_NONE,
};

u16 snorlax_eggmoves[] = {
	MOVE_LICK,
	MOVE_CHARM,
	MOVE_DOUBLEEDGE,
	MOVE_CURSE,
	MOVE_FISSURE,
	MOVE_WHIRLWIND,
	MOVE_PURSUIT,
	MOVE_COUNTER,
	MOVE_NATURALGIFT,
	MOVE_AFTERYOU,
	MOVE_BELCH,
	MOVE_POWERUPPUNCH,
	MOVE_NONE,
};

u16 pancham_eggmoves[] = {
	MOVE_QUASH,
	MOVE_MEFIRST,
	MOVE_QUICKGUARD,
	MOVE_FOULPLAY,
	MOVE_STORMTHROW,
	MOVE_POWERTRIP,
	MOVE_NONE,
};

u16 passimian_eggmoves[] = {
	MOVE_SEISMICTOSS,
	MOVE_VITALTHROW,
	MOVE_QUICKGUARD,
	MOVE_IRONHEAD,
	MOVE_QUICKATTACK,
	MOVE_FEINT,
	MOVE_NONE,
};

u16 stufful_eggmoves[] = {
	MOVE_ICEPUNCH,
	MOVE_THUNDERPUNCH,
	MOVE_FORCEPALM,
	MOVE_ENDURE,
	MOVE_WIDEGUARD,
	MOVE_MEGAKICK,
	MOVE_STOMPINGTANTRUM,
	MOVE_NONE,
};

u16 bouffalant_eggmoves[] = {
	MOVE_STOMP,
	MOVE_ROCKCLIMB,
	MOVE_HEADBUTT,
	MOVE_SKULLBASH,
	MOVE_MUDSHOT,
	MOVE_MUDSLAP,
	MOVE_IRONHEAD,
	MOVE_AMNESIA,
	MOVE_BELCH,
	MOVE_COTTONGUARD,
	MOVE_NONE,
};

u16 kangaskhan_eggmoves[] = {
	MOVE_STOMP,
	MOVE_FORESIGHT,
	MOVE_FOCUSENERGY,
	MOVE_DISABLE,
	MOVE_COUNTER,
	MOVE_CRUSHCLAW,
	MOVE_DOUBLEEDGE,
	MOVE_ENDEAVOR,
	MOVE_HAMMERARM,
	MOVE_FOCUSPUNCH,
	MOVE_TRUMPCARD,
	MOVE_UPROAR,
	MOVE_CIRCLETHROW,
	MOVE_NONE,
};

u16 hawlucha_eggmoves[] = {
	MOVE_AGILITY,
	MOVE_MEFIRST,
	MOVE_ENTRAINMENT,
	MOVE_MUDSPORT,
	MOVE_BATONPASS,
	MOVE_QUICKGUARD,
	MOVE_FEINT,
	MOVE_NONE,
};

u16 tropius_eggmoves[] = {
	MOVE_HEADBUTT,
	MOVE_SLAM,
	MOVE_RAZORWIND,
	MOVE_LEECHSEED,
	MOVE_NATUREPOWER,
	MOVE_LEAFSTORM,
	MOVE_SYNTHESIS,
	MOVE_CURSE,
	MOVE_LEAFBLADE,
	MOVE_DRAGONDANCE,
	MOVE_BULLETSEED,
	MOVE_NATURALGIFT,
	MOVE_DRAGONHAMMER,
	MOVE_NONE,
};

u16 lapras_eggmoves[] = {
	MOVE_FORESIGHT,
	MOVE_TICKLE,
	MOVE_REFRESH,
	MOVE_DRAGONDANCE,
	MOVE_CURSE,
	MOVE_SLEEPTALK,
	MOVE_HORNDRILL,
	MOVE_ANCIENTPOWER,
	MOVE_WHIRLPOOL,
	MOVE_FISSURE,
	MOVE_DRAGONPULSE,
	MOVE_AVALANCHE,
	MOVE_FUTURESIGHT,
	MOVE_FREEZEDRY,
	MOVE_NONE,
};

u16 skarmory_eggmoves[] = {
	MOVE_DRILLPECK,
	MOVE_PURSUIT,
	MOVE_WHIRLWIND,
	MOVE_SKYATTACK,
	MOVE_CURSE,
	MOVE_BRAVEBIRD,
	MOVE_ASSURANCE,
	MOVE_GUARDSWAP,
	MOVE_STEALTHROCK,
	MOVE_ENDURE,
	MOVE_NONE,
};

u16 sneasel_eggmoves[] = {
	MOVE_COUNTER,
	MOVE_SPITE,
	MOVE_FORESIGHT,
	MOVE_BITE,
	MOVE_CRUSHCLAW,
	MOVE_FAKEOUT,
	MOVE_DOUBLEHIT,
	MOVE_PUNISHMENT,
	MOVE_PURSUIT,
	MOVE_ICESHARD,
	MOVE_ICEPUNCH,
	MOVE_ASSIST,
	MOVE_AVALANCHE,
	MOVE_FEINT,
	MOVE_ICICLECRASH,
	MOVE_THROATCHOP,
	MOVE_NONE,
};

u16 snover_eggmoves[] = {
	MOVE_LEECHSEED,
	MOVE_MAGICALLEAF,
	MOVE_SEEDBOMB,
	MOVE_GROWTH,
	MOVE_DOUBLEEDGE,
	MOVE_MIST,
	MOVE_STOMP,
	MOVE_SKULLBASH,
	MOVE_AVALANCHE,
	MOVE_NATURALGIFT,
	MOVE_BULLETSEED,
	MOVE_NONE,
};

u16 snorunt_eggmoves[] = {
	MOVE_BLOCK,
	MOVE_SPIKES,
	MOVE_ROLLOUT,
	MOVE_DISABLE,
	MOVE_BIDE,
	MOVE_WEATHERBALL,
	MOVE_AVALANCHE,
	MOVE_HEX,
	MOVE_FAKETEARS,
	MOVE_SWITCHEROO,
	MOVE_NONE,
};

u16 bergmite_eggmoves[] = {
	MOVE_RECOVER,
	MOVE_MIST,
	MOVE_BARRIER,
	MOVE_MIRRORCOAT,
	MOVE_NONE,
};

u16 druddigon_eggmoves[] = {
	MOVE_FIREFANG,
	MOVE_THUNDERFANG,
	MOVE_CRUSHCLAW,
	MOVE_FEINTATTACK,
	MOVE_PURSUIT,
	MOVE_IRONTAIL,
	MOVE_POISONTAIL,
	MOVE_SNATCH,
	MOVE_METALCLAW,
	MOVE_GLARE,
	MOVE_SUCKERPUNCH,
	MOVE_NONE,
};

u16 drilbur_eggmoves[] = {
	MOVE_IRONDEFENSE,
	MOVE_RAPIDSPIN,
	MOVE_EARTHPOWER,
	MOVE_CRUSHCLAW,
	MOVE_METALSOUND,
	MOVE_SUBMISSION,
	MOVE_SKULLBASH,
	MOVE_ROCKCLIMB,
	MOVE_NONE,
};

u16 gible_eggmoves[] = {
	MOVE_DRAGONBREATH,
	MOVE_OUTRAGE,
	MOVE_TWISTER,
	MOVE_SCARYFACE,
	MOVE_DOUBLEEDGE,
	MOVE_THRASH,
	MOVE_METALCLAW,
	MOVE_SANDTOMB,
	MOVE_BODYSLAM,
	MOVE_IRONHEAD,
	MOVE_MUDSHOT,
	MOVE_ROCKCLIMB,
	MOVE_IRONTAIL,
	MOVE_NONE,
};

u16 dratini_eggmoves[] = {
	MOVE_MIST,
	MOVE_HAZE,
	MOVE_SUPERSONIC,
	MOVE_DRAGONBREATH,
	MOVE_DRAGONDANCE,
	MOVE_DRAGONRUSH,
	MOVE_EXTREMESPEED,
	MOVE_WATERPULSE,
	MOVE_AQUAJET,
	MOVE_DRAGONPULSE,
	MOVE_IRONTAIL,
	MOVE_NONE,
};


u16* GetEggMoves(u16 species)
{
    switch (species) {
        case SPECIES_HORSEA:
        case SPECIES_SEADRA:
        case SPECIES_KINGDRA:
            return horsea_eggmoves;
        case SPECIES_TRAPINCH:
        case SPECIES_VIBRAVA:
        case SPECIES_FLYGON:
            return trapinch_eggmoves;
        case SPECIES_TOGEPI:
        case SPECIES_TOGETIC:
        case SPECIES_TOGEKISS:
            return togepi_eggmoves;
        case SPECIES_YUNGOOS:
        case SPECIES_GUMSHOOS:
            return yungoos_eggmoves;
        case SPECIES_BUNNELBY:
        case SPECIES_DIGGERSBY:
            return bunnelby_eggmoves;
        case SPECIES_BOUNSWEET:
        case SPECIES_STEENEE:
        case SPECIES_TSAREENA:
            return bounsweet_eggmoves;
        case SPECIES_MAREEP:
        case SPECIES_FLAAFFY:
        case SPECIES_AMPHAROS:
            return mareep_eggmoves;
        case SPECIES_SPINARAK:
        case SPECIES_ARIADOS:
            return spinarak_eggmoves;
        case SPECIES_JOLTIK:
        case SPECIES_GALVANTULA:
            return joltik_eggmoves;
        case SPECIES_DEWPIDER:
        case SPECIES_ARAQUANID:
            return dewpider_eggmoves;
        case SPECIES_ZUBAT:
        case SPECIES_GOLBAT:
        case SPECIES_CROBAT:
            return zubat_eggmoves;
        case SPECIES_YANMA:
        case SPECIES_YANMEGA:
            return yanma_eggmoves;
        case SPECIES_MORELULL:
        case SPECIES_SHIINOTIC:
            return morelull_eggmoves;
        case SPECIES_VULPIX:
        case SPECIES_NINETALES:
            return vulpix_eggmoves;
        case SPECIES_GROWLITHE:
        case SPECIES_ARCANINE:
            return growlithe_eggmoves;
        case SPECIES_PINECO:
        case SPECIES_FORRETRESS:
            return pineco_eggmoves;
        case SPECIES_NINCADA:
        case SPECIES_NINJASK:
        case SPECIES_SHEDINJA:
            return nincada_eggmoves;
        case SPECIES_FEEBAS:
        case SPECIES_MILOTIC:
            return feebas_eggmoves;
        case SPECIES_SHELLDER:
        case SPECIES_CLOYSTER:
            return shellder_eggmoves;
        case SPECIES_SLOWPOKE:
        case SPECIES_SLOWBRO:
        case SPECIES_SLOWKING:
            return slowpoke_eggmoves;
        case SPECIES_ABRA:
        case SPECIES_KADABRA:
        case SPECIES_ALAKAZAM:
            return abra_eggmoves;
        case SPECIES_ESPURR:
        case SPECIES_MEOWSTIC:
            return espurr_eggmoves;
        case SPECIES_COTTONEE:
        case SPECIES_WHIMSICOTT:
            return cottonee_eggmoves;
        case SPECIES_PETILIL:
        case SPECIES_LILLIGANT:
            return petilil_eggmoves;
        case SPECIES_SHROOMISH:
        case SPECIES_BRELOOM:
            return shroomish_eggmoves;
        case SPECIES_SWABLU:
        case SPECIES_ALTARIA:
            return swablu_eggmoves;
        case SPECIES_MURKROW:
        case SPECIES_HONCHKROW:
            return murkrow_eggmoves;
        case SPECIES_CLEFFA:
        case SPECIES_CLEFAIRY:
        case SPECIES_CLEFABLE:
            return cleffa_eggmoves;
        case SPECIES_RIOLU:
        case SPECIES_LUCARIO:
            return riolu_eggmoves;
        case SPECIES_MACHOP:
        case SPECIES_MACHOKE:
        case SPECIES_MACHAMP:
            return machop_eggmoves;
        case SPECIES_SHINX:
        case SPECIES_LUXIO:
        case SPECIES_LUXRAY:
            return shinx_eggmoves;
        case SPECIES_LITLEO:
        case SPECIES_PYROAR:
            return litleo_eggmoves;
        case SPECIES_HOUNDOUR:
        case SPECIES_HOUNDOOM:
            return houndour_eggmoves;
        case SPECIES_WINGULL:
        case SPECIES_PELIPPER:
            return wingull_eggmoves;
        case SPECIES_TENTACOOL:
        case SPECIES_TENTACRUEL:
            return tentacool_eggmoves;
        case SPECIES_REMORAID:
        case SPECIES_OCTILLERY:
            return remoraid_eggmoves;
        case SPECIES_INKAY:
        case SPECIES_MALAMAR:
            return inkay_eggmoves;
        case SPECIES_DWEBBLE:
        case SPECIES_CRUSTLE:
            return dwebble_eggmoves;
        case SPECIES_SKRELP:
        case SPECIES_DRAGALGE:
            return skrelp_eggmoves;
        case SPECIES_TRUBBISH:
        case SPECIES_GARBODOR:
            return trubbish_eggmoves;
        case SPECIES_CROAGUNK:
        case SPECIES_TOXICROAK:
            return croagunk_eggmoves;
        case SPECIES_SKORUPI:
        case SPECIES_DRAPION:
            return skorupi_eggmoves;
        case SPECIES_CARNIVINE:
            return carnivine_eggmoves;
        case SPECIES_GOOMY:
        case SPECIES_SLIGGOO:
        case SPECIES_GOODRA:
            return goomy_eggmoves;
        case SPECIES_MUDBRAY:
        case SPECIES_MUDSDALE:
            return mudbray_eggmoves;
        case SPECIES_GASTLY:
        case SPECIES_HAUNTER:
        case SPECIES_GENGAR:
            return gastly_eggmoves;
        case SPECIES_DUSKULL:
        case SPECIES_DUSCLOPS:
        case SPECIES_DUSKNOIR:
            return duskull_eggmoves;
        case SPECIES_NOIBAT:
        case SPECIES_NOIVERN:
            return noibat_eggmoves;
        case SPECIES_DUNSPARCE:
            return dunsparce_eggmoves;
        case SPECIES_MIENFOO:
        case SPECIES_MIENSHAO:
            return mienfoo_eggmoves;
        case SPECIES_BLITZLE:
        case SPECIES_ZEBSTRIKA:
            return blitzle_eggmoves;
        case SPECIES_PONYTA:
        case SPECIES_RAPIDASH:
            return ponyta_eggmoves;
        case SPECIES_HERACROSS:
            return heracross_eggmoves;
        case SPECIES_SCYTHER:
        case SPECIES_SCIZOR:
            return scyther_eggmoves;
        case SPECIES_EEVEE:
        case SPECIES_VAPOREON:
        case SPECIES_JOLTEON:
        case SPECIES_FLAREON:
        case SPECIES_ESPEON:
        case SPECIES_UMBREON:
        case SPECIES_LEAFEON:
        case SPECIES_GLACEON:
        case SPECIES_SYLVEON:
            return eevee_eggmoves;
        case SPECIES_ROCKRUFF:
        case SPECIES_LYCANROC:
            return rockruff_eggmoves;
        case SPECIES_GEODUDE:
        case SPECIES_GRAVELER:
        case SPECIES_GOLEM:
            return geodude_eggmoves;
        case SPECIES_ANORITH:
        case SPECIES_ARMALDO:
            return anorith_eggmoves;
        case SPECIES_LILEEP:
        case SPECIES_CRADILY:
            return lileep_eggmoves;
        case SPECIES_CHINCHOU:
        case SPECIES_LANTURN:
            return chinchou_eggmoves;
        case SPECIES_SPHEAL:
        case SPECIES_SEALEO:
        case SPECIES_WALREIN:
            return spheal_eggmoves;
        case SPECIES_PAWNIARD:
        case SPECIES_BISHARP:
            return pawniard_eggmoves;
        case SPECIES_SCRAGGY:
        case SPECIES_SCRAFTY:
            return scraggy_eggmoves;
        case SPECIES_GLIGAR:
        case SPECIES_GLISCOR:
            return gligar_eggmoves;
        case SPECIES_SKIDDO:
        case SPECIES_GOGOAT:
            return skiddo_eggmoves;
        case SPECIES_DRAMPA:
            return drampa_eggmoves;
        case SPECIES_LARVITAR:
        case SPECIES_PUPITAR:
        case SPECIES_TYRANITAR:
            return larvitar_eggmoves;
        case SPECIES_SALANDIT:
        case SPECIES_SALAZZLE:
            return salandit_eggmoves;
        case SPECIES_SANDILE:
        case SPECIES_KROKOROK:
        case SPECIES_KROOKODILE:
            return sandile_eggmoves;
        case SPECIES_SIGILYPH:
            return sigilyph_eggmoves;
        case SPECIES_MARACTUS:
            return maractus_eggmoves;
        case SPECIES_CACNEA:
        case SPECIES_CACTURNE:
            return cacnea_eggmoves;
        case SPECIES_SHUCKLE:
            return shuckle_eggmoves;
        case SPECIES_SLUGMA:
        case SPECIES_MAGCARGO:
            return slugma_eggmoves;
        case SPECIES_TORKOAL:
            return torkoal_eggmoves;
        case SPECIES_TURTONATOR:
            return turtonator_eggmoves;
        case SPECIES_LARVESTA:
        case SPECIES_VOLCARONA:
            return larvesta_eggmoves;
        case SPECIES_SWIRLIX:
        case SPECIES_SLURPUFF:
            return swirlix_eggmoves;
		case SPECIES_SNUBBULL:
		case SPECIES_GRANBULL:
			return snubbull_eggmoves;
        case SPECIES_TOGEDEMARU:
            return togedemaru_eggmoves;
        case SPECIES_SANDYGAST:
        case SPECIES_PALOSSAND:
            return sandygast_eggmoves;
        case SPECIES_LITWICK:
        case SPECIES_LAMPENT:
        case SPECIES_CHANDELURE:
            return litwick_eggmoves;
        case SPECIES_HONEDGE:
        case SPECIES_DOUBLADE:
        case SPECIES_AEGISLASH:
            return honedge_eggmoves;
        case SPECIES_SPIRITOMB:
            return spiritomb_eggmoves;
        case SPECIES_MAWILE:
            return mawile_eggmoves;
        case SPECIES_GIRAFARIG:
            return girafarig_eggmoves;
        case SPECIES_MUNCHLAX:
            return munchlax_eggmoves;
        case SPECIES_SNORLAX:
            return snorlax_eggmoves;
        case SPECIES_PANCHAM:
        case SPECIES_PANGORO:
            return pancham_eggmoves;
        case SPECIES_PASSIMIAN:
            return passimian_eggmoves;
        case SPECIES_STUFFUL:
        case SPECIES_BEWEAR:
            return stufful_eggmoves;
        case SPECIES_BOUFFALANT:
            return bouffalant_eggmoves;
        case SPECIES_KANGASKHAN:
            return kangaskhan_eggmoves;
        case SPECIES_HAWLUCHA:
            return hawlucha_eggmoves;
        case SPECIES_TROPIUS:
            return tropius_eggmoves;
        case SPECIES_LAPRAS:
            return lapras_eggmoves;
        case SPECIES_SKARMORY:
            return skarmory_eggmoves;
        case SPECIES_SNEASEL:
        case SPECIES_WEAVILE:
            return sneasel_eggmoves;
        case SPECIES_SNOVER:
        case SPECIES_ABOMASNOW:
            return snover_eggmoves;
        case SPECIES_SNORUNT:
        case SPECIES_GLALIE:
        case SPECIES_FROSLASS:
            return snorunt_eggmoves;
        case SPECIES_BERGMITE:
        case SPECIES_AVALUGG:
            return bergmite_eggmoves;
        case SPECIES_DRUDDIGON:
            return druddigon_eggmoves;
        case SPECIES_DRILBUR:
        case SPECIES_EXCADRILL:
            return drilbur_eggmoves;
        case SPECIES_GIBLE:
        case SPECIES_GABITE:
        case SPECIES_GARCHOMP:
            return gible_eggmoves;
        case SPECIES_DRATINI:
        case SPECIES_DRAGONAIR:
        case SPECIES_DRAGONITE:
            return dratini_eggmoves;
        case SPECIES_COMBEE:
        case SPECIES_VESPIQUEN:
        case SPECIES_STARYU:
        case SPECIES_STARMIE:
        case SPECIES_TYNAMO:
        case SPECIES_EELEKTRIK:
        case SPECIES_EELEKTROSS:
        case SPECIES_MAGNEMITE:
        case SPECIES_MAGNETON:
        case SPECIES_MAGNEZONE:
        case SPECIES_DHELMISE:
        case SPECIES_ROTOM:
        case SPECIES_CRYOGONAL:
        case SPECIES_PORYGON:
        case SPECIES_PORYGON2:
        case SPECIES_PORYGONZ:
        case SPECIES_GOLETT:
        case SPECIES_GOLURK:
        case SPECIES_BELDUM:
        case SPECIES_METANG:
        case SPECIES_METAGROSS:
        case SPECIES_LATIAS:
        case SPECIES_LATIOS:
        case SPECIES_HEATRAN:
        case SPECIES_DEOXYS:
        case SPECIES_JIRACHI:
        case SPECIES_DARKRAI:
        default:
            return NULL;
    };
}
