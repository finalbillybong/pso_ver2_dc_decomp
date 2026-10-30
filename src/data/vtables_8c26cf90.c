/* Static data 8c26cf90-8c26cfac: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c13735c(void);
extern void operation_8c1373c0(void);
extern void operation_8c13745c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26cf90: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26cf90[7] = {
    0,
    0,
    destroy_object_8c13735c,
    operation_8c1373c0,
    operation_8c13745c,
    operation_8c0111cc,
    hierarchy_output
};
