/* Static data 8c277ef0-8c277f60: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1e6118(void);
extern void operation_8c1e615c(void);
extern void operation_0c62e0_8c1e61bc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c1e637c(void);
extern void operation_8c1e63c0(void);
extern void operation_0c62e0_8c1e6420(void);
extern void destroy_object_8c1e64f0(void);
extern void operation_8c1e6534(void);
extern void operation_8c1e6538(void);
extern void operation_8c1e6904(void);
extern void operation_8c1e6968(void);
extern void operation_8c1e6a58(void);

/* 8c277ef0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277ef0[7] = {
    0,
    0,
    destroy_object_8c1e6118,
    operation_8c1e615c,
    operation_0c62e0_8c1e61bc,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c277f0c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277f0c[7] = {
    0,
    0,
    destroy_object_8c1e637c,
    operation_8c1e63c0,
    operation_0c62e0_8c1e6420,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c277f28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277f28[7] = {
    0,
    0,
    destroy_object_8c1e64f0,
    operation_8c1e6534,
    operation_8c1e6538,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c277f44: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277f44[7] = {
    0,
    0,
    operation_8c1e6904,
    operation_8c1e6968,
    operation_8c1e6a58,
    operation_8c0111cc,
    hierarchy_output
};
