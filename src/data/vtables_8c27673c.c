/* Static data 8c27673c-8c276758: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1c6a74(void);
extern void operation_8c1c6ab8(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27673c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27673c[7] = {
    0,
    0,
    destroy_object_8c1c6a74,
    operation_8c1c6ab8,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
