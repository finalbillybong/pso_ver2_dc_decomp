/* Static data 8c2788b8-8c2788f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c2207f8(void);
extern void refresh_follow_effect_8c22083c(void);
extern void operation_8c22085c(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_text_context_effect(void);
extern void update_text_context_effect(void);
extern void operation_8c0111c8(void);

/* 8c2788b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2788b8[7] = {
    0,
    0,
    destroy_object_8c2207f8,
    refresh_follow_effect_8c22083c,
    operation_8c22085c,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c2788d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2788d4[7] = {
    0,
    0,
    destroy_text_context_effect,
    update_text_context_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
