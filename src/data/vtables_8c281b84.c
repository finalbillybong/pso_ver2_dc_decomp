/* Static data 8c281b84-8c281bc4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TOSwitchTimer_dtor_8c25af94(void);
extern void TOSwitchTimer_update_8c25b05c(void);
extern void TOSwitchTimer_render_8c25b150(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjectShared_vslot05_8c0104fc(void);
extern void TObjectShared_vslot06_8c01d694(void);
extern void reset_shared_object(void);
extern void TObjectShared_vslot08_8c010500(void);
extern void TOSwitchTimer_v09_8c25b14c(void);
extern void TObjectShared_vslot10_8c010508(void);
extern void TObjectShared_vslot11_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void TObjectShared_vslot13_8c010510(void);

/* 8c281b84: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TOSwitchTimer_vtable_8c281b84[16] = {
    0,
    0,
    TOSwitchTimer_dtor_8c25af94,
    TOSwitchTimer_update_8c25b05c,
    TOSwitchTimer_render_8c25b150,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TObjectShared_vslot05_8c0104fc,
    TObjectShared_vslot06_8c01d694,
    reset_shared_object,
    TObjectShared_vslot08_8c010500,
    TOSwitchTimer_v09_8c25b14c,
    TObjectShared_vslot10_8c010508,
    TObjectShared_vslot11_8c01d3b0,
    fn_8c01d4c4,
    TObjectShared_vslot13_8c010510
};
