/* Static data 8c266178-8c2661c0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecRaFoie_dtor_8c0b7c5c(void);
extern void TTecRaFoie_update_8c0b7ec8(void);
extern void TTecRaFoie_render_8c0b7f7c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecRaFoie_v05_8c0b7f80(void);
extern void operation_8c0ad9a8(void);
extern void TTecRaZonde_dtor_8c0b8c24(void);
extern void TTecRaZonde_update_8c0b8b90(void);
extern void TTecRaZonde_render_8c0b8c20(void);
extern void TTecRaZonde_v05_8c0b8cac(void);

/* 8c266178: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c266178[9] = {
    0,
    0,
    TTecRaFoie_dtor_8c0b7c5c,
    TTecRaFoie_update_8c0b7ec8,
    TTecRaFoie_render_8c0b7f7c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecRaFoie_v05_8c0b7f80,
    operation_8c0ad9a8
};

/* 8c26619c: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c26619c[9] = {
    0,
    0,
    TTecRaZonde_dtor_8c0b8c24,
    TTecRaZonde_update_8c0b8b90,
    TTecRaZonde_render_8c0b8c20,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecRaZonde_v05_8c0b8cac,
    operation_8c0ad9a8
};
