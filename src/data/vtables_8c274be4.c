/* Static data 8c274be4-8c274c00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1b0a48(void);
extern void operation_8c1b0a8c(void);
extern void operation_8c1b0ab8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c274be4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274be4[7] = {
    0,
    0,
    destroy_object_8c1b0a48,
    operation_8c1b0a8c,
    operation_8c1b0ab8,
    operation_8c0111cc,
    hierarchy_output
};
