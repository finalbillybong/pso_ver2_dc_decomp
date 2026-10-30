/* Static data 8c27cc44-8c27cc60: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c242388(void);
extern void operation_8c2423cc(void);
extern void operation_8c242444(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27cc44: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27cc44[7] = {
    0,
    0,
    destroy_object_8c242388,
    operation_8c2423cc,
    operation_8c242444,
    operation_8c0111cc,
    hierarchy_output
};
