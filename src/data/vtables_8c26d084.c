/* Static data 8c26d084-8c26d0a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TSlicerHistory_dtor_8c137f78(void);
extern void TSlicerHistory_update_8c137ea0(void);
extern void TSlicerHistory_render_8c137ec8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c26d084: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TSlicerHistory_vtable_8c26d084[7] = {
    0,
    0,
    TSlicerHistory_dtor_8c137f78,
    TSlicerHistory_update_8c137ea0,
    TSlicerHistory_render_8c137ec8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
