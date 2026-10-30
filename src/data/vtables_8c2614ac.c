/* Static data 8c2614ac-8c2614d8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c03061c(void);
extern void operation_8c0306f0(void);
extern void destroy_context_control(void);
extern void refresh_follow_effect_8c0316cc(void);
extern void operation_8c0316ec(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2614ac: type-information and this-adjustment header, then 2 slots */
VirtualFunction const vt_8c2614ac[4] = {
    0,
    0,
    operation_8c03061c,
    operation_8c0306f0
};

/* 8c2614bc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2614bc[7] = {
    0,
    0,
    destroy_context_control,
    refresh_follow_effect_8c0316cc,
    operation_8c0316ec,
    operation_8c0111cc,
    hierarchy_output
};
