/* Static data 8c261bf0-8c261c0c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c040284(void);
extern void operation_8c0111c4(void);
extern void fn_8c0402c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c261bf0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261bf0[7] = {
    0,
    0,
    destroy_object_8c040284,
    operation_8c0111c4,
    fn_8c0402c8,
    operation_8c0111cc,
    hierarchy_output
};
