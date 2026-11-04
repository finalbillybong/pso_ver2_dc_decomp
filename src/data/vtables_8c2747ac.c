/* Static data 8c2747ac-8c274854: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjMesBase_dtor_8c1ab174(void);
extern void TObjMesBase_update_8c1ab1b8(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0104fc(void);
extern void fn_8c01d694(void);
extern void operation_8c051fd4(void);
extern void operation_8c010500(void);
extern void TObjMesBase_v09_8c1ab2c8(void);
extern void operation_8c010508(void);
extern void operation_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void operation_8c010510(void);
extern void TObjMesBase_v14_8c1ab228(void);
extern void TObjMesBase_v15_8c1ab1f0(void);
extern void TObjMesBase_v16_8c1ab1f4(void);
extern void TObjItemLight_dtor_8c1ab3c0(void);
extern void TObjItemLight_update_8c1ab420(void);
extern void reset_shared_object(void);
extern void TObjItemLight_v09_8c1ab4b8(void);
extern void TFontSmallHelp_dtor_8c1ab5a8(void);
extern void TFontSmallHelp_update_8c1ab5ec(void);
extern void fn_8c1ab618(void);

/* 8c2747ac: type-information and this-adjustment header, then 17 slots */
VirtualFunction const TObjMesBase_vtable_8c2747ac[19] = {
    0,
    0,
    TObjMesBase_dtor_8c1ab174,
    TObjMesBase_update_8c1ab1b8,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    operation_8c051fd4,
    operation_8c010500,
    TObjMesBase_v09_8c1ab2c8,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510,
    TObjMesBase_v14_8c1ab228,
    TObjMesBase_v15_8c1ab1f0,
    TObjMesBase_v16_8c1ab1f4
};

/* 8c2747f8: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TObjItemLight_vtable_8c2747f8[16] = {
    0,
    0,
    TObjItemLight_dtor_8c1ab3c0,
    TObjItemLight_update_8c1ab420,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0104fc,
    fn_8c01d694,
    reset_shared_object,
    operation_8c010500,
    TObjItemLight_v09_8c1ab4b8,
    operation_8c010508,
    operation_8c01d3b0,
    fn_8c01d4c4,
    operation_8c010510
};

/* 8c274838: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TFontSmallHelp_vtable_8c274838[7] = {
    0,
    0,
    TFontSmallHelp_dtor_8c1ab5a8,
    TFontSmallHelp_update_8c1ab5ec,
    fn_8c1ab618,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
