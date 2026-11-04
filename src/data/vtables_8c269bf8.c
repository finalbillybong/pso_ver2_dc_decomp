/* Static data 8c269bf8-8c269c48: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TShopEquipmentGearSequence_dtor_8c1124e0(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TShopEquipmentGearSequence_v05_8c112574(void);
extern void TShopSequence_v06_8c1065dc(void);
extern void TShopSequence_v07_8c10664c(void);
extern void TShopItemTecSequence_dtor_8c1129d8(void);
extern void TShopItemTecSequence_v05_8c112a6c(void);

/* 8c269bf8: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TShopEquipmentGearSequence_vtable_8c269bf8[10] = {
    0,
    0,
    TShopEquipmentGearSequence_dtor_8c1124e0,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopEquipmentGearSequence_v05_8c112574,
    TShopSequence_v06_8c1065dc,
    TShopSequence_v07_8c10664c
};

/* 8c269c20: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TShopItemTecSequence_vtable_8c269c20[10] = {
    0,
    0,
    TShopItemTecSequence_dtor_8c1129d8,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TShopItemTecSequence_v05_8c112a6c,
    TShopSequence_v06_8c1065dc,
    TShopSequence_v07_8c10664c
};
