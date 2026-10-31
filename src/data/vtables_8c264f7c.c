/* Static data 8c264f7c-8c264f98: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_effect_a4910_8c086e30(void);
extern void fn_8c086ed8(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c264f7c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c264f7c[7] = {
    0,
    0,
    destroy_effect_a4910_8c086e30,
    fn_8c086ed8,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
