/* Static data 8c261b58-8c261bf0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c03ca10(void);
extern void operation_8c03ceac(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c03ce9c(void);
extern void operation_8c03cea8(void);
extern void release_render_mode_four_8c03cedc(void);
extern void operation_03d174(void);
extern void operation_8c03d16c(void);
extern void operation_8c03d170(void);
extern void operation_8c03d280(void);
extern void operation_8c03d300(void);
extern void destroy_context_8c03f2e8(void);
extern void operation_8c03f334(void);
extern void operation_8c03f3d4(void);
extern void destroy_manager_storage(void);
extern void operation_8c0111c4(void);
extern void manager_empty_callback(void);

/* 8c261b58: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c261b58[10] = {
    0,
    0,
    destroy_object_8c03ca10,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c03ce9c,
    operation_8c03cea8,
    release_render_mode_four_8c03cedc
};

/* 8c261b80: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261b80[7] = {
    0,
    0,
    operation_03d174,
    operation_8c03d16c,
    operation_8c03d170,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261b9c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261b9c[7] = {
    0,
    0,
    operation_8c03d280,
    operation_8c03d300,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261bb8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261bb8[7] = {
    0,
    0,
    destroy_context_8c03f2e8,
    operation_8c03f334,
    operation_8c03f3d4,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c261bd4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261bd4[7] = {
    0,
    0,
    destroy_manager_storage,
    operation_8c0111c4,
    manager_empty_callback,
    operation_8c0111cc,
    hierarchy_output
};
