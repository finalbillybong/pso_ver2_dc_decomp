/* Static data 8c261224-8c261240: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c01410c(void);
extern void fn_8c014150(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c261224: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261224[7] = {
    0,
    0,
    destroy_object_8c01410c,
    fn_8c014150,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
