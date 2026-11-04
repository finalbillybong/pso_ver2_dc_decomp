/* Static data 8c274c00-8c274c38: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c1b08ac(void);
extern void fn_8c1b08f0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TBoss4Zanzo_dtor_8c1b3158(void);
extern void TBoss4Zanzo_update_8c1b319c(void);
extern void TBoss4Zanzo_render_8c1b31bc(void);

/* 8c274c00: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c274c00[7] = {
    0,
    0,
    destroy_object_8c1b08ac,
    fn_8c1b08f0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c274c1c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss4Zanzo_vtable_8c274c1c[7] = {
    0,
    0,
    TBoss4Zanzo_dtor_8c1b3158,
    TBoss4Zanzo_update_8c1b319c,
    TBoss4Zanzo_render_8c1b31bc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
