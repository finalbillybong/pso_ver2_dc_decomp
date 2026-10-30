/* Static data 8c27a270-8c27a28c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c23baf8(void);
extern void operation_8c23bb3c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27a270: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27a270[7] = {
    0,
    0,
    destroy_object_8c23baf8,
    operation_8c23bb3c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
