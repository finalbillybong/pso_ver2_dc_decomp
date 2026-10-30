/* Static data 8c278f58-8c278fb4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c230b8c(void);
extern void operation_8c230bf8(void);
extern void fn_8c230d18(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void reset_shared_object(void);
extern void operation_8c010500(void);
extern void operation_8c010504(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void destroy_object_8c231888(void);
extern void operation_8c2318cc(void);
extern void fn_8c1ab618(void);

/* 8c278f58: type-information and this-adjustment header, then 14 slots */
VirtualFunction const vt_8c278f58[16] = {
    0,
    0,
    operation_8c230b8c,
    operation_8c230bf8,
    fn_8c230d18,
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

/* 8c278f98: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278f98[7] = {
    0,
    0,
    destroy_object_8c231888,
    operation_8c2318cc,
    fn_8c1ab618,
    operation_8c0111cc,
    hierarchy_output
};
