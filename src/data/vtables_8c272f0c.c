/* Static data 8c272f0c-8c272f28: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TMapCsnCtrl_dtor_8c1a1940(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c272f0c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TMapCsnCtrl_vtable_8c272f0c[7] = {
    0,
    0,
    TMapCsnCtrl_dtor_8c1a1940,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
