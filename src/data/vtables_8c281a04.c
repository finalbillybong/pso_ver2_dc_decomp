/* Static data 8c281a04-8c281a3c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemMenuCtrl_dtor_8c257f00(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TODummyKeyCave01Sound_dtor_8c258728(void);
extern void TODummyKeyCave01Sound_update_8c25876c(void);

/* 8c281a04: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281a04[7] = {
    0,
    0,
    TItemMenuCtrl_dtor_8c257f00,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c281a20: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281a20[7] = {
    0,
    0,
    TODummyKeyCave01Sound_dtor_8c258728,
    TODummyKeyCave01Sound_update_8c25876c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
