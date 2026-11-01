/* Static data 8c278090-8c2780b0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubComCardList_dtor_8c206fd0(void);
extern void TWindowSubComCardList_update_8c207028(void);
extern void TWindowSubComCardList_render_8c20706c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c278090: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278090[8] = {
    0,
    0,
    TWindowSubComCardList_dtor_8c206fd0,
    TWindowSubComCardList_update_8c207028,
    TWindowSubComCardList_render_8c20706c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
