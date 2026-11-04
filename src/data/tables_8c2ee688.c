/* Static data 8c2ee688-8c2ee6f8: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void TBoss3Volopt_create_8c138330(void);
extern void TBoss3VoloptP01_ctor_2_8c13c298(void);
extern void TBoss3VoloptCore_create_8c13a8cc(void);
extern void TBoss3VoloptP02_create_8c151eb4(void);
extern void TBoss3VoloptMonitor_ctor_2_8c151248(void);
extern void TBoss3VoloptHiraisin_ctor_2_8c1505fc(void);

const DatConstructorEntry dat_enemy_ctor_table_8c2ee688[7] = {
    { 194, (void *)TBoss3Volopt_create_8c138330, 250000.0f, 35 },
    { 195, (void *)TBoss3VoloptP01_ctor_2_8c13c298, 250000.0f, 0 },
    { 196, (void *)TBoss3VoloptCore_create_8c13a8cc, 250000.0f, 0 },
    { 197, (void *)TBoss3VoloptP02_create_8c151eb4, 250000.0f, 0 },
    { 198, (void *)TBoss3VoloptMonitor_ctor_2_8c151248, 250000.0f, 0 },
    { 199, (void *)TBoss3VoloptHiraisin_ctor_2_8c1505fc, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};
