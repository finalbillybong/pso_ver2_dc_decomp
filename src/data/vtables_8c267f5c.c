/* Static data 8c267f5c-8c267f78: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0e98d8(void);
extern void operation_8c0e9928(void);
extern void operation_8c0e992c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c267f5c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c267f5c[7] = {
    0,
    0,
    destroy_object_8c0e98d8,
    operation_8c0e9928,
    operation_8c0e992c,
    operation_8c0111cc,
    hierarchy_output
};
