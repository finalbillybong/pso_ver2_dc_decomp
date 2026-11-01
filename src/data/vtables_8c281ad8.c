/* Static data 8c281ad8-8c281b10: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjResultWin_dtor_8c2591fc(void);
extern void TObjResultWin_update_8c259240(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemDropSub_dtor_8c259674(void);
extern void TObject_update_default_8c0111c4(void);

/* 8c281ad8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281ad8[7] = {
    0,
    0,
    TObjResultWin_dtor_8c2591fc,
    TObjResultWin_update_8c259240,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c281af4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281af4[7] = {
    0,
    0,
    TItemDropSub_dtor_8c259674,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
