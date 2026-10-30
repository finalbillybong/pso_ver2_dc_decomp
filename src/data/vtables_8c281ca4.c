/* Static data 8c281ca4-8c281d00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c25d9f8(void);
extern void fn_8c25da3c(void);
extern void operation_8c25dad0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c25dacc(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void destroy_view_effect_8c25de80(void);
extern void operation_8c25df4c(void);
extern void fn_8c25dfa4(void);

/* 8c281ca4: type-information and this-adjustment header, then 14 slots */
VirtualFunction const vt_8c281ca4[16] = {
    0,
    0,
    destroy_object_8c25d9f8,
    fn_8c25da3c,
    operation_8c25dad0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    operation_8c25dacc,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};

/* 8c281ce4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281ce4[7] = {
    0,
    0,
    destroy_view_effect_8c25de80,
    operation_8c25df4c,
    fn_8c25dfa4,
    operation_8c0111cc,
    hierarchy_output
};
