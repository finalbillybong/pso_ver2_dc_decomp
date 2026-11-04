/* Static data 8c278b68-8c278bbc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSetLevelUp_dtor_8c226938(void);
extern void TWindowSetLevelUp_update_8c22697c(void);
extern void TWindowSetLevelUp_render_8c2269a4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TWindowOptionCtrl_dtor_8c226c94(void);
extern void TWindowOptionCtrl_update_8c226d28(void);
extern void TWindowOptionCtrl_render_8c2270a8(void);
extern void TAdDrawLineCtrl_dtor_8c227c14(void);
extern void TAdDrawLineCtrl_update_8c227c68(void);
extern void TAdDrawLineCtrl_render_8c227c8c(void);

/* 8c278b68: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowSetLevelUp_vtable_8c278b68[7] = {
    0,
    0,
    TWindowSetLevelUp_dtor_8c226938,
    TWindowSetLevelUp_update_8c22697c,
    TWindowSetLevelUp_render_8c2269a4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278b84: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowOptionCtrl_vtable_8c278b84[7] = {
    0,
    0,
    TWindowOptionCtrl_dtor_8c226c94,
    TWindowOptionCtrl_update_8c226d28,
    TWindowOptionCtrl_render_8c2270a8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278ba0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TAdDrawLineCtrl_vtable_8c278ba0[7] = {
    0,
    0,
    TAdDrawLineCtrl_dtor_8c227c14,
    TAdDrawLineCtrl_update_8c227c68,
    TAdDrawLineCtrl_render_8c227c8c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
