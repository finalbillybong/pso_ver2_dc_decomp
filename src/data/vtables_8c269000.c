/* Static data 8c269000-8c26902c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c0fbfa4(void);
extern void operation_8c0fc068(void);
extern void operation_8c0fc07c(void);
extern void operation_8c0fc0a0(void);
extern void operation_8c0fc120(void);
extern void operation_8c0fc158(void);
extern void apply_context_blend_8c0fc194(void);
extern void restore_base_blend(void);
extern void operation_8c0fc1b8(void);

/* 8c269000: type-information and this-adjustment header, then 9 slots */
VirtualFunction const vt_8c269000[11] = {
    0,
    0,
    destroy_field_8c0fbfa4,
    operation_8c0fc068,
    operation_8c0fc07c,
    operation_8c0fc0a0,
    operation_8c0fc120,
    operation_8c0fc158,
    apply_context_blend_8c0fc194,
    restore_base_blend,
    operation_8c0fc1b8
};
