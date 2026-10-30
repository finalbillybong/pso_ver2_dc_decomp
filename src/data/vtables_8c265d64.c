/* Static data 8c265d64-8c265d88: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0abf3c(void);
extern void fn_8c0ac098(void);
extern void operation_8c0ac11c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0ac284(void);
extern void operation_8c0ad9a8(void);

/* 8c265d64: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c265d64[9] = {
    0,
    0,
    destroy_object_8c0abf3c,
    fn_8c0ac098,
    operation_8c0ac11c,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0ac284,
    operation_8c0ad9a8
};
