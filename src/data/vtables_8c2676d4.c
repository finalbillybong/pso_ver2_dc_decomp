/* Static data 8c2676d4-8c2676f0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TMainCursor_dtor_8c0da93c(void);
extern void TMainCursor_update_8c0da980(void);
extern void TMainCursor_render_8c0daa28(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2676d4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TMainCursor_vtable_8c2676d4[7] = {
    0,
    0,
    TMainCursor_dtor_8c0da93c,
    TMainCursor_update_8c0da980,
    TMainCursor_render_8c0daa28,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
