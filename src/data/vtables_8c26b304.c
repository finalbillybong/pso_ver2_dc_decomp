/* Static data 8c26b304-8c26b320: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1225d8(void);
extern void operation_8c12261c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26b304: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26b304[7] = {
    0,
    0,
    destroy_object_8c1225d8,
    operation_8c12261c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
