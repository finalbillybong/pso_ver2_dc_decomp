/* Static data 8c2660c0-8c2660f8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b67a0(void);
extern void operation_8c0b67e4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0b66d8(void);
extern void operation_8c0b6738(void);

/* 8c2660c0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2660c0[7] = {
    0,
    0,
    destroy_object_8c0b67a0,
    operation_8c0b67e4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2660dc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2660dc[7] = {
    0,
    0,
    operation_8c0b66d8,
    operation_8c0b6738,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
