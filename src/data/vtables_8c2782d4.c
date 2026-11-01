/* Static data 8c2782d4-8c2782f4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowMessageQuest_dtor_8c2177f0(void);
extern void TWindowMessage_update_8c119598(void);
extern void TWindowMessageQuest_render_8c217834(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);

/* 8c2782d4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2782d4[8] = {
    0,
    0,
    TWindowMessageQuest_dtor_8c2177f0,
    TWindowMessage_update_8c119598,
    TWindowMessageQuest_render_8c217834,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
