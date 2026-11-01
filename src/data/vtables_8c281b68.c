/* Static data 8c281b68-8c281b84: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TAdPSOPlay_dtor_8c25ab4c(void);
extern void TAdPSOPlay_update_8c25abb0(void);
extern void TAdPSOPlay_render_8c25aca8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c281b68: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c281b68[7] = {
    0,
    0,
    TAdPSOPlay_dtor_8c25ab4c,
    TAdPSOPlay_update_8c25abb0,
    TAdPSOPlay_render_8c25aca8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
