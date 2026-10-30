/* Static data 8c266268-8c266284: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0baf2c(void);
extern void operation_8c0baf70(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c266268: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c266268[7] = {
    0,
    0,
    destroy_object_8c0baf2c,
    operation_8c0baf70,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
