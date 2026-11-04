/* Static data 8c265f60-8c265f84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecGrants_dtor_8c0b3048(void);
extern void TTecGrants_update_8c0b308c(void);
extern void TTecGrants_render_8c0b32bc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecGrants_v05_8c0b3274(void);
extern void operation_8c0ad9a8(void);

/* 8c265f60: type-information and this-adjustment header, then 7 slots */
VirtualFunction const TTecGrants_vtable_8c265f60[9] = {
    0,
    0,
    TTecGrants_dtor_8c0b3048,
    TTecGrants_update_8c0b308c,
    TTecGrants_render_8c0b32bc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecGrants_v05_8c0b3274,
    operation_8c0ad9a8
};
