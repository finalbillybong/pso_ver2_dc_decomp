/* Static data 8c263e00-8c263e38: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c078a5c(void);
extern void operation_8c078ab0(void);
extern void operation_8c078b0c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c078ba4(void);
extern void operation_8c078c14(void);
extern void operation_8c078cd8(void);

/* 8c263e00: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c263e00[7] = {
    0,
    0,
    operation_8c078a5c,
    operation_8c078ab0,
    operation_8c078b0c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c263e1c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c263e1c[7] = {
    0,
    0,
    operation_8c078ba4,
    operation_8c078c14,
    operation_8c078cd8,
    operation_8c0111cc,
    hierarchy_output
};
