/* Static data 8c270150-8c27016c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c16bad0(void);
extern void fn_8c16bb44(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c270150: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270150[7] = {
    0,
    0,
    operation_8c16bad0,
    fn_8c16bb44,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
