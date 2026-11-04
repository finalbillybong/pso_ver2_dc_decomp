/* Static data 8c26308c-8c2630a8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffectWeapon_dtor_8c077370(void);
extern void TItemEffectWeapon_update_8c077778(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26308c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemEffectWeapon_vtable_8c26308c[7] = {
    0,
    0,
    TItemEffectWeapon_dtor_8c077370,
    TItemEffectWeapon_update_8c077778,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
