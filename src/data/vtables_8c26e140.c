/* Static data 8c26e140-8c26e15c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c14b6cc(void);
extern void operation_8c14b710(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26e140: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26e140[7] = {
    0,
    0,
    destroy_object_8c14b6cc,
    operation_8c14b710,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
