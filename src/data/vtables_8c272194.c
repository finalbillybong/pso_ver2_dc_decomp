/* Static data 8c272194-8c272228: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TShopItemListWindow_dtor_8c1885a0(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TShopItemListWindow_v05_8c188640(void);
extern void TShopArmorListWindow_dtor_8c188f84(void);
extern void TShopArmorListWindow_v05_8c18900c(void);
extern void TNowLoading_dtor_8c189af8(void);
extern void TNowLoading_update_8c189b7c(void);
extern void TNowLoading_render_8c189c90(void);
extern void TLoadCtrl_dtor_8c189ef8(void);
extern void TLoadCtrl_update_8c189f3c(void);
extern void TLoadCtrl_render_8c189f64(void);
extern void TLoadingCur_dtor_8c18a09c(void);
extern void TLoadingCur_update_8c18a0f0(void);
extern void TLoadingCur_render_8c18a32c(void);

/* 8c272194: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TShopItemListWindow_vtable_8c272194[8] = {
    0,
    0,
    TShopItemListWindow_dtor_8c1885a0,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopItemListWindow_v05_8c188640
};

/* 8c2721b4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TShopArmorListWindow_vtable_8c2721b4[8] = {
    0,
    0,
    TShopArmorListWindow_dtor_8c188f84,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopArmorListWindow_v05_8c18900c
};

/* 8c2721d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TNowLoading_vtable_8c2721d4[7] = {
    0,
    0,
    TNowLoading_dtor_8c189af8,
    TNowLoading_update_8c189b7c,
    TNowLoading_render_8c189c90,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2721f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TLoadCtrl_vtable_8c2721f0[7] = {
    0,
    0,
    TLoadCtrl_dtor_8c189ef8,
    TLoadCtrl_update_8c189f3c,
    TLoadCtrl_render_8c189f64,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27220c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TLoadingCur_vtable_8c27220c[7] = {
    0,
    0,
    TLoadingCur_dtor_8c18a09c,
    TLoadingCur_update_8c18a0f0,
    TLoadingCur_render_8c18a32c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
