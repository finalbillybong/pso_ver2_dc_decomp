/* Static data 8c281a98-8c281ad8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TOSwitchAttack_dtor_8c258868(void);
extern void TOSwitchAttack_update_8c258944(void);
extern void TOSwitchAttack_render_8c258d90(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjectShared_vslot05_8c0104fc(void);
extern void TObjectShared_vslot06_8c01d694(void);
extern void reset_shared_object(void);
extern void TObjectShared_vslot08_8c010500(void);
extern void TOSwitchAttack_v09_8c258df4(void);
extern void TObjectShared_vslot10_8c010508(void);
extern void TObjectShared_vslot11_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void TObjectShared_vslot13_8c010510(void);

/* 8c281a98: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TOSwitchAttack_vtable_8c281a98[16] = {
    0,
    0,
    TOSwitchAttack_dtor_8c258868,
    TOSwitchAttack_update_8c258944,
    TOSwitchAttack_render_8c258d90,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TObjectShared_vslot05_8c0104fc,
    TObjectShared_vslot06_8c01d694,
    reset_shared_object,
    TObjectShared_vslot08_8c010500,
    TOSwitchAttack_v09_8c258df4,
    TObjectShared_vslot10_8c010508,
    TObjectShared_vslot11_8c01d3b0,
    fn_8c01d4c4,
    TObjectShared_vslot13_8c010510
};
