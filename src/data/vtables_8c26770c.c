/* Static data 8c26770c-8c267748: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_context_8c0db244(void);
extern void operation_8c0db29c(void);
extern void finalize_view_8c0db2cc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TWindowCtrl_dtor_8c0dcc10(void);
extern void TWindowCtrl_update_8c0dcdd8(void);
extern void TWindowCtrl_render_8c0dcdf8(void);

/* 8c26770c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c26770c[8] = {
    0,
    0,
    destroy_context_8c0db244,
    operation_8c0db29c,
    finalize_view_8c0db2cc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c26772c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowCtrl_vtable_8c26772c[7] = {
    0,
    0,
    TWindowCtrl_dtor_8c0dcc10,
    TWindowCtrl_update_8c0dcdd8,
    TWindowCtrl_render_8c0dcdf8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
