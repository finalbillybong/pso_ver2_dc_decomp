/* Static data 8c272058-8c272134: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjBoss2RaftSplash_dtor_8c185990(void);
extern void TObjBoss2RaftSplash_update_8c1859d4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c185dd0(void);
extern void operation_8c185e90(void);
extern void TBoss2LaserLight_dtor_8c185b8c(void);
extern void TBoss2LaserLight_update_8c185c08(void);
extern void TBoss2LaserLight_render_8c185d2c(void);
extern void destroy_object_8c186a34(void);
extern void operation_8c186a78(void);
extern void TSetEvtScriptTest_dtor_8c187104(void);
extern void TSetEvtScriptTest_update_8c187188(void);
extern void TSetEvtScriptTest_v05_8c187148(void);
extern void TEditor_v06_8c03cea8(void);
extern void TSetEvtScriptTest_v07_8c187168(void);
extern void TSetEvtDestroy_dtor_8c187520(void);
extern void TSetEvtDestroy_update_8c187584(void);
extern void TJudgmentSequence_dtor_8c187cf0(void);
extern void operation_8c1067d0(void);
extern void TJudgmentSequence_v05_8c187d74(void);
extern void TJudgmentSequence_v06_8c187dec(void);
extern void TShopSequence_v07_8c10664c(void);

/* 8c272058: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjBoss2RaftSplash_vtable_8c272058[7] = {
    0,
    0,
    TObjBoss2RaftSplash_dtor_8c185990,
    TObjBoss2RaftSplash_update_8c1859d4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c272074: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272074[7] = {
    0,
    0,
    operation_8c185dd0,
    operation_8c185e90,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c272090: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss2LaserLight_vtable_8c272090[7] = {
    0,
    0,
    TBoss2LaserLight_dtor_8c185b8c,
    TBoss2LaserLight_update_8c185c08,
    TBoss2LaserLight_render_8c185d2c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2720ac: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2720ac[7] = {
    0,
    0,
    destroy_object_8c186a34,
    operation_8c186a78,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2720c8: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TSetEvtScriptTest_vtable_8c2720c8[10] = {
    0,
    0,
    TSetEvtScriptTest_dtor_8c187104,
    TSetEvtScriptTest_update_8c187188,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TSetEvtScriptTest_v05_8c187148,
    TEditor_v06_8c03cea8,
    TSetEvtScriptTest_v07_8c187168
};

/* 8c2720f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TSetEvtDestroy_vtable_8c2720f0[7] = {
    0,
    0,
    TSetEvtDestroy_dtor_8c187520,
    TSetEvtDestroy_update_8c187584,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27210c: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TJudgmentSequence_vtable_8c27210c[10] = {
    0,
    0,
    TJudgmentSequence_dtor_8c187cf0,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TJudgmentSequence_v05_8c187d74,
    TJudgmentSequence_v06_8c187dec,
    TShopSequence_v07_8c10664c
};
