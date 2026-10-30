/* Static data 8c265f44-8c265f60: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c0b3494(void);
extern void operation_8c0b3514(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265f44: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265f44[7] = {
    0,
    0,
    operation_8c0b3494,
    operation_8c0b3514,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
