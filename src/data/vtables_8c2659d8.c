/* Static data 8c2659d8-8c265a2c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TEffect_dtor_8c0a0104(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TEffGuard_dtor_8c0a0578(void);
extern void TEffGuard_update_8c0a05bc(void);
extern void TEffHit_dtor_8c0a0698(void);
extern void TEffHit_update_8c0a06dc(void);

/* 8c2659d8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEffect_vtable_8c2659d8[7] = {
    0,
    0,
    TEffect_dtor_8c0a0104,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2659f4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEffGuard_vtable_8c2659f4[7] = {
    0,
    0,
    TEffGuard_dtor_8c0a0578,
    TEffGuard_update_8c0a05bc,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c265a10: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEffHit_vtable_8c265a10[7] = {
    0,
    0,
    TEffHit_dtor_8c0a0698,
    TEffHit_update_8c0a06dc,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
