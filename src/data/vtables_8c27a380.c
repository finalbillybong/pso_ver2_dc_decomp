/* Static data 8c27a380-8c27a3a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemShootDorillArm_dtor_8c23c030(void);
extern void operation_1abbcc(void);
extern void TItemShootDorillArm_render_8c23bf90(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemShootDorillArm_v05_8c23bf8c(void);

/* 8c27a380: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TItemShootDorillArm_vtable_8c27a380[8] = {
    0,
    0,
    TItemShootDorillArm_dtor_8c23c030,
    operation_1abbcc,
    TItemShootDorillArm_render_8c23bf90,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TItemShootDorillArm_v05_8c23bf8c
};
