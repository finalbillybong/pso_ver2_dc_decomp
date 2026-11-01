/* Static data 8c281a7c-8c281a98: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TOSwitchAttackSub_dtor_8c259034(void);
extern void TOSwitchAttackSub_update_8c259084(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281a7c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281a7c[7] = {
    0,
    0,
    TOSwitchAttackSub_dtor_8c259034,
    TOSwitchAttackSub_update_8c259084,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
