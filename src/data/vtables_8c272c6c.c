/* Static data 8c272c6c-8c272c94: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c19f9c4(void);
extern void operation_8c03ceac(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c19fa14(void);
extern void operation_8c19fa10(void);
extern void operation_8c19fa30(void);

/* 8c272c6c: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c272c6c[10] = {
    0,
    0,
    destroy_object_8c19f9c4,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c19fa14,
    operation_8c19fa10,
    operation_8c19fa30
};
