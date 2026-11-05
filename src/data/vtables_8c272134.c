/* Static data 8c272134-8c272194: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c187fcc(void);
extern void operation_8c188010(void);
extern void TObject_render_default_8c0111c8(void);
extern void fn_8c188094(void);
extern void hierarchy_output(void);
extern void TObjectShared_vslot05_8c0104fc(void);
extern void TObjectShared_vslot06_8c01d694(void);
extern void operation_8c051fd4(void);
extern void TObjectShared_vslot08_8c010500(void);
extern void operation_8c1880a0(void);
extern void TObjectShared_vslot10_8c010508(void);
extern void TObjectShared_vslot11_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void TObjectShared_vslot13_8c010510(void);
extern void operation_8c0104f0(void);
extern void destroy_object_8c1883d4(void);
extern void fn_8c188418(void);
extern void TObject_render_shadow_default_8c0111cc(void);

/* 8c272134: type-information and this-adjustment header, then 15 slots */
VirtualFunction const vt_8c272134[17] = {
    0,
    0,
    destroy_object_8c187fcc,
    operation_8c188010,
    TObject_render_default_8c0111c8,
    fn_8c188094,
    hierarchy_output,
    TObjectShared_vslot05_8c0104fc,
    TObjectShared_vslot06_8c01d694,
    operation_8c051fd4,
    TObjectShared_vslot08_8c010500,
    operation_8c1880a0,
    TObjectShared_vslot10_8c010508,
    TObjectShared_vslot11_8c01d3b0,
    fn_8c01d4c4,
    TObjectShared_vslot13_8c010510,
    operation_8c0104f0
};

/* 8c272178: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272178[7] = {
    0,
    0,
    destroy_object_8c1883d4,
    fn_8c188418,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
