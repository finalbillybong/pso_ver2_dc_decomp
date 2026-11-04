/* Static data 8c26e124-8c26e140: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjBoss2Tunnel_dtor_8c14ba44(void);
extern void TObjBoss2Tunnel_update_8c14bc04(void);
extern void TObjBoss2Tunnel_render_8c14c6ec(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26e124: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjBoss2Tunnel_vtable_8c26e124[7] = {
    0,
    0,
    TObjBoss2Tunnel_dtor_8c14ba44,
    TObjBoss2Tunnel_update_8c14bc04,
    TObjBoss2Tunnel_render_8c14c6ec,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
