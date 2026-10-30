/* Static data 8c276ea0-8c276ed4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c1d58a4(void);
extern void operation_8c1d58e0(void);
extern void fn_8c1d58e4(void);
extern void operation_194098_8c1d5be4(void);
extern void operation_8c1d5c38(void);
extern void fn_8c1d5cd4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c276ea0: type-information and this-adjustment header, then 3 slots */
VirtualFunction const vt_8c276ea0[5] = {
    0,
    0,
    destroy_field_8c1d58a4,
    operation_8c1d58e0,
    fn_8c1d58e4
};

/* 8c276eb4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276eb4[8] = {
    0,
    0,
    operation_194098_8c1d5be4,
    operation_8c1d5c38,
    fn_8c1d5cd4,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
