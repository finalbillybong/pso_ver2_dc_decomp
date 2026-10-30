/* Static data 8c272f0c-8c272f28: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1a1940(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c272f0c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272f0c[7] = {
    0,
    0,
    destroy_object_8c1a1940,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
