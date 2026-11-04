/* Static data 8c277fb8-8c278090: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_field_8c1f1460(void);
extern void set_base_blend_period(void);
extern void clear_base_blend(void);
extern void reset_base_blend(void);
extern void decrease_base_blend(void);
extern void increase_base_blend(void);
extern void operation_8c1f149c(void);
extern void operation_8c1f1508(void);
extern void base_blend_above_minimum(void);
extern void operation_8c1f169c(void);
extern void operation_8c1f1700(void);
extern void operation_8c1f184c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TWindowComCard_dtor_8c1f19e8(void);
extern void TWindowComCard_update_8c1f1a2c(void);
extern void TWindowComCard_render_8c1f1a5c(void);
extern void operation_8c0dc63c(void);
extern void TItemMagGrowEff_dtor_8c1f2b08(void);
extern void TItemMagGrowEff_update_8c1f2b6c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TItemMagSub_dtor_8c1f1e94(void);
extern void TItemMagSub_update_8c1f1ed8(void);
extern void TItemMagSub_render_8c1f2354(void);
extern void destroy_object_8c206e5c(void);
extern void operation_8c206ea0(void);
extern void TBoss3VoloptCtrl_dtor_8c206c7c(void);
extern void TBoss3VoloptCtrl_update_8c206cc0(void);

/* 8c277fb8: type-information and this-adjustment header, then 9 slots */
VirtualFunction const vt_8c277fb8[11] = {
    0,
    0,
    destroy_field_8c1f1460,
    set_base_blend_period,
    clear_base_blend,
    reset_base_blend,
    decrease_base_blend,
    increase_base_blend,
    operation_8c1f149c,
    operation_8c1f1508,
    base_blend_above_minimum
};

/* 8c277fe4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277fe4[7] = {
    0,
    0,
    operation_8c1f169c,
    operation_8c1f1700,
    operation_8c1f184c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278000: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowComCard_vtable_8c278000[8] = {
    0,
    0,
    TWindowComCard_dtor_8c1f19e8,
    TWindowComCard_update_8c1f1a2c,
    TWindowComCard_render_8c1f1a5c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278020: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemMagGrowEff_vtable_8c278020[7] = {
    0,
    0,
    TItemMagGrowEff_dtor_8c1f2b08,
    TItemMagGrowEff_update_8c1f2b6c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27803c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemMagSub_vtable_8c27803c[7] = {
    0,
    0,
    TItemMagSub_dtor_8c1f1e94,
    TItemMagSub_update_8c1f1ed8,
    TItemMagSub_render_8c1f2354,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278058: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278058[7] = {
    0,
    0,
    destroy_object_8c206e5c,
    operation_8c206ea0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278074: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss3VoloptCtrl_vtable_8c278074[7] = {
    0,
    0,
    TBoss3VoloptCtrl_dtor_8c206c7c,
    TBoss3VoloptCtrl_update_8c206cc0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
