/* Static data 8c2660f8-8c266114: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b650c(void);
extern void fn_8c0b6550(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2660f8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2660f8[7] = {
    0,
    0,
    destroy_object_8c0b650c,
    fn_8c0b6550,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
