/* Static data 8c276ed4-8c276ef4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubAreaMapDisp_dtor_8c1d7a6c(void);
extern void TWindowSubAreaMapDisp_update_8c1d7b08(void);
extern void TWindowSubAreaMapDisp_render_8c1d7b54(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c276ed4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276ed4[8] = {
    0,
    0,
    TWindowSubAreaMapDisp_dtor_8c1d7a6c,
    TWindowSubAreaMapDisp_update_8c1d7b08,
    TWindowSubAreaMapDisp_render_8c1d7b54,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
