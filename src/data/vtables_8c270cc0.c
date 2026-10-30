/* Static data 8c270cc0-8c270cec: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c178048(void);
extern void set_base_blend_period(void);
extern void clear_base_blend(void);
extern void reset_base_blend(void);
extern void decrease_base_blend(void);
extern void increase_base_blend(void);
extern void apply_context_blend(void);
extern void restore_base_blend(void);
extern void base_blend_above_minimum(void);

/* 8c270cc0: type-information and this-adjustment header, then 9 slots */
VirtualFunction const vt_8c270cc0[11] = {
    0,
    0,
    destroy_field_8c178048,
    set_base_blend_period,
    clear_base_blend,
    reset_base_blend,
    decrease_base_blend,
    increase_base_blend,
    apply_context_blend,
    restore_base_blend,
    base_blend_above_minimum
};
