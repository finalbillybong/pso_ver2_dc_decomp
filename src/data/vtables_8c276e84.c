/* Static data 8c276e84-8c276ea0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubAreaMap_dtor_8c1d57d0(void);
extern void TWindowSubAreaMap_update_8c1d5828(void);
extern void TWindowSubAreaMap_render_8c1d5868(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c276e84: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowSubAreaMap_vtable_8c276e84[7] = {
    0,
    0,
    TWindowSubAreaMap_dtor_8c1d57d0,
    TWindowSubAreaMap_update_8c1d5828,
    TWindowSubAreaMap_render_8c1d5868,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
