/* Static data 8c2745b8-8c2745d8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1a632c(void);
extern void operation_8c1a6370(void);
extern void fn_8c1a63a0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c2745b8: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2745b8[8] = {
    0,
    0,
    destroy_object_8c1a632c,
    operation_8c1a6370,
    fn_8c1a63a0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
