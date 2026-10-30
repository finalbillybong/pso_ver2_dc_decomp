/* Static data 8c278ee0-8c278f00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c22f0c4(void);
extern void operation_8c22f108(void);
extern void operation_8c22f12c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c278ee0: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278ee0[8] = {
    0,
    0,
    destroy_object_8c22f0c4,
    operation_8c22f108,
    operation_8c22f12c,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
