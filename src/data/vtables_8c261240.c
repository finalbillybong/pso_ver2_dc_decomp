/* Static data 8c261240-8c26125c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c013f10(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c261240: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261240[7] = {
    0,
    0,
    destroy_object_8c013f10,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
