/* Static data 8c263e00-8c263e38: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TBoss1DragonEffBreath_dtor_8c078a5c(void);
extern void TBoss1DragonEffBreath_update_8c078ab0(void);
extern void TBoss1DragonEffBreath_render_8c078b0c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjBoss1Floor_dtor_8c078ba4(void);
extern void TObjBoss1Floor_update_8c078c14(void);
extern void TObjBoss1Floor_render_8c078cd8(void);

/* 8c263e00: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss1DragonEffBreath_vtable_8c263e00[7] = {
    0,
    0,
    TBoss1DragonEffBreath_dtor_8c078a5c,
    TBoss1DragonEffBreath_update_8c078ab0,
    TBoss1DragonEffBreath_render_8c078b0c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c263e1c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjBoss1Floor_vtable_8c263e1c[7] = {
    0,
    0,
    TObjBoss1Floor_dtor_8c078ba4,
    TObjBoss1Floor_update_8c078c14,
    TObjBoss1Floor_render_8c078cd8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
