/* Static data 8c2771a8-8c2771c4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubLog_dtor_8c1d9fa0(void);
extern void TWindowSubLog_update_8c1da040(void);
extern void TWindowSubLog_render_8c1da178(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2771a8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowSubLog_vtable_8c2771a8[7] = {
    0,
    0,
    TWindowSubLog_dtor_8c1d9fa0,
    TWindowSubLog_update_8c1da040,
    TWindowSubLog_render_8c1da178,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
