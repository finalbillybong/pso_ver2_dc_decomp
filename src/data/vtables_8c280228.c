/* Static data 8c280228-8c280260: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjNewFloorWin_dtor_8c2531a8(void);
extern void TObjNewFloorWin_update_8c2531ec(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjCHTimeWin_dtor_8c2533c4(void);
extern void TObjCHTimeWin_update_8c253408(void);

/* 8c280228: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c280228[7] = {
    0,
    0,
    TObjNewFloorWin_dtor_8c2531a8,
    TObjNewFloorWin_update_8c2531ec,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c280244: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c280244[7] = {
    0,
    0,
    TObjCHTimeWin_dtor_8c2533c4,
    TObjCHTimeWin_update_8c253408,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
