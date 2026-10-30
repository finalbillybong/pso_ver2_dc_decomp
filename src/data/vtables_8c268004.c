/* Static data 8c268004-8c268020: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_named_resource_scene(void);
extern void operation_8c0ed428(void);
extern void operation_8c0ed490(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c268004: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c268004[7] = {
    0,
    0,
    destroy_named_resource_scene,
    operation_8c0ed428,
    operation_8c0ed490,
    operation_8c0111cc,
    hierarchy_output
};
