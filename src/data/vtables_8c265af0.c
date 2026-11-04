/* Static data 8c265af0-8c265b34: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TCameraEditor_dtor_8c0a2f7c(void);
extern void TCameraEditor_update_8c0a3060(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TCameraEditor_v05_8c0a2fc8(void);
extern void TCameraEditor_v06_8c0a36f8(void);
extern void TCameraEditor_v07_8c0a302c(void);
extern void destroy_effect_a4910(void);
extern void fn_8c0a4964(void);

/* 8c265af0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TCameraEditor_vtable_8c265af0[10] = {
    0,
    0,
    TCameraEditor_dtor_8c0a2f7c,
    TCameraEditor_update_8c0a3060,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TCameraEditor_v05_8c0a2fc8,
    TCameraEditor_v06_8c0a36f8,
    TCameraEditor_v07_8c0a302c
};

/* 8c265b18: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265b18[7] = {
    0,
    0,
    destroy_effect_a4910,
    fn_8c0a4964,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
