/* Static data 8c263fa4-8c263fc0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c07b480(void);
extern void operation_8c07b454(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c263fa4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c263fa4[7] = {
    0,
    0,
    destroy_object_8c07b480,
    operation_8c07b454,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
