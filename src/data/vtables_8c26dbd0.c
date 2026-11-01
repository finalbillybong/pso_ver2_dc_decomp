/* Static data 8c26dbd0-8c26dc40: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjAfsLoad_dtor_8c1408e0(void);
extern void TObjAfsLoad_update_8c140970(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjCMLoadPlDataReq_dtor_8c140270(void);
extern void TObjCMLoadPlDataReq_update_8c1402bc(void);
extern void TObjCMLoadAfsTextureReq_dtor_8c13f930(void);
extern void TObjCMLoadAfsTextureReq_update_8c13fa54(void);
extern void TObjLoadGmPlNjReq_dtor_8c13f594(void);
extern void TObjLoadGmPlNjReq_update_8c13f614(void);

/* 8c26dbd0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dbd0[7] = {
    0,
    0,
    TObjAfsLoad_dtor_8c1408e0,
    TObjAfsLoad_update_8c140970,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26dbec: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dbec[7] = {
    0,
    0,
    TObjCMLoadPlDataReq_dtor_8c140270,
    TObjCMLoadPlDataReq_update_8c1402bc,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26dc08: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dc08[7] = {
    0,
    0,
    TObjCMLoadAfsTextureReq_dtor_8c13f930,
    TObjCMLoadAfsTextureReq_update_8c13fa54,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26dc24: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26dc24[7] = {
    0,
    0,
    TObjLoadGmPlNjReq_dtor_8c13f594,
    TObjLoadGmPlNjReq_update_8c13f614,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
