/* Static data 8c276e28-8c276e44: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubEquip_dtor_8c1d483c(void);
extern void TWindowSubEquip_update_8c1d48b4(void);
extern void TWindowSubEquip_render_8c1d4a80(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276e28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276e28[7] = {
    0,
    0,
    TWindowSubEquip_dtor_8c1d483c,
    TWindowSubEquip_update_8c1d48b4,
    TWindowSubEquip_render_8c1d4a80,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
