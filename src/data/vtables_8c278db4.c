/* Static data 8c278db4-8c278e30: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c22b324(void);
extern void fn_8c22b368(void);
extern void fn_8c22b40c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_context_8c22b6d0(void);
extern void operation_8c22b71c(void);
extern void operation_8c22b758(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void destroy_object_8c22b948(void);
extern void operation_8c22b98c(void);
extern void fn_8c22ba2c(void);
extern void operation_8c0dc63c(void);

/* 8c278db4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278db4[7] = {
    0,
    0,
    destroy_object_8c22b324,
    fn_8c22b368,
    fn_8c22b40c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278dd0: type-information and this-adjustment header, then 14 slots */
VirtualFunction const vt_8c278dd0[16] = {
    0,
    0,
    destroy_context_8c22b6d0,
    operation_8c22b71c,
    operation_8c22b758,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    operation_8c010504,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};

/* 8c278e10: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278e10[8] = {
    0,
    0,
    destroy_object_8c22b948,
    operation_8c22b98c,
    fn_8c22ba2c,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
