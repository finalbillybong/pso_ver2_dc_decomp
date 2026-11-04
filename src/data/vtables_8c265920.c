/* Static data 8c265920-8c2659d8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TSceneSora_dtor_8c09f2ac(void);
extern void TSceneSora_update_8c09f2f8(void);
extern void TSceneSora_render_8c09f328(void);
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
extern void TEF_PvrWave_dtor_8c09f4b8(void);
extern void TEF_PvrWave_update_8c09f54c(void);
extern void TEF_PvrWave_render_8c09f558(void);
extern void TEF_LensFlare_dtor_8c09fc3c(void);
extern void TEF_LensFlare_update_8c09fd48(void);
extern void TEF_LensFlare_render_8c09f55c(void);
extern void TEffClitical_dtor_8c09fe00(void);
extern void TEffClitical_update_8c09fe44(void);
extern void TEffClitical_render_8c09ff7c(void);

/* 8c265920: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TSceneSora_vtable_8c265920[16] = {
    0,
    0,
    TSceneSora_dtor_8c09f2ac,
    TSceneSora_update_8c09f2f8,
    TSceneSora_render_8c09f328,
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

/* 8c265960: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEF_PvrWave_vtable_8c265960[7] = {
    0,
    0,
    TEF_PvrWave_dtor_8c09f4b8,
    TEF_PvrWave_update_8c09f54c,
    TEF_PvrWave_render_8c09f558,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26597c: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TEF_LensFlare_vtable_8c26597c[16] = {
    0,
    0,
    TEF_LensFlare_dtor_8c09fc3c,
    TEF_LensFlare_update_8c09fd48,
    TEF_LensFlare_render_8c09f55c,
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

/* 8c2659bc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEffClitical_vtable_8c2659bc[7] = {
    0,
    0,
    TEffClitical_dtor_8c09fe00,
    TEffClitical_update_8c09fe44,
    TEffClitical_render_8c09ff7c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
