/* Static data 8c265714-8c265730: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c09a954(void);
extern void operation_8c09a998(void);
extern void operation_8c09aa8c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265714: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265714[7] = {
    0,
    0,
    destroy_object_8c09a954,
    operation_8c09a998,
    operation_8c09aa8c,
    operation_8c0111cc,
    hierarchy_output
};
