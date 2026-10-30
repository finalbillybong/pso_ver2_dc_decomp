/* Static data 8c260ecc-8c260f70: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c010448(void);
extern void operation_8c0104e4(void);
extern void operation_8c0104e8(void);
extern void operation_8c0104ec(void);
extern void hierarchy_output(void);
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
extern void destroy_virtual_context_8c01116c(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void operation_8c010fac(void);
extern void operation_8c01103c(void);
extern void operation_8c011148(void);
extern void operation_8c0110a0(void);
extern void fn_8c0110fc(void);
extern void destroy_virtual_context_8c010edc(void);
extern void fn_8c0107c0(void);
extern void fn_8c010934(void);
extern void fn_8c010e54(void);
extern void operation_8c010b54(void);
extern void fn_8c010bcc(void);

/* 8c260ecc: type-information and this-adjustment header, then 15 slots */
VirtualFunction const vt_8c260ecc[17] = {
    0,
    0,
    operation_8c010448,
    operation_8c0104e4,
    operation_8c0104e8,
    operation_8c0104ec,
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

/* 8c260f10: type-information and this-adjustment header, then 10 slots */
VirtualFunction const vt_8c260f10[12] = {
    0,
    0,
    destroy_virtual_context_8c01116c,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c010fac,
    operation_8c01103c,
    operation_8c011148,
    operation_8c0110a0,
    fn_8c0110fc
};

/* 8c260f40: type-information and this-adjustment header, then 10 slots */
VirtualFunction const vt_8c260f40[12] = {
    0,
    0,
    destroy_virtual_context_8c010edc,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c0107c0,
    fn_8c010934,
    fn_8c010e54,
    operation_8c010b54,
    fn_8c010bcc
};
