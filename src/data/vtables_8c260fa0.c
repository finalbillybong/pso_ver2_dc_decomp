/* Static data 8c260fa0-8c260fd8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c011fc4(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void operation_8c011f98(void);
extern void hierarchy_output(void);
extern void TObjControl_dtor_8c0130e8(void);
extern void TObjControl_update_8c01312c(void);
extern void TObject_render_shadow_default_8c0111cc(void);

/* 8c260fa0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c260fa0[7] = {
    0,
    0,
    destroy_object_8c011fc4,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    operation_8c011f98,
    hierarchy_output
};

/* 8c260fbc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c260fbc[7] = {
    0,
    0,
    TObjControl_dtor_8c0130e8,
    TObjControl_update_8c01312c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
