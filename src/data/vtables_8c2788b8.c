/* Static data 8c2788b8-8c2788f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c2207f8(void);
extern void refresh_follow_effect_8c22083c(void);
extern void operation_8c22085c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemDownLoad_dtor_8c221134(void);
extern void TItemDownLoad_update_8c221198(void);
extern void TObject_render_default_8c0111c8(void);

/* 8c2788b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2788b8[7] = {
    0,
    0,
    destroy_object_8c2207f8,
    refresh_follow_effect_8c22083c,
    operation_8c22085c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2788d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2788d4[7] = {
    0,
    0,
    TItemDownLoad_dtor_8c221134,
    TItemDownLoad_update_8c221198,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
