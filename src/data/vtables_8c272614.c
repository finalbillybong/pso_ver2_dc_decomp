/* Static data 8c272614-8c27266c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c18aed0(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TWindowMainMenu_dtor_8c18bc10(void);
extern void TWindowMainMenu_update_8c18bcf0(void);
extern void TWindowMainMenu_render_8c18bd24(void);
extern void TWindowMainMenuCommand_dtor_8c18cc18(void);
extern void TWindowMainMenuCommand_update_8c18cc6c(void);
extern void TWindowMainMenuCommand_render_8c18ccb4(void);
extern void operation_8c0dc63c(void);

/* 8c272614: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c272614[7] = {
    0,
    0,
    destroy_object_8c18aed0,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c272630: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowMainMenu_vtable_8c272630[7] = {
    0,
    0,
    TWindowMainMenu_dtor_8c18bc10,
    TWindowMainMenu_update_8c18bcf0,
    TWindowMainMenu_render_8c18bd24,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27264c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TWindowMainMenuCommand_vtable_8c27264c[8] = {
    0,
    0,
    TWindowMainMenuCommand_dtor_8c18cc18,
    TWindowMainMenuCommand_update_8c18cc6c,
    TWindowMainMenuCommand_render_8c18ccb4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
