/* Static data 8c27e4b8-8c27e4d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TDuelEffectNumber_dtor_8c24ea2c(void);
extern void TDuelEffectNumber_update_8c24ea70(void);
extern void TDuelEffectNumber_render_8c24ea94(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e4b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e4b8[7] = {
    0,
    0,
    TDuelEffectNumber_dtor_8c24ea2c,
    TDuelEffectNumber_update_8c24ea70,
    TDuelEffectNumber_render_8c24ea94,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
