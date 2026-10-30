/* Static data 8c2696f4-8c269710: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1043f0(void);
extern void operation_8c104434(void);
extern void operation_8c1044b4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2696f4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2696f4[7] = {
    0,
    0,
    destroy_object_8c1043f0,
    operation_8c104434,
    operation_8c1044b4,
    operation_8c0111cc,
    hierarchy_output
};
