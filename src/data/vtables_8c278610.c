/* Static data 8c278610-8c278640: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TQuestListOnline_render_8c21dce8(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TQuestListOnline_v07_8c21dcdc(void);
extern void TQuestListOnline_v08_8c21d200(void);
extern void TQuestListOnline_v09_8c21d2b0(void);

/* 8c278610: type-information and this-adjustment header, then 10 slots */
VirtualFunction const TQuestListOnline_vtable_8c278610[12] = {
    0,
    0,
    0,
    0,
    TQuestListOnline_render_8c21dce8,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TQuestListOnline_v07_8c21dcdc,
    TQuestListOnline_v08_8c21d200,
    TQuestListOnline_v09_8c21d2b0
};
