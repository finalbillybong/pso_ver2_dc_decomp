/* Static data 8c265af0-8c265b34: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_view_effect(void);
extern void update_view_effect(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c0a2fc8(void);
extern void fn_8c0a36f8(void);
extern void deactivate_view_effect(void);
extern void destroy_effect_a4910(void);
extern void fn_8c0a4964(void);

/* 8c265af0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c265af0[10] = {
    0,
    0,
    destroy_view_effect,
    update_view_effect,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    fn_8c0a2fc8,
    fn_8c0a36f8,
    deactivate_view_effect
};

/* 8c265b18: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265b18[7] = {
    0,
    0,
    destroy_effect_a4910,
    fn_8c0a4964,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};
