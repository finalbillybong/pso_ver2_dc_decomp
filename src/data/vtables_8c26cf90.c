/* Static data 8c26cf90-8c26cfac: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjFogCollision_Manager_dtor_8c13735c(void);
extern void TObjFogCollision_Manager_update_8c1373c0(void);
extern void TObjFogCollision_Manager_render_8c13745c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26cf90: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjFogCollision_Manager_vtable_8c26cf90[7] = {
    0,
    0,
    TObjFogCollision_Manager_dtor_8c13735c,
    TObjFogCollision_Manager_update_8c1373c0,
    TObjFogCollision_Manager_render_8c13745c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
