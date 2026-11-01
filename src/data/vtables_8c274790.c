/* Static data 8c274790-8c2747ac: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemTimer_dtor_8c1ab07c(void);
extern void TItemTimer_update_8c1ab0c0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c274790: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274790[7] = {
    0,
    0,
    TItemTimer_dtor_8c1ab07c,
    TItemTimer_update_8c1ab0c0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
