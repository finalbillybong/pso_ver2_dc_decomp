/* Static data 8c2661c0-8c2661dc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b95fc(void);
extern void operation_8c0b9640(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2661c0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2661c0[7] = {
    0,
    0,
    destroy_object_8c0b95fc,
    operation_8c0b9640,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
