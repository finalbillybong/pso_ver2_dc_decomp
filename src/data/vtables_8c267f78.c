/* Static data 8c267f78-8c268004: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c0e9c78(void);
extern void fn_8c0e9cc4(void);
extern void operation_8c0e9ddc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0ea148(void);
extern void fn_8c0ea1b0(void);
extern void operation_8c0ea34c(void);
extern void destroy_object_8c0ea694(void);
extern void fn_8c0ea738(void);
extern void fn_8c0ea958(void);
extern void operation_8c0ebba0(void);
extern void operation_8c0ebd40(void);
extern void fn_8c0ebe70(void);
extern void operation_8c0ec944(void);
extern void operation_8c0ecafc(void);
extern void fn_8c0ecb30(void);

/* 8c267f78: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267f78[7] = {
    0,
    0,
    destroy_context_8c0e9c78,
    fn_8c0e9cc4,
    operation_8c0e9ddc,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c267f94: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267f94[7] = {
    0,
    0,
    operation_8c0ea148,
    fn_8c0ea1b0,
    operation_8c0ea34c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c267fb0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267fb0[7] = {
    0,
    0,
    destroy_object_8c0ea694,
    fn_8c0ea738,
    fn_8c0ea958,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c267fcc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267fcc[7] = {
    0,
    0,
    operation_8c0ebba0,
    operation_8c0ebd40,
    fn_8c0ebe70,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c267fe8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267fe8[7] = {
    0,
    0,
    operation_8c0ec944,
    operation_8c0ecafc,
    fn_8c0ecb30,
    operation_8c0111cc,
    hierarchy_output
};
