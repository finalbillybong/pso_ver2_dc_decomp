/* Static data 8c274be4-8c274c00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjBoss2Dust_dtor_8c1b0a48(void);
extern void TObjBoss2Dust_update_8c1b0a8c(void);
extern void TObjBoss2Dust_render_8c1b0ab8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c274be4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjBoss2Dust_vtable_8c274be4[7] = {
    0,
    0,
    TObjBoss2Dust_dtor_8c1b0a48,
    TObjBoss2Dust_update_8c1b0a8c,
    TObjBoss2Dust_render_8c1b0ab8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
