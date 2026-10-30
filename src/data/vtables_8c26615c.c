/* Static data 8c26615c-8c266178: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b83c0(void);
extern void operation_8c0b8404(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26615c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26615c[7] = {
    0,
    0,
    destroy_object_8c0b83c0,
    operation_8c0b8404,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
