/* Static data 8c26522c-8c2652a4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjPlayerSet_dtor_8c08a3dc(void);
extern void TObjPlayerSet_update_8c08a4b8(void);
extern void TObjPlayerSet_render_8c08a4bc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjectShared_vslot05_8c0104fc(void);
extern void TObjectShared_vslot06_8c01d694(void);
extern void reset_shared_object(void);
extern void TObjectShared_vslot08_8c010500(void);
extern void TObjPlayerSet_v09_8c08a4c0(void);
extern void TObjectShared_vslot10_8c010508(void);
extern void TObjectShared_vslot11_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void TObjectShared_vslot13_8c010510(void);
extern void TeneFakeTecThunderEff_dtor_8c08a63c(void);
extern void TeneFakeTecThunderEff_update_8c08a680(void);
extern void TeneFakeTecThunderEff_render_8c08a810(void);
extern void TMovie_dtor_8c08b22c(void);
extern void TMovie_update_8c08b014(void);
extern void TObject_render_default_8c0111c8(void);
extern void TMovie_render_shadow_8c08b160(void);

/* 8c26522c: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TObjPlayerSet_vtable_8c26522c[16] = {
    0,
    0,
    TObjPlayerSet_dtor_8c08a3dc,
    TObjPlayerSet_update_8c08a4b8,
    TObjPlayerSet_render_8c08a4bc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TObjectShared_vslot05_8c0104fc,
    TObjectShared_vslot06_8c01d694,
    reset_shared_object,
    TObjectShared_vslot08_8c010500,
    TObjPlayerSet_v09_8c08a4c0,
    TObjectShared_vslot10_8c010508,
    TObjectShared_vslot11_8c01d3b0,
    fn_8c01d4c4,
    TObjectShared_vslot13_8c010510
};

/* 8c26526c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TeneFakeTecThunderEff_vtable_8c26526c[7] = {
    0,
    0,
    TeneFakeTecThunderEff_dtor_8c08a63c,
    TeneFakeTecThunderEff_update_8c08a680,
    TeneFakeTecThunderEff_render_8c08a810,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c265288: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TMovie_vtable_8c265288[7] = {
    0,
    0,
    TMovie_dtor_8c08b22c,
    TMovie_update_8c08b014,
    TObject_render_default_8c0111c8,
    TMovie_render_shadow_8c08b160,
    hierarchy_output
};
