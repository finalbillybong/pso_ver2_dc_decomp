/* Static data 8c27a270-8c27a28c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffDevilCane_dtor_8c23baf8(void);
extern void TItemEffDevilCane_update_8c23bb3c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27a270: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27a270[7] = {
    0,
    0,
    TItemEffDevilCane_dtor_8c23baf8,
    TItemEffDevilCane_update_8c23bb3c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
