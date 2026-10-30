/* Static data 8c265d48-8c265d64: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0ac240(void);
extern void operation_8c0ac208(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265d48: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265d48[7] = {
    0,
    0,
    destroy_object_8c0ac240,
    operation_8c0ac208,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
