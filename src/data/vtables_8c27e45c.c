/* Static data 8c27e45c-8c27e47c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowChallengeResult_dtor_8c24dfdc(void);
extern void TWindowChallengeResult_update_8c24e020(void);
extern void TWindowChallengeResult_render_8c24e044(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c27e45c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27e45c[8] = {
    0,
    0,
    TWindowChallengeResult_dtor_8c24dfdc,
    TWindowChallengeResult_update_8c24e020,
    TWindowChallengeResult_render_8c24e044,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
