/* Static data 8c27e49c-8c27e4b8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TDuelEffectCtrl_dtor_8c24e714(void);
extern void TDuelEffectCtrl_update_8c24e758(void);
extern void TDuelEffectCtrl_render_8c24e798(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e49c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e49c[7] = {
    0,
    0,
    TDuelEffectCtrl_dtor_8c24e714,
    TDuelEffectCtrl_update_8c24e758,
    TDuelEffectCtrl_render_8c24e798,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
