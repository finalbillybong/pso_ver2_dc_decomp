/* Static data 8c276684-8c2766dc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1c5d34(void);
extern void operation_8c1c5d9c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c1c60b0(void);
extern void operation_8c1c60f4(void);
extern void destroy_color_rise_8c1c61c0(void);
extern void operation_1abbcc(void);
extern void operation_1abeb8(void);
extern void operation_8c1c6210(void);

/* 8c276684: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276684[7] = {
    0,
    0,
    operation_8c1c5d34,
    operation_8c1c5d9c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2766a0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2766a0[7] = {
    0,
    0,
    destroy_object_8c1c60b0,
    operation_8c1c60f4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2766bc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2766bc[8] = {
    0,
    0,
    destroy_color_rise_8c1c61c0,
    operation_1abbcc,
    operation_1abeb8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1c6210
};
