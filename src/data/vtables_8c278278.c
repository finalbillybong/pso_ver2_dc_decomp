/* Static data 8c278278-8c278298: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowDD_WS_String_dtor_8c215a54(void);
extern void TWindowDD_WS_String_update_8c215b60(void);
extern void TWindowDD_WS_String_render_8c215b90(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);

/* 8c278278: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowDD_WS_String_vtable_8c278278[8] = {
    0,
    0,
    TWindowDD_WS_String_dtor_8c215a54,
    TWindowDD_WS_String_update_8c215b60,
    TWindowDD_WS_String_render_8c215b90,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
