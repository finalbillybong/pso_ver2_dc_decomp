/* Static data 8c2662d0-8c2662f8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0bb954(void);
extern void operation_8c03ceac(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c03ce9c(void);
extern void operation_8c03cea8(void);
extern void release_render_mode_four_8c03cedc(void);

/* 8c2662d0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2662d0[10] = {
    0,
    0,
    destroy_object_8c0bb954,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c03ce9c,
    operation_8c03cea8,
    release_render_mode_four_8c03cedc
};
