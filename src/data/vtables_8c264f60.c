/* Static data 8c264f60-8c264f7c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c086db0(void);
extern void operation_8c086df4(void);
extern void operation_8c086e2c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c264f60: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c264f60[7] = {
    0,
    0,
    destroy_object_8c086db0,
    operation_8c086df4,
    operation_8c086e2c,
    operation_8c0111cc,
    hierarchy_output
};
