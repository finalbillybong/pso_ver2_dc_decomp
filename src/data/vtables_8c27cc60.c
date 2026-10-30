/* Static data 8c27cc60-8c27ccc0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c242010(void);
extern void fn_8c242054(void);
extern void operation_8c242154(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c241a78(void);
extern void fn_8c241ad0(void);
extern void fn_8c241cb8(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void operation_8c051fd4(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void operation_8c0104f0(void);

/* 8c27cc60: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27cc60[7] = {
    0,
    0,
    destroy_object_8c242010,
    fn_8c242054,
    operation_8c242154,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27cc7c: type-information and this-adjustment header, then 15 slots */
VirtualFunction const vt_8c27cc7c[17] = {
    0,
    0,
    operation_8c241a78,
    fn_8c241ad0,
    fn_8c241cb8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    operation_8c051fd4,
    operation_8c010500,
    operation_8c010504,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510,
    operation_8c0104f0
};
