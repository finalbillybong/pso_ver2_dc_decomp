/* Static data 8c277434-8c277474: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1de194(void);
extern void operation_8c1de1d8(void);
extern void operation_8c1de234(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void destroy_object_8c1dfda0(void);
extern void operation_8c1dfde4(void);
extern void operation_8c1dfe9c(void);

/* 8c277434: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c277434[8] = {
    0,
    0,
    destroy_object_8c1de194,
    operation_8c1de1d8,
    operation_8c1de234,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c277454: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c277454[8] = {
    0,
    0,
    destroy_object_8c1dfda0,
    operation_8c1dfde4,
    operation_8c1dfe9c,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
