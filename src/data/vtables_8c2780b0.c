/* Static data 8c2780b0-8c278154: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c207998(void);
extern void operation_8c207a0c(void);
extern void operation_8c207b00(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c208d94(void);
extern void operation_8c1067d0(void);
extern void operation_8c0111c8(void);
extern void operation_8c208e30(void);
extern void operation_8c208f00(void);
extern void operation_8c2092bc(void);
extern void operation_8c2084bc(void);
extern void operation_8c208558(void);
extern void operation_8c208644(void);
extern void operation_8c208a6c(void);
extern void destroy_object_8c2083b4(void);
extern void operation_8c2083f8(void);
extern void operation_8c2094ac(void);
extern void operation_8c209564(void);
extern void operation_8c20972c(void);

/* 8c2780b0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2780b0[7] = {
    0,
    0,
    operation_8c207998,
    operation_8c207a0c,
    operation_8c207b00,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2780cc: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2780cc[10] = {
    0,
    0,
    operation_8c208d94,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c208e30,
    operation_8c208f00,
    operation_8c2092bc
};

/* 8c2780f4: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2780f4[10] = {
    0,
    0,
    operation_8c2084bc,
    operation_8c1067d0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c208558,
    operation_8c208644,
    operation_8c208a6c
};

/* 8c27811c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27811c[7] = {
    0,
    0,
    destroy_object_8c2083b4,
    operation_8c2083f8,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c278138: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278138[7] = {
    0,
    0,
    operation_8c2094ac,
    operation_8c209564,
    operation_8c20972c,
    operation_8c0111cc,
    hierarchy_output
};
