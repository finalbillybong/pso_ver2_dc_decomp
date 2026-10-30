/* Static data 8c27dd38-8c27dd54: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c24d2cc(void);
extern void operation_8c24d320(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27dd38: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27dd38[7] = {
    0,
    0,
    operation_8c24d2cc,
    operation_8c24d320,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
