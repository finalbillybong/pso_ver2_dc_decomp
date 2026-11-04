/* Static data 8c2728f8-8c272930: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubGameEnd_dtor_8c1987d8(void);
extern void TWindowSubGameEnd_update_8c198840(void);
extern void TWindowSubGameEnd_render_8c1988f4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TBoss1DragonColli_dtor_8c198c04(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);

/* 8c2728f8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowSubGameEnd_vtable_8c2728f8[7] = {
    0,
    0,
    TWindowSubGameEnd_dtor_8c1987d8,
    TWindowSubGameEnd_update_8c198840,
    TWindowSubGameEnd_render_8c1988f4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c272914: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss1DragonColli_vtable_8c272914[7] = {
    0,
    0,
    TBoss1DragonColli_dtor_8c198c04,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
