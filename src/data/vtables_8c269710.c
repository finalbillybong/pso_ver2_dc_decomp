/* Static data 8c269710-8c26972c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c104104(void);
extern void operation_8c104234(void);
extern void fn_8c1042cc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c269710: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269710[7] = {
    0,
    0,
    destroy_object_8c104104,
    operation_8c104234,
    fn_8c1042cc,
    operation_8c0111cc,
    hierarchy_output
};
