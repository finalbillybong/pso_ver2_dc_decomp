/* Static data 8c27e4d4-8c27e4f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TDuelEffectString_dtor_8c24ed70(void);
extern void TDuelEffectString_update_8c24edb4(void);
extern void TDuelEffectString_render_8c24edd8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e4d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TDuelEffectString_vtable_8c27e4d4[7] = {
    0,
    0,
    TDuelEffectString_dtor_8c24ed70,
    TDuelEffectString_update_8c24edb4,
    TDuelEffectString_render_8c24edd8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
