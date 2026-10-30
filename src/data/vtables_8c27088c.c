/* Static data 8c27088c-8c2708a8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c176914(void);
extern void operation_8c176958(void);
extern void operation_8c176a98(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27088c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27088c[7] = {
    0,
    0,
    destroy_object_8c176914,
    operation_8c176958,
    operation_8c176a98,
    operation_8c0111cc,
    hierarchy_output
};
