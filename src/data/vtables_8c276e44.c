/* Static data 8c276e44-8c276e84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubEquipList_dtor_8c1d4cdc(void);
extern void TWindowSubEquipList_update_8c1d4d20(void);
extern void TWindowSubEquipList_render_8c1d4d2c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void fn_8c1192e8(void);
extern void TWindowSubEquipKind_dtor_8c1d4fe8(void);
extern void TWindowSubEquipKind_update_8c1d502c(void);
extern void TWindowSubEquipKind_render_8c1d5038(void);

/* 8c276e44: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubEquipList_vtable_8c276e44[8] = {
    0,
    0,
    TWindowSubEquipList_dtor_8c1d4cdc,
    TWindowSubEquipList_update_8c1d4d20,
    TWindowSubEquipList_render_8c1d4d2c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c276e64: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubEquipKind_vtable_8c276e64[8] = {
    0,
    0,
    TWindowSubEquipKind_dtor_8c1d4fe8,
    TWindowSubEquipKind_update_8c1d502c,
    TWindowSubEquipKind_render_8c1d5038,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
