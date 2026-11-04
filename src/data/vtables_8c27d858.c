/* Static data 8c27d858-8c27d878: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowArea_dtor_8c24bbc4(void);
extern void TWindowArea_update_8c24bc08(void);
extern void TWindowRoom_render_8c1cbabc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c27d858: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowArea_vtable_8c27d858[8] = {
    0,
    0,
    TWindowArea_dtor_8c24bbc4,
    TWindowArea_update_8c24bc08,
    TWindowRoom_render_8c1cbabc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
