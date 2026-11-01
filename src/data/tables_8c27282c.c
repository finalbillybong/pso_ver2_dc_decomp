/* Static data 8c27282c-8c272848: function_table objects, in address order. */

typedef void (*Function)(void);

extern void TItemLoad_dtor_8c193fe8(void);
extern void TItemLoad_update_8c1930d4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

Function const d_8c27282c[7] = {
    0,
    0,
    TItemLoad_dtor_8c193fe8,
    TItemLoad_update_8c1930d4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
