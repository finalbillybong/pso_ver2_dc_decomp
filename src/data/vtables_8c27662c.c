/* Static data 8c27662c-8c276668: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffBringer_dtor_8c1c55e0(void);
extern void TItemShoot_vslot01_8c1abbcc(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemEffBringer_v05_8c1c5650(void);
extern void destroy_timed_owner_effect_8c1c56c0(void);
extern void operation_8c1c5710(void);

/* 8c27662c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TItemEffBringer_vtable_8c27662c[8] = {
    0,
    0,
    TItemEffBringer_dtor_8c1c55e0,
    TItemShoot_vslot01_8c1abbcc,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TItemEffBringer_v05_8c1c5650
};

/* 8c27664c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27664c[7] = {
    0,
    0,
    destroy_timed_owner_effect_8c1c56c0,
    operation_8c1c5710,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
