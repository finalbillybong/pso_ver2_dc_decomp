/* Static data 8c276684-8c2766dc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffHeaven_dtor_8c1c5d34(void);
extern void TItemEffHeaven_update_8c1c5d9c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemEffLandHit_dtor_8c1c60b0(void);
extern void TItemEffLandHit_update_8c1c60f4(void);
extern void TItemEffLavis_dtor_8c1c61c0(void);
extern void operation_1abbcc(void);
extern void TItemShootModel_render_8c1abeb8(void);
extern void TItemEffLavis_v05_8c1c6210(void);

/* 8c276684: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276684[7] = {
    0,
    0,
    TItemEffHeaven_dtor_8c1c5d34,
    TItemEffHeaven_update_8c1c5d9c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2766a0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2766a0[7] = {
    0,
    0,
    TItemEffLandHit_dtor_8c1c60b0,
    TItemEffLandHit_update_8c1c60f4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2766bc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2766bc[8] = {
    0,
    0,
    TItemEffLavis_dtor_8c1c61c0,
    operation_1abbcc,
    TItemShootModel_render_8c1abeb8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TItemEffLavis_v05_8c1c6210
};
