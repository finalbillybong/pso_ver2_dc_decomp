/* Static data 8c269778-8c269828: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TShopEquipmentListWindow_dtor_8c105654(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TShopEquipmentListWindow_v05_8c1056dc(void);
extern void TShopEquipmentSequence_dtor_8c1060b8(void);
extern void TShopEquipmentSequence_v05_8c106144(void);
extern void TShopSequence_v06_8c1065dc(void);
extern void TShopSequence_v07_8c10664c(void);
extern void TShopSequence_dtor_8c106598(void);
extern void TShopWindowBase_v05_8c1066e0(void);
extern void TShopWindowBase_dtor_8c10671c(void);
extern void TShopEquipmentSellWindow_dtor_8c1068dc(void);
extern void TShopEquipmentSellWindow_v05_8c10699c(void);

/* 8c269778: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TShopEquipmentListWindow_vtable_8c269778[8] = {
    0,
    0,
    TShopEquipmentListWindow_dtor_8c105654,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopEquipmentListWindow_v05_8c1056dc
};

/* 8c269798: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TShopEquipmentSequence_vtable_8c269798[10] = {
    0,
    0,
    TShopEquipmentSequence_dtor_8c1060b8,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopEquipmentSequence_v05_8c106144,
    TShopSequence_v06_8c1065dc,
    TShopSequence_v07_8c10664c
};

/* 8c2697c0: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TShopSequence_vtable_8c2697c0[10] = {
    0,
    0,
    TShopSequence_dtor_8c106598,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopWindowBase_v05_8c1066e0,
    TShopSequence_v06_8c1065dc,
    TShopSequence_v07_8c10664c
};

/* 8c2697e8: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TShopWindowBase_vtable_8c2697e8[8] = {
    0,
    0,
    TShopWindowBase_dtor_8c10671c,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopWindowBase_v05_8c1066e0
};

/* 8c269808: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TShopEquipmentSellWindow_vtable_8c269808[8] = {
    0,
    0,
    TShopEquipmentSellWindow_dtor_8c1068dc,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopEquipmentSellWindow_v05_8c10699c
};
