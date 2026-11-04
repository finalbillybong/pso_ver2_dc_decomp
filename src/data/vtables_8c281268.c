/* Static data 8c281268-8c281284: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemEffArmorParticle_dtor_8c2557ec(void);
extern void TItemEffArmorParticle_update_8c25583c(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281268: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemEffArmorParticle_vtable_8c281268[7] = {
    0,
    0,
    TItemEffArmorParticle_dtor_8c2557ec,
    TItemEffArmorParticle_update_8c25583c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
