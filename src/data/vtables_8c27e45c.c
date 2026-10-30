/* Static data 8c27e45c-8c27e47c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c24dfdc(void);
extern void operation_8c24e020(void);
extern void finalize_view_8c24e044(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c27e45c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27e45c[8] = {
    0,
    0,
    destroy_object_8c24dfdc,
    operation_8c24e020,
    finalize_view_8c24e044,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
