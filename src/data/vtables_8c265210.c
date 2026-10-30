/* Static data 8c265210-8c26522c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c08a398(void);
extern void operation_8c0111c4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265210: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265210[7] = {
    0,
    0,
    destroy_object_8c08a398,
    operation_8c0111c4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
