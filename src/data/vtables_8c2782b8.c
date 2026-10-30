/* Static data 8c2782b8-8c2782d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c2169c8(void);
extern void operation_8c216ab8(void);
extern void operation_8c2171c4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2782b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2782b8[7] = {
    0,
    0,
    operation_8c2169c8,
    operation_8c216ab8,
    operation_8c2171c4,
    operation_8c0111cc,
    hierarchy_output
};
