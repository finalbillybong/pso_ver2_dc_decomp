/* Static data 8c272848-8c272884: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubStatusDisp_dtor_8c194098(void);
extern void TWindowSubStatusDisp_update_8c1940ec(void);
extern void TWindowSubStatusDisp_render_8c194158(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TObjBGLifeGame_dtor_8c196d84(void);
extern void TObjBGLifeGame_update_8c1971cc(void);
extern void TObjBGLifeGame_render_8c197298(void);

/* 8c272848: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c272848[8] = {
    0,
    0,
    TWindowSubStatusDisp_dtor_8c194098,
    TWindowSubStatusDisp_update_8c1940ec,
    TWindowSubStatusDisp_render_8c194158,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c272868: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272868[7] = {
    0,
    0,
    TObjBGLifeGame_dtor_8c196d84,
    TObjBGLifeGame_update_8c1971cc,
    TObjBGLifeGame_render_8c197298,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
