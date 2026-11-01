/* Static data 8c264f98-8c264fb4: function_table objects, in address order. */

typedef void (*Function)(void);

extern void TObjChip_dtor_8c087e18(void);
extern void TObjChip_update_8c088550(void);
extern void TObjChip_render_8c08855c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

Function const d_8c264f98[7] = {
    0,
    0,
    TObjChip_dtor_8c087e18,
    TObjChip_update_8c088550,
    TObjChip_render_8c08855c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
