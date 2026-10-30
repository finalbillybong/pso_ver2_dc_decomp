/* Static data 8c26580c-8c265828: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c096514(void);
extern void operation_8c096558(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26580c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26580c[7] = {
    0,
    0,
    destroy_object_8c096514,
    operation_8c096558,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
