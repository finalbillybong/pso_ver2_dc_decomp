/* Static data 8c2ee6f8-8c2ee8b8: record_table objects, in address order. */

typedef struct { int type; const void *factory; float unknown_08; int unknown_0c; } DatConstructorEntry;

extern void create_context_actor_8c1ad294(void);
extern void TObjNpcMaleBase_ctor_8c11f7f8(void);
extern void TObjEneBm3FlyNest_create_8c057c00(void);
extern void TObjEneBm5Wolf_create_8c06092c(void);
extern void TObjEneRe2Flower_create_8c05c974(void);
extern void TObjEneMe3ShinowaReal_create_8c0d47c0(void);
extern void TObjEneMe1Canadin_create_8c090474(void);
extern void TObjEneMe1CanadinLeader_create_8c09515c(void);
extern void TObjEneRe4Sorcerer_create_8c0c8b80(void);
extern void TObjEneRe7Berura_create_8c0d15dc(void);
extern void TObjEneDf2Bringer_create_8c0f4820(void);
extern void TObjEneMoja_create_8c038738(void);
extern void TObjEneShark_create_8c037608(void);
extern void TObjGrass_create_8c04ccf8(void);
extern void TObjEneSaver_create_8c0bcc5c(void);

/* DAT constructor table (type -> factory, ending with type 0xFFFF), the same form as the
   per-area tables listed at 8c2ebec8 / 8c2ee8b8; not reached from those lists. */
const DatConstructorEntry dat_ctor_table_8c2ee6f8[28] = {
    { 200, (void *)create_context_actor_8c1ad294, 250000.0f, 512 },
    { 65535, 0, 250000.0f, 0 },
    { 8, (void *)TObjNpcMaleBase_ctor_8c11f7f8, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 66, (void *)TObjEneBm3FlyNest_create_8c057c00, 250000.0f, 30 },
    { 67, (void *)TObjEneBm5Wolf_create_8c06092c, 250000.0f, 0 },
    { 97, (void *)TObjEneRe2Flower_create_8c05c974, 250000.0f, 0 },
    { 130, (void *)TObjEneMe3ShinowaReal_create_8c0d47c0, 250000.0f, 4 },
    { 131, (void *)TObjEneMe1Canadin_create_8c090474, 250000.0f, 0 },
    { 132, (void *)TObjEneMe1CanadinLeader_create_8c09515c, 250000.0f, 8 },
    { 161, (void *)TObjEneRe4Sorcerer_create_8c0c8b80, 250000.0f, 2 },
    { 165, (void *)TObjEneRe7Berura_create_8c0d15dc, 250000.0f, 0 },
    { 164, (void *)TObjEneDf2Bringer_create_8c0f4820, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 64, (void *)TObjEneMoja_create_8c038738, 250000.0f, 0 },
    { 99, (void *)TObjEneShark_create_8c037608, 250000.0f, 0 },
    { 96, (void *)TObjGrass_create_8c04ccf8, 250000.0f, 0 },
    { 130, (void *)TObjEneMe3ShinowaReal_create_8c0d47c0, 250000.0f, 4 },
    { 160, (void *)TObjEneSaver_create_8c0bcc5c, 250000.0f, 0 },
    { 164, (void *)TObjEneDf2Bringer_create_8c0f4820, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 },
    { 64, (void *)TObjEneMoja_create_8c038738, 250000.0f, 0 },
    { 99, (void *)TObjEneShark_create_8c037608, 250000.0f, 0 },
    { 96, (void *)TObjGrass_create_8c04ccf8, 250000.0f, 0 },
    { 130, (void *)TObjEneMe3ShinowaReal_create_8c0d47c0, 250000.0f, 4 },
    { 160, (void *)TObjEneSaver_create_8c0bcc5c, 250000.0f, 0 },
    { 164, (void *)TObjEneDf2Bringer_create_8c0f4820, 250000.0f, 0 },
    { 65535, 0, 250000.0f, 0 }
};
