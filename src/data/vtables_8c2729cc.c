/* Static data 8c2729cc-8c272a44: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void operation_8c19b344(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c19b3ec(void);
extern void operation_8c19c22c(void);
extern void operation_8c19c2d4(void);
extern void destroy_object_8c19cf34(void);
extern void TObject_update_default_8c0111c4(void);
extern void TQuestColCtrl_dtor_8c19de38(void);
extern void TQuestColCtrl_update_8c19de9c(void);
extern void TQuestColCtrl_render_shadow_8c19dec4(void);

/* 8c2729cc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2729cc[8] = {
    0,
    0,
    operation_8c19b344,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c19b3ec
};

/* 8c2729ec: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2729ec[8] = {
    0,
    0,
    operation_8c19c22c,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c19c2d4
};

/* 8c272a0c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272a0c[7] = {
    0,
    0,
    destroy_object_8c19cf34,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c272a28: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272a28[7] = {
    0,
    0,
    TQuestColCtrl_dtor_8c19de38,
    TQuestColCtrl_update_8c19de9c,
    TObject_render_default_8c0111c8,
    TQuestColCtrl_render_shadow_8c19dec4,
    hierarchy_output
};
