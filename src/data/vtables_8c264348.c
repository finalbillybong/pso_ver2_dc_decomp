/* Static data 8c264348-8c264364: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjRainCtrl_dtor_8c080280(void);
extern void TObjRainCtrl_update_8c0802c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c264348: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjRainCtrl_vtable_8c264348[7] = {
    0,
    0,
    TObjRainCtrl_dtor_8c080280,
    TObjRainCtrl_update_8c0802c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
