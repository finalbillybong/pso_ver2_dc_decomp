/* Static data 8c266178-8c2661c0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c0b7c5c(void);
extern void fn_8c0b7ec8(void);
extern void operation_8c0b7f7c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c0b7f80(void);
extern void operation_8c0ad9a8(void);
extern void destroy_object_8c0b8c24(void);
extern void fn_8c0b8b90(void);
extern void operation_8c0b8c20(void);
extern void operation_8c0b8cac(void);

/* 8c266178: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c266178[9] = {
    0,
    0,
    destroy_object_8c0b7c5c,
    fn_8c0b7ec8,
    operation_8c0b7f7c,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c0b7f80,
    operation_8c0ad9a8
};

/* 8c26619c: type-information and this-adjustment header, then 7 slots */
VirtualFunction const vt_8c26619c[9] = {
    0,
    0,
    destroy_object_8c0b8c24,
    fn_8c0b8b90,
    operation_8c0b8c20,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0b8cac,
    operation_8c0ad9a8
};
