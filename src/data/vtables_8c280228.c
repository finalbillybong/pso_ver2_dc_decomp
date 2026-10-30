/* Static data 8c280228-8c280260: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c2531a8(void);
extern void operation_8c2531ec(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c2533c4(void);
extern void operation_8c253408(void);

/* 8c280228: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c280228[7] = {
    0,
    0,
    destroy_object_8c2531a8,
    operation_8c2531ec,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c280244: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c280244[7] = {
    0,
    0,
    destroy_object_8c2533c4,
    operation_8c253408,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
