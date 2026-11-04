/* Static data 8c278db4-8c278e30: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowEff_dtor_8c22b324(void);
extern void TWindowEff_update_8c22b368(void);
extern void TWindowEff_render_8c22b40c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjDFDemoF_dtor_8c22b6d0(void);
extern void TObjDFDemoF_update_8c22b71c(void);
extern void TObjDFDemoF_render_8c22b758(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void TWindowSoundBalance_dtor_8c22b948(void);
extern void TWindowSoundBalance_update_8c22b98c(void);
extern void TWindowSoundBalance_render_8c22ba2c(void);
extern void operation_8c0dc63c(void);

/* 8c278db4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowEff_vtable_8c278db4[7] = {
    0,
    0,
    TWindowEff_dtor_8c22b324,
    TWindowEff_update_8c22b368,
    TWindowEff_render_8c22b40c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278dd0: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TObjDFDemoF_vtable_8c278dd0[16] = {
    0,
    0,
    TObjDFDemoF_dtor_8c22b6d0,
    TObjDFDemoF_update_8c22b71c,
    TObjDFDemoF_render_8c22b758,
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

/* 8c278e10: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSoundBalance_vtable_8c278e10[8] = {
    0,
    0,
    TWindowSoundBalance_dtor_8c22b948,
    TWindowSoundBalance_update_8c22b98c,
    TWindowSoundBalance_render_8c22ba2c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
