/* Static data 8c2676d4-8c2676f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0da93c(void);
extern void operation_8c0da980(void);
extern void operation_8c0daa28(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2676d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2676d4[7] = {
    0,
    0,
    destroy_object_8c0da93c,
    operation_8c0da980,
    operation_8c0daa28,
    operation_8c0111cc,
    hierarchy_output
};
