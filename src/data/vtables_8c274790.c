/* Static data 8c274790-8c2747ac: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1ab07c(void);
extern void operation_8c1ab0c0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c274790: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274790[7] = {
    0,
    0,
    destroy_object_8c1ab07c,
    operation_8c1ab0c0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
