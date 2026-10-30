/* Static data 8c26522c-8c2652a4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c08a3dc(void);
extern void operation_8c08a4b8(void);
extern void operation_8c08a4bc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c08a4c0(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void destroy_object_8c08a63c(void);
extern void fn_8c08a680(void);
extern void fn_8c08a810(void);
extern void operation_8c08b22c(void);
extern void operation_8c08b014(void);
extern void operation_8c0111c8(void);
extern void fn_8c08b160(void);

/* 8c26522c: type-information and this-adjustment header, then 14 slots */
VirtualFunction const vt_8c26522c[16] = {
    0,
    0,
    destroy_object_8c08a3dc,
    operation_8c08a4b8,
    operation_8c08a4bc,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    operation_8c08a4c0,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};

/* 8c26526c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26526c[7] = {
    0,
    0,
    destroy_object_8c08a63c,
    fn_8c08a680,
    fn_8c08a810,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c265288: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265288[7] = {
    0,
    0,
    operation_8c08b22c,
    operation_8c08b014,
    operation_8c0111c8,
    fn_8c08b160,
    hierarchy_output
};
