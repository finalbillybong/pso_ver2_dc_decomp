/* Static data 8c2661dc-8c266200: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b91c8(void);
extern void fn_8c0b920c(void);
extern void operation_8c0b92f4(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0b6d08(void);
extern void fn_8c0b92f8(void);

/* 8c2661dc: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c2661dc[9] = {
    0,
    0,
    destroy_object_8c0b91c8,
    fn_8c0b920c,
    operation_8c0b92f4,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0b6d08,
    fn_8c0b92f8
};
