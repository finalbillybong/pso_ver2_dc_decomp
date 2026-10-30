/* Static data 8c265888-8c2658b8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c09ce5c(void);
extern void operation_8c09cea0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c010fac(void);
extern void operation_8c01103c(void);
extern void operation_8c011148(void);
extern void operation_8c0110a0(void);
extern void fn_8c0110fc(void);

/* 8c265888: type-information and this-adjustment header, then 10 slots */
VirtualFunction const vt_8c265888[12] = {
    0,
    0,
    destroy_object_8c09ce5c,
    operation_8c09cea0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c010fac,
    operation_8c01103c,
    operation_8c011148,
    operation_8c0110a0,
    fn_8c0110fc
};
