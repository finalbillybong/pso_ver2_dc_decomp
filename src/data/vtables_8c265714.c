/* Static data 8c265714-8c265730: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjCMHexTile_dtor_8c09a954(void);
extern void TObjCMHexTile_update_8c09a998(void);
extern void TObjCMHexTile_render_8c09aa8c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265714: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjCMHexTile_vtable_8c265714[7] = {
    0,
    0,
    TObjCMHexTile_dtor_8c09a954,
    TObjCMHexTile_update_8c09a998,
    TObjCMHexTile_render_8c09aa8c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
