/* Static data 8c266008-8c266024: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c0b4694(void);
extern void operation_8c0b471c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c266008: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266008[7] = {
    0,
    0,
    operation_8c0b4694,
    operation_8c0b471c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
