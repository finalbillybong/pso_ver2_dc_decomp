/* Static data 8c27e9b4-8c27e9d0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TMemberCheck_dtor_8c250714(void);
extern void TMemberCheck_update_8c25076c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e9b4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TMemberCheck_vtable_8c27e9b4[7] = {
    0,
    0,
    TMemberCheck_dtor_8c250714,
    TMemberCheck_update_8c25076c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
