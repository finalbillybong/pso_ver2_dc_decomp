# Classes

PSO's game code is C++ (CodeWarrior), built on a small object engine shared with the GameCube version. Every
game object, from an enemy or a door to a menu window or the network protocol, is a `TObject` subclass with a
vtable and a class-name string. That makes classes the most reliable way to find your way around the game code.
This page lists the 730 classes recovered so far: constructor, destructor, vtable, size and parent where known.

The class names are the game's own: they are strings stored in each object. Method names (`_ctor`, `_dtor`,
`_update`, `_render`, `_vNN`) are proposals; see [SYSTEMS.md](SYSTEMS.md) for conventions and confidence, and
look any address up with `python3 tools/names.py ADDRESS`. Nothing here has been renamed in `src/` yet.


## Method

- **Object layout** (shared with the GameCube engine, per [newserv](https://github.com/fuzziqersoftware/newserv) `src/PSOGCObjectGraph.cc`): `+0x00` class-name `char*`, `+0x04` u16 flags, `+0x08`/`+0x0c` sibling links, `+0x10` parent, `+0x14` first child, `+0x18` vtable. The repo already models this as `tag` / `dispatch` in many headers.
- **Vtable layout**: two header words (zero: CodeWarrior type-info / this-adjust), then slots. Slot 0 = destroy (virtual destructor, takes a delete flag), 1 = update, 2 = render, 3 = render_shadow; slot 4 in the TObject base is a debug-print hook (0x8c033470 → 0x8c011efc).
- **Constructor rule**: a function that stores exactly one vtable address and exactly one class-name string (directly, or via a pointer slot holding the string address) is that class's constructor. The parent is the class whose constructor it calls. CodeWarrior constructors called with `this == NULL` allocate the object themselves, so some DAT-table entries point straight at a constructor.
- **Size**: the value each constructor stores in the u16 at `+0x1e` (the engine records every object's size there; e.g. TObjEnemy ctor writes 0x390). Where that store is not a simple immediate, the size passed to the heap allocator `0x8c122700` by a factory is shown with `*`. Cross-check: the two agree for 336 of 347 classes where both are known; the 11 differences are factories that allocate a larger derived object (e.g. TObjEnemyCustom 0x3a8 vs subclass allocations 0x3ac-0x52c).
- Vtables are taken from `src/data/vtables_*.c` where present, otherwise detected in the image (two zero words followed by code pointers).

## Counts

- Named classes (vtable + name string + constructor): **730** (726 distinct names; a few names have several vtables, e.g. per-variant effect classes).
- Classes with a recovered parent: 304; root classes in this forest: 426.
- Vtables referenced by code but with no class-name string in the storing function: 418 (listed at the end; mostly intermediate bases and dtors).
- Classes with a known size: 721 (from the +0x1e size field) plus 2 more from allocator calls.

## Core base classes

| Class | Vtable | Slots | Ctor | Notes |
|---|---|---|---|---|
| TObject | `0x8c261580` | 5 | `0x8c0330e4` | root of every game object; ctor links into parent/child lists; 364 callers of the ctor |
| (unnamed) | `0x8c2612d8` | 14 | `0x8c01d1ec` | unnamed 14-slot base built on TObject (ctor 0x8c01d1ec, 58 callers; repo calls it shared_object); slots 5-13 are the common extension used by 500+ vtables |
| TObjEnemy | `0x8c260fd8` | 89 | `0x8c012008` | enemy base (89 slots); most TObjEne* derive from it or from TObjEnemyCustom |
| TObjPlayer | `0x8c261318` | 87 | `0x8c01e920`, `0x8c01ef50`, `0x8c01f4f0` | player object (87 slots); 3 ctors |
| TObjControl | `0x8c260fbc` | 5 | `0x8c0130ac` | controller/NPC base (5 slots) |
| TObjCollision | `0x8c260ecc` | 15 | `0x8c0102e4` | collision object (DAT object type 0x0009, factory 0x8c0104a0) |
| TScene | `0x8c2614bc` | 5 | `0x8c031358` | scene base (5 slots) |
| TGameProtocol | `0x8c2615b8` | 5 | `0x8c036a0c` | network game protocol object; owns the subcommand dispatchers 0x8c036b4c/0x8c036c38/0x8c036d04 |

TObject vtable `0x8c261580`: slot 0 `0x8c03311c` (TObject_dtor), slot 1 `0x8c0111c4` (operation_8c0111c4), slot 2 `0x8c0111c8` (operation_8c0111c8), slot 3 `0x8c0111cc` (operation_8c0111cc), slot 4 `0x8c033470` (hierarchy_output/target_at).

## Hierarchy (classes with recovered parent links)

Indented by inheritance; only parents proven by a constructor call are shown.

```
TBoss4Zako  vt=0x8c275370 slots=89 size=0x3e0
  TBoss4Bishi  vt=0x8c275098 slots=89 size=0x3e0
  TBoss4Uro  vt=0x8c275204 slots=89 size=0x3ec
TItemObject  vt=0x8c267d80 slots=43 size=0x148
  TItemObjHpRecover  vt=0x8c27dbd0 slots=43 size=0x148
  TItemObjMagChanger  vt=0x8c27e3a8 slots=43 size=0x148
  TItemObjMoonAtomizer  vt=0x8c27e2f4 slots=43 size=0x148
  TItemObjRecovery  vt=0x8c27e240 slots=43 size=0x148
  TItemObjSolAtomizer  vt=0x8c27e18c slots=43 size=0x148
  TItemObjStarAtomizer  vt=0x8c27e0d8 slots=43 size=0x148
  TItemObjStatusUp  vt=0x8c27e024 slots=43 size=0x148
  TItemObjTpRecover  vt=0x8c27de08 slots=43 size=0x148
  TItemObjTrapVision  vt=0x8c27dd54 slots=43 size=0x148
  TItemObjWpnPowerUp  vt=0x8c27dc84 slots=43 size=0x148
TODragonfly  vt=0x8c26cc80 slots=16 size=0x138
  TOButterflyDF  vt=0x8c2773ec slots=16 size=0x138
  TODragonflyMachine01  vt=0x8c275c04 slots=16 size=0x140
TOExplosiveMachine  vt=0x8c27589c slots=14 size=0xb0
  TOExplosiveMachine01  vt=0x8c27585c slots=14 size=0xb0
  TOExplosiveMachine02  vt=0x8c27581c slots=14 size=0xb0
  TOExplosiveMachine03  vt=0x8c2757dc slots=14 size=0xb0
TOKey  vt=0x8c269c48 slots=25 size=0x11c
  TLazerFenceSw  vt=0x8c269cb4 slots=25 size=0x144
  TOKeyAncient01  vt=0x8c269d8c slots=25 size=0x11c
  TOKeyAncient02  vt=0x8c269d20 slots=25 size=0x124
  TOKeyAncient03  vt=0x8c26cf24 slots=25 size=0x130
  TOKeyCave01  vt=0x8c26ce58 slots=25 size=0x130
  TOKeyGenericSw  vt=0x8c26cb6c slots=25
  TOKeyMachine01  vt=0x8c26f7f8 slots=25 size=0x130
  TOSensor  vt=0x8c26eecc slots=25 size=0x11c
    TOSensorAncient01  vt=0x8c26ef38 slots=25 size=0x12c
    TOSensorGeneral01  vt=0x8c26efa4 slots=25 size=0x128
  TOSwitchItem  vt=0x8c281618 slots=25 size=0x12c
  TObjDoorKey  vt=0x8c264504 slots=25 size=0x130
TOMine  vt=0x8c269238 slots=100 size=0x390
  TOMineIcon01  vt=0x8c26d524 slots=100 size=0x390
  TOMineIcon02  vt=0x8c26d6bc slots=100 size=0x390
  TOMineIcon03  vt=0x8c26d854 slots=100 size=0x390
  TOMineTrap  vt=0x8c2690a0 slots=100 size=0x398
TOTrap  vt=0x8c26dc40 slots=94 size=0x360
  TOTrapAncient01  vt=0x8c26ddc0 slots=94 size=0x390
  TOTrapAncient02  vt=0x8c26e2dc slots=94 size=0x374
    TOTrapAncient02R  vt=0x8c26e15c slots=94 size=0x384
TOVS2  vt=0x8c27db88 slots=16 size=0x108
  TOVS2Wreck01  vt=0x8c27db40 slots=16 size=0x108
  TOVS2Wreck02  vt=0x8c27daf8 slots=16 size=0x108
  TOVS2Wreck03  vt=0x8c27dab0 slots=16 size=0x108
  TOVS2Wreck04  vt=0x8c27da68 slots=16 size=0x108
  TOVS2Wreck05  vt=0x8c27da20 slots=16 size=0x108
TOWreckAncient  vt=0x8c26843c slots=15 size=0xec
  TOWreckAncient02  vt=0x8c268480 slots=15 size=0xec
  TOWreckAncient03  vt=0x8c2684c4 slots=15 size=0xec
TObjContainerBase  vt=0x8c264d1c slots=89 size=0x384
  TOContainerAncientEnemy  vt=0x8c277788 slots=89 size=0x384
    TOContainerAncientEnemyCommon  vt=0x8c27761c slots=89 size=0x384
  TObjContainerAbeEnemy  vt=0x8c264600 slots=89 size=0x384
  TObjContainerBase  vt=0x8c26476c slots=89 size=0x384
  TObjContainerEnemy  vt=0x8c264a44 slots=89 size=0x384
  TObjContainerItem  vt=0x8c264bb0 slots=89 size=0x384
  TObjContainerNoItem  vt=0x8c2648d8 slots=89 size=0x384
TObjEneBalClaw  vt=0x8c26a220 slots=89 size=0x3e0
  TObjEneBalClawBody  vt=0x8c26c004 slots=89 size=0x420
TObjEneDD  vt=0x8c2627b8 slots=109 size=0x3a8
  TBoss2Joint  vt=0x8c2702dc slots=111 size=0x3d8
    TBoss2DeRolLe  vt=0x8c26df5c slots=112 size=0x77c
  TBoss2Mine  vt=0x8c26fcec slots=116 size=0x40c
  TObjEneBm3FlyNest  vt=0x8c262418 slots=111 size=0x4a4
TObjEnemyCustom  vt=0x8c266608 slots=89 size=0x3a8
  TBoss3Volopt  vt=0x8c26d0e0 slots=89 size=0x424
  TBoss3VoloptHiraisin  vt=0x8c26e688 slots=89 size=0x3ac
  TBoss3VoloptMonitor  vt=0x8c26e7f4 slots=89 size=0x3b0
  TBoss3VoloptP01  vt=0x8c26d3b8 slots=89 size=0x434
  TObjEneDarkGunner  vt=0x8c263e38 slots=89 size=0x448
  TObjEneDubchik  vt=0x8c266d58 slots=89 size=0x438
  TObjEneGyaranzo  vt=0x8c2698e8 slots=89 size=0x420
  TObjVoloptCage  vt=0x8c26ec94 slots=89 size=0x3b0
TObjHashiBase  vt=0x8c26a014 slots=16 size=0x10c
  TObjHashiVersus2  vt=0x8c269f3c slots=16 size=0x10c
TObjMesBase  vt=0x8c2747ac slots=17 size=0xf0
  TMotorcycle  vt=0x8c2643f0 slots=17 size=0xf4
  TObjComputer  vt=0x8c264e88 slots=17 size=0xf0
TObject  vt=0x8c261580 slots=5 size=0x20
  TAdBack  vt=0x8c2728dc slots=5 size=0x40
  TAdDrawLineCtrl  vt=0x8c278ba0 slots=5 size=0x2c
  TAdDrawLineTask  vt=0x8c278bbc slots=5 size=0xb4
  TAdFloorLoad  vt=0x8c2780b0 slots=5 size=0x44
  TAdGuideButton  vt=0x8c274b84 slots=5 size=0xe4
  TAdHunLicence  vt=0x8c281da8 slots=5 size=0x234
  TAdLoadQuest  vt=0x8c2767e0 slots=5 size=0x30
  TAdPSOConv  vt=0x8c281d00 slots=5 size=0x30
  TAdPSOPlay  vt=0x8c281b68 slots=5 size=0x234
  TAdRicoRing  vt=0x8c278e68 slots=5 size=0x74
  TAdSEGAlogo  vt=0x8c277ef0 slots=5 size=0x24
  TAdSoniclogo  vt=0x8c277f0c slots=5 size=0x24
  TAdTitle  vt=0x8c272994 slots=5 size=0xac
  TBoss1DragonColli  vt=0x8c272914 slots=5 size=0x2c
  TBoss1DragonEffBreath  vt=0x8c263e00 slots=5 size=0x3c
  TBoss1DragonEffBullet  vt=0x8c26412c slots=5 size=0x4c
  TBoss2LaserLight  vt=0x8c272090 slots=5 size=0x48
  TBoss2PhotonPad  vt=0x8c26ff3c slots=5 size=0x3c
  TBoss2Tentacle  vt=0x8c26df40 slots=5 size=0x15c
  TBoss3VoloptCtrl  vt=0x8c278074 slots=5 size=0x24
  TBoss4Zanzo  vt=0x8c274c1c slots=5 size=0x50
  TBreakUpMdl  vt=0x8c2668a4 slots=5 size=0x58
  TCameraCtrl  vt=0x8c265ad4 slots=5 size=0xf8
  TChallenge  vt=0x8c279200 slots=5 size=0x78
  TCharaMaking  vt=0x8c26159c slots=5 size=0x28
  TCineCtrl  vt=0x8c274b68 slots=5 size=0x34
  TDLGraph  vt=0x8c281ce4 slots=5 size=0x40
  TDeadSpot  vt=0x8c2698cc slots=5 size=0xcc
  TDuelEffectCtrl  vt=0x8c27e49c slots=5 size=0x28
  TDuelEffectNumber  vt=0x8c27e4b8 slots=5 size=0x34
  TDuelEffectString  vt=0x8c27e4d4 slots=5 size=0x34
  TEF_PvrWave  vt=0x8c265960 slots=5 size=0x74
  TEditor  vt=0x8c261b58 slots=8 size=0x3c
    TFogEditor  vt=0x8c269e6c slots=8 size=0x840
    TGroupEditor  vt=0x8c2662d0 slots=8 size=0x9c
      TGroupEnemySetEditor  vt=0x8c265304 slots=8 size=0x110
      TGroupSetEditor  vt=0x8c2652dc slots=8 size=0x110
    TLightEditor  vt=0x8c26cdd0 slots=8 size=0x84
    TParticleEditor  vt=0x8c265cb0 slots=8 size=0x88
    TQuestScriptChecker  vt=0x8c2745f8 slots=8 size=0x94
    TSeqVarsEdit  vt=0x8c270978 slots=8 size=0x54
    TSetEvtScriptTest  vt=0x8c2720c8 slots=8 size=0x84
  TEffStarLight2D  vt=0x8c27cee4 slots=5 size=0x50
  TEffStarLightChild  vt=0x8c27cf00 slots=5 size=0x34
  TEffect  vt=0x8c2659d8 slots=5 size=0x74
  TEneEffHamon  vt=0x8c264204 slots=5 size=0x64
  TEnemyTaskList  vt=0x8c269e50 slots=5 size=0x30
  TFog  vt=0x8c261160 slots=5 size=0x20
  TFogCtrl  vt=0x8c26b320 slots=5 size=0x20
  TFogCtrl_EOR  vt=0x8c26b304 slots=5 size=0x20
  TFontSmallHelp  vt=0x8c274838 slots=5 size=0x58
  TFontSmallTask  vt=0x8c268060 slots=5 size=0x50
  TForceOperate  vt=0x8c2618d4 slots=5 size=0x20
  TGameProtocol  vt=0x8c2615b8 slots=5 size=0x24
  THunterGuildSeqOnlineTask  vt=0x8c27811c slots=5 size=0x20
  TItemAttacker  vt=0x8c27673c slots=5 size=0x54
  TItemDisconnectCtrl  vt=0x8c281dc4 slots=5 size=0x20
  TItemDownLoad  vt=0x8c2788d4 slots=5 size=0x40
  TItemDrop  vt=0x8c278350 slots=5 size=0x28
  TItemDropSub  vt=0x8c281af4 slots=5 size=0x24
  TItemEffArmor  vt=0x8c272228 slots=5 size=0x80
  TItemEffArmorParticle  vt=0x8c281268 slots=5 size=0x2c
  TItemEffDevilCane  vt=0x8c27a270 slots=5 size=0x2c
  TItemEffFireWand  vt=0x8c27a790 slots=5 size=0x2c
  TItemEffFlame  vt=0x8c276668 slots=5 size=0x2c
  TItemEffFreezeBeam  vt=0x8c27aaa8 slots=5 size=0x2c
  TItemEffHeaven  vt=0x8c276684 slots=5 size=0x50
  TItemEffLandHit  vt=0x8c2766a0 slots=5 size=0x40
  TItemEffShield  vt=0x8c2767fc slots=5 size=0x50
  TItemEffectWeapon  vt=0x8c26308c slots=5 size=0x30
  TItemEquipBase  vt=0x8c278154 slots=48 size=0x1d8
    TItemProArmor  vt=0x8c267cb8 slots=48 size=0x1e0
      TItemProArmorParticle  vt=0x8c281284 slots=48 size=0x1ec
      TItemProArmorRecalc  vt=0x8c28134c slots=48 size=0x1e0
    TItemProShield  vt=0x8c267e34 slots=48 size=0x1e4
      TItemProShieldModel  vt=0x8c2810d8 slots=48 size=0x1e8
        TItemProShieldModel2  vt=0x8c281010 slots=48 size=0x1e8
      TItemProShieldRecalc  vt=0x8c2811a0 slots=48 size=0x1e4
    TItemProUnit  vt=0x8c271d1c slots=48 size=0x20c
  TItemList  vt=0x8c2701cc slots=5 size=0x24
  TItemLoad  vt=0x8c27282c slots=5 size=0x20
  TItemLockCountCtrl  vt=0x8c278948 slots=5 size=0x30
  TItemMagGrowEff  vt=0x8c278020 slots=5 size=0x2c
  TItemMagSub  vt=0x8c27803c slots=5 size=0xec
  TItemMenuCtrl  vt=0x8c281a04 slots=5 size=0x24
  TItemObjectTV  vt=0x8c27dd38 slots=5 size=0x24
  TItemReverseTech  vt=0x8c281c6c slots=5 size=0x2c
  TItemReverseTechCtrl  vt=0x8c281bfc slots=5 size=0x24
  TItemReverseTechPart1  vt=0x8c281c50 slots=5 size=0x38
  TItemReverseTechPart2  vt=0x8c281c34 slots=5 size=0x15c
  TItemShoot  vt=0x8c2748d4 slots=6 size=0x5c
    TItemEffBringer  vt=0x8c27662c slots=6 size=0x94
    TItemShootModel  vt=0x8c2748b4 slots=6 size=0x64
      TItemEffLavis  vt=0x8c2766bc slots=6 size=0x64
      TItemShootBasyoSen2  vt=0x8c27d054 slots=6 size=0x64
      TItemShootDorillArm  vt=0x8c27a380 slots=6 size=0x64
      TItemShootFast  vt=0x8c27a67c slots=6 size=0x68
      TItemShootRocketPunch  vt=0x8c27bfbc slots=6 size=0x64
      TItemShootRocketPunchON  vt=0x8c27f478 slots=6 size=0x64
      TItemShootWindCane  vt=0x8c27921c slots=6 size=0x64
    TItemShootParticle  vt=0x8c274894 slots=6 size=0x68
  TItemTexLoad  vt=0x8c278e30 slots=5 size=0x44
  TItemTimer  vt=0x8c274790 slots=5 size=0x2c
  TItemTimerEvent  vt=0x8c278aa8 slots=7 size=0x30
  TLoadCtrl  vt=0x8c2721f0 slots=5 size=0x20
  TLoadingCur  vt=0x8c27220c slots=5 size=0x60
  TLobby  vt=0x8c261278 slots=5 size=0x20
  TLockOnCursor  vt=0x8c2676f0 slots=5 size=0x470
  TMainCursor  vt=0x8c2676d4 slots=5 size=0x68
  TMapCsnCtrl  vt=0x8c272f0c slots=5 size=0x820
  TMedicalCenterMes  vt=0x8c269a54 slots=5 size=0x24
  TMemberCheck  vt=0x8c27e9b4 slots=5 size=0x84
  TMovie  vt=0x8c265288 slots=5 size=0x6c
  TNECFontEORFunction  vt=0x8c261e78 slots=5 size=0x20
  TNowLoading  vt=0x8c2721d4 slots=5 size=0x40
  TOChatSensorFolder  vt=0x8c281c88 slots=5 size=0x20
  TODummyKeyCave01Sound  vt=0x8c281a20 slots=5 size=0x28
  TOSwitchAttackSub  vt=0x8c281a7c slots=5 size=0x34
  TObjAfsLoad  vt=0x8c26dbd0 slots=5 size=0x3c
  TObjBGLifeGame  vt=0x8c272868 slots=5 size=0x664
  TObjBagWarnWin  vt=0x8c27d62c slots=5 size=0xa8
  TObjBgmColCtrl  vt=0x8c274674 slots=5 size=0x24
  TObjBoss1Floor  vt=0x8c263e1c slots=5 size=0x3c
  TObjBoss1MokoHill_Solo  vt=0x8c266d04 slots=5 size=0x54
  TObjBoss1MokoHill_SoloM  vt=0x8c266d20 slots=5 size=0x44
  TObjBoss2Dust  vt=0x8c274be4 slots=5 size=0x34
  TObjBoss2RaftSplash  vt=0x8c272058 slots=5 size=0x44
  TObjBoss2Tunnel  vt=0x8c26e124 slots=5 size=0xe0
  TObjBs4CutAtk  vt=0x8c27507c slots=5 size=0x2c
  TObjCHTimeWin  vt=0x8c280244 slots=5 size=0x24
  TObjCMCheck  vt=0x8c281e50 slots=5 size=0xc4
  TObjCMHexTile  vt=0x8c265714 slots=5 size=0x58
  TObjCMIcon  vt=0x8c2728a0 slots=5 size=0x20
  TObjCMLoadAfsTextureReq  vt=0x8c26dc08 slots=5 size=0x1d8
  TObjCMLoadPlDataReq  vt=0x8c26dbec slots=5 size=0x94
  TObjCMSprCharSelBG  vt=0x8c272884 slots=5 size=0x3c
  TObjChip  vt=0x8c264f98 slots=5 size=0x78
  TObjCityAirCar_Ctrl  vt=0x8c27591c slots=5 size=0x7c
  TObjCity_Season_FireWork  vt=0x8c276ef4 slots=5 size=0x44
  TObjControl  vt=0x8c260fbc slots=5 size=0x24
  TObjDFJisin  vt=0x8c278504 slots=5 size=0x30
  TObjDFRecBall  vt=0x8c27853c slots=5 size=0x50
  TObjDFRecover  vt=0x8c278558 slots=5 size=0x48
  TObjDFTenchuFuru  vt=0x8c278574 slots=5 size=0x34
  TObjDFYutai  vt=0x8c278388 slots=5 size=0x30
  TObjDeadListWin  vt=0x8c281e18 slots=5 size=0x6c
  TObjEZBoneRotBase  vt=0x8c2652c0 slots=5 size=0x9c
  TObjEZRopeBase  vt=0x8c266314 slots=5 size=0x34
  TObjEneBm3FlyNest_CarryFly  vt=0x8c2625dc slots=5 size=0x6c
  TObjEneDf2Bringer_Eff_Rush  vt=0x8c26972c slots=5 size=0x38
  TObjEneDf2Bringer_Eff_TpAbsorb1  vt=0x8c269710 slots=5 size=0x104
  TObjEneDf2Bringer_Eff_TpAbsorb1  vt=0x8c2696f4 slots=5 size=0x58
  TObjEneMe1Canadin_EffDischarge  vt=0x8c266c94 slots=5 size=0x6c
  TObjEneMe1Canadin_EffLine  vt=0x8c266cb0 slots=5 size=0x4c
  TObjEneMe1Canadin_EffLineFade  vt=0x8c266ce8 slots=5 size=0x40
  TObjEneRe2Flower_EffCurse3  vt=0x8c262b8c slots=5 size=0x2c
  TObjFogCollision_Manager  vt=0x8c26cf90 slots=5 size=0x24
  TObjHexLine  vt=0x8c281888 slots=5 size=0x24
  TObjHexLine  vt=0x8c28186c slots=5 size=0xa4
  TObjItemNameEntry  vt=0x8c270220 slots=5 size=0x28
  TObjItemNameSelect  vt=0x8c270204 slots=5 size=0x28
  TObjItemOKWindow  vt=0x8c2701e8 slots=5 size=0x6c
  TObjLoadGmPlNjReq  vt=0x8c26dc24 slots=5 size=0x7c
  TObjNewFloorWin  vt=0x8c280228 slots=5 size=0x3c
  TObjRain  vt=0x8c2642e8 slots=5 size=0xfc
  TObjRainCtrl  vt=0x8c264348 slots=5 size=0x24
  TObjResultWin  vt=0x8c281ad8 slots=5 size=0x160
  TObjSoloPlayWin  vt=0x8c281d8c slots=5 size=0x2c
  TObjTagChallenge  vt=0x8c281d1c slots=5 size=0x20
  TObjTailsTailsMove  vt=0x8c281dfc slots=5 size=0x30
  TObjVoloptShutter  vt=0x8c26ee88 slots=5 size=0x38
  TObjWarnChime  vt=0x8c281be0 slots=5 size=0x3c
  TParticleCtrl  vt=0x8c265c94 slots=5 size=0x68
  TPlayerBattleCtrl  vt=0x8c27ccdc slots=5 size=0x274
  TPlyItem  vt=0x8c2701a4 slots=5 size=0x1b4
  TPlyOnCountOver  vt=0x8c2618f0 slots=5 size=0x28
  TPlyOnCreated  vt=0x8c26190c slots=5 size=0x28
  TQuestColCtrl  vt=0x8c272a28 slots=5 size=0x20
  TQuestThread  vt=0x8c270258 slots=5 size=0xa8
  TQuestThreadBoard  vt=0x8c27023c slots=5 size=0xa8
  TQuestVmDownLoadServer  vt=0x8c278ea4 slots=5 size=0x9c
  TRaderPlayer  vt=0x8c2695b8 slots=5 size=0x3c
  TScene  vt=0x8c2614bc slots=5 size=0x44
  TSetEvtDestroy  vt=0x8c2720f0 slots=5 size=0x38
  TSetManager  vt=0x8c265904 slots=5 size=0x24
  TShopWindowBase  vt=0x8c2697e8 slots=6 size=0x2c
    TQuestListOffline  vt=0x8c26ec4c slots=6 size=0x5c
    TQuestListVM  vt=0x8c278928 slots=6 size=0x22f8
    TShopArmorListWindow  vt=0x8c2721b4 slots=6 size=0x1f8
    TShopEquipmentListWindow  vt=0x8c269778 slots=6 size=0x194
    TShopEquipmentSellWindow  vt=0x8c269808 slots=6 size=0x3ac
    TShopGetItemWindow  vt=0x8c2745d8 slots=6 size=0x68
    TShopItemListWindow  vt=0x8c272194 slots=6 size=0x1c4
    TShopSequence  vt=0x8c2697c0 slots=8 size=0x2c
      TCheckRoomSequence  vt=0x8c26eea4 slots=8 size=0x4c
      THunterGuildSeqOffline  vt=0x8c26ec6c slots=8 size=0x40
      THunterGuildSeqOnline_Client  vt=0x8c2780cc slots=8 size=0x40
      THunterGuildSeqOnline_Server  vt=0x8c2780f4 slots=8 size=0x44
      TJudgmentSequence  vt=0x8c27210c slots=8 size=0x34
      TMedicalCenterSequence  vt=0x8c269a70 slots=8 size=0x38
      TShopEquipmentGearSequence  vt=0x8c269bf8 slots=8 size=0x38
      TShopEquipmentSequence  vt=0x8c269798 slots=8 size=0x38
      TShopItemTecSequence  vt=0x8c269c20 slots=8 size=0x38
  TSlicerHistory  vt=0x8c26d084 slots=5 size=0x5c
  TTecZondeEff  vt=0x8c266f08 slots=5 size=0x298
  TWindowChat  vt=0x8c277354 slots=5 size=0x3c
  TWindowCtrl  vt=0x8c26772c slots=5 size=0xb8
  TWindowCtrlMain  vt=0x8c27563c slots=5 size=0x20
  TWindowCtrlMainKiller  vt=0x8c275620 slots=5 size=0x20
  TWindowDD  vt=0x8c27821c slots=5 size=0x108
  TWindowEff  vt=0x8c278db4 slots=5 size=0x48
  TWindowGetComCard  vt=0x8c278138 slots=5 size=0x30
  TWindowMainMenu  vt=0x8c272630 slots=5 size=0x9c
  TWindowMakeTeam  vt=0x8c277ea4 slots=5 size=0x3c
  TWindowOptionCtrl  vt=0x8c278b84 slots=5 size=0x38
  TWindowSetLevelUp  vt=0x8c278b68 slots=5 size=0x40
  TWindowShortListCtrl  vt=0x8c279030 slots=5 size=0x34
  TWindowSubComCard  vt=0x8c276e0c slots=5 size=0x84
  TWindowSubEquip  vt=0x8c276e28 slots=5 size=0x38
  TWindowSubGameEnd  vt=0x8c2728f8 slots=5 size=0x2c
  TWindowSubItem  vt=0x8c273770 slots=5 size=0x40
  TWindowSubLog  vt=0x8c2771a8 slots=5 size=0x68
  TWindowSubMag  vt=0x8c272734 slots=5 size=0x4c
  TWindowSubQuestBoard  vt=0x8c278680 slots=5 size=0x2c
  TWindowSubShortMail  vt=0x8c2782b8 slots=5 size=0x58
  TWindowSubSymbolChat  vt=0x8c276df0 slots=5 size=0x68
  TWindowSubTechnique  vt=0x8c274620 slots=5 size=0x3c
  TeneFakeTecThunderEff  vt=0x8c26526c slots=5 size=0x34c
TTecPlayerInfluence  vt=0x8c266114 slots=7 size=0xfc
  TTecAnti  vt=0x8c265da4 slots=7 size=0x15c
  TTecDeband  vt=0x8c265e4c slots=7 size=0x15c
  TTecResta  vt=0x8c2661dc slots=7 size=0x15c
  TTecSifta  vt=0x8c266244 slots=7 size=0x15c
TWindowMenu  vt=0x8c26eb64 slots=6 size=0x9c
  TWindowSubComCardList  vt=0x8c278090 slots=6 size=0xa0
TWindowMessage  vt=0x8c269f1c slots=6 size=0xa0
  TWindowMessageInfomation  vt=0x8c278b48 slots=6 size=0xa0
  TWindowMessageLog  vt=0x8c278b0c slots=6 size=0xa8
  TWindowMessagePage  vt=0x8c278ec0 slots=6 size=0xa8
  TWindowMessageQuest  vt=0x8c2782d4 slots=6 size=0xa0
TWindowRoom  vt=0x8c276854 slots=6 size=0x6c
  TWindowArea  vt=0x8c27d858 slots=6 size=0x6c
```

## All named classes

Columns: class, vtable, slot count, constructor(s), slot-0 destructor, parent(s), allocation size, DAT types.

| Class | Vtable | Slots | Ctor | Dtor (slot 0) | Parent | Size | DAT |
|---|---|---|---|---|---|---|---|
| TAdBack | `0x8c2728dc` | 5 | `0x8c198294` | `0x8c19835c` | TObject | 0x40 |  |
| TAdDrawLineCtrl | `0x8c278ba0` | 5 | `0x8c227b94` | `0x8c227c14` | TObject | 0x2c |  |
| TAdDrawLineTask | `0x8c278bbc` | 5 | `0x8c2275ac` | `0x8c227860` | TObject | 0xb4 |  |
| TAdFloorLoad | `0x8c2780b0` | 5 | `0x8c207854` | `0x8c207998` | TObject | 0x44 |  |
| TAdGuideButton | `0x8c274b84` | 5 | `0x8c1afdb4` | `0x8c1b0108` | TObject | 0xe4 |  |
| TAdHunLicence | `0x8c281da8` | 5 | `0x8c25f3f4` | `0x8c25f598` | TObject | 0x234 |  |
| TAdLoadQuest | `0x8c2767e0` | 5 | `0x8c1c7210` | `0x8c1c7288` | TObject | 0x30 |  |
| TAdPSOConv | `0x8c281d00` | 5 | `0x8c25e254` | `0x8c25e34c` | TObject | 0x30 |  |
| TAdPSOPlay | `0x8c281b68` | 5 | `0x8c25aac4` | `0x8c25ab4c` | TObject | 0x234 |  |
| TAdRicoRing | `0x8c278e68` | 5 | `0x8c22c2b8` | `0x8c22c3b4` | TObject | 0x74 |  |
| TAdSEGAlogo | `0x8c277ef0` | 5 | `0x8c1e609c` | `0x8c1e6118` | TObject | 0x24 |  |
| TAdSoniclogo | `0x8c277f0c` | 5 | `0x8c1e6300` | `0x8c1e637c` | TObject | 0x24 |  |
| TAdTitle | `0x8c272994` | 5 | `0x8c199688` | `0x8c19980c` | TObject | 0xac |  |
| TBoss1DragonColli | `0x8c272914` | 5 | `0x8c198ae8` | `0x8c198c04` | TObject | 0x2c |  |
| TBoss1DragonColli_C | `0x8c272930` | 15 | `0x8c198920` | `0x8c198a4c` |  | 0xf0 |  |
| TBoss1DragonEffBreath | `0x8c263e00` | 5 | `0x8c0789b4` | `0x8c078a5c` | TObject | 0x3c |  |
| TBoss1DragonEffBullet | `0x8c26412c` | 5 | `0x8c07bdc8` | `0x8c07be78` | TObject | 0x4c |  |
| TBoss1DragonEffTail | `0x8c264148` | 18 | `0x8c07c030` | `0x8c07c130` |  | 0x104 |  |
| TBoss2DeRolLe | `0x8c26df5c` | 112 | `0x8c143670` | `0x8c144094` | TBoss2Joint, TObject | 0x77c |  |
| TBoss2Fin | `0x8c274774` | 5 | `0x8c1aabb4` | `0x8c1aac68` |  | 0x8c |  |
| TBoss2Joint | `0x8c2702dc` | 111 | `0x8c174cd8` | `0x8c174ed0` | TObjEneDD | 0x3d8 |  |
| TBoss2LaserLight | `0x8c272090` | 5 | `0x8c185ab8` | `0x8c185b8c` | TObject | 0x48 |  |
| TBoss2Mine | `0x8c26fcec` | 116 | `0x8c16606c` | `0x8c1658c4` | TObjEneDD | 0x40c |  |
| TBoss2PhotonBullet | `0x8c26feec` | 18 | `0x8c167284` | `0x8c16737c` |  | 0x120 |  |
| TBoss2PhotonPad | `0x8c26ff3c` | 5 | `0x8c1670d8` | `0x8c167174` | TObject | 0x3c |  |
| TBoss2Tentacle | `0x8c26df40` | 5 | `0x8c14202c` | `0x8c1421e0` | TObject | 0x15c |  |
| TBoss3Volopt | `0x8c26d0e0` | 89 | `0x8c137fbc` | `0x8c1380d0` | TObjEnemyCustom | 0x424 | ene 0x00C2 |
| TBoss3VoloptCtrl | `0x8c278074` | 5 | `0x8c206c40` | `0x8c206c7c` | TObject | 0x24 |  |
| TBoss3VoloptHiraisin | `0x8c26e688` | 89 | `0x8c150384` `0x8c1505fc` | `0x8c1505b0` | TObjEnemyCustom | 0x3ac | ene 0x00C7 |
| TBoss3VoloptMonitor | `0x8c26e7f4` | 89 | `0x8c150e9c` `0x8c151248` | `0x8c15107c` | TObjEnemyCustom | 0x3b0 | ene 0x00C6 |
| TBoss3VoloptP01 | `0x8c26d3b8` | 89 | `0x8c13bf58` `0x8c13c298` | `0x8c13c24c` | TObjEnemyCustom | 0x434 | ene 0x00C3 |
| TBoss4Bishi | `0x8c275098` | 89 | `0x8c1bc800` | `0x8c1bc99c` | TBoss4Zako | 0x3e0 |  |
| TBoss4Type1 | `0x8c274da4` | 89 | `0x8c1b3644` | `0x8c1b3a18` |  | 0x49c |  |
| TBoss4Type2 | `0x8c274c38` | 89 | `0x8c1b0b74` | `0x8c1b0f60` |  | 0x474 |  |
| TBoss4Type3 | `0x8c274f10` | 89 | `0x8c1b7424` | `0x8c1b7888` |  | 0x52c |  |
| TBoss4Uro | `0x8c275204` | 89 | `0x8c1bbeb8` | `0x8c1bc008` | TBoss4Zako | 0x3ec |  |
| TBoss4Zako | `0x8c275370` | 89 | `0x8c1bb138` | `0x8c1bb528` |  | 0x3e0 |  |
| TBoss4Zanzo | `0x8c274c1c` | 5 | `0x8c1b3104` | `0x8c1b3158` | TObject | 0x50 |  |
| TBreakUpMdl | `0x8c2668a4` | 5 | `0x8c0c724c` | `0x8c0c7410` | TObject | 0x58 |  |
| TButterfly | `0x8c264ed4` | 14 | `0x8c086148` | `0x8c0861cc` |  | 0xc0 | obj 0x0086 |
| TCMCharacter | `0x8c265828` | 15 | `0x8c09aecc` | `0x8c09b0ac` |  | 0x144 |  |
| TCameraBehaiv | `0x8c265a94` | 14 | `0x8c0a1180` | `0x8c0a127c` |  | 0xa4 |  |
| TCameraCtrl | `0x8c265ad4` | 5 | `0x8c0a1448` | `0x8c0a1784` | TObject | 0xf8 |  |
| TCameraEditor | `0x8c265af0` | 8 | `0x8c0a2ed4` | `0x8c0a2f7c` |  | 0xdc |  |
| TChallenge | `0x8c279200` | 5 | `0x8c2378fc` | `0x8c237998` | TObject | 0x78 |  |
| TCharaMaking | `0x8c26159c` | 5 | `0x8c0348bc` | `0x8c034868` | TObject | 0x28 |  |
| TCheckRoomSequence | `0x8c26eea4` | 8 | `0x8c15babc` | `0x8c15bb20` | TShopSequence | 0x4c |  |
| TCineCtrl | `0x8c274b68` | 5 | `0x8c1af9c0` | `0x8c1afa0c` | TObject | 0x34 |  |
| TContainerAncient01 | `0x8c26c2dc` | 86 | `0x8c128ee4` | `0x8c12905c` |  |  |  |
| TDLGraph | `0x8c281ce4` | 5 | `0x8c25de30` | `0x8c25de80` | TObject | 0x40 |  |
| TDeadSpot | `0x8c2698cc` | 5 | `0x8c107750` | `0x8c107c8c` | TObject | 0xcc |  |
| TDuelEffectCtrl | `0x8c27e49c` | 5 | `0x8c24e6d8` | `0x8c24e714` | TObject | 0x28 |  |
| TDuelEffectNumber | `0x8c27e4b8` | 5 | `0x8c24e9c0` | `0x8c24ea2c` | TObject | 0x34 |  |
| TDuelEffectString | `0x8c27e4d4` | 5 | `0x8c24ed04` | `0x8c24ed70` | TObject | 0x34 |  |
| TEF_LensFlare | `0x8c26597c` | 14 | `0x8c09fc80` | `0x8c09fc3c` |  | 0x98 |  |
| TEF_PvrWave | `0x8c265960` | 5 | `0x8c09f398` | `0x8c09f4b8` | TObject | 0x74 |  |
| TEditor | `0x8c261b58` | 8 | `0x8c03c92c` | `0x8c03ca10` | TObject | 0x3c |  |
| TEffClitical | `0x8c2659bc` | 5 | `0x8c09fd7c` | `0x8c09fe00` |  | 0x7c |  |
| TEffGuard | `0x8c2659f4` | 5 | `0x8c0a052c` | `0x8c0a0578` |  | 0x78 |  |
| TEffHit | `0x8c265a10` | 5 | `0x8c0a064c` | `0x8c0a0698` |  | 0x78 |  |
| TEffStarLight2D | `0x8c27cee4` | 5 | `0x8c245d6c` | `0x8c245e18` | TObject | 0x50 |  |
| TEffStarLightChild | `0x8c27cf00` | 5 | `0x8c245a9c` | `0x8c245be4` | TObject | 0x34 |  |
| TEffect | `0x8c2659d8` | 5 | `0x8c0a0058` | `0x8c0a0104` | TObject | 0x74 |  |
| TEneEffHamon | `0x8c264204` | 5 | `0x8c07cc8c` | `0x8c07cd48` | TObject | 0x64 |  |
| TEnemyTaskList | `0x8c269e50` | 5 | `0x8c114ad8` | `0x8c114b58` | TObject | 0x30 |  |
| TFog | `0x8c261160` | 5 | `0x8c013528` | `0x8c013570` | TObject | 0x20 |  |
| TFogCtrl | `0x8c26b320` | 5 | `0x8c1216c0` | `0x8c1216f0` | TObject | 0x20 |  |
| TFogCtrl_EOR | `0x8c26b304` | 5 | `0x8c1225a4` | `0x8c1225d8` | TObject | 0x20 |  |
| TFogEditor | `0x8c269e6c` | 8 | `0x8c115bf4` | `0x8c115f80` | TEditor | 0x840 |  |
| TFontSmallHelp | `0x8c274838` | 5 | `0x8c1ab508` | `0x8c1ab5a8` | TObject | 0x58 |  |
| TFontSmallTask | `0x8c268060` | 5 | `0x8c0edfd0` `0x8c0ee0d4` `0x8c0ee1d8` `0x8c0ee300` | `0x8c0ee430` | TObject | 0x50 |  |
| TForceOperate | `0x8c2618d4` | 5 | `0x8c03bfdc` | `0x8c03c1d0` | TObject | 0x20 |  |
| TFreeCamera | `0x8c266ec4` | 8 | `0x8c0d0268` | `0x8c0d02b4` |  | 0x3c |  |
| TGameProtocol | `0x8c2615b8` | 5 | `0x8c036a0c` | `0x8c036a7c` | TObject | 0x24 |  |
| TGroupEditor | `0x8c2662d0` | 8 | `0x8c0bb8c4` | `0x8c0bb954` | TEditor | 0x9c |  |
| TGroupEnemySetEditor | `0x8c265304` | 8 | `0x8c08dde8` | `0x8c08de2c` | TGroupEditor | 0x110 |  |
| TGroupSetEditor | `0x8c2652dc` | 8 | `0x8c08b8bc` | `0x8c08b900` | TGroupEditor | 0x110 |  |
| THunterGuildSeqOffline | `0x8c26ec6c` | 8 | `0x8c15921c` | `0x8c159270` | TShopSequence | 0x40 |  |
| THunterGuildSeqOnlineTask | `0x8c27811c` | 5 | `0x8c208384` | `0x8c2083b4` | TObject | 0x20 |  |
| THunterGuildSeqOnline_Client | `0x8c2780cc` | 8 | `0x8c208d3c` | `0x8c208d94` | TShopSequence | 0x40 |  |
| THunterGuildSeqOnline_Server | `0x8c2780f4` | 8 | `0x8c208464` | `0x8c2084bc` | TShopSequence | 0x44 |  |
| TItemAttacker | `0x8c27673c` | 5 | `0x8c1c682c` | `0x8c1c6a74` | TObject | 0x54 |  |
| TItemDisconnectCtrl | `0x8c281dc4` | 5 | `0x8c25f8a0` | `0x8c25f8dc` | TObject | 0x20 |  |
| TItemDownLoad | `0x8c2788d4` | 5 | `0x8c2210cc` | `0x8c221134` | TObject | 0x40 |  |
| TItemDrop | `0x8c278350` | 5 | `0x8c218998` | `0x8c218b3c` | TObject | 0x28 |  |
| TItemDropSub | `0x8c281af4` | 5 | `0x8c259638` | `0x8c259674` | TObject | 0x24 |  |
| TItemEffArmor | `0x8c272228` | 5 | `0x8c18a568` | `0x8c18a6b4` | TObject | 0x80 |  |
| TItemEffArmorParticle | `0x8c281268` | 5 | `0x8c255750` | `0x8c2557ec` | TObject | 0x2c |  |
| TItemEffBringer | `0x8c27662c` | 6 | `0x8c1c547c` | `0x8c1c55e0` | TItemShoot | 0x94 |  |
| TItemEffDevilCane | `0x8c27a270` | 5 | `0x8c23ba2c` | `0x8c23baf8` | TObject | 0x2c |  |
| TItemEffFireWand | `0x8c27a790` | 5 | `0x8c23cf68` | `0x8c23cfec` | TObject | 0x2c |  |
| TItemEffFlame | `0x8c276668` | 5 | `0x8c1c5ab0` | `0x8c1c5b40` | TObject | 0x2c |  |
| TItemEffFreezeBeam | `0x8c27aaa8` | 5 | `0x8c23d89c` | `0x8c23d8f4` | TObject | 0x2c |  |
| TItemEffHeaven | `0x8c276684` | 5 | `0x8c1c5cb8` | `0x8c1c5d34` | TObject | 0x50 |  |
| TItemEffLandHit | `0x8c2766a0` | 5 | `0x8c1c5f48` | `0x8c1c60b0` | TObject | 0x40 |  |
| TItemEffLavis | `0x8c2766bc` | 6 | `0x8c1c616c` | `0x8c1c61c0` | TItemShootModel | 0x64 |  |
| TItemEffShield | `0x8c2767fc` | 5 | `0x8c1c72fc` | `0x8c1c7464` | TObject | 0x50 |  |
| TItemEffectWeapon | `0x8c26308c` | 5 | `0x8c0772f8` | `0x8c077370` | TObject | 0x30 |  |
| TItemEquipBase | `0x8c278154` | 48 | `0x8c20989c` | `0x8c20997c` | TObject | 0x1d8 |  |
| TItemList | `0x8c2701cc` | 5 | `0x8c1694cc` | `0x8c16bf08` | TObject | 0x24 |  |
| TItemLoad | `0x8c27282c` | 5 | `0x8c1930a0` | `0x8c193fe8` | TObject | 0x20 |  |
| TItemLockCountCtrl | `0x8c278948` | 5 | `0x8c2232f8` | `0x8c223368` | TObject | 0x30 |  |
| TItemMag | `0x8c264220` | 48 | `0x8c07d06c` | `0x8c07d168` |  | 0x228 |  |
| TItemMagGrowEff | `0x8c278020` | 5 | `0x8c1f2a78` | `0x8c1f2b08` | TObject | 0x2c |  |
| TItemMagSub | `0x8c27803c` | 5 | `0x8c1f1d38` | `0x8c1f1e94` | TObject | 0xec |  |
| TItemMenuCtrl | `0x8c281a04` | 5 | `0x8c257ec4` | `0x8c257f00` | TObject | 0x24 |  |
| TItemMoney | `0x8c2695d4` | 42 | `0x8c103360` | `0x8c1033e0` |  | 0x144 |  |
| TItemObjHpRecover | `0x8c27dbd0` | 43 | `0x8c24cf30` | `0x8c24cf64` | TItemObject | 0x148 |  |
| TItemObjMagChanger | `0x8c27e3a8` | 43 | `0x8c24dda8` | `0x8c24dddc` | TItemObject | 0x148 |  |
| TItemObjMoonAtomizer | `0x8c27e2f4` | 43 | `0x8c24dc68` | `0x8c24dc9c` | TItemObject | 0x148 |  |
| TItemObjRecovery | `0x8c27e240` | 43 | `0x8c24db48` | `0x8c24db7c` | TItemObject | 0x148 |  |
| TItemObjSolAtomizer | `0x8c27e18c` | 43 | `0x8c24da60` | `0x8c24da94` | TItemObject | 0x148 |  |
| TItemObjStarAtomizer | `0x8c27e0d8` | 43 | `0x8c24d8f8` | `0x8c24d92c` | TItemObject | 0x148 |  |
| TItemObjStatusUp | `0x8c27e024` | 43 | `0x8c24d6d8` | `0x8c24d70c` | TItemObject | 0x148 |  |
| TItemObjTecBook | `0x8c27df70` | 43 | `0x8c24d5e8` | `0x8c24d61c` |  | 0x148 |  |
| TItemObjTpRecover | `0x8c27de08` | 43 | `0x8c24d3b0` | `0x8c24d3e4` | TItemObject | 0x148 |  |
| TItemObjTrapVision | `0x8c27dd54` | 43 | `0x8c24d194` | `0x8c24d1c8` | TItemObject | 0x148 |  |
| TItemObjWpnPowerUp | `0x8c27dc84` | 43 | `0x8c24d084` | `0x8c24d0b8` | TItemObject | 0x148 |  |
| TItemObject | `0x8c267d80` | 43 | `0x8c0e71c8` | `0x8c0e7584` |  | 0x148 |  |
| TItemObjectTV | `0x8c27dd38` | 5 | `0x8c24d270` | `0x8c24d2cc` | TObject | 0x24 |  |
| TItemProArmor | `0x8c267cb8` | 48 | `0x8c0e6d1c` | `0x8c0e70fc` | TItemEquipBase | 0x1e0 |  |
| TItemProArmorParticle | `0x8c281284` | 48 | `0x8c255584` | `0x8c2558e0` | TItemProArmor | 0x1ec |  |
| TItemProArmorRecalc | `0x8c28134c` | 48 | `0x8c255930` | `0x8c255970` | TItemProArmor | 0x1e0 |  |
| TItemProShield | `0x8c267e34` | 48 | `0x8c0e8360` | `0x8c0e867c` | TItemEquipBase | 0x1e4 |  |
| TItemProShieldModel | `0x8c2810d8` | 48 | `0x8c255200` | `0x8c255124` | TItemProShield | 0x1e8 |  |
| TItemProShieldModel2 | `0x8c281010` | 48 | `0x8c2550e8` | `0x8c2551a4` | TItemProShieldModel | 0x1e8 |  |
| TItemProShieldRecalc | `0x8c2811a0` | 48 | `0x8c2554f4` | `0x8c255534` | TItemProShield | 0x1e4 |  |
| TItemProUnit | `0x8c271d1c` | 48 | `0x8c17b3a0` | `0x8c17b868` | TItemEquipBase | 0x20c |  |
| TItemReverseTech | `0x8c281c6c` | 5 | `0x8c25cc88` | `0x8c25cd24` | TObject | 0x2c |  |
| TItemReverseTechCtrl | `0x8c281bfc` | 5 | `0x8c25c710` | `0x8c25c8b0` | TObject | 0x24 |  |
| TItemReverseTechPart1 | `0x8c281c50` | 5 | `0x8c25ce38` | `0x8c25cec0` | TObject | 0x38 |  |
| TItemReverseTechPart2 | `0x8c281c34` | 5 | `0x8c25cff0` | `0x8c25d444` | TObject | 0x15c |  |
| TItemShoot | `0x8c2748d4` | 6 | `0x8c1aba3c` | `0x8c1abb78` | TObject | 0x5c |  |
| TItemShootBasyoSen2 | `0x8c27d054` | 6 | `0x8c248e90` | `0x8c248f54` | TItemShootModel | 0x64 |  |
| TItemShootDorillArm | `0x8c27a380` | 6 | `0x8c23bf5c` | `0x8c23c030` | TItemShootModel | 0x64 |  |
| TItemShootFast | `0x8c27a67c` | 6 | `0x8c23cabc` | `0x8c23cc70` | TItemShootModel | 0x68 |  |
| TItemShootModel | `0x8c2748b4` | 6 | `0x8c1abe00` | `0x8c1ac36c` | TItemShoot | 0x64 |  |
| TItemShootParticle | `0x8c274894` | 6 | `0x8c1abf98` | `0x8c1abfe8` | TItemShoot | 0x68 |  |
| TItemShootRocketPunch | `0x8c27bfbc` | 6 | `0x8c23fa8c` | `0x8c23fc14` | TItemShootModel | 0x64 |  |
| TItemShootRocketPunchON | `0x8c27f478` | 6 | `0x8c251aec` | `0x8c251c74` | TItemShootModel | 0x64 |  |
| TItemShootWindCane | `0x8c27921c` | 6 | `0x8c2399ec` | `0x8c239aa4` | TItemShootModel | 0x64 |  |
| TItemTexLoad | `0x8c278e30` | 5 | `0x8c22bef8` | `0x8c22bf70` | TObject | 0x44 |  |
| TItemTimer | `0x8c274790` | 5 | `0x8c1ab01c` | `0x8c1ab07c` | TObject | 0x2c |  |
| TItemTimerEvent | `0x8c278aa8` | 7 | `0x8c2236d0` | `0x8c22371c` | TObject | 0x30 |  |
| TItemWpnAnoRifle | `0x8c27d538` | 59 | `0x8c249764` | `0x8c2497b0` |  | 0x234 |  |
| TItemWpnAx | `0x8c271eec` | 59 | `0x8c17bf48` | `0x8c17bf90` |  | 0x234 |  |
| TItemWpnBag | `0x8c27ca58` | 59 | `0x8c241038` | `0x8c24106c` |  | 0x234 |  |
| TItemWpnBasyoSen | `0x8c279330` | 59 | `0x8c239b40` | `0x8c239bd8` |  | 0x234 |  |
| TItemWpnBasyoSen2 | `0x8c27d074` | 59 | `0x8c248d14` | `0x8c248d98` |  | 0x240 |  |
| TItemWpnBearCane | `0x8c279424` | 59 | `0x8c239cf0` | `0x8c239d50` |  | 0x23c |  |
| TItemWpnBerlaCanon | `0x8c279518` | 59 | `0x8c239f88` | `0x8c239ffc` |  | 0x238 |  |
| TItemWpnBigHarisen | `0x8c27960c` | 59 | `0x8c23a2b4` | `0x8c23a320` |  | 0x240 |  |
| TItemWpnBindGunA | `0x8c279700` | 59 | `0x8c23a414` | `0x8c23a460` |  | 0x234 |  |
| TItemWpnBindGunB | `0x8c2797f4` | 59 | `0x8c23a4f0` | `0x8c23a53c` |  | 0x234 |  |
| TItemWpnBindMechGun | `0x8c2798e8` | 59 | `0x8c23a5cc` | `0x8c23a628` |  | 0x24c |  |
| TItemWpnBlade | `0x8c26319c` | 59 | `0x8c077860` | `0x8c077908` |  | 0x234 |  |
| TItemWpnBlueCane | `0x8c2799dc` | 59 | `0x8c23a80c` | `0x8c23a86c` |  | 0x23c |  |
| TItemWpnBouquet | `0x8c281430` | 59 | `0x8c255d78` | `0x8c255dac` |  | 0x234 |  |
| TItemWpnBraveSaber | `0x8c279ad0` | 59 | `0x8c23aaa4` | `0x8c23aaec` |  | 0x234 |  |
| TItemWpnBroom | `0x8c279bc4` | 59 | `0x8c23ab7c` | `0x8c23abb0` |  | 0x234 |  |
| TItemWpnCBringer | `0x8c270fc4` | 59 | `0x8c179770` | `0x8c1797e0` |  | 0x238 |  |
| TItemWpnCSorcer | `0x8c2710b8` | 59 | `0x8c179870` | `0x8c1798e8` |  | 0x23c |  |
| TItemWpnCaduseus | `0x8c27242c` | 59 | `0x8c18ac40` | `0x8c18ad0c` |  | 0x234 |  |
| TItemWpnCane | `0x8c263290` | 59 | `0x8c077998` | `0x8c077a08` |  | 0x234 |  |
| TItemWpnCatHand | `0x8c279cb8` | 59 | `0x8c23ac78` | `0x8c23ad0c` |  | 0x240 |  |
| TItemWpnChacram | `0x8c279dac` | 59 | `0x8c23aeac` | `0x8c23af14` |  | 0x234 |  |
| TItemWpnChainSaw | `0x8c271df8` | 59 | `0x8c17be04` | `0x8c17beb8` |  | 0x238 |  |
| TItemWpnChaoBranch | `0x8c27d168` | 59 | `0x8c248ff0` | `0x8c249024` |  | 0x234 |  |
| TItemWpnChaoCane | `0x8c279ea0` | 59 | `0x8c23afe4` | `0x8c23b03c` |  | 0x23c |  |
| TItemWpnChineseFlypan | `0x8c279f94` | 59 | `0x8c23b2a4` | `0x8c23b2d8` |  | 0x234 |  |
| TItemWpnChineseFlypan2 | `0x8c27a088` | 59 | `0x8c23b368` | `0x8c23b3ac` |  | 0x234 |  |
| TItemWpnClaw | `0x8c2704a0` | 59 | `0x8c175532` | `0x8c1755f8` |  | 0x234 |  |
| TItemWpnClub | `0x8c27a17c` | 59 | `0x8c23b478` | `0x8c23b4f8` |  | 0x240 |  |
| TItemWpnDelsabre | `0x8c2711ac` | 59 | `0x8c179aec` | `0x8c179b34` |  | 0x234 |  |
| TItemWpnDevilCane | `0x8c27a28c` | 59 | `0x8c23b608` | `0x8c23b684` |  | 0x244 |  |
| TItemWpnDorillArm | `0x8c27a3a0` | 59 | `0x8c23bc0c` | `0x8c23bc98` |  | 0x244 |  |
| TItemWpnDoubleCanon | `0x8c27a494` | 59 | `0x8c23c0cc` | `0x8c23c158` |  | 0x238 |  |
| TItemWpnDragonClaw | `0x8c27a588` | 59 | `0x8c23c5a0` | `0x8c23c620` |  | 0x238 |  |
| TItemWpnEggman | `0x8c2712a0` | 59 | `0x8c179be8` | `0x8c179c48` |  | 0x234 |  |
| TItemWpnFamitsu | `0x8c281524` | 59 | `0x8c255e68` | `0x8c255e9c` |  | 0x234 |  |
| TItemWpnFast | `0x8c27a69c` | 59 | `0x8c23c8a8` | `0x8c23c958` |  | 0x284 |  |
| TItemWpnFireWand | `0x8c27a7ac` | 59 | `0x8c23cd0c` | `0x8c23cd64` |  | 0x238 |  |
| TItemWpnFlowerCane | `0x8c27a8a0` | 59 | `0x8c23d138` | `0x8c23d16c` |  | 0x234 |  |
| TItemWpnFlypan | `0x8c271394` | 59 | `0x8c179cd8` | `0x8c179d0c` |  | 0x234 |  |
| TItemWpnFork | `0x8c27a994` | 59 | `0x8c23d234` | `0x8c23d27c` |  | 0x234 |  |
| TItemWpnFrameVisit | `0x8c271488` | 59 | `0x8c179d9c` | `0x8c179e00` |  | 0x234 |  |
| TItemWpnFreezeBeam | `0x8c27aac4` | 59 | `0x8c23d30c` | `0x8c23d390` |  | 0x234 |  |
| TItemWpnGuiter | `0x8c27abb8` | 59 | `0x8c23db8c` | `0x8c23dbc0` |  | 0x234 |  |
| TItemWpnGyaranzo | `0x8c27d25c` | 59 | `0x8c2490ec` | `0x8c249174` |  | 0x23c |  |
| TItemWpnHalbert | `0x8c27acac` | 59 | `0x8c23dc50` | `0x8c23dc98` |  | 0x234 |  |
| TItemWpnHand | `0x8c27157c` | 59 | `0x8c179e90` | `0x8c17a0bc` |  | 0x234 |  |
| TItemWpnHandGun | `0x8c263384` | 59 | `0x8c077a98` | `0x8c077ba0` |  | 0x234 |  |
| TItemWpnHandGunSilent | `0x8c263478` | 59 | `0x8c077b30` | `0x8c077be4` |  | 0x234 |  |
| TItemWpnHarisen | `0x8c27ada0` | 59 | `0x8c23dd28` | `0x8c23dd94` |  | 0x240 |  |
| TItemWpnIkedaSythe | `0x8c27d350` | 59 | `0x8c2493b8` | `0x8c249410` |  | 0x240 |  |
| TItemWpnKatana | `0x8c270cec` | 59 | `0x8c1781c4` | `0x8c178214` |  | 0x234 |  |
| TItemWpnLavisBlade | `0x8c27ae94` | 59 | `0x8c23de88` | `0x8c23df14` |  | 0x234 |  |
| TItemWpnLeaf | `0x8c27af88` | 59 | `0x8c23e048` | `0x8c23e090` |  | 0x234 |  |
| TItemWpnMachineGun | `0x8c26356c` | 59 | `0x8c077c74` | `0x8c077d9c` |  | 0x24c |  |
| TItemWpnMagicBook | `0x8c27b07c` | 59 | `0x8c23e120` | `0x8c23e170` |  | 0x234 |  |
| TItemWpnMagicSaber | `0x8c27b170` | 59 | `0x8c23e2dc` | `0x8c23e334` |  | 0x234 |  |
| TItemWpnMagicalPiece | `0x8c272338` | 59 | `0x8c18aa6c` | `0x8c18abb0` |  | 0x234 |  |
| TItemWpnMaserBeam | `0x8c27e8c0` | 59 | `0x8c24fd98` | `0x8c24fddc` |  | 0x234 |  |
| TItemWpnMoonCane | `0x8c27b264` | 59 | `0x8c23e444` | `0x8c23e48c` |  | 0x234 |  |
| TItemWpnMuramasa | `0x8c27b358` | 59 | `0x8c23e51c` | `0x8c23e564` |  | 0x234 |  |
| TItemWpnNaganoClaw | `0x8c27e4f0` | 59 | `0x8c24f0dc` | `0x8c24f15c` |  | 0x23c |  |
| TItemWpnNodachi | `0x8c27b44c` | 59 | `0x8c23e684` | `0x8c23e6cc` |  | 0x234 |  |
| TItemWpnNyoibou | `0x8c27b540` | 59 | `0x8c23e75c` | `0x8c23e7dc` |  | 0x240 |  |
| TItemWpnOnBlade | `0x8c27e9d0` | 60 | `0x8c250aac` | `0x8c250b54` |  | 0x234 |  |
| TItemWpnOnCane | `0x8c280130` | 60 | `0x8c253078` | `0x8c2530e8` |  | 0x234 |  |
| TItemWpnOnClaw | `0x8c27ebc0` | 60 | `0x8c250e04` | `0x8c250ea4` |  | 0x234 |  |
| TItemWpnOnHandGun | `0x8c27ecb8` | 60 | `0x8c250f34` | `0x8c250f80` |  | 0x234 |  |
| TItemWpnOnHarisen | `0x8c27edb0` | 60 | `0x8c251010` | `0x8c25107c` |  | 0x240 |  |
| TItemWpnOnMachineGun | `0x8c27efa0` | 60 | `0x8c251234` | `0x8c251368` |  | 0x24c |  |
| TItemWpnOnMoonCane | `0x8c27f098` | 60 | `0x8c2513f8` | `0x8c251440` |  | 0x234 |  |
| TItemWpnOnPikoPikoHammer | `0x8c27f288` | 60 | `0x8c2515b8` | `0x8c251600` |  | 0x234 |  |
| TItemWpnOnRifle | `0x8c27f380` | 60 | `0x8c251690` | `0x8c2516dc` |  | 0x234 |  |
| TItemWpnOnRocketPunch | `0x8c27f498` | 60 | `0x8c25176c` | `0x8c25181c` |  | 0x250 |  |
| TItemWpnOnRod | `0x8c27f590` | 60 | `0x8c251d10` | `0x8c251d7c` |  | 0x234 |  |
| TItemWpnOnSaber | `0x8c27f688` | 60 | `0x8c251e0c` | `0x8c251e54` |  | 0x234 |  |
| TItemWpnOnScythe | `0x8c27f780` | 60 | `0x8c251ee4` | `0x8c252070` |  | 0x238 |  |
| TItemWpnOnShuriken | `0x8c27f878` | 60 | `0x8c252100` | `0x8c252158` |  | 0x234 |  |
| TItemWpnOnSlicer | `0x8c27f970` | 60 | `0x8c252330` | `0x8c252480` |  | 0x234 |  |
| TItemWpnOnSpreadGun | `0x8c27fa68` | 60 | `0x8c252510` | `0x8c252720` |  | 0x23c |  |
| TItemWpnOnSpreadGunB | `0x8c27fb60` | 60 | `0x8c2527b0` | `0x8c252970` |  | 0x23c |  |
| TItemWpnOnSpreadNeedle | `0x8c27fc58` | 60 | `0x8c252a00` | `0x8c252b6c` |  | 0x234 |  |
| TItemWpnOnTwinGun | `0x8c27fe48` | 60 | `0x8c252ce4` | `0x8c252d44` |  | 0x24c |  |
| TItemWpnOnTwinSaber | `0x8c27ff40` | 60 | `0x8c252eb4` | `0x8c252f10` |  | 0x234 |  |
| TItemWpnOnWand | `0x8c280038` | 60 | `0x8c252fa0` | `0x8c252fe8` |  | 0x234 |  |
| TItemWpnOnWindCane | `0x8c27eac8` | 60 | `0x8c250be4` | `0x8c250c70` |  | 0x250 |  |
| TItemWpnOriginalSaber | `0x8c271670` | 59 | `0x8c17a14c` | `0x8c17a298` |  | 0x238 |  |
| TItemWpnOriginalShot | `0x8c271764` | 59 | `0x8c17a328` | `0x8c17a5ac` |  | 0x26c |  |
| TItemWpnPArms | `0x8c271858` | 59 | `0x8c17a63c` | `0x8c17a794` |  | 0x234 |  |
| TItemWpnPickel | `0x8c27b634` | 59 | `0x8c23e8ec` | `0x8c23e93c` |  | 0x238 |  |
| TItemWpnPikoPikoHammer | `0x8c27b728` | 59 | `0x8c23eb08` | `0x8c23eb50` |  | 0x234 |  |
| TItemWpnPsychowand | `0x8c27194c` | 59 | `0x8c17a824` | `0x8c17acac` |  | 0x2b8 |  |
| TItemWpnRabbitCane | `0x8c27b81c` | 59 | `0x8c23ebe0` | `0x8c23ec48` |  | 0x238 |  |
| TItemWpnRay | `0x8c271a40` | 59 | `0x8c17ad3c` | `0x8c17ae84` |  | 0x23c |  |
| TItemWpnRifle | `0x8c263754` | 59 | `0x8c077f14` | `0x8c077f60` |  | 0x234 |  |
| TItemWpnRikoBlade | `0x8c27b910` | 59 | `0x8c23ee98` | `0x8c23ef00` |  | 0x234 |  |
| TItemWpnRikoGun | `0x8c27ba04` | 59 | `0x8c23efd0` | `0x8c23f01c` |  | 0x234 |  |
| TItemWpnRikoMechGun | `0x8c27baf8` | 59 | `0x8c23f0ac` | `0x8c23f108` |  | 0x24c |  |
| TItemWpnRikoPartisan | `0x8c27bbec` | 59 | `0x8c23f26c` | `0x8c23f2b4` |  | 0x234 |  |
| TItemWpnRikoSaber | `0x8c27bce0` | 59 | `0x8c23f344` | `0x8c23f38c` |  | 0x234 |  |
| TItemWpnRikoSlicer | `0x8c27bdd4` | 59 | `0x8c23f41c` | `0x8c23f474` |  | 0x234 |  |
| TItemWpnRikoSword | `0x8c27bec8` | 59 | `0x8c23f63c` | `0x8c23f684` |  | 0x234 |  |
| TItemWpnRocketPunch | `0x8c27bfdc` | 59 | `0x8c23f714` | `0x8c23f7c4` |  | 0x250 |  |
| TItemWpnRod | `0x8c263848` | 59 | `0x8c077ff0` | `0x8c07805c` |  | 0x234 |  |
| TItemWpnSBeat | `0x8c271b34` | 59 | `0x8c17af14` | `0x8c17b02c` |  | 0x238 |  |
| TItemWpnSRed | `0x8c27d444` | 59 | `0x8c24950c` | `0x8c2496d4` |  | 0x238 |  |
| TItemWpnSaber | `0x8c26393c` | 59 | `0x8c0780ec` | `0x8c078134` |  | 0x234 |  |
| TItemWpnSamba | `0x8c27c0d0` | 59 | `0x8c23fcb0` | `0x8c23fd18` |  | 0x24c |  |
| TItemWpnScythe | `0x8c271c28` | 59 | `0x8c17b0bc` | `0x8c17b310` |  | 0x238 |  |
| TItemWpnSealNodachi | `0x8c27c1c4` | 59 | `0x8c23fe7c` | `0x8c23feb0` |  | 0x234 |  |
| TItemWpnShuriken | `0x8c27c2b8` | 59 | `0x8c23ffa8` | `0x8c240000` |  | 0x234 |  |
| TItemWpnSlicer | `0x8c263a30` | 59 | `0x8c0781e8` | `0x8c078320` |  | 0x234 |  |
| TItemWpnSpreadGun | `0x8c263b24` | 59 | `0x8c0783b0` | `0x8c0785b4` |  | 0x23c |  |
| TItemWpnSpreadGunB | `0x8c2705b0` | 59 | `0x8c175688` | `0x8c175ab8` |  | 0x23c |  |
| TItemWpnSpreadNeedle | `0x8c2706a4` | 59 | `0x8c175b54` | `0x8c175cb4` |  | 0x234 |  |
| TItemWpnStarCane | `0x8c27c3ac` | 59 | `0x8c2401c0` | `0x8c2401fc` |  | 0x238 |  |
| TItemWpnStingTip | `0x8c272244` | 59 | `0x8c18a914` | `0x8c18a9dc` |  | 0x238 |  |
| TItemWpnSunShade | `0x8c27c4a0` | 59 | `0x8c240330` | `0x8c24039c` |  | 0x240 |  |
| TItemWpnSword | `0x8c263c18` | 59 | `0x8c078644` | `0x8c07868c` |  | 0x234 |  |
| TItemWpnTessen | `0x8c27c594` | 59 | `0x8c240598` | `0x8c240620` |  | 0x244 |  |
| TItemWpnThunderCane | `0x8c27c688` | 59 | `0x8c240854` | `0x8c24090c` |  | 0x29c |  |
| TItemWpnTwinGun | `0x8c27c77c` | 59 | `0x8c240aa4` | `0x8c240ae8` |  | 0x24c |  |
| TItemWpnUmbrella | `0x8c27c870` | 59 | `0x8c240cf4` | `0x8c240d60` |  | 0x240 |  |
| TItemWpnUnknownBlade | `0x8c280efc` | 59 | `0x8c254c2c` | `0x8c254c9c` |  | 0x234 |  |
| TItemWpnUnknownCane | `0x8c28038c` | 59 | `0x8c253efc` | `0x8c253f6c` |  | 0x234 |  |
| TItemWpnUnknownClaw | `0x8c280480` | 59 | `0x8c253ffc` | `0x8c254054` |  | 0x234 |  |
| TItemWpnUnknownHandGun | `0x8c280574` | 59 | `0x8c2540e4` | `0x8c254130` |  | 0x234 |  |
| TItemWpnUnknownMachineGun | `0x8c280668` | 59 | `0x8c2541c0` | `0x8c2542e8` |  | 0x24c |  |
| TItemWpnUnknownRifle | `0x8c280850` | 59 | `0x8c25444c` | `0x8c254498` |  | 0x234 |  |
| TItemWpnUnknownRod | `0x8c280944` | 59 | `0x8c254528` | `0x8c254580` |  | 0x234 |  |
| TItemWpnUnknownSaber | `0x8c280a38` | 59 | `0x8c254610` | `0x8c254644` |  | 0x234 |  |
| TItemWpnUnknownSlicer | `0x8c280b2c` | 59 | `0x8c2546d4` | `0x8c2547d4` |  | 0x234 |  |
| TItemWpnUnknownSpreadGun | `0x8c280c20` | 59 | `0x8c254864` | `0x8c2549c8` |  | 0x234 |  |
| TItemWpnUnknownTwinSaber | `0x8c280e08` | 59 | `0x8c254b40` | `0x8c254b9c` |  | 0x234 |  |
| TItemWpnUnknownWand | `0x8c280298` | 59 | `0x8c253e38` | `0x8c253e6c` |  | 0x234 |  |
| TItemWpnWand | `0x8c263d0c` | 59 | `0x8c078740` | `0x8c078788` |  | 0x234 |  |
| TItemWpnWataruLifle | `0x8c27c964` | 59 | `0x8c240f5c` | `0x8c240fa8` |  | 0x234 |  |
| TItemWpnWindCane | `0x8c27923c` | 59 | `0x8c23963c` | `0x8c2396d8` |  | 0x250 |  |
| TItemWpnYasuMachineGun | `0x8c27e7cc` | 59 | `0x8c24f9b4` | `0x8c24fa6c` |  | 0x264 |  |
| TItemWpnYasuShotGun | `0x8c27e6d8` | 59 | `0x8c24f734` | `0x8c24f7cc` |  | 0x244 |  |
| TItemWpnYasumuraShiki | `0x8c27cf60` | 59 | `0x8c248a9c` | `0x8c248b34` |  | 0x244 |  |
| TItemWpnYasumuraShiki2 | `0x8c27e5e4` | 59 | `0x8c24f3e4` | `0x8c24f4b0` |  | 0x254 |  |
| TJudgmentSequence | `0x8c27210c` | 8 | `0x8c187ca0` | `0x8c187cf0` | TShopSequence | 0x34 |  |
| TKomorebi | `0x8c2644c4` | 14 | `0x8c0817d4` | `0x8c081864` |  | 0x94 | obj 0x0085 |
| TLazerFenceSw | `0x8c269cb4` | 25 | `0x8c113750` | `0x8c113850` | TOKey | 0x144 | obj 0x0084 |
| TLightEditor | `0x8c26cdd0` | 8 | `0x8c1336b4` | `0x8c133718` | TEditor | 0x84 |  |
| TLoadCtrl | `0x8c2721f0` | 5 | `0x8c189df4` | `0x8c189ef8` | TObject | 0x20 |  |
| TLoadingCur | `0x8c27220c` | 5 | `0x8c189f84` | `0x8c18a09c` | TObject | 0x60 |  |
| TLobby | `0x8c261278` | 5 | `0x8c015244` | `0x8c0179a4` | TObject | 0x20 |  |
| TLockOnCursor | `0x8c2676f0` | 5 | `0x8c0d8c40` | `0x8c0d8e84` | TObject | 0x470 |  |
| TMainCursor | `0x8c2676d4` | 5 | `0x8c0da758` | `0x8c0da93c` | TObject | 0x68 |  |
| TMapCsnCtrl | `0x8c272f0c` | 5 | `0x8c1a18fc` | `0x8c1a1940` | TObject | 0x820 |  |
| TMedicalCenterMes | `0x8c269a54` | 5 | `0x8c10ae08` | `0x8c10ae44` | TObject | 0x24 |  |
| TMedicalCenterSequence | `0x8c269a70` | 8 | `0x8c10a898` | `0x8c10a8e4` | TShopSequence | 0x38 |  |
| TMemberCheck | `0x8c27e9b4` | 5 | `0x8c2506a8` | `0x8c250714` | TObject | 0x84 |  |
| TMotorcycle | `0x8c2643f0` | 17 | `0x8c080840` | `0x8c080790` | TObjMesBase | 0xf4 | obj 0x0087 |
| TMovie | `0x8c265288` | 5 | `0x8c08aefc` | `0x8c08b22c` | TObject | 0x6c |  |
| TNECFontEORFunction | `0x8c261e78` | 5 | `0x8c04baf8` | `0x8c04bb2c` | TObject | 0x20 |  |
| TNowLoading | `0x8c2721d4` | 5 | `0x8c18999c` | `0x8c189af8` | TObject | 0x40 |  |
| TOAirconCave01 | `0x8c2694a8` | 16 | `0x8c0ff954` | `0x8c0ff8b8` |  | 0x100 | obj 0x00C7 |
| TOAttackableCol | `0x8c2818a4` | 86 | `0x8c2576f8` | `0x8c2576a0` |  | 0x36c | obj 0x0023 |
| TOBarrierEnergy01 | `0x8c269ad8` | 22 | `0x8c10b490` | `0x8c10b694` |  |  |  |
| TOButterflyDF | `0x8c2773ec` | 16 | `0x8c1ddec8` | `0x8c1ddfc8` | TODragonfly | 0x138 |  |
| TOCakeshopCave01 | `0x8c2756f0` | 16 | `0x8c1bf558` | `0x8c1bf660` |  |  |  |
| TOCapsuleAncient01 | `0x8c2685f0` | 18 | `0x8c0f1f9c` | `0x8c0f20a8` |  | 0x120 | obj 0x008D |
| TOCapsuleMachine01 | `0x8c275658` | 16 | `0x8c1bf074` | `0x8c1bef80` |  | 0x100 | obj 0x0103 |
| TOChatSensor | `0x8c281ca4` | 14 | `0x8c25d964` | `0x8c25d9f8` |  | 0xd4 | obj 0x0026 |
| TOChatSensorFolder | `0x8c281c88` | 5 | `0x8c25ddac` | `0x8c25dde4` | TObject | 0x20 | obj 0x0026 |
| TOComputerMachine01 | `0x8c2756a0` | 18 | `0x8c1bf348` | `0x8c1bf21c` |  | 0x120 | obj 0x0104 |
| TOContainerAncientEnemy | `0x8c277788` | 89 | `0x8c1e489c` | `0x8c1e4978` | TObjContainerBase | 0x384 | obj 0x0163 |
| TOContainerAncientEnemyCommon | `0x8c27761c` | 89 | `0x8c1e4ec8` | `0x8c1e4e44` | TOContainerAncientEnemy | 0x384 | obj 0x0163 |
| TOContainerAncientItemCommon | `0x8c277bcc` | 89 | `0x8c1e44a8` | `0x8c1e4424` |  | 0x384 | obj 0x0161 |
| TODoorAncient01 | `0x8c268124` | 22 | `0x8c0ef3ec` | `0x8c0ef2c8` |  | 0x10c | obj 0x0144 |
| TODoorAncient03 | `0x8c268184` | 22 | `0x8c0ef844` | `0x8c0ef720` |  | 0x10c | obj 0x0145 |
| TODoorAncient05 | `0x8c26a44c` | 22 | `0x8c11ed74` | `0x8c11eb9c` |  | 0x10c | obj 0x0147 |
| TODoorAncient06 | `0x8c26a3ec` | 22 | `0x8c11e88c` | `0x8c11e6a0` |  | 0x10c | obj 0x0148 |
| TODoorAncient07 | `0x8c26a38c` | 22 | `0x8c11e390` | `0x8c11e1a4` |  | 0x10c | obj 0x0149 |
| TODoorAncient09 | `0x8c26cec4` | 22 | `0x8c135574` | `0x8c1356d0` |  | 0x120 |  |
| TODoorCave01 | `0x8c26ccc8` | 22 | `0x8c1323dc` | `0x8c132540` |  | 0x124 |  |
| TODoorCave02 | `0x8c26cdf8` | 22 | `0x8c134930` | `0x8c134a54` |  | 0x11c |  |
| TODoorCave03 | `0x8c274a60` | 22 | `0x8c1ae9bc` | `0x8c1aea8c` |  | 0x11c | obj 0x00CE |
| TODoorMachine01 | `0x8c26f798` | 22 | `0x8c161cf0` | `0x8c161e54` |  | 0x124 |  |
| TODoorMachine02 | `0x8c274ac0` | 22 | `0x8c1aeea4` | `0x8c1aefc8` |  | 0x11c |  |
| TODoorVS2Door01 | `0x8c27d7f8` | 22 | `0x8c24b738` | `0x8c24b614` |  | 0x110 | obj 0x01A0 |
| TODoorVoShip | `0x8c274b20` | 16 | `0x8c1af428` | `0x8c1af62c` |  |  |  |
| TODragonfly | `0x8c26cc80` | 16 | `0x8c1318a4` | `0x8c131a34` |  | 0x138 |  |
| TODragonflyMachine01 | `0x8c275c04` | 16 | `0x8c1c3b34` | `0x8c1c3d14` | TODragonfly | 0x140 | obj 0x0106 |
| TODummyKeyCave01 | `0x8c281a3c` | 14 | `0x8c258124` | `0x8c2580d8` |  | 0xd0 | obj 0x00DE |
| TODummyKeyCave01Sound | `0x8c281a20` | 5 | `0x8c2586c4` | `0x8c258728` | TObject | 0x28 |  |
| TOExplosiveMachine | `0x8c27589c` | 14 | `0x8c1c0420` | `0x8c1c04c4` |  | 0xb0 | obj 0x0108, obj 0x0109, obj 0x010A |
| TOExplosiveMachine01 | `0x8c27585c` | 14 | `0x8c1c0800` | `0x8c1c0784` | TOExplosiveMachine | 0xb0 | obj 0x0108 |
| TOExplosiveMachine02 | `0x8c27581c` | 14 | `0x8c1c0974` | `0x8c1c08f8` | TOExplosiveMachine | 0xb0 | obj 0x0109 |
| TOExplosiveMachine03 | `0x8c2757dc` | 14 | `0x8c1c0af0` | `0x8c1c0a74` | TOExplosiveMachine | 0xb0 | obj 0x010A |
| TOFenceAncient01 | `0x8c268690` | 18 | `0x8c0f25a8` | `0x8c0f270c` |  | 0x110 |  |
| TOFenceAncient02 | `0x8c2686e0` | 18 | `0x8c0f28f8` | `0x8c0f2a5c` |  | 0x110 |  |
| TOFenceAncient03 | `0x8c268730` | 18 | `0x8c0f2c48` | `0x8c0f2dac` |  | 0x110 |  |
| TOFenceAncient04 | `0x8c268780` | 18 | `0x8c0f2fd4` | `0x8c0f3138` |  | 0x110 |  |
| TOHangerMachine01 | `0x8c276798` | 16 | `0x8c1c6f50` | `0x8c1c6e94` |  | 0x104 | obj 0x010C |
| TOHealGeneral | `0x8c272cb4` | 16 | `0x8c19fbe0` | `0x8c19fdf0` |  |  |  |
| TOKey | `0x8c269c48` | 25 | `0x8c112e74` | `0x8c112efc` |  | 0x11c | obj 0x0020, obj 0x0022 |
| TOKeyAncient01 | `0x8c269d8c` | 25 | `0x8c11434c` | `0x8c1144b4` | TOKey | 0x11c | obj 0x014D |
| TOKeyAncient02 | `0x8c269d20` | 25 | `0x8c113dfc` | `0x8c113f14` | TOKey | 0x124 | obj 0x0142 |
| TOKeyAncient03 | `0x8c26cf24` | 25 | `0x8c13616c` | `0x8c1362a8` | TOKey | 0x130 | obj 0x0143 |
| TOKeyCave01 | `0x8c26ce58` | 25 | `0x8c134f28` | `0x8c135064` | TOKey | 0x130 | obj 0x00C0 |
| TOKeyGenericSw | `0x8c26cb6c` | 25 | `0x8c1303e0` | `0x8c1305b4` | TOKey |  |  |
| TOKeyMachine01 | `0x8c26f7f8` | 25 | `0x8c162618` | `0x8c162754` | TOKey | 0x130 | obj 0x0101 |
| TOLightMachine01 | `0x8c27579c` | 14 | `0x8c1c0040` | `0x8c1c01d4` |  | 0xb4 | obj 0x0107 |
| TOMine | `0x8c269238` | 100 | `0x8c0fcd7c` | `0x8c0fce4c` |  | 0x390 |  |
| TOMineIcon01 | `0x8c26d524` | 100 | `0x8c13db50` | `0x8c13dd74` | TOMine | 0x390 | obj 0x000A |
| TOMineIcon02 | `0x8c26d6bc` | 100 | `0x8c13de14` | `0x8c13e038` | TOMine | 0x390 | obj 0x000B |
| TOMineIcon03 | `0x8c26d854` | 100 | `0x8c13e100` | `0x8c13e324` | TOMine | 0x390 | obj 0x000C |
| TOMineTrap | `0x8c2690a0` | 100 | `0x8c0fdc48` | `0x8c0fe190` | TOMine | 0x398 |  |
| TOMonumentAncient01 | `0x8c268558` | 18 | `0x8c0f16b8` | `0x8c0f15fc` |  | 0x11c | obj 0x0155 |
| TOMonumentAncient02 | `0x8c2685a8` | 16 | `0x8c0f1864` | `0x8c0f1a2c` |  | 0x128 | obj 0x0156 |
| TORainbowCave01 | `0x8c26a4ac` | 16 | `0x8c11f120` | `0x8c11f084` |  | 0x118 | obj 0x00CB |
| TOSensor | `0x8c26eecc` | 25 | `0x8c15c7cc` | `0x8c15c814` | TOKey | 0x11c |  |
| TOSensorAncient01 | `0x8c26ef38` | 25 | `0x8c15cb78` | `0x8c15ccec` | TOSensor | 0x12c | obj 0x014C |
| TOSensorGeneral01 | `0x8c26efa4` | 25 | `0x8c15d230` | `0x8c15d340` | TOSensor | 0x128 | obj 0x000F |
| TOSignCave01 | `0x8c269460` | 16 | `0x8c0ff5d0` | `0x8c0ff534` |  | 0x100 | obj 0x00C4 |
| TOSignCave02 | `0x8c269418` | 16 | `0x8c0ff24c` | `0x8c0ff1b0` |  | 0x100 | obj 0x00C5 |
| TOSignCave03 | `0x8c2693d0` | 16 | `0x8c0fee30` | `0x8c0fed94` |  | 0x100 | obj 0x00C6 |
| TOSoulDF | `0x8c2772c4` | 14 | `0x8c1db340` | `0x8c1db480` |  | 0xd4 |  |
| TOSparkMachine01 | `0x8c276758` | 14 | `0x8c1c6ac8` | `0x8c1c6bbc` |  | 0xb4 |  |
| TOSwitchAttack | `0x8c281a98` | 14 | `0x8c2588b4` | `0x8c258868` |  | 0xb0 | obj 0x0024 |
| TOSwitchAttackSub | `0x8c281a7c` | 5 | `0x8c258f34` | `0x8c259034` | TObject | 0x34 |  |
| TOSwitchItem | `0x8c281618` | 25 | `0x8c255f2c` | `0x8c255ee0` | TOKey | 0x12c | obj 0x0020 |
| TOSwitchTimer | `0x8c281b84` | 14 | `0x8c25afe0` | `0x8c25af94` |  | 0xb8 | obj 0x0025 |
| TOSymbolchatColli | `0x8c281684` | 86 | `0x8c25638c` | `0x8c2562b4` |  | 0x398 | obj 0x0021 |
| TOTrap | `0x8c26dc40` | 94 | `0x8c140b28` | `0x8c140b8c` |  | 0x360 |  |
| TOTrapAncient01 | `0x8c26ddc0` | 94 | `0x8c14120c` | `0x8c1414c4` | TOTrap | 0x390 |  |
| TOTrapAncient02 | `0x8c26e2dc` | 94 | `0x8c14cb90` | `0x8c14cd44` | TOTrap | 0x374 | obj 0x0154 |
| TOTrapAncient02R | `0x8c26e15c` | 94 | `0x8c14d450` | `0x8c14d670` | TOTrapAncient02 | 0x384 | obj 0x0167 |
| TOVS2 | `0x8c27db88` | 16 | `0x8c24be4c` | `0x8c24bf44` |  | 0x108 | obj 0x01A1, obj 0x01A2, obj 0x01A3, obj 0x01A4, obj 0x01A5, obj 0x01A6 |
| TOVS2Wall01 | `0x8c27d878` | 86 | `0x8c24c598` | `0x8c24c6e4` |  | 0x37c | obj 0x01A7 |
| TOVS2Wreck01 | `0x8c27db40` | 16 | `0x8c24c120` | `0x8c24c0a0` | TOVS2 | 0x108 | obj 0x01A1 |
| TOVS2Wreck02 | `0x8c27daf8` | 16 | `0x8c24c1f4` | `0x8c24c174` | TOVS2 | 0x108 | obj 0x01A2 |
| TOVS2Wreck03 | `0x8c27dab0` | 16 | `0x8c24c2c8` | `0x8c24c248` | TOVS2 | 0x108 | obj 0x01A3 |
| TOVS2Wreck04 | `0x8c27da68` | 16 | `0x8c24c39c` | `0x8c24c31c` | TOVS2 | 0x108 | obj 0x01A4 |
| TOVS2Wreck05 | `0x8c27da20` | 16 | `0x8c24c470` | `0x8c24c3f0` | TOVS2 | 0x108 | obj 0x01A5 |
| TOWreckAncient | `0x8c26843c` | 15 | `0x8c0f0278` | `0x8c0f030c` |  | 0xec | obj 0x015A, obj 0x015B |
| TOWreckAncient02 | `0x8c268480` | 15 | `0x8c0f0f40` | `0x8c0f0efc` | TOWreckAncient | 0xec | obj 0x015A |
| TOWreckAncient03 | `0x8c2684c4` | 15 | `0x8c0f1008` | `0x8c0f0fc4` | TOWreckAncient | 0xec | obj 0x015B |
| TObjAfsLoad | `0x8c26dbd0` | 5 | `0x8c140890` | `0x8c1408e0` | TObject | 0x3c |  |
| TObjBGLifeGame | `0x8c272868` | 5 | `0x8c196dc8` | `0x8c196d84` | TObject | 0x664 |  |
| TObjBagWarnWin | `0x8c27d62c` | 5 | `0x8c249830` | `0x8c249870` | TObject | 0xa8 |  |
| TObjBattery | `0x8c264f14` | 17 | `0x8c086b98` | `0x8c086ae8` |  | 0xec | obj 0x008A |
| TObjBgmCol | `0x8c274690` | 14 | `0x8c1a9c84` | `0x8c1a9d14` |  | 0xa4 | obj 0x0042 |
| TObjBgmColCtrl | `0x8c274674` | 5 | `0x8c1a9ff4` | `0x8c1a9f90` | TObject | 0x24 |  |
| TObjBigTuitate | `0x8c27d710` | 15 | `0x8c24ab70` | `0x8c24ac58` |  | 0x104 | obj 0x0193 |
| TObjBoss1Floor | `0x8c263e1c` | 5 | `0x8c078b48` | `0x8c078ba4` | TObject | 0x3c |  |
| TObjBoss1MokoHill_Solo | `0x8c266d04` | 5 | `0x8c0cd2ac` | `0x8c0cd398` | TObject | 0x54 |  |
| TObjBoss1MokoHill_SoloM | `0x8c266d20` | 5 | `0x8c0cccd8` | `0x8c0ccd7c` | TObject | 0x44 |  |
| TObjBoss2CeilJunk | `0x8c26f8fc` | 14 | `0x8c164fd8` | `0x8c165144` |  | 0xbc |  |
| TObjBoss2Dust | `0x8c274be4` | 5 | `0x8c1b09e8` | `0x8c1b0a48` | TObject | 0x34 |  |
| TObjBoss2RaftSplash | `0x8c272058` | 5 | `0x8c1858c4` | `0x8c185990` | TObject | 0x44 |  |
| TObjBoss2Tunnel | `0x8c26e124` | 5 | `0x8c14b888` | `0x8c14ba44` | TObject | 0xe0 |  |
| TObjBs4CutAtk | `0x8c27507c` | 5 | `0x8c1b71f4` | `0x8c1b7270` | TObject | 0x2c |  |
| TObjCGrass | `0x8c26220c` | 15 | `0x8c0542b0` | `0x8c0544f4` |  | 0x184 |  |
| TObjCHTimeWin | `0x8c280244` | 5 | `0x8c253390` | `0x8c2533c4` | TObject | 0x24 |  |
| TObjCMCheck | `0x8c281e50` | 5 | `0x8c26080c` | `0x8c2608d0` | TObject | 0xc4 |  |
| TObjCMHexTile | `0x8c265714` | 5 | `0x8c09a7f4` | `0x8c09a954` | TObject | 0x58 |  |
| TObjCMIcon | `0x8c2728a0` | 5 | `0x8c19584c` | `0x8c195570` | TObject | 0x20 |  |
| TObjCMLoadAfsTextureReq | `0x8c26dc08` | 5 | `0x8c13f874` `0x8c140350` | `0x8c13f930` | TObject | 0x1d8 |  |
| TObjCMLoadPlDataReq | `0x8c26dbec` | 5 | `0x8c13fed4` `0x8c13ff90` | `0x8c140270` | TObject | 0x94 |  |
| TObjCMSprCharSelBG | `0x8c272884` | 5 | `0x8c195e68` | `0x8c195e24` | TObject | 0x3c |  |
| TObjCamera | `0x8c27d6c8` | 16 | `0x8c24a100` | `0x8c24a220` |  | 0x1e4 | obj 0x0190 |
| TObjChip | `0x8c264f98` | 5 | `0x8c087d8c` | `0x8c087e18` | TObject | 0x78 |  |
| TObjCityAirCar_Car | `0x8c2758dc` | 14 | `0x8c1c108c` | `0x8c1c1138` |  | 0xb0 |  |
| TObjCityAirCar_Ctrl | `0x8c27591c` | 5 | `0x8c1c0dc0` | `0x8c1c0e34` | TObject | 0x7c |  |
| TObjCityAreaWarp | `0x8c275570` | 20 | `0x8c1be394` | `0x8c1be350` |  | 0xf8 | obj 0x0044 |
| TObjCityDoor_Guild | `0x8c275a48` | 24 | `0x8c1c1c80` | `0x8c1c1c1c` |  | 0xf4 | obj 0x0047 |
| TObjCityDoor_Med | `0x8c275978` | 24 | `0x8c1c2160` | `0x8c1c20fc` |  | 0xf4 | obj 0x0049 |
| TObjCityDoor_Shop | `0x8c275ab0` | 24 | `0x8c1c1ae4` | `0x8c1c1a80` |  | 0xf4 | obj 0x0046 |
| TObjCityDoor_Warp | `0x8c2759e0` | 24 | `0x8c1c1e1c` | `0x8c1c1db8` |  | 0xf4 | obj 0x0048 |
| TObjCityMainWarp | `0x8c2755c8` | 20 | `0x8c1bdf60` | `0x8c1bdf1c` |  | 0x120 | obj 0x0043 |
| TObjCityMainWarpChallenge | `0x8c281b10` | 20 | `0x8c2596d8` | `0x8c259870` |  | 0x1b0 | obj 0x0055 |
| TObjCityMapWarp | `0x8c27551c` | 19 | `0x8c1be710` | `0x8c1be6cc` |  | 0x124 | obj 0x0045 |
| TObjCity_Season_21_21 | `0x8c276fd4` | 15 | `0x8c1d8db0` | `0x8c1d8d24` |  | 0xf4 | obj 0x0050 |
| TObjCity_Season_Board | `0x8c276f50` | 14 | `0x8c1d9308` | `0x8c1d92c4` |  | 0x98 | obj 0x0052 |
| TObjCity_Season_FireWork | `0x8c276ef4` | 5 | `0x8c1d97d8` | `0x8c1d983c` | TObject | 0x44 |  |
| TObjCity_Season_FireWorkCtrl | `0x8c276f10` | 14 | `0x8c1d949c` | `0x8c1d9458` |  | 0x98 | obj 0x0053 |
| TObjCity_Season_HalloweenPumpkin | `0x8c277018` | 14 | `0x8c1d8c0c` | `0x8c1d8bc8` |  | 0x94 | obj 0x004F |
| TObjCity_Season_SonicAdv2 | `0x8c276f90` | 15 | `0x8c1d9054` | `0x8c1d8fe4` |  | 0xec | obj 0x0051 |
| TObjCity_Season_XmasTree | `0x8c277098` | 15 | `0x8c1d886c` | `0x8c1d87e0` |  | 0xf0 | obj 0x004D |
| TObjCity_Season_XmasWreath | `0x8c277058` | 14 | `0x8c1d8acc` | `0x8c1d8a88` |  | 0x94 | obj 0x004E |
| TObjCollision | `0x8c260ecc` | 15 | `0x8c0102e4` | `0x8c010448` |  | 0x110 | obj 0x0009 |
| TObjComputer | `0x8c264e88` | 17 | `0x8c085d00` | `0x8c085dd0` | TObjMesBase | 0xf0 | obj 0x008B |
| TObjContainerAbeEnemy | `0x8c264600` | 89 | `0x8c085714` | `0x8c0857c4` | TObjContainerBase | 0x384 | obj 0x0093 |
| TObjContainerBase | `0x8c26476c` | 89 | `0x8c085638` | `0x8c085264` | TObjContainerBase | 0x384 | obj 0x0092 |
| TObjContainerBase | `0x8c264d1c` | 89 | `0x8c083eac` | `0x8c084258` |  | 0x384 | obj 0x0088, obj 0x0091, obj 0x0092, obj 0x0095 |
| TObjContainerEnemy | `0x8c264a44` | 89 | `0x8c0847cc` | `0x8c084754` | TObjContainerBase | 0x384 | obj 0x0091 |
| TObjContainerIdo | `0x8c2645b4` | 17 | `0x8c0831b0` | `0x8c083370` |  | 0x144 | obj 0x008C |
| TObjContainerItem | `0x8c264bb0` | 89 | `0x8c084328` | `0x8c0842b0` | TObjContainerBase | 0x384 | obj 0x0088 |
| TObjContainerNoItem | `0x8c2648d8` | 89 | `0x8c084dac` | `0x8c084d34` | TObjContainerBase | 0x384 | obj 0x0095 |
| TObjControl | `0x8c260fbc` | 5 | `0x8c0130ac` | `0x8c0130e8` | TObject | 0x24 | ene 0x0001, ene 0x0002, ene 0x0003, ene 0x0004, ene 0x0005, ene 0x0006, ene 0x0007, ene 0x0008, ene 0x0009, ene 0x000A, ene 0x000B, ene 0x000C, ene 0x000D, ene 0x000E, ene 0x001A, ene 0x001B, ene 0x001C, ene 0x001D, ene 0x001E, ene 0x001F, ene 0x0020, ene 0x0021, ene 0x0022, ene 0x0024, ene 0x0025, ene 0x0026, ene 0x0027, ene 0x0028, ene 0x0029, ene 0x002B, ene 0x002C, ene 0x002D, ene 0x0030, ene 0x0031, ene 0x0032, ene 0x0040, ene 0x0041, ene 0x0044, ene 0x0045, ene 0x0046, ene 0x0047, ene 0x0060, ene 0x0062, ene 0x0063, ene 0x0064, ene 0x0065, ene 0x0080, ene 0x0081, ene 0x00A0, ene 0x00A3, ene 0x00A6, ene 0x00A7, ene 0x00A8, ene 0x00A9 |
| TObjDFBeamCursor | `0x8c278520` | 5 | `0x8c21b5a4` | `0x8c21b5ec` |  | 0x30 |  |
| TObjDFDemo0 | `0x8c278c58` | 14 | `0x8c228e68` | `0x8c228fe4` |  | 0x100 |  |
| TObjDFDemo1 | `0x8c278c18` | 14 | `0x8c22861a` | `0x8c228848` |  | 0x120 |  |
| TObjDFDemo2 | `0x8c278bd8` | 14 | `0x8c2281f8` | `0x8c22838c` |  | 0xc8 |  |
| TObjDFDemo3 | `0x8c278c98` | 14 | `0x8c229584` | `0x8c229778` |  | 0xcc |  |
| TObjDFDemo4 | `0x8c278cd8` | 14 | `0x8c229aaa` | `0x8c229cdc` |  | 0x10c |  |
| TObjDFDemo5 | `0x8c278d18` | 14 | `0x8c22a1b8` | `0x8c22a3ec` |  | 0x11c |  |
| TObjDFDemoF | `0x8c278dd0` | 14 | `0x8c22b56c` | `0x8c22b6d0` |  | 0xc0 |  |
| TObjDFEnding | `0x8c278f58` | 14 | `0x8c230910` | `0x8c230b8c` |  | 0x154 |  |
| TObjDFHorming | `0x8c2783a4` | 86 | `0x8c21b9b4` | `0x8c21bc48` |  | 0x39c |  |
| TObjDFJisin | `0x8c278504` | 5 | `0x8c21b698` | `0x8c21b71c` | TObject | 0x30 |  |
| TObjDFRecBall | `0x8c27853c` | 5 | `0x8c21b2ac` | `0x8c21b39c` | TObject | 0x50 |  |
| TObjDFRecover | `0x8c278558` | 5 | `0x8c21b078` | `0x8c21b0d0` | TObject | 0x48 |  |
| TObjDFTenchuFuru | `0x8c278574` | 5 | `0x8c21aef4` | `0x8c21af80` | TObject | 0x34 |  |
| TObjDFUsoTower | `0x8c278590` | 14 | `0x8c21a844` | `0x8c21a8c4` |  | 0x9c |  |
| TObjDFYutai | `0x8c278388` | 5 | `0x8c21c1a4` | `0x8c21c23c` | TObject | 0x30 |  |
| TObjDeadListWin | `0x8c281e18` | 5 | `0x8c25fff4` | `0x8c26004c` | TObject | 0x6c |  |
| TObjDoaEx01 | `0x8c27d798` | 22 | `0x8c24aed4` | `0x8c24afe8` |  | 0x11c | obj 0x0192 |
| TObjDoorKey | `0x8c264504` | 25 | `0x8c081abc` | `0x8c081be0` | TOKey | 0x130 | obj 0x0081 |
| TObjEZBoneRotBase | `0x8c2652c0` | 5 | `0x8c08b2d8` | `0x8c08b35c` | TObject | 0x9c |  |
| TObjEZBoneRotPlayer | `0x8c2652a4` | 5 | `0x8c08b584` | `0x8c08b714` |  | 0xa4 |  |
| TObjEZRopeBase | `0x8c266314` | 5 | `0x8c0bbb5c` | `0x8c0bbb98` | TObject | 0x34 |  |
| TObjEneBalClaw | `0x8c26a220` | 89 | `0x8c11dbd0` | `0x8c11dc84` |  | 0x3e0 | ene 0x00A8 |
| TObjEneBalClawBody | `0x8c26c004` | 89 | `0x8c124afc` | `0x8c124d74` | TObjEneBalClaw | 0x420 | ene 0x00A7 |
| TObjEneBeast | `0x8c267990` | 99 | `0x8c0e5148` | `0x8c0e54e8` |  | 0x3e8 | ene 0x0044 |
| TObjEneBm3Fly | `0x8c262250` | 112 | `0x8c054990` | `0x8c054d18` |  | 0x4c4 |  |
| TObjEneBm3FlyNest | `0x8c262418` | 111 | `0x8c057c80` | `0x8c057fa0` | TObjEneDD | 0x4a4 | ene 0x0042 |
| TObjEneBm3FlyNest_CarryFly | `0x8c2625dc` | 5 | `0x8c057674` | `0x8c0577b4` | TObject | 0x6c |  |
| TObjEneBm5Wolf | `0x8c262bfc` | 112 | `0x8c060994` | `0x8c060d94` |  | 0x488 | ene 0x0043 |
| TObjEneDD | `0x8c2627b8` | 109 | `0x8c059bc0` | `0x8c059c30` |  | 0x3a8 |  |
| TObjEneDarkGunCenter | `0x8c263fc0` | 89 | `0x8c07b4c4` | `0x8c07b5a8` |  | 0x3c4 | ene 0x00A3 |
| TObjEneDarkGunner | `0x8c263e38` | 89 | `0x8c078d58` | `0x8c079058` | TObjEnemyCustom | 0x448 | ene 0x00A2 |
| TObjEneDf2Bringer | `0x8c268870` | 112 | `0x8c0f48e4` | `0x8c0f4c20` |  | 0x490 | ene 0x00A4 |
| TObjEneDf2Bringer_Eff_Rush | `0x8c26972c` | 5 | `0x8c103d6c` | `0x8c103e58` | TObject | 0x38 |  |
| TObjEneDf2Bringer_Eff_TpAbsorb1 | `0x8c2696a4` | 18 | `0x8c1044b8` | `0x8c104574` |  | 0x10c |  |
| TObjEneDf2Bringer_Eff_TpAbsorb1 | `0x8c2696f4` | 5 | `0x8c10433c` | `0x8c1043f0` | TObject | 0x58 |  |
| TObjEneDf2Bringer_Eff_TpAbsorb1 | `0x8c269710` | 5 | `0x8c104070` | `0x8c104104` | TObject | 0x104 |  |
| TObjEneDimedian | `0x8c267b24` | 99 | `0x8c0e5de8` | `0x8c0e61f8` |  | 0x404 | ene 0x00A6 |
| TObjEneDubchik | `0x8c266d58` | 89 | `0x8c0cd98c` | `0x8c0cdcb8` | TObjEnemyCustom | 0x438 | ene 0x0080 |
| TObjEneGyaranzo | `0x8c2698e8` | 89 | `0x8c108728` | `0x8c1089b0` | TObjEnemyCustom | 0x420 | ene 0x0081 |
| TObjEneLappy | `0x8c262040` | 89 | `0x8c04faf0` | `0x8c04fee4` |  | 0x3c0 | ene 0x0041 |
| TObjEneMe1Canadin | `0x8c265520` | 123 | `0x8c090514` | `0x8c090a00` |  | 0x4e8 | ene 0x0083 |
| TObjEneMe1Canadin_EffDischarge | `0x8c266c94` | 5 | `0x8c0cb6a0` | `0x8c0cb7e0` | TObject | 0x6c |  |
| TObjEneMe1Canadin_EffLine | `0x8c266cb0` | 5 | `0x8c0cb4d0` | `0x8c0cb578` | TObject | 0x4c |  |
| TObjEneMe1Canadin_EffLineFade | `0x8c266ce8` | 5 | `0x8c0cb5bc` | `0x8c0cb374` | TObject | 0x40 |  |
| TObjEneMoja | `0x8c261768` | 89 | `0x8c038104` | `0x8c03843c` |  | 0x3d4 | ene 0x0040 |
| TObjEnePanBARA | `0x8c26f4c0` | 89 | `0x8c15dd48` | `0x8c15e1d0` |  | 0x438 |  |
| TObjEnePanarms | `0x8c26a070` | 89 | `0x8c11aae4` | `0x8c11aefc` |  | 0x444 | ene 0x0065 |
| TObjEnePanarmsAtkColli | `0x8c26f62c` | 89 | `0x8c161580` | `0x8c16172c` |  | 0x3ac |  |
| TObjEneRe2Flower | `0x8c262974` | 112 | `0x8c05c9e8` | `0x8c05cd10` |  | 0x448 | ene 0x0061 |
| TObjEneRe2Flower_Bomb | `0x8c262b3c` | 18 | `0x8c05e7c0` | `0x8c05e960` |  | 0x138 |  |
| TObjEneRe2Flower_EffCurse3 | `0x8c262b8c` | 5 | `0x8c05f4c4` | `0x8c05f534` | TObject | 0x2c |  |
| TObjEneRe4Sorcerer | `0x8c266a94` | 112 | `0x8c0c8c08` | `0x8c0c8efc` |  | 0x4b8 | ene 0x00A1 |
| TObjEneRe7Berura | `0x8c266f24` | 112 | `0x8c0d1684` | `0x8c0d1a0c` |  | 0x4ac | ene 0x00A5 |
| TObjEneRe7BeruraPunch | `0x8c268820` | 18 | `0x8c0f39dc` | `0x8c0f3b00` |  | 0x154 |  |
| TObjEneSaver | `0x8c266330` | 89 | `0x8c0bc534` | `0x8c0bc8fc` |  | 0x3e8 | ene 0x00A0 |
| TObjEneShark | `0x8c2615d4` | 99 | `0x8c036e9c` | `0x8c0372a8` |  | 0x404 | ene 0x0063 |
| TObjEneSlime | `0x8c268e94` | 89 | `0x8c0f7c7c` | `0x8c0f7db4` |  | 0x3f4 | ene 0x0064 |
| TObjEneSlimeOne | `0x8c268d28` | 89 | `0x8c0f82f0` `0x8c0f83f8` | `0x8c0f8760` |  | 0x414 |  |
| TObjEneSlimeTailAttack | `0x8c268a50` | 89 | `0x8c0fb540` | `0x8c0fb694` |  | 0x3e8 |  |
| TObjEneSlimeWaterBomb | `0x8c268bbc` | 89 | `0x8c0faf6c` | `0x8c0fb0d0` |  | 0x3b4 |  |
| TObjEnemy | `0x8c260fd8` | 89 | `0x8c012008` | `0x8c0120f4` |  | 0x390 |  |
| TObjEnemyCustom | `0x8c266608` | 89 | `0x8c0c2354` | `0x8c0c23c8` |  | 0x3a8 | ene 0x00C3, ene 0x00C4, ene 0x00C5, ene 0x00C6, ene 0x00C7 |
| TObjEnvSound | `0x8c269538` | 14 | `0x8c100b4c` | `0x8c100c38` |  | 0xa4 |  |
| TObjFogCollision | `0x8c26d03c` | 16 | `0x8c13677c` | `0x8c1367f0` |  | 0x9c | obj 0x0007 |
| TObjFogCollision_Manager | `0x8c26cf90` | 5 | `0x8c137328` | `0x8c13735c` | TObject | 0x24 |  |
| TObjGrass | `0x8c261ed4` | 89 | `0x8c04c6ec` | `0x8c04ca48` |  | 0x420 | ene 0x0060 |
| TObjGrassWeb | `0x8c261e94` | 14 | `0x8c04f854` | `0x8c04f904` |  | 0xb0 |  |
| TObjGyaranzoMissile | `0x8c269bb4` | 15 | `0x8c111ec8` | `0x8c11208c` |  | 0x114 |  |
| TObjHashiBase | `0x8c26a014` | 16 | `0x8c119d60` | `0x8c119e28` |  | 0x10c | obj 0x008F, obj 0x01A9, obj 0x01AA |
| TObjHashiVersus2 | `0x8c269f3c` | 16 | `0x8c11a72c` | `0x8c11a5d8` | TObjHashiBase | 0x10c | obj 0x01AA |
| TObjHexLine | `0x8c28186c` | 5 | `0x8c2571dc` | `0x8c2572b0` | TObject | 0xa4 |  |
| TObjHexLine | `0x8c281888` | 5 | `0x8c256bb4` | `0x8c256c38` | TObject | 0x24 |  |
| TObjInfoCol | `0x8c272ec8` | 15 | `0x8c1a16f0` | `0x8c1a1874` |  | 0xe8 | obj 0x0180 |
| TObjItemLight | `0x8c2747f8` | 14 | `0x8c1ab324` | `0x8c1ab3c0` |  | 0x9c | obj 0x0016 |
| TObjItemNameEntry | `0x8c270220` | 5 | `0x8c173f64` | `0x8c1740dc` | TObject | 0x28 |  |
| TObjItemNameSelect | `0x8c270204` | 5 | `0x8c174270` | `0x8c1743dc` | TObject | 0x28 |  |
| TObjItemOKWindow | `0x8c2701e8` | 5 | `0x8c1744ec` | `0x8c174700` | TObject | 0x6c |  |
| TObjLazerFence4 | `0x8c26a1dc` | 15 | `0x8c11d5c8` | `0x8c11d77c` |  | 0x130 | obj 0x0083 |
| TObjLazerFenceExtra | `0x8c26443c` | 15 | `0x8c0810c4` | `0x8c081314` |  | 0x114 | obj 0x0096 |
| TObjLazerFenceNorm | `0x8c264480` | 15 | `0x8c080b00` | `0x8c080ce4` |  | 0x110 | obj 0x0082 |
| TObjLight | `0x8c268020` | 14 | `0x8c0ed888` | `0x8c0ed9d4` |  | 0x104 | obj 0x0004 |
| TObjLoadGmPlNjReq | `0x8c26dc24` | 5 | `0x8c13f504` | `0x8c13f594` | TObject | 0x7c |  |
| TObjMapCsn | `0x8c272e84` | 15 | `0x8c1a129c` | `0x8c1a13a4` |  | 0x324 | obj 0x0014 |
| TObjMapWarpAncient | `0x8c26ebdc` | 19 | `0x8c157ac4` | `0x8c1578a4` |  | 0x140 | obj 0x0141 |
| TObjMesBase | `0x8c2747ac` | 17 | `0x8c1ab100` | `0x8c1ab174` |  | 0xf0 | obj 0x0087 |
| TObjNewFloorWin | `0x8c280228` | 5 | `0x8c253164` | `0x8c2531a8` | TObject | 0x3c |  |
| TObjNpcAHM01 | `0x8c27630c` | 98 | `0x8c1c4dc0` | `0x8c1c4d08` |  | 0x3d4 | ene 0x002C |
| TObjNpcARM00 | `0x8c27440c` | 98 | `0x8c1a4c08` | `0x8c1a4b50` |  | 0x3d4 | ene 0x0025 |
| TObjNpcBase | `0x8c26b174` | 98 | `0x8c120188` | `0x8c120328` |  | 0x3d4 |  |
| TObjNpcBringer | `0x8c270b30` | 98 | `0x8c177dc4` | `0x8c177f4c` |  | 0x3d4 | ene 0x00A9 |
| TObjNpcConnoisseur | `0x8c273568` | 98 | `0x8c1a2224` | `0x8c1a2164` |  | 0x3d4 | ene 0x001C |
| TObjNpcExpertBase | `0x8c2730b8` | 98 | `0x8c1a1cf0` | `0x8c1a1c48` |  | 0x3d4 | ene 0x001E |
| TObjNpcFemaleBase | `0x8c26b514` | 98 | `0x8c123fb8` | `0x8c123f10` |  | 0x3d4 | ene 0x0001 |
| TObjNpcFemaleChild | `0x8c26b6a4` | 98 | `0x8c12416c` | `0x8c1240c4` |  | 0x3d4 | ene 0x0002 |
| TObjNpcFemaleDwarf | `0x8c26b834` | 98 | `0x8c124320` | `0x8c124278` |  | 0x3d4 | ene 0x0003 |
| TObjNpcFemaleFat | `0x8c26b9c4` | 98 | `0x8c1244d4` | `0x8c12442c` |  | 0x3d4 | ene 0x0004 |
| TObjNpcFemaleMacho | `0x8c26bb54` | 98 | `0x8c124688` | `0x8c1245e0` |  | 0x3d4 | ene 0x0005 |
| TObjNpcFemaleOld | `0x8c26bce4` | 98 | `0x8c12483c` | `0x8c124794` |  | 0x3d4 | ene 0x0006 |
| TObjNpcFemaleTall | `0x8c26be74` | 98 | `0x8c1249f0` | `0x8c124948` |  | 0x3d4 | ene 0x0007 |
| TObjNpcGovernorBase | `0x8c26f010` | 98 | `0x8c15d7c8` | `0x8c15d720` |  | 0x3d4 | ene 0x001B |
| TObjNpcHFW00 | `0x8c273c3c` | 98 | `0x8c1a4348` | `0x8c1a4290` |  | 0x3d4 | ene 0x0027 |
| TObjNpcHHM00 | `0x8c273dcc` | 98 | `0x8c1a4508` | `0x8c1a4450` |  | 0x3d4 | ene 0x0021 |
| TObjNpcHRM00 | `0x8c273f5c` | 98 | `0x8c1a46c8` | `0x8c1a4610` |  | 0x3d4 | ene 0x0024 |
| TObjNpcHRM01 | `0x8c275e5c` | 98 | `0x8c1c4880` | `0x8c1c47c8` |  | 0x3d4 | ene 0x002D |
| TObjNpcLappy | `0x8c26f1a0` | 98 | `0x8c15d8d4` | `0x8c15da5c` |  | 0x3d4 | ene 0x0045 |
| TObjNpcMaleBase | `0x8c26a814` | 98 | `0x8c11f7f8` | `0x8c11f750` |  | 0x3d4 | ene 0x0008 |
| TObjNpcMaleChild | `0x8c26a9a4` | 98 | `0x8c11f9ac` | `0x8c11f904` |  | 0x3d4 | ene 0x0009 |
| TObjNpcMaleDwarf | `0x8c26ab34` | 98 | `0x8c11fb60` | `0x8c11fab8` |  | 0x3d4 | ene 0x000A |
| TObjNpcMaleFat | `0x8c26acc4` | 98 | `0x8c11fd14` | `0x8c11fc6c` |  | 0x3d4 | ene 0x000B |
| TObjNpcMaleMacho | `0x8c26ae54` | 98 | `0x8c11fec8` | `0x8c11fe20` |  | 0x3d4 | ene 0x000C |
| TObjNpcMaleOld | `0x8c26afe4` | 98 | `0x8c12007c` | `0x8c11ffd4` |  | 0x3d4 | ene 0x000D |
| TObjNpcMoja | `0x8c2709a0` | 98 | `0x8c177ae4` | `0x8c177c6c` |  | 0x3d4 | ene 0x0046 |
| TObjNpcNFM00 | `0x8c2740ec` | 98 | `0x8c1a4888` | `0x8c1a47d0` |  | 0x3d4 | ene 0x0028 |
| TObjNpcNFM01 | `0x8c27617c` | 98 | `0x8c1c4c00` | `0x8c1c4b48` |  | 0x3d4 | ene 0x0031 |
| TObjNpcNFW00 | `0x8c27427c` | 98 | `0x8c1a4a48` | `0x8c1a4990` |  | 0x3d4 | ene 0x0029 |
| TObjNpcNFW01 | `0x8c275fec` | 98 | `0x8c1c4a40` | `0x8c1c4988` |  | 0x3d4 | ene 0x0032 |
| TObjNpcNHW00 | `0x8c27378c` | 98 | `0x8c1a3ebc` | `0x8c1a3e04` |  | 0x3d4 | ene 0x0022 |
| TObjNpcNHW01 | `0x8c275ccc` | 98 | `0x8c1c46c0` | `0x8c1c4608` |  | 0x3d4 | ene 0x002B |
| TObjNpcNurseBase | `0x8c273248` | 98 | `0x8c1a1ea4` | `0x8c1a1dfc` |  | 0x3d4 | ene 0x001F |
| TObjNpcSecretaryBase | `0x8c2733d8` | 98 | `0x8c1a2058` | `0x8c1a1fb0` |  | 0x3d4 | ene 0x0020 |
| TObjNpcSoldierBase | `0x8c26c9dc` | 98 | `0x8c12aeb4` | `0x8c12ae0c` |  | 0x3d4 | ene 0x0019 |
| TObjNpcSoldierMacho | `0x8c26f330` | 98 | `0x8c15dbd0` | `0x8c15db28` |  | 0x3d4 | ene 0x001A |
| TObjParticle | `0x8c2643b0` | 14 | `0x8c0804ec` | `0x8c080680` |  | 0x9c | obj 0x0001 |
| TObjPlayer | `0x8c261318` | 87 | `0x8c01e920` `0x8c01ef50` `0x8c01f4f0` | `0x8c01fa18` |  | 0xc7c |  |
| TObjPlayerSet | `0x8c26522c` | 14 | `0x8c08a420` | `0x8c08a3dc` |  | 0x94 | obj 0x0000 |
| TObjRaderCol | `0x8c275c8c` | 14 | `0x8c1c41cc` | `0x8c1c45c4` |  | 0xa4 | obj 0x0017 |
| TObjRaderHideCol | `0x8c275c4c` | 14 | `0x8c1c43f4` | `0x8c1c4464` |  | 0x9c | obj 0x001F |
| TObjRain | `0x8c2642e8` | 5 | `0x8c07fd68` | `0x8c07fdb8` | TObject | 0xfc |  |
| TObjRainCtrl | `0x8c264348` | 5 | `0x8c080310` | `0x8c080280` | TObject | 0x24 |  |
| TObjResultWin | `0x8c281ad8` | 5 | `0x8c259184` | `0x8c2591fc` | TObject | 0x160 |  |
| TObjRoomId | `0x8c272018` | 14 | `0x8c1853d8` | `0x8c185448` |  | 0xa0 | obj 0x000E |
| TObjSinBoard | `0x8c278d58` | 14 | `0x8c22a930` | `0x8c22a978` |  | 0x94 | obj 0x001A |
| TObjSoloPlayWin | `0x8c281d8c` | 5 | `0x8c25f1a4` | `0x8c25f1d8` | TObject | 0x2c |  |
| TObjTagChallenge | `0x8c281d1c` | 5 | `0x8c25e5a8` | `0x8c25e5d8` | TObject | 0x20 |  |
| TObjTailsTailsMove | `0x8c281dfc` | 5 | `0x8c25faf0` | `0x8c25fb2c` | TObject | 0x30 |  |
| TObjTank | `0x8c264304` | 15 | `0x8c0800ec` | `0x8c080194` |  | 0xe4 | obj 0x0089 |
| TObjTombstone | `0x8c27cf1c` | 15 | `0x8c246638` | `0x8c246780` |  | 0x268 |  |
| TObjTuitate | `0x8c27d754` | 15 | `0x8c24a830` | `0x8c24a918` |  | 0x104 | obj 0x0191 |
| TObjVoloptCage | `0x8c26ec94` | 89 | `0x8c159a28` | `0x8c159b90` | TObjEnemyCustom | 0x3b0 |  |
| TObjVoloptPillar | `0x8c26ee44` | 15 | `0x8c15a900` | `0x8c15a9dc` |  | 0xf8 |  |
| TObjVoloptShutter | `0x8c26ee88` | 5 | `0x8c15af90` | `0x8c15b004` | TObject | 0x38 | ene 0x00C3 |
| TObjWarnChime | `0x8c281be0` | 5 | `0x8c25c454` | `0x8c25c4a8` | TObject | 0x3c |  |
| TObjWarpBase | `0x8c2651bc` | 19 | `0x8c08860c` | `0x8c0886a8` |  | 0xf0 |  |
| TObjWarpBoss | `0x8c277f60` | 20 | `0x8c1e7964` | `0x8c1e7b58` |  | 0x1b0 | obj 0x0019 |
| TObjWarpBoss03 | `0x8c278860` | 20 | `0x8c220664` | `0x8c2206ac` |  | 0xf4 | obj 0x0160 |
| TObject | `0x8c261580` | 5 | `0x8c0330e4` | `0x8c03311c` |  | 0x20* |  |
| TParticleCtrl | `0x8c265c94` | 5 | `0x8c0a6f38` `0x8c0a6ff0` `0x8c0a70b0` `0x8c0a7170` | `0x8c0a7238` | TObject | 0x68 |  |
| TParticleEditor | `0x8c265cb0` | 8 | `0x8c0a7db8` | `0x8c0a7ed0` | TEditor | 0x88 |  |
| TPhotonConcentrate | `0x8c26ff58` | 15 | `0x8c167614` | `0x8c167774` |  | 0x144 |  |
| TPhotonEstlla | `0x8c26f8b0` | 17 | `0x8c164824` | `0x8c164ae8` |  | 0x1dc |  |
| TPhotonFarlla | `0x8c26f864` | 17 | `0x8c163fd8` | `0x8c1642c8` |  | 0x1e0 |  |
| TPhotonGolla | `0x8c26e45c` | 17 | `0x8c14e034` | `0x8c14e35c` |  | 0x204 |  |
| TPhotonLaser | `0x8c26e528` | 86 | `0x8c14f4c4` | `0x8c14f5f0` |  | 0x39c |  |
| TPhotonLeilla | `0x8c26eacc` | 17 | `0x8c1557e8` | `0x8c155aa0` |  | 0x1e8 |  |
| TPhotonLine | `0x8c26ff9c` | 86 | `0x8c167a90` | `0x8c167bcc` |  | 0x394 |  |
| TPhotonMagicSquare | `0x8c26e4a8` | 14 | `0x8c14eb6c` `0x8c14ed00` `0x8c14ee50` | `0x8c14ef9c` |  | 0xd4 |  |
| TPhotonPilla | `0x8c26eb18` | 17 | `0x8c155ec4` | `0x8c1561bc` |  | 0x1e4 |  |
| TPhotonYoulla | `0x8c270290` | 17 | `0x8c174878` | `0x8c174a10` |  | 0x1e0 |  |
| TPlayerBattleCtrl | `0x8c27ccdc` | 5 | `0x8c242448` | `0x8c242500` | TObject | 0x274 |  |
| TPlyItem | `0x8c2701a4` | 5 | `0x8c16a014` | `0x8c16a11c` | TObject | 0x1b4 |  |
| TPlyOnCountOver | `0x8c2618f0` | 5 | `0x8c03ba94` | `0x8c03c214` | TObject | 0x28 |  |
| TPlyOnCreated | `0x8c26190c` | 5 | `0x8c03b9d4` | `0x8c03c258` | TObject | 0x28 |  |
| TPlyPKEditor | `0x8c279008` | 8 | `0x8c23490c` | `0x8c23499c` |  | 0x5c |  |
| TQuadSpriteCol | `0x8c261bf0` | 5 | `0x8c040254` | `0x8c040284` |  | 0x30 |  |
| TQuadSpriteNormal | `0x8c261c28` | 5 | `0x8c040790` | `0x8c0407c0` |  | 0x30 |  |
| TQuadSpriteScl | `0x8c261c44` | 5 | `0x8c040a44` | `0x8c040a74` |  | 0x30 |  |
| TQuadSpriteSclColRot | `0x8c261c7c` | 5 | `0x8c0419b8` | `0x8c0419e8` |  | 0x30 |  |
| TQuestColCtrl | `0x8c272a28` | 5 | `0x8c19df2c` | `0x8c19de38` | TObject | 0x20 |  |
| TQuestListOffline | `0x8c26ec4c` | 6 | `0x8c158b8c` | `0x8c158bec` | TShopWindowBase | 0x5c |  |
| TQuestListOnline | `0x8c278610` | 10 | `0x8c21d170` |  |  |  |  |
| TQuestListVM | `0x8c278928` | 6 | `0x8c221f44` | `0x8c22206c` | TShopWindowBase | 0x22f8 |  |
| TQuestScriptChecker | `0x8c2745f8` | 8 | `0x8c1a75b4` | `0x8c1a769c` | TEditor | 0x94 |  |
| TQuestThread | `0x8c270258` | 5 | `0x8c173578` `0x8c1735f8` `0x8c1736ac` `0x8c173778` | `0x8c173848` | TObject | 0xa8 |  |
| TQuestThreadBoard | `0x8c27023c` | 5 | `0x8c173b48` | `0x8c173bd8` | TObject | 0xa8 |  |
| TQuestVmDownLoadServer | `0x8c278ea4` | 5 | `0x8c22d5c8` | `0x8c22d680` | TObject | 0x9c |  |
| TRaderMapCore | `0x8c269578` | 14 | `0x8c10112c` | `0x8c101548` |  | 0x1c4 |  |
| TRaderPlayer | `0x8c2695b8` | 5 | `0x8c101192` | `0x8c1032d0` | TObject | 0x3c |  |
| TScene | `0x8c2614bc` | 5 | `0x8c031358` | `0x8c0313e4` | TObject | 0x44 |  |
| TSceneSora | `0x8c265920` | 14 | `0x8c09f278` | `0x8c09f2ac` |  | 0x94 |  |
| TSeqVarsEdit | `0x8c270978` | 8 | `0x8c177250` | `0x8c17729c` | TEditor | 0x54 |  |
| TSetEvtDestroy | `0x8c2720f0` | 5 | `0x8c18746c` | `0x8c187520` | TObject | 0x38 |  |
| TSetEvtScriptTest | `0x8c2720c8` | 8 | `0x8c187094` | `0x8c187104` | TEditor | 0x84 |  |
| TSetManager | `0x8c265904` | 5 | `0x8c09d6c8` | `0x8c09d6fc` | TObject | 0x24 |  |
| TShopArmorListWindow | `0x8c2721b4` | 6 | `0x8c188ef0` | `0x8c188f84` | TShopWindowBase | 0x1f8 |  |
| TShopEquipmentGearSequence | `0x8c269bf8` | 8 | `0x8c11247c` | `0x8c1124e0` | TShopSequence | 0x38 |  |
| TShopEquipmentListWindow | `0x8c269778` | 6 | `0x8c1055c4` | `0x8c105654` | TShopWindowBase | 0x194 |  |
| TShopEquipmentSellWindow | `0x8c269808` | 6 | `0x8c1067ec` | `0x8c1068dc` | TShopWindowBase | 0x3ac |  |
| TShopEquipmentSequence | `0x8c269798` | 8 | `0x8c106054` | `0x8c1060b8` | TShopSequence | 0x38 |  |
| TShopGenerator | `0x8c269a98` | 14 | `0x8c10b2b4` | `0x8c10b344` |  | 0x9c | obj 0x0040 |
| TShopGetItemWindow | `0x8c2745d8` | 6 | `0x8c1a6910` | `0x8c1a6990` | TShopWindowBase | 0x68 |  |
| TShopItemListWindow | `0x8c272194` | 6 | `0x8c188504` | `0x8c1885a0` | TShopWindowBase | 0x1c4 |  |
| TShopItemTecSequence | `0x8c269c20` | 8 | `0x8c112974` | `0x8c1129d8` | TShopSequence | 0x38 |  |
| TShopSequence | `0x8c2697c0` | 8 | `0x8c106568` | `0x8c106598` | TShopWindowBase | 0x2c |  |
| TShopWindowBase | `0x8c2697e8` | 6 | `0x8c1066e4` | `0x8c10671c` | TObject | 0x2c |  |
| TSlicerHistory | `0x8c26d084` | 5 | `0x8c137e08` | `0x8c137f78` | TObject | 0x5c |  |
| TTecAnti | `0x8c265da4` | 7 | `0x8c0ac300` | `0x8c0ac630` | TTecPlayerInfluence | 0x15c |  |
| TTecBarta | `0x8c265dc8` | 8 | `0x8c0ac934` `0x8c0acd00` | `0x8c0ad154` |  | 0x194 |  |
| TTecDeband | `0x8c265e4c` | 7 | `0x8c0afe6c` `0x8c0b0058` | `0x8c0b0380` | TTecPlayerInfluence | 0x15c |  |
| TTecGiBarta | `0x8c265e98` | 8 | `0x8c0b11f4` `0x8c0b15d4` | `0x8c0b1a14` |  | 0x194 |  |
| TTecGiFoie | `0x8c265edc` | 7 | `0x8c0b1cdc` | `0x8c0b204c` |  | 0x154 |  |
| TTecGiZonde | `0x8c265f00` | 8 | `0x8c0b262c` | `0x8c0b2984` |  | 0x1a8 |  |
| TTecGrants | `0x8c265f60` | 7 | `0x8c0b3178` | `0x8c0b3048` |  | 0x168 |  |
| TTecJelin | `0x8c265fa0` | 7 | `0x8c0b39cc` | `0x8c0b3af8` |  | 0x108 |  |
| TTecLuker | `0x8c266024` | 7 | `0x8c0b3df8` | `0x8c0b4070` |  | 0x12c |  |
| TTecMegid | `0x8c266060` | 8 | `0x8c0b4d34` `0x8c0b5080` | `0x8c0b5514` |  | 0x194 |  |
| TTecPlayerInfluence | `0x8c266114` | 7 | `0x8c0b6a74` | `0x8c0b6c78` |  | 0xfc |  |
| TTecRaBarta | `0x8c266138` | 7 | `0x8c0b6e0c` `0x8c0b7080` | `0x8c0b75a4` |  | 0x158 |  |
| TTecRaFoie | `0x8c266178` | 7 | `0x8c0b7860` `0x8c0b7a68` | `0x8c0b7c5c` |  | 0x168 |  |
| TTecRaZonde | `0x8c26619c` | 7 | `0x8c0b871c` | `0x8c0b8c24` |  | 0x16c |  |
| TTecResta | `0x8c2661dc` | 7 | `0x8c0b8dc8` `0x8c0b8fb0` | `0x8c0b91c8` | TTecPlayerInfluence | 0x15c |  |
| TTecReverser | `0x8c265d64` | 7 | `0x8c0abf80` | `0x8c0abf3c` |  | 0x164 |  |
| TTecSifta | `0x8c266244` | 7 | `0x8c0ba2cc` `0x8c0ba4b8` | `0x8c0ba7bc` | TTecPlayerInfluence | 0x15c |  |
| TTecSlicer | `0x8c26d0a0` | 14 | `0x8c137460` | `0x8c137720` |  | 0x134 |  |
| TTecZarua | `0x8c266284` | 7 | `0x8c0babf0` | `0x8c0bad1c` |  | 0x108 |  |
| TTecZonde | `0x8c2662a8` | 8 | `0x8c0bb6fc` | `0x8c0bb658` |  | 0x1a8 |  |
| TTecZondeEff | `0x8c266f08` | 5 | `0x8c0d0360` `0x8c0d0788` | `0x8c0d0bac` | TObject | 0x298 |  |
| TWindowArea | `0x8c27d858` | 6 | `0x8c24bc2c` `0x8c24bce8` | `0x8c24bbc4` | TWindowRoom | 0x6c |  |
| TWindowBreakIn | `0x8c2782f4` | 6 | `0x8c217914` | `0x8c217948` |  | 0x68 |  |
| TWindowChallengeResult | `0x8c27e45c` | 6 | `0x8c24de6c` | `0x8c24dfdc` |  | 0x68 |  |
| TWindowChat | `0x8c277354` | 5 | `0x8c1dca80` | `0x8c1dcb54` | TObject | 0x3c |  |
| TWindowChatSymbol | `0x8c2745b8` | 6 | `0x8c1a62a8` | `0x8c1a632c` |  | 0x70 |  |
| TWindowChoiceSetting | `0x8c280ff0` | 6 | `0x8c254f6c` | `0x8c254ce0` |  | 0x94 |  |
| TWindowComCard | `0x8c278000` | 6 | `0x8c1f1a9c` `0x8c1f1b58` | `0x8c1f19e8` |  | 0x6c |  |
| TWindowCtrl | `0x8c26772c` | 5 | `0x8c0dc9ac` | `0x8c0dcc10` | TObject | 0xb8 |  |
| TWindowCtrlMain | `0x8c27563c` | 5 | `0x8c1bec9c` | `0x8c1bed08` | TObject | 0x20 |  |
| TWindowCtrlMainKiller | `0x8c275620` | 5 | `0x8c1bee70` | `0x8c1bef00` | TObject | 0x20 |  |
| TWindowDD | `0x8c27821c` | 5 | `0x8c210b5c` | `0x8c21108c` | TObject | 0x108 |  |
| TWindowDD_WS_ScrollBar | `0x8c278258` | 6 | `0x8c215450` | `0x8c2154ac` |  | 0x78 |  |
| TWindowDD_WS_String | `0x8c278278` | 6 | `0x8c21597c` | `0x8c215a54` |  | 0x7c |  |
| TWindowDD_WS_Word | `0x8c278298` | 6 | `0x8c215c38` | `0x8c215cdc` |  | 0x98 |  |
| TWindowDeposit | `0x8c278ee0` | 6 | `0x8c22f004` | `0x8c22f0c4` |  | 0x6c |  |
| TWindowDuelResult | `0x8c27e47c` | 6 | `0x8c24e084` | `0x8c24e0f0` |  | 0x6c |  |
| TWindowEff | `0x8c278db4` | 5 | `0x8c22b298` | `0x8c22b324` | TObject | 0x48 |  |
| TWindowFukidasi | `0x8c267748` | 6 | `0x8c0de834` | `0x8c0de9c0` |  | 0xa8 |  |
| TWindowGetComCard | `0x8c278138` | 5 | `0x8c20937c` | `0x8c2094ac` | TObject | 0x30 |  |
| TWindowHelpItem | `0x8c276eb4` | 6 | `0x8c1d5b24` | `0x8c1d5be4` |  | 0xb8 |  |
| TWindowInputNumber | `0x8c2754fc` | 6 | `0x8c1bd074` | `0x8c1bd124` |  | 0x7c |  |
| TWindowKeyBoardBase | `0x8c277474` | 6 | `0x8c1e0f10` | `0x8c1e1020` |  | 0xc0 |  |
| TWindowKeyBoardHard | `0x8c277454` | 6 | `0x8c1dfd28` | `0x8c1dfda0` |  | 0x80 |  |
| TWindowKeyBoardSoft | `0x8c277434` | 6 | `0x8c1de120` | `0x8c1de194` |  | 0x74 |  |
| TWindowLoadItemTexture | `0x8c278e84` | 6 | `0x8c22ca64` | `0x8c22cb18` |  | 0x74 |  |
| TWindowLockOn | `0x8c26906c` | 6 | `0x8c0fc440` | `0x8c0fc304` |  | 0x7c |  |
| TWindowMainMenu | `0x8c272630` | 5 | `0x8c18bafc` | `0x8c18bc10` | TObject | 0x9c |  |
| TWindowMainMenuCommand | `0x8c27264c` | 6 | `0x8c18ccd8` | `0x8c18cc18` |  | 0x70 |  |
| TWindowMakeTeam | `0x8c277ea4` | 5 | `0x8c1e5100` | `0x8c1e51b8` | TObject | 0x3c |  |
| TWindowMenu | `0x8c26eb64` | 6 | `0x8c1566f0` | `0x8c1567bc` |  | 0x9c |  |
| TWindowMenuInfomation | `0x8c277334` | 6 | `0x8c1dc010` | `0x8c1dbd44` |  | 0x90* |  |
| TWindowMeseta | `0x8c2754dc` | 6 | `0x8c1bce5c` | `0x8c1bcf58` |  | 0x70 |  |
| TWindowMessage | `0x8c269f1c` | 6 | `0x8c119470` | `0x8c11953c` |  | 0xa0 |  |
| TWindowMessageInfomation | `0x8c278b48` | 6 | `0x8c226800` | `0x8c226798` | TWindowMessage | 0xa0 |  |
| TWindowMessageLog | `0x8c278b0c` | 6 | `0x8c22575c` | `0x8c225620` | TWindowMessage | 0xa8 |  |
| TWindowMessagePage | `0x8c278ec0` | 6 | `0x8c22ec64` | `0x8c22ebb4` | TWindowMessage | 0xa8 |  |
| TWindowMessageQuest | `0x8c2782d4` | 6 | `0x8c2178ac` | `0x8c2177f0` | TWindowMessage | 0xa0 |  |
| TWindowOptionCtrl | `0x8c278b84` | 5 | `0x8c226c28` | `0x8c226c94` | TObject | 0x38 |  |
| TWindowQuantity | `0x8c276818` | 6 | `0x8c1ca088` | `0x8c1ca148` |  | 0x6c |  |
| TWindowRoom | `0x8c276854` | 6 | `0x8c1cb998` | `0x8c1cba54` |  | 0x6c |  |
| TWindowSetLevelUp | `0x8c278b68` | 5 | `0x8c2268ac` | `0x8c226938` | TObject | 0x40 |  |
| TWindowShortCut | `0x8c2785f0` | 6 | `0x8c21cbc0` | `0x8c21cc84` |  | 0x7c |  |
| TWindowShortListCtrl | `0x8c279030` | 5 | `0x8c234cb8` | `0x8c234e04` | TObject | 0x34 |  |
| TWindowSimpleStatus | `0x8c2677dc` | 6 | `0x8c0e3294` | `0x8c0e330c` |  | 0x84 |  |
| TWindowSoundBalance | `0x8c278e10` | 6 | `0x8c22b800` | `0x8c22b948` |  | 0x70 |  |
| TWindowStatus | `0x8c2677bc` | 6 | `0x8c0e2648` | `0x8c0e2738` |  | 0x7c |  |
| TWindowSubAreaMap | `0x8c276e84` | 5 | `0x8c1d576c` | `0x8c1d57d0` |  | 0x24 |  |
| TWindowSubAreaMapDisp | `0x8c276ed4` | 6 | `0x8c1d7940` | `0x8c1d7a6c` |  | 0x80 |  |
| TWindowSubComCard | `0x8c276e0c` | 5 | `0x8c1d24bc` | `0x8c1d2554` | TObject | 0x84 |  |
| TWindowSubComCardList | `0x8c278090` | 6 | `0x8c206ee4` | `0x8c206fd0` | TWindowMenu | 0xa0 |  |
| TWindowSubCustomEquip | `0x8c2728bc` | 6 | `0x8c197420` | `0x8c1974c0` |  | 0x74 |  |
| TWindowSubCustomSelect | `0x8c272974` | 6 | `0x8c198da4` | `0x8c198f08` |  | 0x90 |  |
| TWindowSubEquip | `0x8c276e28` | 5 | `0x8c1d4790` | `0x8c1d483c` | TObject | 0x38 |  |
| TWindowSubEquipKind | `0x8c276e64` | 6 | `0x8c1d50b4` | `0x8c1d4fe8` |  | 0x98 |  |
| TWindowSubEquipList | `0x8c276e44` | 6 | `0x8c1d4d90` | `0x8c1d4cdc` |  | 0x98 |  |
| TWindowSubGameEnd | `0x8c2728f8` | 5 | `0x8c1986ec` | `0x8c1987d8` | TObject | 0x2c |  |
| TWindowSubItem | `0x8c273770` | 5 | `0x8c1a2db4` | `0x8c1a2e3c` | TObject | 0x40 |  |
| TWindowSubItemList | `0x8c273750` | 6 | `0x8c1a2838` | `0x8c1a2754` |  | 0xa0 |  |
| TWindowSubLog | `0x8c2771a8` | 5 | `0x8c1d9ed4` | `0x8c1d9fa0` | TObject | 0x68 |  |
| TWindowSubMag | `0x8c272734` | 5 | `0x8c190704` | `0x8c190780` | TObject | 0x4c |  |
| TWindowSubMagPhoton | `0x8c278f38` | 6 | `0x8c230538` | `0x8c230598` |  | 0x7c |  |
| TWindowSubQuestBoard | `0x8c278680` | 5 | `0x8c21e40c` | `0x8c21e478` | TObject | 0x2c |  |
| TWindowSubQuestBoardSelect | `0x8c27869c` | 6 | `0x8c21e5a8` | `0x8c21e690` |  | 0x70 |  |
| TWindowSubShortCutList | `0x8c2785d0` | 6 | `0x8c21c9c4` | `0x8c21c8ac` |  | 0x9c |  |
| TWindowSubShortMail | `0x8c2782b8` | 5 | `0x8c21696c` | `0x8c2169c8` | TObject | 0x58 |  |
| TWindowSubStatusDisp | `0x8c272848` | 6 | `0x8c19402c` | `0x8c194098` |  | 0x70 |  |
| TWindowSubSymbolChat | `0x8c276df0` | 5 | `0x8c1d03c8` | `0x8c1d0434` | TObject | 0x68 |  |
| TWindowSubSymbolChatFaceType | `0x8c278840` | 6 | `0x8c21ff00` | `0x8c21ffb0` |  | 0x74 |  |
| TWindowSubSymbolChatHelp | `0x8c278820` | 6 | `0x8c21f778` | `0x8c21f7d0` |  | 0x7c |  |
| TWindowSubSymbolChatParts | `0x8c278aec` | 6 | `0x8c2247bc` | `0x8c2248d0` |  | 0xa0 |  |
| TWindowSubSymbolChatPartsSet | `0x8c278acc` | 6 | `0x8c223dac` | `0x8c223ec4` |  | 0xa0 |  |
| TWindowSubTechnique | `0x8c274620` | 5 | `0x8c1a8750` | `0x8c1a87b4` | TObject | 0x3c |  |
| TWindowUserSort | `0x8c278314` | 6 | `0x8c217f84` | `0x8c217ffc` |  | 0x6c |  |
| TeneFakeTecThunderEff | `0x8c26526c` | 5 | `0x8c08a590` | `0x8c08a63c` | TObject | 0x34c |  |

## Unnamed vtables referenced by code

These are stored by functions that set no class-name string (intermediate bases, destructors, or classes whose name is set elsewhere). Slot 0 is the destructor.

| Vtable | Slots | Slot 0 | Storing functions |
|---|---|---|---|
| `0x8c260f10` | 10 | `0x8c01116c` | `0x8c01116c` `0x8c09c9a0` |
| `0x8c260f40` | 10 | `0x8c010edc` | `0x8c010edc` `0x8c02cc88` |
| `0x8c260f70` | 5 | `0x8c0111d0` | `0x8c010514` `0x8c010edc` `0x8c01116c` `0x8c0111d0` |
| `0x8c260fa0` | 5 | `0x8c011fc4` | `0x8c011fc4` `0x8c281e80` |
| `0x8c261144` | 5 | `0x8c0135b8` | `0x8c0135b8` |
| `0x8c26117c` | 5 | `0x8c015064` | `0x8c014f74` `0x8c015064` |
| `0x8c261198` | 5 | `0x8c0150b4` | `0x8c014c1c` `0x8c0150b4` |
| `0x8c2611b4` | 5 | `0x8c015104` | `0x8c014a7c` `0x8c015104` |
| `0x8c2611d0` | 5 | `0x8c015154` | `0x8c014948` `0x8c015154` |
| `0x8c2611ec` | 5 | `0x8c0151a4` | `0x8c014814` `0x8c0151a4` |
| `0x8c261208` | 5 | `0x8c0151f4` | `0x8c014694` `0x8c0151f4` |
| `0x8c261224` | 5 | `0x8c01410c` | `0x8c01410c` `0x8c0142d8` |
| `0x8c261240` | 5 | `0x8c013f10` | `0x8c013f10` `0x8c014694` `0x8c014814` `0x8c014948` … |
| `0x8c26125c` | 5 | `0x8c01bb30` | `0x8c01b56c` `0x8c01bb30` |
| `0x8c261294` | 15 | `0x8c01c500` | `0x8c01c488` `0x8c01c500` |
| `0x8c2612d8` | 14 | `0x8c01d2b0` | `0x8c01d1ec` `0x8c01d2b0` |
| `0x8c26147c` | 10 | `0x8c02d110` | `0x8c02cc88` `0x8c02d110` |
| `0x8c2614ac` | 2 | `0x8c03061c` | `0x8c03056c` `0x8c0305d8` |
| `0x8c2614d8` | 5 | `0x8c033050` | `0x8c033050` |
| `0x8c2614f4` | 5 | `0x8c033094` | `0x8c033094` |
| `0x8c261510` | 5 | `0x8c032e38` | `0x8c032bd8` `0x8c032e38` `0x8c033094` |
| `0x8c26152c` | 5 | `0x8c033b24` | `0x8c033b24` |
| `0x8c261548` | 5 | `0x8c033a98` | `0x8c033a98` `0x8c033b24` |
| `0x8c261564` | 5 | `0x8c0336c8` | `0x8c033498` `0x8c0336c8` |
| `0x8c261580` | 5 | `0x8c03311c` | `0x8c0330e4` `0x8c03311c` |
| `0x8c261928` | 5 | `0x8c03c29c` | `0x8c02c6c0` `0x8c03c29c` `0x8c1ef644` |
| `0x8c261944` | 5 | `0x8c03b8b8` | `0x8c03b844` `0x8c03b8b8` |
| `0x8c261960` | 5 | `0x8c03b6f4` | `0x8c03b668` `0x8c03b6f4` |
| `0x8c26197c` | 5 | `0x8c03b574` | `0x8c03b574` `0x8c03b668` `0x8c03b6f4` |
| `0x8c261998` | 5 | `0x8c03c2e0` | `0x8c03b0d8` `0x8c03c2e0` |
| `0x8c2619b4` | 5 | `0x8c03c324` | `0x8c03b024` `0x8c03c324` |
| `0x8c2619d0` | 5 | `0x8c03c368` | `0x8c03c368` |
| `0x8c2619ec` | 89 | `0x8c03c454` | `0x8c03c454` |
| `0x8c261b80` | 5 | `0x8c03d174` | `0x8c03cf18` `0x8c03d174` |
| `0x8c261b9c` | 5 | `0x8c03d280` | `0x8c03d280` |
| `0x8c261bb8` | 5 | `0x8c03f2e8` | `0x8c03f1cc` `0x8c03f2e8` |
| `0x8c261bd4` | 5 | `0x8c0401a0` | `0x8c040144` `0x8c0401a0` |
| `0x8c261c0c` | 5 | `0x8c04074c` | `0x8c04074c` |
| `0x8c261c60` | 5 | `0x8c040d40` | `0x8c040d10` `0x8c040d40` |
| `0x8c261c98` | 6 | `0x8c043000` | `0x8c042fd4` `0x8c043000` |
| `0x8c261cb8` | 6 | `0x8c042dfc` | `0x8c042dd4` `0x8c042dfc` |
| `0x8c261cd8` | 6 | `0x8c043198` | `0x8c04316c` `0x8c043198` |
| `0x8c261d18` | 86 | `0x8c0436e0` | `0x8c043418` `0x8c0436e8` |
| `0x8c2621ac` | 5 | `0x8c051bfc` | `0x8c051a98` `0x8c051bfc` |
| `0x8c2621c8` | 15 | `0x8c051f28` | `0x8c051eb8` `0x8c051f28` |
| `0x8c2625f8` | 93 | `0x8c05bd84` | `0x8c05bcc0` `0x8c05bd84` |
| `0x8c262ba8` | 5 | `0x8c05f30c` | `0x8c05f30c` |
| `0x8c262bc4` | 5 | `0x8c05edd8` | `0x8c05edd8` |
| `0x8c262be0` | 5 | `0x8c05ec70` | `0x8c05ec70` |
| `0x8c262dc4` | 112 | `0x8c066478` | `0x8c065c24` `0x8c066478` |
| `0x8c262f8c` | 18 | `0x8c0651e8` | `0x8c0651e8` `0x8c065c24` |
| `0x8c262fdc` | 42 | `0x8c073514` | `0x8c073288` `0x8c073514` |
| `0x8c2630a8` | 59 | `0x8c0755c0` | `0x8c075398` `0x8c0755c0` |
| `0x8c263660` | 59 | `0x8c077e84` | `0x8c077e2c` `0x8c077e84` |
| `0x8c263fa4` | 5 | `0x8c07b480` | `0x8c07b41c` `0x8c07b480` |
| `0x8c264198` | 18 | `0x8c07c668` | `0x8c07c668` |
| `0x8c2641e8` | 5 | `0x8c07ca70` | `0x8c07c918` `0x8c07ca70` |
| `0x8c264364` | 17 | `0x8c0803a8` | `0x8c080360` `0x8c0803a8` |
| `0x8c264570` | 15 | `0x8c0822c8` | `0x8c082180` `0x8c0822c8` |
| `0x8c264f60` | 5 | `0x8c086db0` | `0x8c086cdc` `0x8c086db0` |
| `0x8c264f7c` | 5 | `0x8c086e30` | `0x8c086e30` |
| `0x8c264fb4` | 20 | `0x8c089e98` | `0x8c089da0` `0x8c089e98` |
| `0x8c26500c` | 20 | `0x8c089954` | `0x8c08984c` `0x8c089954` |
| `0x8c265064` | 20 | `0x8c0894c4` | `0x8c0893a8` `0x8c0894c4` |
| `0x8c2650bc` | 20 | `0x8c088ff4` | `0x8c088f14` `0x8c088ff4` `0x8c0893a8` `0x8c0894c4` … |
| `0x8c265114` | 19 | `0x8c08a330` | `0x8c088ce0` `0x8c08a330` |
| `0x8c265168` | 19 | `0x8c0888e0` | `0x8c0887c0` `0x8c0888e0` `0x8c088ce0` `0x8c08a330` |
| `0x8c265210` | 5 | `0x8c08a398` | `0x8c08a398` |
| `0x8c26532c` | 123 | `0x8c095314` | `0x8c0951a0` `0x8c095314` |
| `0x8c265730` | 5 | `0x8c09a0ec` | `0x8c09a0ec` `0x8c09a130` |
| `0x8c26574c` | 5 | `0x8c099c2c` | `0x8c099c2c` `0x8c099cb0` |
| `0x8c265768` | 5 | `0x8c099698` | `0x8c099698` `0x8c09971c` |
| `0x8c265784` | 5 | `0x8c098d54` | `0x8c098d54` `0x8c098d98` |
| `0x8c2657a0` | 5 | `0x8c0986b0` | `0x8c0985e8` `0x8c0986b0` |
| `0x8c2657bc` | 5 | `0x8c097194` | `0x8c097058` `0x8c097194` |
| `0x8c2657d8` | 11 | `0x8c09674c` | `0x8c09674c` `0x8c096854` |
| `0x8c26580c` | 5 | `0x8c096514` | `0x8c0964d4` `0x8c096514` |
| `0x8c26586c` | 5 | `0x8c09ae88` | `0x8c09ae10` `0x8c09ae88` `0x8c104e9c` `0x8c104f68` … |
| `0x8c265888` | 10 | `0x8c09ce5c` | `0x8c09ce5c` |
| `0x8c2658b8` | 5 | `0x8c09cd90` | `0x8c09cd50` `0x8c09cd90` |
| `0x8c2658d4` | 10 | `0x8c09ca04` | `0x8c09c9a0` `0x8c09ca04` |
| `0x8c265a2c` | 11 | `0x8c0a0790` | `0x8c0a0790` `0x8c0a0a34` |
| `0x8c265a60` | 11 | `0x8c0a0b28` | `0x8c0a0a94` `0x8c0a0b28` |
| `0x8c265b18` | 5 | `0x8c0a4910` | `0x8c0a4910` `0x8c0a49c8` |
| `0x8c265b34` | 5 | `0x8c0a47dc` | `0x8c0a460c` `0x8c0a47dc` |
| `0x8c265b50` | 11 | `0x8c0a44e0` | `0x8c0a44e0` `0x8c0a45c8` |
| `0x8c265b84` | 11 | `0x8c0a4b1c` | `0x8c0a4b1c` `0x8c0a4c9c` |
| `0x8c265bb8` | 11 | `0x8c0a504c` | `0x8c0a4f88` `0x8c0a504c` |
| `0x8c265bec` | 11 | `0x8c0a56dc` | `0x8c0a56dc` `0x8c0a57b0` |
| `0x8c265c20` | 11 | `0x8c0a57f0` | `0x8c0a57f0` `0x8c0a5a88` |
| `0x8c265c54` | 14 | `0x8c0a5ba8` | `0x8c0a5ad0` `0x8c0a5ba8` |
| `0x8c265cd8` | 5 | `0x8c0a9c78` | `0x8c0a9658` `0x8c0a9934` `0x8c0a9c78` |
| `0x8c265cf4` | 5 | `0x8c0aad54` | `0x8c0aa7e0` `0x8c0aaa7c` `0x8c0aad54` |
| `0x8c265d10` | 5 | `0x8c0ab510` | `0x8c0ab3bc` `0x8c0ab510` |
| `0x8c265d2c` | 5 | `0x8c0ab8e8` | `0x8c0ab558` `0x8c0ab700` `0x8c0ab8e8` |
| `0x8c265d48` | 5 | `0x8c0ac240` | `0x8c0ac240` |
| `0x8c265d88` | 5 | `0x8c0ac8e0` | `0x8c0ac7fc` `0x8c0ac8e0` |
| `0x8c265df0` | 7 | `0x8c0ad870` | `0x8c0ad45c` `0x8c0ad660` `0x8c0ad870` |
| `0x8c265e14` | 5 | `0x8c0adbc8` | `0x8c0adbc8` |
| `0x8c265e30` | 5 | `0x8c0b05ec` | `0x8c0b0588` `0x8c0b05ec` |
| `0x8c265e70` | 8 | `0x8c0b0f20` | `0x8c0b07b8` `0x8c0b0b3c` `0x8c0b0f20` |
| `0x8c265ec0` | 5 | `0x8c0b2350` | `0x8c0b21d4` `0x8c0b2350` |
| `0x8c265f28` | 5 | `0x8c0b36f4` | `0x8c0b367c` `0x8c0b36f4` |
| `0x8c265f44` | 5 | `0x8c0b3494` | `0x8c0b32c0` `0x8c0b3494` |
| `0x8c265f84` | 5 | `0x8c0b3d08` | `0x8c0b3cc4` `0x8c0b3d08` |
| `0x8c265fc4` | 15 | `0x8c0b4cbc` | `0x8c0b4c40` `0x8c0b4cbc` |
| `0x8c266008` | 5 | `0x8c0b4694` | `0x8c0b4584` `0x8c0b4694` |
| `0x8c266088` | 5 | `0x8c0b691c` | `0x8c0b691c` |
| `0x8c2660a4` | 5 | `0x8c0b68a0` | `0x8c0b6824` `0x8c0b68a0` |
| `0x8c2660c0` | 5 | `0x8c0b67a0` | `0x8c0b6750` `0x8c0b67a0` |
| `0x8c2660dc` | 5 | `0x8c0b66d8` | `0x8c0b66d8` |
| `0x8c2660f8` | 5 | `0x8c0b650c` | `0x8c0b6394` `0x8c0b6448` `0x8c0b650c` |
| `0x8c26615c` | 5 | `0x8c0b83c0` | `0x8c0b7fcc` `0x8c0b8200` `0x8c0b83c0` |
| `0x8c2661c0` | 5 | `0x8c0b95fc` | `0x8c0b94d8` `0x8c0b95fc` |
| `0x8c266200` | 8 | `0x8c0b9ce8` | `0x8c0b9730` `0x8c0b99f4` `0x8c0b9ce8` |
| `0x8c266228` | 5 | `0x8c0baa20` | `0x8c0ba9bc` `0x8c0baa20` |
| `0x8c266268` | 5 | `0x8c0baf2c` | `0x8c0baee8` `0x8c0baf2c` |
| `0x8c2662f8` | 5 | `0x8c0bc36c` | `0x8c0bc1c4` `0x8c0bc36c` |
| `0x8c26649c` | 89 | `0x8c0bfbf0` | `0x8c0bf864` `0x8c0bfbf0` |
| `0x8c266774` | 5 | `0x8c0c4cb4` | `0x8c0c4c88` `0x8c0c4cb4` |
| `0x8c266790` | 5 | `0x8c0c4bf8` | `0x8c0c4bac` `0x8c0c4bf8` |
| `0x8c2667ac` | 5 | `0x8c0c4b24` | `0x8c0c4ad8` `0x8c0c4b24` |
| `0x8c2667c8` | 5 | `0x8c0c4a48` | `0x8c0c49bc` `0x8c0c4a48` |
| `0x8c2667e4` | 5 | `0x8c0c4a04` | `0x8c0c49bc` `0x8c0c4a04` `0x8c0c4a48` `0x8c0c4ad8` … |
| `0x8c266800` | 5 | `0x8c0c64ec` | `0x8c0c64ec` |
| `0x8c26681c` | 15 | `0x8c0c67c0` | `0x8c0c65dc` `0x8c0c67c0` |
| `0x8c266860` | 15 | `0x8c0c6c98` | `0x8c0c6ab4` `0x8c0c6c98` |
| `0x8c2668cc` | 112 | `0x8c0c7b80` | `0x8c0c7958` `0x8c0c7b80` |
| `0x8c266c5c` | 5 | `0x8c0cbae8` | `0x8c0cba20` `0x8c0cbae8` |
| `0x8c266c78` | 5 | `0x8c0cb954` | `0x8c0cb954` |
| `0x8c266ccc` | 5 | `0x8c0cb410` | `0x8c0cb410` |
| `0x8c266d3c` | 5 | `0x8c0cc95c` | `0x8c0cc95c` |
| `0x8c266eec` | 5 | `0x8c0d1140` | `0x8c0d10d4` `0x8c0d1140` |
| `0x8c2670ec` | 124 | `0x8c0d8720` | `0x8c0d8584` `0x8c0d8720` |
| `0x8c2672e4` | 124 | `0x8c0d7cd0` | `0x8c0d7cd0` |
| `0x8c2674dc` | 124 | `0x8c0d4a70` | `0x8c0d4a70` `0x8c0d7bec` `0x8c0d8584` |
| `0x8c26770c` | 6 | `0x8c0db244` | `0x8c0db1d0` `0x8c0db20c` `0x8c0db244` |
| `0x8c267768` | 3 | `0x8c0e14bc` | `0x8c0e14ac` `0x8c0e14bc` |
| `0x8c26777c` | 4 | `0x8c0e156c` | `0x8c0e14f0` `0x8c0e156c` |
| `0x8c267794` | 3 | `0x8c0e1cd4` | `0x8c0e1c7c` `0x8c0e1cd4` |
| `0x8c2677a8` | 3 | `0x8c0e20c8` | `0x8c0e2020` `0x8c0e20c8` |
| `0x8c2677fc` | 99 | `0x8c0e3814` | `0x8c0e3730` `0x8c0e3814` |
| `0x8c267efc` | 15 | `0x8c0e8a28` | `0x8c0e87c0` `0x8c0e8a28` |
| `0x8c267f40` | 5 | `0x8c0e905c` | `0x8c0e8e3c` `0x8c0e905c` |
| `0x8c267f5c` | 5 | `0x8c0e98d8` | `0x8c0e97b4` `0x8c0e98d8` |
| `0x8c267f78` | 5 | `0x8c0e9c78` | `0x8c0e9b88` `0x8c0e9c78` |
| `0x8c267f94` | 5 | `0x8c0ea148` | `0x8c0ea088` `0x8c0ea148` |
| `0x8c267fb0` | 5 | `0x8c0ea694` | `0x8c0ea350` `0x8c0ea694` |
| `0x8c267fcc` | 5 | `0x8c0ebba0` | `0x8c0eb6f4` `0x8c0ebba0` |
| `0x8c267fe8` | 5 | `0x8c0ec944` | `0x8c0ec388` `0x8c0ec944` |
| `0x8c268004` | 5 | `0x8c0ed344` | `0x8c0ed1e4` `0x8c0ed344` |
| `0x8c26807c` | 16 | `0x8c0ee900` | `0x8c0ee870` `0x8c0ee900` |
| `0x8c2680c4` | 22 | `0x8c0eebe4` | `0x8c0eeb90` `0x8c0eebe4` |
| `0x8c2681e4` | 22 | `0x8c0efb78` | `0x8c0efb78` `0x8c0efc9c` |
| `0x8c268244` | 5 | `0x8c0f00c0` | `0x8c0effd0` `0x8c0f00c0` |
| `0x8c268260` | 15 | `0x8c0f0dac` | `0x8c0f0dac` `0x8c0f0e1c` |
| `0x8c2682a4` | 15 | `0x8c0f0b34` | `0x8c0f0b34` `0x8c0f0dac` `0x8c0f0e1c` |
| `0x8c2682e8` | 15 | `0x8c0f09d8` | `0x8c0f09d8` `0x8c0f0a3c` |
| `0x8c26832c` | 15 | `0x8c0f087c` | `0x8c0f087c` `0x8c0f08e0` |
| `0x8c268370` | 15 | `0x8c0f0724` | `0x8c0f0724` `0x8c0f0788` |
| `0x8c2683b4` | 15 | `0x8c0f05c8` | `0x8c0f05c8` `0x8c0f062c` |
| `0x8c2683f8` | 15 | `0x8c0f0474` | `0x8c0f0474` `0x8c0f04d8` |
| `0x8c268508` | 18 | `0x8c0f1100` | `0x8c0f1090` `0x8c0f1100` |
| `0x8c268640` | 18 | `0x8c0f22f8` | `0x8c0f22ac` `0x8c0f22f8` |
| `0x8c2687d0` | 18 | `0x8c0f34a0` | `0x8c0f33fc` `0x8c0f3458` `0x8c0f34a0` |
| `0x8c268a38` | 4 | `0x8c0f72a8` | `0x8c0f725c` `0x8c0f72a8` |
| `0x8c269000` | 9 | `0x8c0fbfa4` | `0x8c0fbf7c` `0x8c0fbfa4` |
| `0x8c26902c` | 14 | `0x8c0fc1c4` | `0x8c0fc1c4` `0x8c0fc208` |
| `0x8c26908c` | 3 | `0x8c0fcbe4` | `0x8c0fcba4` `0x8c0fcbe4` |
| `0x8c2694f0` | 16 | `0x8c0ffac4` | `0x8c0ffac4` `0x8c0ffb6c` |
| `0x8c269684` | 6 | `0x8c1034d8` | `0x8c103424` `0x8c1034d8` |
| `0x8c269748` | 5 | `0x8c103c94` | `0x8c103c94` |
| `0x8c269764` | 3 | `0x8c1049ec` | `0x8c1048b0` `0x8c104958` `0x8c1049ec` |
| `0x8c269828` | 16 | `0x8c1072d8` | `0x8c1072d8` `0x8c107374` |
| `0x8c269870` | 6 | `0x8c10766c` | `0x8c10760c` `0x8c10766c` |
| `0x8c269890` | 6 | `0x8c1074fc` | `0x8c1074a8` `0x8c1074fc` `0x8c10760c` `0x8c10766c` |
| `0x8c2698b0` | 5 | `0x8c107ee4` | `0x8c107e1c` `0x8c107ee4` |
| `0x8c269b38` | 5 | `0x8c1108b8` | `0x8c1107e0` `0x8c1108b8` |
| `0x8c269b54` | 5 | `0x8c10c490` | `0x8c10be58` `0x8c10c174` `0x8c10c490` |
| `0x8c269b70` | 15 | `0x8c1119d8` | `0x8c1117f8` `0x8c1119d8` |
| `0x8c269df8` | 9 | `0x8c114790` | `0x8c114772` `0x8c114790` |
| `0x8c269e24` | 9 | `0x8c11499c` | `0x8c114970` `0x8c11499c` |
| `0x8c269e94` | 7 | `0x8c118c60` | `0x8c118c60` |
| `0x8c269eb8` | 7 | `0x8c1189f0` | `0x8c118964` `0x8c1189f0` |
| `0x8c269edc` | 5 | `0x8c118918` | `0x8c118918` `0x8c118964` `0x8c1189f0` `0x8c118c60` |
| `0x8c269efc` | 6 | `0x8c11924c` | `0x8c1191e4` `0x8c119218` `0x8c11924c` |
| `0x8c269f84` | 16 | `0x8c11a3b0` | `0x8c11a3b0` |
| `0x8c269fcc` | 16 | `0x8c11a240` | `0x8c11a240` |
| `0x8c26a05c` | 3 | `0x8c11a88c` | `0x8c11a818` `0x8c11a838` `0x8c11a88c` |
| `0x8c26a4f4` | 98 | `0x8c11f48c` | `0x8c11f48c` `0x8c11f534` |
| `0x8c26a684` | 98 | `0x8c11f6b8` | `0x8c11f658` `0x8c11f6b8` |
| `0x8c26b33c` | 16 | `0x8c122e50` | `0x8c122e50` `0x8c122eec` |
| `0x8c26b384` | 98 | `0x8c123e78` | `0x8c123e18` `0x8c123e78` |
| `0x8c26c170` | 89 | `0x8c127918` | `0x8c127658` `0x8c127918` `0x8c127964` |
| `0x8c26c43c` | 88 | `0x8c12aad8` | `0x8c12a90c` `0x8c12aad8` |
| `0x8c26c5a4` | 88 | `0x8c12a698` | `0x8c12a518` `0x8c12a698` |
| `0x8c26c70c` | 88 | `0x8c12a2b8` | `0x8c12a138` `0x8c12a2b8` |
| `0x8c26c874` | 88 | `0x8c129a54` | `0x8c129a54` `0x8c12a138` `0x8c12a2b8` `0x8c12a518` … |
| `0x8c26cbd8` | 22 | `0x8c130a9c` | `0x8c13091c` `0x8c130a9c` |
| `0x8c26cc38` | 16 | `0x8c1322b4` | `0x8c131fb0` `0x8c1322b4` |
| `0x8c26cd28` | 5 | `0x8c132df0` | `0x8c132d88` `0x8c132df0` |
| `0x8c26cd44` | 5 | `0x8c132f2c` | `0x8c132ec4` `0x8c132f2c` |
| `0x8c26cd60` | 5 | `0x8c133068` | `0x8c133000` `0x8c133068` |
| `0x8c26cd7c` | 5 | `0x8c1331a4` | `0x8c13313c` `0x8c1331a4` |
| `0x8c26cd98` | 5 | `0x8c1332e0` | `0x8c133278` `0x8c1332e0` |
| `0x8c26cdb4` | 5 | `0x8c13341c` | `0x8c1333b4` `0x8c13341c` |
| `0x8c26cfac` | 16 | `0x8c136f48` | `0x8c136e64` `0x8c136f48` |
| `0x8c26cff4` | 16 | `0x8c136c08` | `0x8c136b78` `0x8c136c08` `0x8c136e64` `0x8c136f48` |
| `0x8c26d24c` | 89 | `0x8c13a874` | `0x8c13a874` `0x8c13a8cc` `0x8c13bec4` |
| `0x8c26d9ec` | 100 | `0x8c13e610` | `0x8c13e610` |
| `0x8c26db84` | 17 | `0x8c13e8ac` | `0x8c13e784` `0x8c13e8ac` |
| `0x8c26e140` | 5 | `0x8c14b6cc` | `0x8c14b6cc` `0x8c14bf58` |
| `0x8c26e4e8` | 14 | `0x8c14f370` | `0x8c14f270` `0x8c14f370` |
| `0x8c26e960` | 89 | `0x8c151e1c` | `0x8c151e1c` `0x8c151eb4` |
| `0x8c26eb84` | 20 | `0x8c157cf8` | `0x8c157bc4` `0x8c157cf8` |
| `0x8c26ec30` | 5 | `0x8c157860` | `0x8c157860` |
| `0x8c26ee00` | 15 | `0x8c15a4c8` | `0x8c15a314` `0x8c15a4c8` |
| `0x8c26f93c` | 116 | `0x8c166730` | `0x8c166654` `0x8c166730` |
| `0x8c26fb14` | 116 | `0x8c1660f0` | `0x8c1660f0` |
| `0x8c26fec4` | 8 | `0x8c167070` | `0x8c167070` |
| `0x8c2700fc` | 5 | `0x8c16847c` | `0x8c1681e0` `0x8c16847c` |
| `0x8c270118` | 5 | `0x8c167df4` | `0x8c167df4` |
| `0x8c270134` | 5 | `0x8c16bc90` | `0x8c16bc90` |
| `0x8c270150` | 5 | `0x8c16bad0` | `0x8c16b970` `0x8c16bad0` |
| `0x8c27016c` | 5 | `0x8c16b87c` | `0x8c16b87c` `0x8c16bd38` |
| `0x8c270188` | 5 | `0x8c16b43c` | `0x8c16b398` `0x8c16b43c` `0x8c16b87c` `0x8c16bad0` … |
| `0x8c270274` | 5 | `0x8c1733d8` | `0x8c172c74` `0x8c172d28` `0x8c172e84` `0x8c173024` … |
| `0x8c270594` | 5 | `0x8c175a74` | `0x8c175918` `0x8c175a74` |
| `0x8c270798` | 59 | `0x8c175da0` | `0x8c175d44` `0x8c175da0` |
| `0x8c27088c` | 5 | `0x8c176914` | `0x8c176914` |
| `0x8c2708a8` | 5 | `0x8c176680` | `0x8c1764f8` `0x8c176680` |
| `0x8c2708c4` | 5 | `0x8c1761cc` | `0x8c17606c` `0x8c1761cc` |
| `0x8c2708e0` | 5 | `0x8c175f20` | `0x8c175f20` `0x8c17606c` `0x8c1761cc` `0x8c1764f8` … |
| `0x8c2708fc` | 5 | `0x8c176c68` | `0x8c176b64` `0x8c176c68` |
| `0x8c270918` | 5 | `0x8c176dec` | `0x8c176db4` `0x8c176dec` |
| `0x8c270934` | 15 | `0x8c176fbc` | `0x8c176e84` `0x8c176fbc` |
| `0x8c270cc0` | 9 | `0x8c178048` | `0x8c178018` `0x8c178048` |
| `0x8c270de0` | 86 | `0x8c178430` | `0x8c178258` `0x8c178430` |
| `0x8c270f40` | 17 | `0x8c178cc0` | `0x8c178968` `0x8c178cc0` |
| `0x8c270f8c` | 5 | `0x8c1792c0` | `0x8c179264` `0x8c1792c0` |
| `0x8c270fa8` | 5 | `0x8c1791cc` | `0x8c179178` |
| `0x8c271de4` | 3 | `0x8c17bb90` | `0x8c17bb38` `0x8c17bb90` |
| `0x8c271fe0` | 5 | `0x8c1832f4` | `0x8c1832f4` `0x8c184138` |
| `0x8c271ffc` | 5 | `0x8c183248` | `0x8c183248` |
| `0x8c272074` | 5 | `0x8c185dd0` | `0x8c185d30` `0x8c185dd0` |
| `0x8c2720ac` | 5 | `0x8c186a34` | `0x8c186a34` |
| `0x8c272134` | 15 | `0x8c187fcc` | `0x8c187fcc` `0x8c188120` |
| `0x8c272178` | 5 | `0x8c1883d4` | `0x8c1883d4` |
| `0x8c272520` | 59 | `0x8c18ae8c` | `0x8c18ad9c` `0x8c18ae8c` |
| `0x8c272614` | 5 | `0x8c18aed0` | `0x8c18aed0` |
| `0x8c27266c` | 2 | `0x8c18d290` | `0x8c18d154` `0x8c18d290` |
| `0x8c27267c` | 2 | `0x8c18d2e4` | `0x8c18d290` `0x8c18d2e4` `0x8c18dec4` |
| `0x8c27269c` | 5 | `0x8c18ee2c` | `0x8c18ee2c` |
| `0x8c2726b8` | 15 | `0x8c18f8a0` | `0x8c18f690` `0x8c18f8a0` |
| `0x8c2726fc` | 5 | `0x8c18fa78` | `0x8c18fa78` |
| `0x8c272718` | 5 | `0x8c190348` | `0x8c1902c8` `0x8c190348` |
| `0x8c272750` | 5 | `0x8c1914c0` | `0x8c1914c0` |
| `0x8c27276c` | 5 | `0x8c191820` | `0x8c19176c` `0x8c191820` |
| `0x8c272788` | 14 | `0x8c191b38` | `0x8c191a80` `0x8c191b38` |
| `0x8c2727c8` | 5 | `0x8c193df8` | `0x8c193d9c` `0x8c193df8` |
| `0x8c2727e4` | 2 | `0x8c193a1c` | `0x8c193a1c` `0x8c193bf8` |
| `0x8c2727f4` | 2 | `0x8c1938ec` | `0x8c193bf8` |
| `0x8c272804` | 2 | `0x8c193784` | `0x8c193784` `0x8c1938ec` `0x8c193a1c` `0x8c193bf8` |
| `0x8c2729b0` | 5 | `0x8c19a7f8` | `0x8c19a700` `0x8c19a7f8` |
| `0x8c2729cc` | 6 | `0x8c19b344` | `0x8c19b2b4` `0x8c19b344` |
| `0x8c2729ec` | 6 | `0x8c19c22c` | `0x8c19c15c` `0x8c19c22c` |
| `0x8c272a0c` | 5 | `0x8c19cf34` | `0x8c19cf34` |
| `0x8c272a44` | 17 | `0x8c19e040` | `0x8c19db2c` `0x8c19e040` |
| `0x8c272a90` | 17 | `0x8c19e09c` | `0x8c19d8e0` `0x8c19e09c` |
| `0x8c272adc` | 17 | `0x8c19e0f8` | `0x8c19d78c` `0x8c19e0f8` |
| `0x8c272b28` | 17 | `0x8c19d57c` | `0x8c19d454` `0x8c19d57c` |
| `0x8c272b74` | 17 | `0x8c19e154` | `0x8c19d270` `0x8c19e154` |
| `0x8c272bc0` | 17 | `0x8c19e1b0` | `0x8c19d108` `0x8c19e1b0` |
| `0x8c272c0c` | 17 | `0x8c19cf78` | `0x8c19cf78` `0x8c19d108` `0x8c19d270` `0x8c19d454` … |
| `0x8c272c58` | 3 | `0x8c19e26c` | `0x8c19e20c` `0x8c19e26c` |
| `0x8c272c6c` | 8 | `0x8c19f9c4` | `0x8c19f9c4` |
| `0x8c272c94` | 6 | `0x8c19fa44` | `0x8c19fa44` `0x8c19fb24` |
| `0x8c272cfc` | 5 | `0x8c1a0648` | `0x8c1a0648` |
| `0x8c272d18` | 89 | `0x8c1a0840` | `0x8c1a0648` `0x8c1a0840` |
| `0x8c272f28` | 98 | `0x8c1a1a54` | `0x8c1a1a54` |
| `0x8c2736f8` | 20 | `0x8c1a2430` | `0x8c1a23a4` `0x8c1a2430` |
| `0x8c27391c` | 98 | `0x8c1a3fc4` | `0x8c1a3fc4` `0x8c1a407c` |
| `0x8c273aac` | 98 | `0x8c1a41f8` | `0x8c1a4198` `0x8c1a41f8` |
| `0x8c27459c` | 5 | `0x8c1a5668` | `0x8c1a5668` |
| `0x8c27463c` | 5 | `0x8c1a9078` | `0x8c1a8f8c` `0x8c1a9078` |
| `0x8c274658` | 5 | `0x8c1a9304` | `0x8c1a92c4` `0x8c1a9304` |
| `0x8c2746d0` | 5 | `0x8c1aa5e0` | `0x8c1aa558` `0x8c1aa5e0` |
| `0x8c2746ec` | 15 | `0x8c1aa39c` | `0x8c1aa320` `0x8c1aa39c` |
| `0x8c274730` | 15 | `0x8c1aa69c` | `0x8c1aa69c` |
| `0x8c274854` | 6 | `0x8c1ac62c` | `0x8c1ac4d0` `0x8c1ac62c` |
| `0x8c274874` | 6 | `0x8c1ac698` | `0x8c1ac17c` `0x8c1ac698` |
| `0x8c2748f4` | 89 | `0x8c1ad790` | `0x8c1ad480` `0x8c1ad790` |
| `0x8c274ba0` | 15 | `0x8c1b04bc` | `0x8c1b0330` `0x8c1b04bc` |
| `0x8c274c00` | 5 | `0x8c1b08ac` | `0x8c1b087c` `0x8c1b08ac` |
| `0x8c275738` | 16 | `0x8c1bfa54` | `0x8c1bf958` `0x8c1bfa54` |
| `0x8c275780` | 5 | `0x8c1bffb0` | `0x8c1bfe90` `0x8c1bffb0` |
| `0x8c275938` | 14 | `0x8c1c23b0` | `0x8c1c22ac` `0x8c1c23b0` |
| `0x8c275b18` | 24 | `0x8c1c1798` | `0x8c1c16dc` `0x8c1c1798` `0x8c1c1a80` `0x8c1c1c1c` … |
| `0x8c275b80` | 14 | `0x8c1c2810` | `0x8c1c2810` `0x8c1c2854` |
| `0x8c275bc0` | 15 | `0x8c1c2c3c` | `0x8c1c2af8` `0x8c1c2c3c` |
| `0x8c27649c` | 98 | `0x8c1c4edc` | `0x8c1c4edc` `0x8c1c4f94` |
| `0x8c27664c` | 5 | `0x8c1c56c0` | `0x8c1c56c0` `0x8c1c577c` `0x8c1c5890` `0x8c1c5944` |
| `0x8c2766dc` | 6 | `0x8c1c678c` | `0x8c1c65f4` `0x8c1c678c` |
| `0x8c2766fc` | 6 | `0x8c1c67dc` | `0x8c1c63d0` `0x8c1c67dc` |
| `0x8c27671c` | 6 | `0x8c1c64d8` | `0x8c1c63d0` `0x8c1c64d8` `0x8c1c65f4` `0x8c1c678c` … |
| `0x8c276838` | 5 | `0x8c1ca3e4` | `0x8c1ca23c` `0x8c1ca3e4` |
| `0x8c276874` | 6 | `0x8c1ccd60` | `0x8c1ccd24` `0x8c1ccd60` `0x8c1cd038` |
| `0x8c276894` | 15 | `0x8c1cf93c` | `0x8c1cf7fc` `0x8c1cf93c` |
| `0x8c2768d8` | 15 | `0x8c1cf750` | `0x8c1cf610` `0x8c1cf750` |
| `0x8c27691c` | 15 | `0x8c1cf564` | `0x8c1cf424` `0x8c1cf564` |
| `0x8c276960` | 15 | `0x8c1cf2bc` | `0x8c1cf2bc` `0x8c1cf320` |
| `0x8c2769a4` | 15 | `0x8c1cf154` | `0x8c1cf154` `0x8c1cf1b8` |
| `0x8c2769e8` | 15 | `0x8c1ceff0` | `0x8c1ceff0` `0x8c1cf054` |
| `0x8c276a2c` | 15 | `0x8c1cee68` | `0x8c1cee68` `0x8c1ceed8` |
| `0x8c276a70` | 15 | `0x8c1cecdc` | `0x8c1cecdc` `0x8c1ced4c` |
| `0x8c276ab4` | 15 | `0x8c1ceb54` | `0x8c1ceb54` `0x8c1cebc4` |
| `0x8c276af8` | 15 | `0x8c1ce9ec` | `0x8c1ce9ec` `0x8c1cea50` |
| `0x8c276b3c` | 15 | `0x8c1ce884` | `0x8c1ce884` `0x8c1ce8e8` |
| `0x8c276b80` | 15 | `0x8c1ce720` | `0x8c1ce720` `0x8c1ce784` |
| `0x8c276bc4` | 15 | `0x8c1ce5b8` | `0x8c1ce5b8` `0x8c1ce61c` |
| `0x8c276c08` | 15 | `0x8c1ce450` | `0x8c1ce450` `0x8c1ce4b4` |
| `0x8c276c4c` | 15 | `0x8c1ce2ec` | `0x8c1ce2ec` `0x8c1ce350` |
| `0x8c276c90` | 15 | `0x8c1ce08c` | `0x8c1ce08c` `0x8c1cf424` `0x8c1cf564` `0x8c1cf610` … |
| `0x8c276cd4` | 15 | `0x8c1cdfc8` | `0x8c1cdfc8` `0x8c1ceb54` `0x8c1cebc4` `0x8c1cecdc` … |
| `0x8c276d18` | 15 | `0x8c1cddac` | `0x8c1cddac` `0x8c1cdfc8` `0x8c1ce08c` `0x8c1ce2ec` … |
| `0x8c276d5c` | 11 | `0x8c1cf9e8` | `0x8c1cf9e8` `0x8c1cfaf4` |
| `0x8c276d90` | 14 | `0x8c1cfb58` | `0x8c1cfb58` `0x8c1cfbe0` |
| `0x8c276dd0` | 6 | `0x8c1cff98` | `0x8c1cff98` `0x8c1d0224` |
| `0x8c276ea0` | 3 | `0x8c1d58a4` | `0x8c1d586c` `0x8c1d58a4` |
| `0x8c2770dc` | 15 | `0x8c1d8578` | `0x8c1d8578` `0x8c1d8604` |
| `0x8c277120` | 15 | `0x8c1d83a0` | `0x8c1d8224` `0x8c1d83a0` |
| `0x8c277164` | 15 | `0x8c1d81ac` | `0x8c1d80f8` `0x8c1d81ac` `0x8c1d8224` `0x8c1d83a0` … |
| `0x8c2771c4` | 14 | `0x8c1daec0` | `0x8c1dab18` `0x8c1daec0` |
| `0x8c277204` | 14 | `0x8c1da974` | `0x8c1da974` `0x8c1da9c4` |
| `0x8c277244` | 14 | `0x8c1da574` | `0x8c1da224` `0x8c1da574` |
| `0x8c277284` | 14 | `0x8c1da17c` | `0x8c1da17c` `0x8c1da574` `0x8c1da974` `0x8c1da9c4` … |
| `0x8c277304` | 3 | `0x8c1db8ac` | `0x8c1db85c` `0x8c1db8ac` |
| `0x8c277318` | 5 | `0x8c1dbba4` | `0x8c1dbb54` `0x8c1dbba4` |
| `0x8c277370` | 5 | `0x8c1dd878` | `0x8c1dd718` `0x8c1dd878` |
| `0x8c27738c` | 5 | `0x8c1dde04` | `0x8c1ddcb8` `0x8c1dde04` |
| `0x8c2773a8` | 15 | `0x8c1ddafc` | `0x8c1ddafc` `0x8c1ddcb8` |
| `0x8c277494` | 5 | `0x8c1e39f4` | `0x8c1e390c` `0x8c1e39f4` |
| `0x8c2774b0` | 89 | `0x8c1e507c` | `0x8c1e4f74` `0x8c1e507c` |
| `0x8c2778f4` | 89 | `0x8c1e4774` | `0x8c1e4774` `0x8c1e47e4` |
| `0x8c277a60` | 89 | `0x8c1e469c` | `0x8c1e45a4` `0x8c1e469c` `0x8c1e4774` `0x8c1e47e4` |
| `0x8c277d38` | 89 | `0x8c1e40e8` | `0x8c1e4024` `0x8c1e40e8` `0x8c1e4424` `0x8c1e45a4` … |
| `0x8c277ec0` | 5 | `0x8c1e59c8` | `0x8c1e5938` `0x8c1e59c8` |
| `0x8c277edc` | 3 | `0x8c1e5d00` | `0x8c1e5cbc` `0x8c1e5d00` |
| `0x8c277f28` | 5 | `0x8c1e64f0` | `0x8c1e64f0` `0x8c1e653c` |
| `0x8c277f44` | 5 | `0x8c1e6904` | `0x8c1e67e4` `0x8c1e6904` |
| `0x8c277fb8` | 9 | `0x8c1f1460` | `0x8c1f1430` `0x8c1f1460` |
| `0x8c277fe4` | 5 | `0x8c1f169c` | `0x8c1f1610` `0x8c1f169c` |
| `0x8c278058` | 5 | `0x8c206e5c` | `0x8c206e2c` `0x8c206e5c` |
| `0x8c278238` | 6 | `0x8c215060` | `0x8c215020` `0x8c215060` |
| `0x8c278334` | 5 | `0x8c218318` | `0x8c218240` `0x8c218318` |
| `0x8c27836c` | 5 | `0x8c21a0c4` | `0x8c21a0c4` |
| `0x8c278640` | 6 | `0x8c21dcf4` | `0x8c21dcf4` `0x8c21ddcc` `0x8c21de48` |
| `0x8c278660` | 6 | `0x8c21e20c` | `0x8c21e148` `0x8c21e20c` |
| `0x8c2786bc` | 87 | `0x8c21f1d0` | `0x8c21ec90` `0x8c21f1d0` |
| `0x8c2788b8` | 5 | `0x8c2207f8` | `0x8c220778` `0x8c2207f8` |
| `0x8c2788f0` | 5 | `0x8c221580` | `0x8c2213ec` `0x8c221580` |
| `0x8c27890c` | 5 | `0x8c2219f0` | `0x8c221978` `0x8c2219f0` |
| `0x8c278964` | 7 | `0x8c223adc` | `0x8c223adc` `0x8c23e5a8` |
| `0x8c278988` | 7 | `0x8c223b2c` | `0x8c223b2c` `0x8c23fefc` |
| `0x8c2789ac` | 7 | `0x8c223b7c` | `0x8c223b7c` `0x8c25560c` |
| `0x8c2789d0` | 7 | `0x8c223bcc` | `0x8c223bcc` `0x8c23d3d4` |
| `0x8c2789f4` | 7 | `0x8c223c1c` | `0x8c17b528` `0x8c223c1c` |
| `0x8c278a18` | 7 | `0x8c223c6c` | `0x8c0e6e80` `0x8c17b528` `0x8c223c6c` `0x8c240e90` … |
| `0x8c278a3c` | 7 | `0x8c223cbc` | `0x8c17b528` `0x8c223cbc` `0x8c2404cc` `0x8c2410b0` … |
| `0x8c278a60` | 7 | `0x8c223d0c` | `0x8c0e6e80` `0x8c223d0c` `0x8c23b6c8` |
| `0x8c278a84` | 7 | `0x8c223d5c` | `0x8c0e6e80` `0x8c17b140` `0x8c223d5c` `0x8c23ce04` … |
| `0x8c278b2c` | 5 | `0x8c22607c` | `0x8c225f04` `0x8c22607c` |
| `0x8c278d98` | 5 | `0x8c22ae68` | `0x8c22ae68` `0x8c22b08c` |
| `0x8c278e4c` | 5 | `0x8c22c65c` | `0x8c22c570` `0x8c22c65c` |
| `0x8c278f00` | 5 | `0x8c22f4b8` | `0x8c22f1bc` `0x8c22f4b8` |
| `0x8c278f1c` | 5 | `0x8c2301f8` | `0x8c230028` `0x8c2301f8` |
| `0x8c278f98` | 5 | `0x8c231888` | `0x8c231888` `0x8c231984` |
| `0x8c278fb4` | 5 | `0x8c231d48` | `0x8c231ba0` `0x8c231d48` |
| `0x8c278fd0` | 5 | `0x8c232188` | `0x8c2320e0` `0x8c232188` |
| `0x8c278fec` | 5 | `0x8c232c38` | `0x8c2329b0` `0x8c232c38` |
| `0x8c27904c` | 5 | `0x8c237304` | `0x8c237254` `0x8c2372ac` `0x8c237304` |
| `0x8c279068` | 5 | `0x8c236f64` | `0x8c236f64` `0x8c237348` |
| `0x8c279084` | 5 | `0x8c236a74` | `0x8c236a74` `0x8c236ee0` |
| `0x8c2790a0` | 86 | `0x8c2359c8` | `0x8c235858` `0x8c2359c8` |
| `0x8c27aa88` | 6 | `0x8c23daf0` | `0x8c23daf0` |
| `0x8c27cb4c` | 60 | `0x8c2411a8` | `0x8c241158` `0x8c2411a8` |
| `0x8c27cc44` | 5 | `0x8c242388` | `0x8c242354` `0x8c242388` |
| `0x8c27cc60` | 5 | `0x8c242010` | `0x8c242010` |
| `0x8c27cc7c` | 15 | `0x8c241a78` | `0x8c241a78` |
| `0x8c27ccc0` | 5 | `0x8c244038` | `0x8c244038` `0x8c244258` |
| `0x8c27ccf8` | 98 | `0x8c245810` | `0x8c245810` `0x8c2458b8` |
| `0x8c27ce88` | 14 | `0x8c246310` | `0x8c246310` `0x8c246414` |
| `0x8c27cec8` | 5 | `0x8c246164` | `0x8c246164` |
| `0x8c27d648` | 14 | `0x8c249f60` | `0x8c249f2c` `0x8c249f60` |
| `0x8c27d688` | 14 | `0x8c249a0c` | `0x8c249a0c` `0x8c249e6c` |
| `0x8c27d9d8` | 16 | `0x8c24c4c4` | `0x8c24c544` |
| `0x8c27debc` | 43 | `0x8c24d538` | `0x8c24d504` `0x8c24d538` |
| `0x8c27eea8` | 60 | `0x8c2511a4` | `0x8c251170` `0x8c2511a4` |
| `0x8c27f190` | 60 | `0x8c251528` | `0x8c2514d0` `0x8c251528` |
| `0x8c27fd50` | 60 | `0x8c252c54` | `0x8c252bfc` `0x8c252c54` |
| `0x8c280260` | 5 | `0x8c253bf4` | `0x8c253ba4` `0x8c253bf4` |
| `0x8c28027c` | 5 | `0x8c2536c8` | `0x8c253698` `0x8c2536c8` |
| `0x8c28075c` | 59 | `0x8c2543bc` | `0x8c254378` `0x8c2543bc` |
| `0x8c280d14` | 59 | `0x8c254ab0` | `0x8c254a58` `0x8c254ab0` |
| `0x8c281414` | 5 | `0x8c255a80` | `0x8c2559ec` `0x8c255a80` |
| `0x8c2817e4` | 25 | `0x8c2566b8` | `0x8c2566b8` `0x8c2566fc` |
| `0x8c281850` | 5 | `0x8c256940` | `0x8c256940` `0x8c256a90` |
| `0x8c281bc4` | 5 | `0x8c25b4ec` | `0x8c25b3cc` `0x8c25b4ec` |
| `0x8c281c18` | 5 | `0x8c25d714` | `0x8c25d714` |
| `0x8c281d38` | 5 | `0x8c25e73c` | `0x8c25e6e4` `0x8c25e73c` |
| `0x8c281d54` | 5 | `0x8c25eea8` | `0x8c25eea8` `0x8c25eef4` |
| `0x8c281d70` | 5 | `0x8c25effc` | `0x8c25efa4` `0x8c25effc` |
| `0x8c281de0` | 5 | `0x8c25f9c0` | `0x8c25f974` `0x8c25f9c0` |
| `0x8c281e34` | 5 | `0x8c260390` | `0x8c2602c0` `0x8c260390` |
| `0x8c2e1498` | 5 | `0x8c20570c` | `0x8c203e70` |
| `0x8c2e3258` | 103 | `0x0` | `0x8c01bbec` |
| `0x8c3f679c` | 16 | `0x8c36542e` | `0x8c36538e` |
| `0x8c3fb49c` | 3 | `0x8c35290e` | `0x8c352928` `0x8c352d50` |
