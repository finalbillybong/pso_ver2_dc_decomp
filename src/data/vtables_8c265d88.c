/* Static data 8c265d88-8c265da4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0ac8e0(void);
extern void operation_8c0ac924(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265d88: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265d88[7] = {
    0,
    0,
    destroy_object_8c0ac8e0,
    operation_8c0ac924,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
