/* Static data 8c270978-8c2709a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c17729c(void);
extern void operation_8c1772e0(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1776fc(void);
extern void operation_8c03cea8(void);
extern void operation_8c177700(void);

/* 8c270978: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c270978[10] = {
    0,
    0,
    destroy_object_8c17729c,
    operation_8c1772e0,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1776fc,
    operation_8c03cea8,
    operation_8c177700
};
