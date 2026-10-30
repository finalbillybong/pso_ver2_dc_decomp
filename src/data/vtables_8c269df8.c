/* Static data 8c269df8-8c269e94: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c114790(void);
extern void operation_8c114814(void);
extern void operation_8c114828(void);
extern void operation_8c11484c(void);
extern void operation_8c114870(void);
extern void operation_8c1148c8(void);
extern void operation_8c114924(void);
extern void restore_base_blend(void);
extern void operation_8c114964(void);
extern void destroy_field_8c11499c(void);
extern void set_base_blend_period(void);
extern void clear_base_blend(void);
extern void reset_base_blend(void);
extern void decrease_base_blend(void);
extern void increase_base_blend(void);
extern void apply_base_blend(void);
extern void base_blend_above_minimum(void);
extern void destroy_paired_array_owner(void);
extern void paired_array_idle_callback(void);
extern void operation_8c0111c8(void);
extern void operation_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_scene_control_owner(void);
extern void operation_8c03ceac(void);
extern void operation_8c1162b8(void);
extern void operation_8c1160a0(void);
extern void operation_8c116328(void);

/* 8c269df8: type-information and this-adjustment header, then 9 slots */
VirtualFunction const vt_8c269df8[11] = {
    0,
    0,
    destroy_field_8c114790,
    operation_8c114814,
    operation_8c114828,
    operation_8c11484c,
    operation_8c114870,
    operation_8c1148c8,
    operation_8c114924,
    restore_base_blend,
    operation_8c114964
};

/* 8c269e24: type-information and this-adjustment header, then 9 slots */
VirtualFunction const vt_8c269e24[11] = {
    0,
    0,
    destroy_field_8c11499c,
    set_base_blend_period,
    clear_base_blend,
    reset_base_blend,
    decrease_base_blend,
    increase_base_blend,
    apply_base_blend,
    restore_base_blend,
    base_blend_above_minimum
};

/* 8c269e50: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269e50[7] = {
    0,
    0,
    destroy_paired_array_owner,
    paired_array_idle_callback,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output
};

/* 8c269e6c: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c269e6c[10] = {
    0,
    0,
    destroy_scene_control_owner,
    operation_8c03ceac,
    operation_8c0111c8,
    operation_8c0111cc,
    hierarchy_output,
    operation_8c1162b8,
    operation_8c1160a0,
    operation_8c116328
};
