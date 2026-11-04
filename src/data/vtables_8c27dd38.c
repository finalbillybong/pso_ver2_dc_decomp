/* Static data 8c27dd38-8c27dd54: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemObjectTV_dtor_8c24d2cc(void);
extern void TItemObjectTV_update_8c24d320(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27dd38: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemObjectTV_vtable_8c27dd38[7] = {
    0,
    0,
    TItemObjectTV_dtor_8c24d2cc,
    TItemObjectTV_update_8c24d320,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
