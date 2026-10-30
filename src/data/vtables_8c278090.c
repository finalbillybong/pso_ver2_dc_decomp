/* Static data 8c278090-8c2780b0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c206fd0(void);
extern void operation_8c207028(void);
extern void fn_8c20706c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c278090: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278090[8] = {
    0,
    0,
    operation_8c206fd0,
    operation_8c207028,
    fn_8c20706c,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
