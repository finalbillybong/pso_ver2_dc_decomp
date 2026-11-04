/* Static data 8c2767e0-8c276838: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TAdLoadQuest_dtor_8c1c7288(void);
extern void TAdLoadQuest_update_8c1c72f4(void);
extern void TAdLoadQuest_render_8c1c72f8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemEffShield_dtor_8c1c7464(void);
extern void TItemEffShield_update_8c1c7350(void);
extern void TObject_render_default_8c0111c8(void);
extern void TWindowQuantity_dtor_8c1ca148(void);
extern void TWindowQuantity_update_8c1ca18c(void);
extern void TWindowQuantity_render_8c1ca1b0(void);
extern void operation_8c0dc63c(void);

/* 8c2767e0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TAdLoadQuest_vtable_8c2767e0[7] = {
    0,
    0,
    TAdLoadQuest_dtor_8c1c7288,
    TAdLoadQuest_update_8c1c72f4,
    TAdLoadQuest_render_8c1c72f8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2767fc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TItemEffShield_vtable_8c2767fc[7] = {
    0,
    0,
    TItemEffShield_dtor_8c1c7464,
    TItemEffShield_update_8c1c7350,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c276818: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowQuantity_vtable_8c276818[8] = {
    0,
    0,
    TWindowQuantity_dtor_8c1ca148,
    TWindowQuantity_update_8c1ca18c,
    TWindowQuantity_render_8c1ca1b0,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
