/* Static data 8c265b34-8c265b50: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c0a47dc(void);
extern void operation_8c0a4828(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265b34: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265b34[7] = {
    0,
    0,
    destroy_context_8c0a47dc,
    operation_8c0a4828,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
