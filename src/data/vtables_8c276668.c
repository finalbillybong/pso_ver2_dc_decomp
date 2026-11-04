/* Static data 8c276668-8c276684: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffFlame_dtor_8c1c5b40(void);
extern void TItemEffFlame_update_8c1c5b90(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276668: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemEffFlame_vtable_8c276668[7] = {
    0,
    0,
    TItemEffFlame_dtor_8c1c5b40,
    TItemEffFlame_update_8c1c5b90,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
