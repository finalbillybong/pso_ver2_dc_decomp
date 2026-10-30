/* Static data 8c26e124-8c26e140: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c14ba44(void);
extern void fn_8c14bc04(void);
extern void fn_8c14c6ec(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26e124: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26e124[7] = {
    0,
    0,
    operation_8c14ba44,
    fn_8c14bc04,
    fn_8c14c6ec,
    operation_8c0111cc,
    hierarchy_output
};
