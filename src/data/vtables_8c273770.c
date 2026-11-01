/* Static data 8c273770-8c27378c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubItem_dtor_8c1a2e3c(void);
extern void TWindowSubItem_update_8c1a2ed4(void);
extern void TWindowSubItem_render_8c1a369c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c273770: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c273770[7] = {
    0,
    0,
    TWindowSubItem_dtor_8c1a2e3c,
    TWindowSubItem_update_8c1a2ed4,
    TWindowSubItem_render_8c1a369c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
