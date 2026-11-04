/* Static data 8c2ee308-8c2ee518: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void TObjGrass_create_8c04ccf8(void);
extern void TObjEneRe2Flower_create_8c05c974(void);
extern void TObjEneNanoDrago_create_8c0bfd04(void);
extern void TObjEneShark_create_8c037608(void);
extern void TObjEnePanarms_create_8c11a9d8(void);
extern void TObjEneSlime_create_8c0f7b74(void);
extern void TObjNpcCloakroomBase_create_8c1a1afc(void);
extern void TObjEneDubchik_create_8c0ce160(void);
extern void TObjEneGyaranzo_create_8c108c0c(void);
extern void TObjEneMe3ShinowaReal_create_8c0d47c0(void);
extern void TObjEneMe1Canadin_create_8c090474(void);
extern void TObjEneMe1CanadinLeader_create_8c09515c(void);
extern void TOCtrlDubchik_create_8c1a08fc(void);
extern void TObjEneSaver_create_8c0bcc5c(void);
extern void TObjEneRe4Sorcerer_create_8c0c8b80(void);
extern void TObjEneRe7Berura_create_8c0d15dc(void);
extern void TObjEneDimedian_create_8c0e6590(void);
extern void TObjEneBalClawBody_create_8c124e6c(void);
extern void TObjEneBalClawClaw_create_8c127964(void);

/* DAT constructor table (type -> factory, ending with type 0xFFFF), the same form as the
   per-area tables listed at 8c2ebec8 / 8c2ee8b8; not reached from those lists. */
const DatConstructorEntry dat_ctor_table_8c2ee308[33] = {
    { 96, (void *)TObjGrass_create_8c04ccf8, 250000.0f, 0 },
    { 97, (void *)TObjEneRe2Flower_create_8c05c974, 250000.0f, 0 },
    { 98, (void *)TObjEneNanoDrago_create_8c0bfd04, 250000.0f, 0 },
    { 99, (void *)TObjEneShark_create_8c037608, 250000.0f, 0 },
    { 101, (void *)TObjEnePanarms_create_8c11a9d8, 250000.0f, 2 },
    { 65535, 0, 250000.0f, 0 },
    { 96, (void *)TObjGrass_create_8c04ccf8, 250000.0f, 0 },
    { 97, (void *)TObjEneRe2Flower_create_8c05c974, 250000.0f, 0 },
    { 98, (void *)TObjEneNanoDrago_create_8c0bfd04, 250000.0f, 0 },
    { 99, (void *)TObjEneShark_create_8c037608, 250000.0f, 0 },
    { 100, (void *)TObjEneSlime_create_8c0f7b74, 250000.0f, 4 },
    { 65535, 0, 250000.0f, 0 },
    { 97, (void *)TObjEneRe2Flower_create_8c05c974, 250000.0f, 0 },
    { 98, (void *)TObjEneNanoDrago_create_8c0bfd04, 250000.0f, 0 },
    { 99, (void *)TObjEneShark_create_8c037608, 250000.0f, 0 },
    { 100, (void *)TObjEneSlime_create_8c0f7b74, 250000.0f, 4 },
    { 101, (void *)TObjEnePanarms_create_8c11a9d8, 250000.0f, 2 },
    { 29, (void *)TObjNpcCloakroomBase_create_8c1a1afc, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 128, (void *)TObjEneDubchik_create_8c0ce160, 250000.0f, 0 },
    { 129, (void *)TObjEneGyaranzo_create_8c108c0c, 250000.0f, 0 },
    { 130, (void *)TObjEneMe3ShinowaReal_create_8c0d47c0, 250000.0f, 4 },
    { 131, (void *)TObjEneMe1Canadin_create_8c090474, 250000.0f, 0 },
    { 132, (void *)TObjEneMe1CanadinLeader_create_8c09515c, 250000.0f, 8 },
    { 133, (void *)TOCtrlDubchik_create_8c1a08fc, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 160, (void *)TObjEneSaver_create_8c0bcc5c, 250000.0f, 0 },
    { 161, (void *)TObjEneRe4Sorcerer_create_8c0c8b80, 250000.0f, 2 },
    { 165, (void *)TObjEneRe7Berura_create_8c0d15dc, 250000.0f, 0 },
    { 166, (void *)TObjEneDimedian_create_8c0e6590, 250000.0f, 0 },
    { 167, (void *)TObjEneBalClawBody_create_8c124e6c, 250000.0f, 4 },
    { 168, (void *)TObjEneBalClawClaw_create_8c127964, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};
