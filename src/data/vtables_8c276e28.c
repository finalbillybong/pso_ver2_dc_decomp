/* Static data 8c276e28-8c276e44: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1d483c(void);
extern void operation_8c1d48b4(void);
extern void operation_8c1d4a80(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276e28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c276e28[7] = {
    0,
    0,
    operation_8c1d483c,
    operation_8c1d48b4,
    operation_8c1d4a80,
    operation_8c0111cc,
    hierarchy_output
};
