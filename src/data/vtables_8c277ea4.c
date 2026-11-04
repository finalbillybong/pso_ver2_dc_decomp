/* Static data 8c277ea4-8c277edc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowMakeTeam_dtor_8c1e51b8(void);
extern void TWindowMakeTeam_update_8c1e5240(void);
extern void TWindowMakeTeam_render_8c1e564c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c1e59c8(void);
extern void operation_8c1e5a2c(void);
extern void operation_8c1e5b74(void);

/* 8c277ea4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowMakeTeam_vtable_8c277ea4[7] = {
    0,
    0,
    TWindowMakeTeam_dtor_8c1e51b8,
    TWindowMakeTeam_update_8c1e5240,
    TWindowMakeTeam_render_8c1e564c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c277ec0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c277ec0[7] = {
    0,
    0,
    operation_8c1e59c8,
    operation_8c1e5a2c,
    operation_8c1e5b74,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
