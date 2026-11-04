/* Static data 8c26ff3c-8c26ff58: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TBoss2PhotonPad_dtor_8c167174(void);
extern void TBoss2PhotonPad_update_8c1671b8(void);
extern void TBoss2PhotonPad_render_8c167280(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26ff3c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TBoss2PhotonPad_vtable_8c26ff3c[7] = {
    0,
    0,
    TBoss2PhotonPad_dtor_8c167174,
    TBoss2PhotonPad_update_8c1671b8,
    TBoss2PhotonPad_render_8c167280,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
