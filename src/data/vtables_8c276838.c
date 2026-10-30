/* Static data 8c276838-8c276854: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1ca3e4(void);
extern void fn_8c1ca4a4(void);
extern void operation_8c1ca5d4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276838: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276838[7] = {
    0,
    0,
    operation_8c1ca3e4,
    fn_8c1ca4a4,
    operation_8c1ca5d4,
    operation_8c0111cc,
    hierarchy_output
};
