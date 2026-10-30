/* Static data 8c26d084-8c26d0a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c137f78(void);
extern void operation_8c137ea0(void);
extern void operation_8c137ec8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26d084: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26d084[7] = {
    0,
    0,
    destroy_object_8c137f78,
    operation_8c137ea0,
    operation_8c137ec8,
    operation_8c0111cc,
    hierarchy_output
};
