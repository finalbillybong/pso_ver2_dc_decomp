/* Static data 8c27e47c-8c27e49c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowDuelResult_dtor_8c24e0f0(void);
extern void TWindowDuelResult_update_8c24e144(void);
extern void TWindowDuelResult_render_8c24e1a4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c27e47c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27e47c[8] = {
    0,
    0,
    TWindowDuelResult_dtor_8c24e0f0,
    TWindowDuelResult_update_8c24e144,
    TWindowDuelResult_render_8c24e1a4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
