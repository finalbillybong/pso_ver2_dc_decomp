/* Static data 8c277434-8c277474: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowKeyBoardSoft_dtor_8c1de194(void);
extern void TWindowKeyBoardSoft_update_8c1de1d8(void);
extern void TWindowKeyBoardSoft_render_8c1de234(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TWindowKeyBoardHard_dtor_8c1dfda0(void);
extern void TWindowKeyBoardHard_update_8c1dfde4(void);
extern void TWindowKeyBoardHard_render_8c1dfe9c(void);

/* 8c277434: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowKeyBoardSoft_vtable_8c277434[8] = {
    0,
    0,
    TWindowKeyBoardSoft_dtor_8c1de194,
    TWindowKeyBoardSoft_update_8c1de1d8,
    TWindowKeyBoardSoft_render_8c1de234,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c277454: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowKeyBoardHard_vtable_8c277454[8] = {
    0,
    0,
    TWindowKeyBoardHard_dtor_8c1dfda0,
    TWindowKeyBoardHard_update_8c1dfde4,
    TWindowKeyBoardHard_render_8c1dfe9c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
