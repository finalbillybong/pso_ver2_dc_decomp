/* Static data 8c2e9d28-8c2ea8b8: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void TObjPlayerSet_ctor_8c08a420(void);
extern void TObjParticle_create_8c0804a8(void);
extern void TObjLight_create_8c0ed844(void);
extern void TObjRoomId_create_8c185394(void);
extern void TObjFogCollision_create_8c136738(void);
extern void TObjEvtCollision_create_8c188120(void);
extern void TObjEnvSound_create_8c100dd0(void);
extern void TObjCollision_create_8c0104a0(void);
extern void TObjMapCsn_create_8c1a1400(void);
extern void TObjRaderCol_create_8c0341ec(void);
extern void TObjFogCollisionSwitch_create_8c136b34(void);
extern void TObjAreaWarpForest_create_8c033fcc(void);
extern void TObjMapWarpForest_create_8c034010(void);
extern void TObjAreaWarpQuest_create_8c034274(void);
extern void TObjWarpBoss_create_8c034054(void);
extern void TOCapsuleAncient01_create_8c0f2158(void);
extern void TOBarrierEnergy01_create_8c10b7d0(void);
extern void TOMineIcon01_create_8c13ddcc(void);
extern void TOMineIcon02_create_8c13e090(void);
extern void TOMineIcon03_create_8c13e37c(void);
extern void TOMineIcon04_create_8c13e668(void);
extern void TOSensorGeneral01_create_8c15d450(void);
extern void TObjDoorKey_create_8c081a78(void);
extern void TOKeyCave01_create_8c135174(void);
extern void TODoorCave01_create_8c1326c4(void);
extern void TODoorCave02_create_8c134bd8(void);
extern void TODoorCave03_create_8c1aeb94(void);
extern void TOHangceilingCave01_create_8c129bd8(void);
extern void TOBind_create_8c1b0578(void);
extern void TOSignCave01_ctor_8c0ff5d0(void);
extern void TOSignCave02_ctor_8c0ff24c(void);
extern void TOSignCave03_ctor_8c0fee30(void);
extern void TOAirconCave01_ctor_8c0ff954(void);
extern void TOAirconCave02_create_8c107374(void);
extern void TORevlightCave01_create_8c0ffb6c(void);
extern void TOCakeshopCave01_create_8c1bf71c(void);
extern void TORockCaveS03_create_8c1cf054(void);
extern void TORockCaveM03_create_8c1cf1b8(void);
extern void TORockCaveL03_create_8c1cf320(void);
extern void TItem_create_8c073270(void);
extern void TObjQuestCol_create_8c034098(void);
extern void TObjQuestColA_create_8c0340dc(void);
extern void TObjItemLight_create_8c034164(void);
extern void TObjLazerFenceNorm_create_8c080abc(void);
extern void TObjLazerFenceExtra_create_8c081080(void);
extern void TObjLazerFence4_create_8c11d878(void);
extern void TLazerFenceSw_create_8c1139e0(void);
extern void TObjContainerItem_ctor_8c084328(void);
extern void TObjContainerEnemy_ctor_8c0847cc(void);
extern void TObjContainerBase_ctor_8c085638(void);
extern void TObjContainerAbeEnemy_create_8c034230(void);
extern void TOHealGeneral_create_8c19fee0(void);
extern void TObjContainerNoItem_ctor_8c084dac(void);
extern void TObjRaderHideCol_create_8c0342b8(void);
extern void TOKeyCol_create_8c2566fc(void);
extern void TOAttackableCol_ctor_8c2576f8(void);
extern void TODummyKeyCave01_ctor_8c258124(void);
extern void TOSwitchItem_ctor_8c255f2c(void);
extern void TOSymbolchatColli_ctor_8c25638c(void);
extern void TOSwitchAttack_ctor_8c2588b4(void);
extern void TORockCaveBL03_create_8c1cf9ac(void);
extern void TObjComputer_create_8c085ec8(void);
extern void TOSwitchTimer_ctor_8c25afe0(void);
extern void TOChatSensor_create_8c25d8b8(void);
extern void TOKeyGenericSw_create_8c130714(void);
extern void TODoorMachine01_create_8c161fd8(void);
extern void create_dat_object_0102_8c1af14c(void);
extern void TOKeyMachine01_create_8c162864(void);
extern void TOCapsuleMachine01_ctor_8c1bf074(void);
extern void TOComputerMachine01_ctor_8c1bf348(void);
extern void TOMonitorMachine01_create_8c1bfb54(void);
extern void TODragonflyMachine01_create_8c1c3dcc(void);
extern void TOLightMachine01_create_8c1c0298(void);
extern void TOExplosiveMachine01_ctor_8c1c0800(void);
extern void TOExplosiveMachine02_ctor_8c1c0974(void);
extern void TOExplosiveMachine03_ctor_8c1c0af0(void);
extern void TOSparkMachine01_create_8c1c6c64(void);
extern void TOHangerMachine01_ctor_8c1c6f50(void);
extern void TOTrapAncient02R_create_8c14d6d4(void);
extern void TOMonumentAncient02_create_8c0f1b60(void);

const DatConstructorEntry dat_object_ctor_table_8c2e9d28[65] = {
    { 0, (void *)TObjPlayerSet_ctor_8c08a420, 250000.0f, 0 },
    { 1, (void *)TObjParticle_create_8c0804a8, 40000.0f, 0 },
    { 4, (void *)TObjLight_create_8c0ed844, 84100.0f, 0 },
    { 14, (void *)TObjRoomId_create_8c185394, 250000.0f, 0 },
    { 7, (void *)TObjFogCollision_create_8c136738, 250000.0f, 0 },
    { 8, (void *)TObjEvtCollision_create_8c188120, 250000.0f, 0 },
    { 6, (void *)TObjEnvSound_create_8c100dd0, 250000.0f, 0 },
    { 9, (void *)TObjCollision_create_8c0104a0, 250000.0f, 0 },
    { 20, (void *)TObjMapCsn_create_8c1a1400, 250000.0f, 0 },
    { 23, (void *)TObjRaderCol_create_8c0341ec, 250000.0f, 0 },
    { 24, (void *)TObjFogCollisionSwitch_create_8c136b34, 250000.0f, 0 },
    { 2, (void *)TObjAreaWarpForest_create_8c033fcc, 250000.0f, 0 },
    { 3, (void *)TObjMapWarpForest_create_8c034010, 250000.0f, 0 },
    { 27, (void *)TObjAreaWarpQuest_create_8c034274, 250000.0f, 0 },
    { 25, (void *)TObjWarpBoss_create_8c034054, 250000.0f, 0 },
    { 141, (void *)TOCapsuleAncient01_create_8c0f2158, 250000.0f, 0 },
    { 142, (void *)TOBarrierEnergy01_create_8c10b7d0, 250000.0f, 0 },
    { 10, (void *)TOMineIcon01_create_8c13ddcc, 250000.0f, 0 },
    { 11, (void *)TOMineIcon02_create_8c13e090, 250000.0f, 0 },
    { 12, (void *)TOMineIcon03_create_8c13e37c, 250000.0f, 0 },
    { 13, (void *)TOMineIcon04_create_8c13e668, 250000.0f, 0 },
    { 15, (void *)TOSensorGeneral01_create_8c15d450, 250000.0f, 0 },
    { 129, (void *)TObjDoorKey_create_8c081a78, 250000.0f, 0 },
    { 192, (void *)TOKeyCave01_create_8c135174, 250000.0f, 0 },
    { 193, (void *)TODoorCave01_create_8c1326c4, 250000.0f, 0 },
    { 194, (void *)TODoorCave02_create_8c134bd8, 250000.0f, 0 },
    { 206, (void *)TODoorCave03_create_8c1aeb94, 250000.0f, 0 },
    { 195, (void *)TOHangceilingCave01_create_8c129bd8, 250000.0f, 0 },
    { 207, (void *)TOBind_create_8c1b0578, 250000.0f, 0 },
    { 196, (void *)TOSignCave01_ctor_8c0ff5d0, 250000.0f, 0 },
    { 197, (void *)TOSignCave02_ctor_8c0ff24c, 250000.0f, 0 },
    { 198, (void *)TOSignCave03_ctor_8c0fee30, 250000.0f, 0 },
    { 199, (void *)TOAirconCave01_ctor_8c0ff954, 250000.0f, 0 },
    { 200, (void *)TOAirconCave02_create_8c107374, 250000.0f, 0 },
    { 201, (void *)TORevlightCave01_create_8c0ffb6c, 250000.0f, 0 },
    { 208, (void *)TOCakeshopCave01_create_8c1bf71c, 250000.0f, 0 },
    { 218, (void *)TORockCaveS03_create_8c1cf054, 250000.0f, 0 },
    { 219, (void *)TORockCaveM03_create_8c1cf1b8, 250000.0f, 0 },
    { 220, (void *)TORockCaveL03_create_8c1cf320, 250000.0f, 0 },
    { 5, (void *)TItem_create_8c073270, 250000.0f, 0 },
    { 18, (void *)TObjQuestCol_create_8c034098, 250000.0f, 0 },
    { 21, (void *)TObjQuestColA_create_8c0340dc, 250000.0f, 0 },
    { 22, (void *)TObjItemLight_create_8c034164, 250000.0f, 0 },
    { 130, (void *)TObjLazerFenceNorm_create_8c080abc, 250000.0f, 0 },
    { 150, (void *)TObjLazerFenceExtra_create_8c081080, 250000.0f, 0 },
    { 131, (void *)TObjLazerFence4_create_8c11d878, 250000.0f, 0 },
    { 132, (void *)TLazerFenceSw_create_8c1139e0, 250000.0f, 0 },
    { 136, (void *)TObjContainerItem_ctor_8c084328, 250000.0f, 0 },
    { 145, (void *)TObjContainerEnemy_ctor_8c0847cc, 250000.0f, 0 },
    { 146, (void *)TObjContainerBase_ctor_8c085638, 250000.0f, 0 },
    { 147, (void *)TObjContainerAbeEnemy_create_8c034230, 250000.0f, 0 },
    { 19, (void *)TOHealGeneral_create_8c19fee0, 250000.0f, 0 },
    { 149, (void *)TObjContainerNoItem_ctor_8c084dac, 250000.0f, 0 },
    { 31, (void *)TObjRaderHideCol_create_8c0342b8, 250000.0f, 0 },
    { 34, (void *)TOKeyCol_create_8c2566fc, 250000.0f, 0 },
    { 35, (void *)TOAttackableCol_ctor_8c2576f8, 250000.0f, 0 },
    { 222, (void *)TODummyKeyCave01_ctor_8c258124, 250000.0f, 0 },
    { 32, (void *)TOSwitchItem_ctor_8c255f2c, 250000.0f, 0 },
    { 33, (void *)TOSymbolchatColli_ctor_8c25638c, 250000.0f, 0 },
    { 36, (void *)TOSwitchAttack_ctor_8c2588b4, 250000.0f, 0 },
    { 225, (void *)TORockCaveBL03_create_8c1cf9ac, 250000.0f, 0 },
    { 139, (void *)TObjComputer_create_8c085ec8, 250000.0f, 0 },
    { 37, (void *)TOSwitchTimer_ctor_8c25afe0, 250000.0f, 0 },
    { 38, (void *)TOChatSensor_create_8c25d8b8, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};

const DatConstructorEntry dat_object_ctor_table_8c2ea138[59] = {
    { 0, (void *)TObjPlayerSet_ctor_8c08a420, 250000.0f, 0 },
    { 1, (void *)TObjParticle_create_8c0804a8, 40000.0f, 0 },
    { 4, (void *)TObjLight_create_8c0ed844, 84100.0f, 0 },
    { 14, (void *)TObjRoomId_create_8c185394, 250000.0f, 0 },
    { 2, (void *)TObjAreaWarpForest_create_8c033fcc, 250000.0f, 0 },
    { 3, (void *)TObjMapWarpForest_create_8c034010, 250000.0f, 0 },
    { 27, (void *)TObjAreaWarpQuest_create_8c034274, 250000.0f, 0 },
    { 141, (void *)TOCapsuleAncient01_create_8c0f2158, 250000.0f, 0 },
    { 142, (void *)TOBarrierEnergy01_create_8c10b7d0, 250000.0f, 0 },
    { 10, (void *)TOMineIcon01_create_8c13ddcc, 250000.0f, 0 },
    { 11, (void *)TOMineIcon02_create_8c13e090, 250000.0f, 0 },
    { 12, (void *)TOMineIcon03_create_8c13e37c, 250000.0f, 0 },
    { 13, (void *)TOMineIcon04_create_8c13e668, 250000.0f, 0 },
    { 15, (void *)TOSensorGeneral01_create_8c15d450, 250000.0f, 0 },
    { 7, (void *)TObjFogCollision_create_8c136738, 250000.0f, 0 },
    { 144, (void *)TOKeyGenericSw_create_8c130714, 250000.0f, 0 },
    { 8, (void *)TObjEvtCollision_create_8c188120, 250000.0f, 0 },
    { 6, (void *)TObjEnvSound_create_8c100dd0, 250000.0f, 0 },
    { 18, (void *)TObjQuestCol_create_8c034098, 250000.0f, 0 },
    { 21, (void *)TObjQuestColA_create_8c0340dc, 250000.0f, 0 },
    { 136, (void *)TObjContainerItem_ctor_8c084328, 250000.0f, 0 },
    { 145, (void *)TObjContainerEnemy_ctor_8c0847cc, 250000.0f, 0 },
    { 146, (void *)TObjContainerBase_ctor_8c085638, 250000.0f, 0 },
    { 147, (void *)TObjContainerAbeEnemy_create_8c034230, 250000.0f, 0 },
    { 19, (void *)TOHealGeneral_create_8c19fee0, 250000.0f, 0 },
    { 22, (void *)TObjItemLight_create_8c034164, 250000.0f, 0 },
    { 23, (void *)TObjRaderCol_create_8c0341ec, 250000.0f, 0 },
    { 24, (void *)TObjFogCollisionSwitch_create_8c136b34, 250000.0f, 0 },
    { 130, (void *)TObjLazerFenceNorm_create_8c080abc, 250000.0f, 0 },
    { 150, (void *)TObjLazerFenceExtra_create_8c081080, 250000.0f, 0 },
    { 131, (void *)TObjLazerFence4_create_8c11d878, 250000.0f, 0 },
    { 132, (void *)TLazerFenceSw_create_8c1139e0, 250000.0f, 0 },
    { 256, (void *)TODoorMachine01_create_8c161fd8, 250000.0f, 0 },
    { 258, (void *)create_dat_object_0102_8c1af14c, 250000.0f, 0 },
    { 257, (void *)TOKeyMachine01_create_8c162864, 250000.0f, 0 },
    { 207, (void *)TOBind_create_8c1b0578, 250000.0f, 0 },
    { 259, (void *)TOCapsuleMachine01_ctor_8c1bf074, 250000.0f, 0 },
    { 260, (void *)TOComputerMachine01_ctor_8c1bf348, 250000.0f, 0 },
    { 261, (void *)TOMonitorMachine01_create_8c1bfb54, 250000.0f, 0 },
    { 262, (void *)TODragonflyMachine01_create_8c1c3dcc, 250000.0f, 0 },
    { 263, (void *)TOLightMachine01_create_8c1c0298, 250000.0f, 0 },
    { 264, (void *)TOExplosiveMachine01_ctor_8c1c0800, 250000.0f, 0 },
    { 265, (void *)TOExplosiveMachine02_ctor_8c1c0974, 250000.0f, 0 },
    { 266, (void *)TOExplosiveMachine03_ctor_8c1c0af0, 250000.0f, 0 },
    { 267, (void *)TOSparkMachine01_create_8c1c6c64, 250000.0f, 0 },
    { 268, (void *)TOHangerMachine01_ctor_8c1c6f50, 250000.0f, 0 },
    { 149, (void *)TObjContainerNoItem_ctor_8c084dac, 250000.0f, 0 },
    { 31, (void *)TObjRaderHideCol_create_8c0342b8, 250000.0f, 0 },
    { 34, (void *)TOKeyCol_create_8c2566fc, 250000.0f, 0 },
    { 35, (void *)TOAttackableCol_ctor_8c2576f8, 250000.0f, 0 },
    { 32, (void *)TOSwitchItem_ctor_8c255f2c, 250000.0f, 0 },
    { 33, (void *)TOSymbolchatColli_ctor_8c25638c, 250000.0f, 0 },
    { 222, (void *)TODummyKeyCave01_ctor_8c258124, 250000.0f, 0 },
    { 36, (void *)TOSwitchAttack_ctor_8c2588b4, 250000.0f, 0 },
    { 139, (void *)TObjComputer_create_8c085ec8, 250000.0f, 0 },
    { 37, (void *)TOSwitchTimer_ctor_8c25afe0, 250000.0f, 0 },
    { 38, (void *)TOChatSensor_create_8c25d8b8, 250000.0f, 0 },
    { 359, (void *)TOTrapAncient02R_create_8c14d6d4, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};

const DatConstructorEntry dat_object_ctor_table_8c2ea4e8[61] = {
    { 0, (void *)TObjPlayerSet_ctor_8c08a420, 250000.0f, 0 },
    { 1, (void *)TObjParticle_create_8c0804a8, 40000.0f, 0 },
    { 4, (void *)TObjLight_create_8c0ed844, 84100.0f, 0 },
    { 14, (void *)TObjRoomId_create_8c185394, 250000.0f, 0 },
    { 2, (void *)TObjAreaWarpForest_create_8c033fcc, 250000.0f, 0 },
    { 3, (void *)TObjMapWarpForest_create_8c034010, 250000.0f, 0 },
    { 27, (void *)TObjAreaWarpQuest_create_8c034274, 250000.0f, 0 },
    { 25, (void *)TObjWarpBoss_create_8c034054, 250000.0f, 0 },
    { 141, (void *)TOCapsuleAncient01_create_8c0f2158, 250000.0f, 0 },
    { 142, (void *)TOBarrierEnergy01_create_8c10b7d0, 250000.0f, 0 },
    { 10, (void *)TOMineIcon01_create_8c13ddcc, 250000.0f, 0 },
    { 11, (void *)TOMineIcon02_create_8c13e090, 250000.0f, 0 },
    { 12, (void *)TOMineIcon03_create_8c13e37c, 250000.0f, 0 },
    { 13, (void *)TOMineIcon04_create_8c13e668, 250000.0f, 0 },
    { 15, (void *)TOSensorGeneral01_create_8c15d450, 250000.0f, 0 },
    { 7, (void *)TObjFogCollision_create_8c136738, 250000.0f, 0 },
    { 144, (void *)TOKeyGenericSw_create_8c130714, 250000.0f, 0 },
    { 8, (void *)TObjEvtCollision_create_8c188120, 250000.0f, 0 },
    { 6, (void *)TObjEnvSound_create_8c100dd0, 250000.0f, 0 },
    { 18, (void *)TObjQuestCol_create_8c034098, 250000.0f, 0 },
    { 21, (void *)TObjQuestColA_create_8c0340dc, 250000.0f, 0 },
    { 136, (void *)TObjContainerItem_ctor_8c084328, 250000.0f, 0 },
    { 145, (void *)TObjContainerEnemy_ctor_8c0847cc, 250000.0f, 0 },
    { 146, (void *)TObjContainerBase_ctor_8c085638, 250000.0f, 0 },
    { 147, (void *)TObjContainerAbeEnemy_create_8c034230, 250000.0f, 0 },
    { 19, (void *)TOHealGeneral_create_8c19fee0, 250000.0f, 0 },
    { 22, (void *)TObjItemLight_create_8c034164, 250000.0f, 0 },
    { 23, (void *)TObjRaderCol_create_8c0341ec, 250000.0f, 0 },
    { 24, (void *)TObjFogCollisionSwitch_create_8c136b34, 250000.0f, 0 },
    { 130, (void *)TObjLazerFenceNorm_create_8c080abc, 250000.0f, 0 },
    { 150, (void *)TObjLazerFenceExtra_create_8c081080, 250000.0f, 0 },
    { 131, (void *)TObjLazerFence4_create_8c11d878, 250000.0f, 0 },
    { 132, (void *)TLazerFenceSw_create_8c1139e0, 250000.0f, 0 },
    { 256, (void *)TODoorMachine01_create_8c161fd8, 250000.0f, 0 },
    { 258, (void *)create_dat_object_0102_8c1af14c, 250000.0f, 0 },
    { 257, (void *)TOKeyMachine01_create_8c162864, 250000.0f, 0 },
    { 207, (void *)TOBind_create_8c1b0578, 250000.0f, 0 },
    { 259, (void *)TOCapsuleMachine01_ctor_8c1bf074, 250000.0f, 0 },
    { 260, (void *)TOComputerMachine01_ctor_8c1bf348, 250000.0f, 0 },
    { 261, (void *)TOMonitorMachine01_create_8c1bfb54, 250000.0f, 0 },
    { 262, (void *)TODragonflyMachine01_create_8c1c3dcc, 250000.0f, 0 },
    { 263, (void *)TOLightMachine01_create_8c1c0298, 250000.0f, 0 },
    { 264, (void *)TOExplosiveMachine01_ctor_8c1c0800, 250000.0f, 0 },
    { 265, (void *)TOExplosiveMachine02_ctor_8c1c0974, 250000.0f, 0 },
    { 266, (void *)TOExplosiveMachine03_ctor_8c1c0af0, 250000.0f, 0 },
    { 267, (void *)TOSparkMachine01_create_8c1c6c64, 250000.0f, 0 },
    { 268, (void *)TOHangerMachine01_ctor_8c1c6f50, 250000.0f, 0 },
    { 342, (void *)TOMonumentAncient02_create_8c0f1b60, 250000.0f, 0 },
    { 149, (void *)TObjContainerNoItem_ctor_8c084dac, 250000.0f, 0 },
    { 31, (void *)TObjRaderHideCol_create_8c0342b8, 250000.0f, 0 },
    { 34, (void *)TOKeyCol_create_8c2566fc, 250000.0f, 0 },
    { 35, (void *)TOAttackableCol_ctor_8c2576f8, 250000.0f, 0 },
    { 32, (void *)TOSwitchItem_ctor_8c255f2c, 250000.0f, 0 },
    { 33, (void *)TOSymbolchatColli_ctor_8c25638c, 250000.0f, 0 },
    { 222, (void *)TODummyKeyCave01_ctor_8c258124, 250000.0f, 0 },
    { 36, (void *)TOSwitchAttack_ctor_8c2588b4, 250000.0f, 0 },
    { 139, (void *)TObjComputer_create_8c085ec8, 250000.0f, 0 },
    { 37, (void *)TOSwitchTimer_ctor_8c25afe0, 250000.0f, 0 },
    { 38, (void *)TOChatSensor_create_8c25d8b8, 250000.0f, 0 },
    { 359, (void *)TOTrapAncient02R_create_8c14d6d4, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};
