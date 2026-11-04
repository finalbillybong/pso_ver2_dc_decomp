/* Static data 8c265c94-8c265cd8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TParticleCtrl_dtor_8c0a7238(void);
extern void TParticleCtrl_update_8c0a72a0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TParticleCtrl_render_shadow_8c0a7db4(void);
extern void hierarchy_output(void);
extern void TParticleEditor_dtor_8c0a7ed0(void);
extern void operation_8c03ceac(void);
extern void TParticleEditor_render_shadow_8c0a9654(void);
extern void TParticleEditor_v05_8c0a7f14(void);
extern void TParticleEditor_v06_8c0a7f90(void);
extern void TParticleEditor_v07_8c0a7f7c(void);

/* 8c265c94: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TParticleCtrl_vtable_8c265c94[7] = {
    0,
    0,
    TParticleCtrl_dtor_8c0a7238,
    TParticleCtrl_update_8c0a72a0,
    TObject_render_default_8c0111c8,
    TParticleCtrl_render_shadow_8c0a7db4,
    hierarchy_output
};

/* 8c265cb0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TParticleEditor_vtable_8c265cb0[10] = {
    0,
    0,
    TParticleEditor_dtor_8c0a7ed0,
    operation_8c03ceac,
    TObject_render_default_8c0111c8,
    TParticleEditor_render_shadow_8c0a9654,
    hierarchy_output,
    TParticleEditor_v05_8c0a7f14,
    TParticleEditor_v06_8c0a7f90,
    TParticleEditor_v07_8c0a7f7c
};
