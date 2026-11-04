/* Static data 8c2ee5a8-8c2ee688: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void TObjEneRe4Sorcerer_create_8c0c8b80(void);
extern void TObjEneDarkGunner_create_8c079270(void);
extern void TObjEneDarkGunCenter_create_8c07b5f4(void);
extern void TObjEneDf2Bringer_create_8c0f4820(void);
extern void TObjEneRe7Berura_create_8c0d15dc(void);
extern void TObjEneDimedian_create_8c0e6590(void);
extern void TObjEneBalClawBody_create_8c124e6c(void);
extern void TObjEneBalClawClaw_create_8c127964(void);
extern void TObjNpcBringer_create_8c177f90(void);
extern void operation_8c065b5c(void);
extern void TBoss2DeRolLe_create_8c14348c(void);

/* DAT constructor table (type -> factory, ending with type 0xFFFF), the same form as the
   per-area tables listed at 8c2ebec8 / 8c2ee8b8; not reached from those lists. */
const DatConstructorEntry dat_ctor_table_8c2ee5a8[14] = {
    { 161, (void *)TObjEneRe4Sorcerer_create_8c0c8b80, 250000.0f, 2 },
    { 162, (void *)TObjEneDarkGunner_create_8c079270, 250000.0f, 0 },
    { 163, (void *)TObjEneDarkGunCenter_create_8c07b5f4, 250000.0f, 0 },
    { 164, (void *)TObjEneDf2Bringer_create_8c0f4820, 250000.0f, 0 },
    { 165, (void *)TObjEneRe7Berura_create_8c0d15dc, 250000.0f, 0 },
    { 166, (void *)TObjEneDimedian_create_8c0e6590, 250000.0f, 0 },
    { 167, (void *)TObjEneBalClawBody_create_8c124e6c, 250000.0f, 4 },
    { 168, (void *)TObjEneBalClawClaw_create_8c127964, 250000.0f, 0 },
    { 169, (void *)TObjNpcBringer_create_8c177f90, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 192, (void *)operation_8c065b5c, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 193, (void *)TBoss2DeRolLe_create_8c14348c, 250000.0f, 19 },
    { 65535, 0, 250000.0f, 0 }
};
