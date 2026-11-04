/* Static data 8c261bf0-8c261c0c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TQuadSpriteCol_dtor_8c040284(void);
extern void TObject_update_default_8c0111c4(void);
extern void TQuadSpriteCol_render_8c0402c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c261bf0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TQuadSpriteCol_vtable_8c261bf0[7] = {
    0,
    0,
    TQuadSpriteCol_dtor_8c040284,
    TObject_update_default_8c0111c4,
    TQuadSpriteCol_render_8c0402c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
