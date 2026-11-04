/* Static data 8c2614f4-8c2615d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_color_rise_8c033094(void);
extern void operation_8c032f1c(void);
extern void operation_8c032f50(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void destroy_object_8c032e38(void);
extern void TObject_update_default_8c0111c4(void);
extern void operation_8c032dd4(void);
extern void destroy_hierarchy_values(void);
extern void report_hierarchy_values(void);
extern void destroy_hierarchy_array(void);
extern void submit_hierarchy_array(void);
extern void destroy_hierarchy_root(void);
extern void time_hierarchy_update(void);
extern void time_hierarchy_visit(void);
extern void hierarchy_output_cycle(void);
extern void TObject_dtor_8c03311c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TCharaMaking_dtor_8c034868(void);
extern void TCharaMaking_update_8c03496c(void);
extern void TGameProtocol_dtor_8c036a7c(void);
extern void TGameProtocol_update_8c036ac8(void);

/* 8c2614f4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2614f4[7] = {
    0,
    0,
    destroy_color_rise_8c033094,
    operation_8c032f1c,
    operation_8c032f50,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261510: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261510[7] = {
    0,
    0,
    destroy_object_8c032e38,
    TObject_update_default_8c0111c4,
    operation_8c032dd4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26152c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26152c[7] = {
    0,
    0,
    destroy_hierarchy_values,
    TObject_update_default_8c0111c4,
    report_hierarchy_values,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261548: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261548[7] = {
    0,
    0,
    destroy_hierarchy_array,
    TObject_update_default_8c0111c4,
    submit_hierarchy_array,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c261564: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c261564[7] = {
    0,
    0,
    destroy_hierarchy_root,
    time_hierarchy_update,
    time_hierarchy_visit,
    hierarchy_output_cycle,
    hierarchy_output
};

/* 8c261580: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObject_vtable_8c261580[7] = {
    0,
    0,
    TObject_dtor_8c03311c,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26159c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TCharaMaking_vtable_8c26159c[7] = {
    0,
    0,
    TCharaMaking_dtor_8c034868,
    TCharaMaking_update_8c03496c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2615b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TGameProtocol_vtable_8c2615b8[7] = {
    0,
    0,
    TGameProtocol_dtor_8c036a7c,
    TGameProtocol_update_8c036ac8,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
