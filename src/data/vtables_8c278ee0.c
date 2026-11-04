/* Static data 8c278ee0-8c278f00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowDeposit_dtor_8c22f0c4(void);
extern void TWindowDeposit_update_8c22f108(void);
extern void TWindowDeposit_render_8c22f12c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c278ee0: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowDeposit_vtable_8c278ee0[8] = {
    0,
    0,
    TWindowDeposit_dtor_8c22f0c4,
    TWindowDeposit_update_8c22f108,
    TWindowDeposit_render_8c22f12c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
