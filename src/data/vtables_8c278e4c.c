/* Static data 8c278e4c-8c278e84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c22c65c(void);
extern void operation_8c22c6a0(void);
extern void fn_8c22c6c8(void);
extern void operation_8c22c8d8(void);
extern void hierarchy_output(void);
extern void destroy_object_8c22c3b4(void);
extern void operation_8c22c3f8(void);
extern void fn_8c22c50c(void);
extern void operation_8c0111cc(void);

/* 8c278e4c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278e4c[7] = {
    0,
    0,
    destroy_object_8c22c65c,
    operation_8c22c6a0,
    fn_8c22c6c8,
    operation_8c22c8d8,
    hierarchy_output
};

/* 8c278e68: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278e68[7] = {
    0,
    0,
    destroy_object_8c22c3b4,
    operation_8c22c3f8,
    fn_8c22c50c,
    operation_8c0111cc,
    hierarchy_output
};
