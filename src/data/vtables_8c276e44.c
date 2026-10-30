/* Static data 8c276e44-8c276e84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1d4cdc(void);
extern void fn_8c1d4d20(void);
extern void fn_8c1d4d2c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);
extern void destroy_object_8c1d4fe8(void);
extern void fn_8c1d502c(void);
extern void fn_8c1d5038(void);

/* 8c276e44: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276e44[8] = {
    0,
    0,
    destroy_object_8c1d4cdc,
    fn_8c1d4d20,
    fn_8c1d4d2c,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c276e64: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c276e64[8] = {
    0,
    0,
    destroy_object_8c1d4fe8,
    fn_8c1d502c,
    fn_8c1d5038,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
