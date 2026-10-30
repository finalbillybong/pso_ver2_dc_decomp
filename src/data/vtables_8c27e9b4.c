/* Static data 8c27e9b4-8c27e9d0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c250714(void);
extern void operation_8c25076c(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27e9b4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27e9b4[7] = {
    0,
    0,
    destroy_context_8c250714,
    operation_8c25076c,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
