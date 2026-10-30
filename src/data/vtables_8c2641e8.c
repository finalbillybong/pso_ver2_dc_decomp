/* Static data 8c2641e8-8c264204: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c07ca70(void);
extern void operation_8c07cab4(void);
extern void operation_8c07cb70(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2641e8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2641e8[7] = {
    0,
    0,
    destroy_object_8c07ca70,
    operation_8c07cab4,
    operation_8c07cb70,
    operation_8c0111cc,
    hierarchy_output
};
