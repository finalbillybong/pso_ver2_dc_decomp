/* Static data 8c265c94-8c265cd8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_effect(void);
extern void update_effect(void);
extern void operation_8c0111c8(void);
extern void operation_8c0a7db4(void);
extern void hierarchy_output(void);
extern void destroy_effect_manager(void);
extern void operation_8c03ceac(void);
extern void effect_noop_9654(void);
extern void start_effect_manager(void);
extern void update_effect_manager(void);
extern void stop_effect_manager(void);

/* 8c265c94: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265c94[7] = {
    0,
    0,
    destroy_effect,
    update_effect,
    operation_8c0111c8,
    operation_8c0a7db4,
    hierarchy_output
};

/* 8c265cb0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c265cb0[10] = {
    0,
    0,
    destroy_effect_manager,
    operation_8c03ceac,
    operation_8c0111c8,
    effect_noop_9654,
    hierarchy_output,
    start_effect_manager,
    update_effect_manager,
    stop_effect_manager
};
