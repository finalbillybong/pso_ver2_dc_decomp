/* Static data 8c2662d0-8c2662f8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TGroupEditor_dtor_8c0bb954(void);
extern void operation_8c03ceac(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TEditor_v05_8c03ce9c(void);
extern void TEditor_v06_8c03cea8(void);
extern void TEditor_v07_8c03cedc(void);

/* 8c2662d0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2662d0[10] = {
    0,
    0,
    TGroupEditor_dtor_8c0bb954,
    operation_8c03ceac,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TEditor_v05_8c03ce9c,
    TEditor_v06_8c03cea8,
    TEditor_v07_8c03cedc
};
