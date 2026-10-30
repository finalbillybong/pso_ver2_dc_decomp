/* Static data 8c27d62c-8c27d648: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c249870(void);
extern void operation_8c2498b4(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27d62c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27d62c[7] = {
    0,
    0,
    destroy_object_8c249870,
    operation_8c2498b4,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
