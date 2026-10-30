/* Static data 8c265f60-8c265f84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b3048(void);
extern void fn_8c0b308c(void);
extern void operation_8c0b32bc(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c0b3274(void);
extern void operation_8c0ad9a8(void);

/* 8c265f60: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c265f60[9] = {
    0,
    0,
    destroy_object_8c0b3048,
    fn_8c0b308c,
    operation_8c0b32bc,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c0b3274,
    operation_8c0ad9a8
};
