/* Static data 8c2728f8-8c272930: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c1987d8(void);
extern void operation_8c198840(void);
extern void operation_8c1988f4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c198c04(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);

/* 8c2728f8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2728f8[7] = {
    0,
    0,
    operation_8c1987d8,
    operation_8c198840,
    operation_8c1988f4,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c272914: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272914[7] = {
    0,
    0,
    operation_8c198c04,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
