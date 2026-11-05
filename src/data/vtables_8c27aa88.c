/* Static data 8c27aa88-8c27aac4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_color_rise_8c23daf0(void);
extern void TItemShoot_vslot01_8c1abbcc(void);
extern void operation_8c23da5c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_1ac3cc_8c23da48(void);
extern void TItemEffFreezeBeam_dtor_8c23d8f4(void);
extern void TItemEffFreezeBeam_update_8c23d938(void);
extern void TObject_render_default_8c0111c8(void);

/* 8c27aa88: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27aa88[8] = {
    0,
    0,
    destroy_color_rise_8c23daf0,
    TItemShoot_vslot01_8c1abbcc,
    operation_8c23da5c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_1ac3cc_8c23da48
};

/* 8c27aaa8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemEffFreezeBeam_vtable_8c27aaa8[7] = {
    0,
    0,
    TItemEffFreezeBeam_dtor_8c23d8f4,
    TItemEffFreezeBeam_update_8c23d938,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
