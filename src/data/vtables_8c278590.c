/* Static data 8c278590-8c2785f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjDFUsoTower_dtor_8c21a8c4(void);
extern void TObjDFUsoTower_update_8c21a908(void);
extern void TObjDFUsoTower_render_8c21a9f0(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void TWindowSubShortCutList_dtor_8c21c8ac(void);
extern void TWindowSubShortCutList_update_8c21c904(void);
extern void TWindowSubShortCutList_render_8c21c94c(void);
extern void fn_8c1192e8(void);

/* 8c278590: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TObjDFUsoTower_vtable_8c278590[16] = {
    0,
    0,
    TObjDFUsoTower_dtor_8c21a8c4,
    TObjDFUsoTower_update_8c21a908,
    TObjDFUsoTower_render_8c21a9f0,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    operation_8c010504,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};

/* 8c2785d0: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubShortCutList_vtable_8c2785d0[8] = {
    0,
    0,
    TWindowSubShortCutList_dtor_8c21c8ac,
    TWindowSubShortCutList_update_8c21c904,
    TWindowSubShortCutList_render_8c21c94c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
