/* Static data 8c26412c-8c264148: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TBoss1DragonEffBullet_dtor_8c07be78(void);
extern void TBoss1DragonEffBullet_update_8c07bed4(void);
extern void TBoss1DragonEffBullet_render_8c07c02c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26412c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26412c[7] = {
    0,
    0,
    TBoss1DragonEffBullet_dtor_8c07be78,
    TBoss1DragonEffBullet_update_8c07bed4,
    TBoss1DragonEffBullet_render_8c07c02c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
