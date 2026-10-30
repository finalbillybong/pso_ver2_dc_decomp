/* Static data 8c26972c-8c269764: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c103e58(void);
extern void operation_8c103e9c(void);
extern void operation_8c103f44(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void reconstruct_8c103c94(void);
extern void operation_8c103ce4(void);
extern void operation_8c103d3c(void);

/* 8c26972c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26972c[7] = {
    0,
    0,
    destroy_object_8c103e58,
    operation_8c103e9c,
    operation_8c103f44,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c269748: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269748[7] = {
    0,
    0,
    reconstruct_8c103c94,
    operation_8c103ce4,
    operation_8c103d3c,
    operation_8c0111cc,
    hierarchy_output
};
