/* Static data 8c278f1c-8c278f58: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_child_owner_8c2301f8(void);
extern void operation_8c23024c(void);
extern void operation_8c230304(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TWindowSubMagPhoton_dtor_8c230598(void);
extern void TWindowSubMagPhoton_update_8c2305dc(void);
extern void TWindowSubMagPhoton_render_8c230684(void);
extern void operation_8c0dc63c(void);

/* 8c278f1c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278f1c[7] = {
    0,
    0,
    destroy_child_owner_8c2301f8,
    operation_8c23024c,
    operation_8c230304,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278f38: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubMagPhoton_vtable_8c278f38[8] = {
    0,
    0,
    TWindowSubMagPhoton_dtor_8c230598,
    TWindowSubMagPhoton_update_8c2305dc,
    TWindowSubMagPhoton_render_8c230684,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
