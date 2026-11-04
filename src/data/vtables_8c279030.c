/* Static data 8c279030-8c27904c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowShortListCtrl_dtor_8c234e04(void);
extern void TWindowShortListCtrl_update_8c234ed8(void);
extern void TWindowShortListCtrl_render_8c2354b4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c279030: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowShortListCtrl_vtable_8c279030[7] = {
    0,
    0,
    TWindowShortListCtrl_dtor_8c234e04,
    TWindowShortListCtrl_update_8c234ed8,
    TWindowShortListCtrl_render_8c2354b4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
