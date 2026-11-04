/* Static data 8c266024-8c266048: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecLuker_dtor_8c0b4070(void);
extern void TTecLuker_update_8c0b412c(void);
extern void operation_8c0ad9d4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecLuker_v05_8c0b4544(void);
extern void operation_8c0ad9a8(void);

/* 8c266024: type-information and this-adjustment header, then 7 slots */
VirtualFunction const TTecLuker_vtable_8c266024[9] = {
    0,
    0,
    TTecLuker_dtor_8c0b4070,
    TTecLuker_update_8c0b412c,
    operation_8c0ad9d4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecLuker_v05_8c0b4544,
    operation_8c0ad9a8
};
