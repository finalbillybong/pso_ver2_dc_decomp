/* Static data 8c2728a0-8c2728f8: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjCMIcon_dtor_8c195570(void);
extern void TObjCMIcon_update_8c1955b4(void);
extern void TObjCMIcon_render_8c1956d0(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TWindowSubCustomEquip_dtor_8c1974c0(void);
extern void TWindowSubCustomEquip_update_8c197514(void);
extern void TWindowSubCustomEquip_render_8c1975f0(void);
extern void operation_8c0dc63c(void);
extern void TAdBack_dtor_8c19835c(void);
extern void TAdBack_update_8c1983a0(void);
extern void TAdBack_render_8c198458(void);

/* 8c2728a0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjCMIcon_vtable_8c2728a0[7] = {
    0,
    0,
    TObjCMIcon_dtor_8c195570,
    TObjCMIcon_update_8c1955b4,
    TObjCMIcon_render_8c1956d0,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2728bc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowSubCustomEquip_vtable_8c2728bc[8] = {
    0,
    0,
    TWindowSubCustomEquip_dtor_8c1974c0,
    TWindowSubCustomEquip_update_8c197514,
    TWindowSubCustomEquip_render_8c1975f0,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c2728dc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TAdBack_vtable_8c2728dc[7] = {
    0,
    0,
    TAdBack_dtor_8c19835c,
    TAdBack_update_8c1983a0,
    TAdBack_render_8c198458,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
