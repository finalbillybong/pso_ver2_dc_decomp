/* Static data 8c276854-8c276874: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowRoom_dtor_8c1cba54(void);
extern void TWindowRoom_update_8c1cba98(void);
extern void TWindowRoom_render_8c1cbabc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c276854: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowRoom_vtable_8c276854[8] = {
    0,
    0,
    TWindowRoom_dtor_8c1cba54,
    TWindowRoom_update_8c1cba98,
    TWindowRoom_render_8c1cbabc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
