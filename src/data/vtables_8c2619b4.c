/* Static data 8c2619b4-8c2619ec: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c03c324(void);
extern void operation_8c03b0a4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c03c368(void);
extern void operation_8c03b024(void);

/* 8c2619b4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2619b4[7] = {
    0,
    0,
    destroy_object_8c03c324,
    operation_8c03b0a4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2619d0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2619d0[7] = {
    0,
    0,
    destroy_object_8c03c368,
    operation_8c03b024,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
