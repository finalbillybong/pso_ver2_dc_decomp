/* Static data 8c276854-8c276874: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1cba54(void);
extern void operation_8c1cba98(void);
extern void operation_8c1cbabc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c276854: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276854[8] = {
    0,
    0,
    destroy_object_8c1cba54,
    operation_8c1cba98,
    operation_8c1cbabc,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
