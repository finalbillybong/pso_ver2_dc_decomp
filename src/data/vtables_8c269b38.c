/* Static data 8c269b38-8c269b70: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1108b8(void);
extern void operation_8c11097c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c10c490(void);
extern void operation_8c10c4f8(void);
extern void operation_8c10e65c(void);
extern void operation_8c10e660(void);

/* 8c269b38: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269b38[7] = {
    0,
    0,
    operation_8c1108b8,
    operation_8c11097c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c269b54: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269b54[7] = {
    0,
    0,
    operation_8c10c490,
    operation_8c10c4f8,
    operation_8c10e65c,
    operation_8c10e660,
    hierarchy_output
};
