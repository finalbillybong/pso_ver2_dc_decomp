/* Static data 8c278334-8c278350: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c218318(void);
extern void operation_8c21837c(void);
extern void fn_8c2185ac(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c278334: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278334[7] = {
    0,
    0,
    operation_8c218318,
    operation_8c21837c,
    fn_8c2185ac,
    operation_8c0111cc,
    hierarchy_output
};
