/* Static data 8c278350-8c278388: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c218b3c(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c21a0c4(void);
extern void operation_8c21a16c(void);
extern void operation_8c21a578(void);

/* 8c278350: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278350[7] = {
    0,
    0,
    operation_8c218b3c,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c27836c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27836c[7] = {
    0,
    0,
    operation_8c21a0c4,
    operation_8c21a16c,
    operation_8c21a578,
    operation_8c0111cc,
    hierarchy_output
};
