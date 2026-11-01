/* Static data 8c265ad4-8c265af0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TCameraCtrl_dtor_8c0a1784(void);
extern void TCameraCtrl_update_8c0a1694(void);
extern void TObject_render_default_8c0111c8(void);
extern void TCameraCtrl_render_shadow_8c0a1780(void);
extern void hierarchy_output(void);

/* 8c265ad4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c265ad4[7] = {
    0,
    0,
    TCameraCtrl_dtor_8c0a1784,
    TCameraCtrl_update_8c0a1694,
    TObject_render_default_8c0111c8,
    TCameraCtrl_render_shadow_8c0a1780,
    hierarchy_output
};
