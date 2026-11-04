/* Static data 8c27cee4-8c27cf00: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TEffStarLight2D_dtor_8c245e18(void);
extern void TEffStarLight2D_update_8c245e5c(void);
extern void TEffStarLight2D_render_8c245f68(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c27cee4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TEffStarLight2D_vtable_8c27cee4[7] = {
    0,
    0,
    TEffStarLight2D_dtor_8c245e18,
    TEffStarLight2D_update_8c245e5c,
    TEffStarLight2D_render_8c245f68,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
