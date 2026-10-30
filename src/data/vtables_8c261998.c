/* Static data 8c261998-8c2619b4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c03c2e0(void);
extern void operation_8c03b144(void);
extern void fn_8c03b154(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c261998: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261998[7] = {
    0,
    0,
    destroy_object_8c03c2e0,
    operation_8c03b144,
    fn_8c03b154,
    operation_8c0111cc,
    hierarchy_output
};
