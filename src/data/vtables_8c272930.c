/* Static data 8c272930-8c2729cc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TBoss1DragonColli_C_dtor_8c198a4c(void);
extern void TObject_update_default_8c0111c4(void);
extern void TBoss1DragonColli_C_render_8c198ae4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void operation_8c051fd4(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void operation_8c0104f0(void);
extern void TWindowSubCustomSelect_dtor_8c198f08(void);
extern void TWindowSubCustomSelect_update_8c198f70(void);
extern void TWindowSubCustomSelect_render_8c199054(void);
extern void fn_8c1192e8(void);
extern void TAdTitle_dtor_8c19980c(void);
extern void TAdTitle_update_8c199850(void);
extern void TAdTitle_render_8c199a30(void);
extern void destroy_object_8c19a7f8(void);
extern void fn_8c19a83c(void);
extern void fn_8c19ae94(void);

/* 8c272930: type-information and this-adjustment header, then 15 slots */
VirtualFunction const TBoss1DragonColli_C_vtable_8c272930[17] = {
    0,
    0,
    TBoss1DragonColli_C_dtor_8c198a4c,
    TObject_update_default_8c0111c4,
    TBoss1DragonColli_C_render_8c198ae4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    operation_8c051fd4,
    operation_8c010500,
    operation_8c010504,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510,
    operation_8c0104f0
};

/* 8c272974: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubCustomSelect_vtable_8c272974[8] = {
    0,
    0,
    TWindowSubCustomSelect_dtor_8c198f08,
    TWindowSubCustomSelect_update_8c198f70,
    TWindowSubCustomSelect_render_8c199054,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c272994: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TAdTitle_vtable_8c272994[7] = {
    0,
    0,
    TAdTitle_dtor_8c19980c,
    TAdTitle_update_8c199850,
    TAdTitle_render_8c199a30,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2729b0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2729b0[7] = {
    0,
    0,
    destroy_object_8c19a7f8,
    fn_8c19a83c,
    fn_8c19ae94,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
