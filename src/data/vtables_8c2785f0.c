/* Static data 8c2785f0-8c278610: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowShortCut_dtor_8c21cc84(void);
extern void TWindowShortCut_update_8c21cd08(void);
extern void TWindowShortCut_render_8c21cd48(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c2785f0: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowShortCut_vtable_8c2785f0[8] = {
    0,
    0,
    TWindowShortCut_dtor_8c21cc84,
    TWindowShortCut_update_8c21cd08,
    TWindowShortCut_render_8c21cd48,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
