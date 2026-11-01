/* Static data 8c266314-8c266330: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjEZRopeBase_dtor_8c0bbb98(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c266314: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266314[7] = {
    0,
    0,
    TObjEZRopeBase_dtor_8c0bbb98,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
