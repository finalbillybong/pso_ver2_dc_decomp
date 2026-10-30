/* Static data 8c2754dc-8c2754fc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1bcf58(void);
extern void operation_8c1bcf9c(void);
extern void operation_8c1bcff0(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c2754dc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2754dc[8] = {
    0,
    0,
    destroy_object_8c1bcf58,
    operation_8c1bcf9c,
    operation_8c1bcff0,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
