/* Static data 8c266114-8c266138: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecPlayerInfluence_dtor_8c0b6c78(void);
extern void TTecPlayerInfluence_update_8c0b6cd4(void);
extern void TTecPlayerInfluence_render_8c0b6d30(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecPlayerInfluence_v05_8c0b6d08(void);
extern void TTecPlayerInfluence_v06_8c0b6e08(void);

/* 8c266114: type-information and this-adjustment header, then 7 slots */
VirtualFunction const TTecPlayerInfluence_vtable_8c266114[9] = {
    0,
    0,
    TTecPlayerInfluence_dtor_8c0b6c78,
    TTecPlayerInfluence_update_8c0b6cd4,
    TTecPlayerInfluence_render_8c0b6d30,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecPlayerInfluence_v05_8c0b6d08,
    TTecPlayerInfluence_v06_8c0b6e08
};
