/* Static data 8c278640-8c2786bc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c21dcf4(void);
extern void operation_8c21dd38(void);
extern void operation_8c21dd94(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void destroy_object_8c21e20c(void);
extern void operation_8c21e250(void);
extern void operation_8c21e29c(void);
extern void TWindowSubQuestBoard_dtor_8c21e478(void);
extern void TWindowSubQuestBoard_update_8c21e4d0(void);
extern void TWindowSubQuestBoard_render_8c21e5a4(void);
extern void TWindowSubQuestBoardSelect_dtor_8c21e690(void);
extern void TWindowSubQuestBoardSelect_update_8c21e6e4(void);
extern void TWindowSubQuestBoardSelect_render_8c21e7b4(void);

/* 8c278640: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278640[8] = {
    0,
    0,
    destroy_object_8c21dcf4,
    operation_8c21dd38,
    operation_8c21dd94,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278660: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278660[8] = {
    0,
    0,
    destroy_object_8c21e20c,
    operation_8c21e250,
    operation_8c21e29c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278680: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278680[7] = {
    0,
    0,
    TWindowSubQuestBoard_dtor_8c21e478,
    TWindowSubQuestBoard_update_8c21e4d0,
    TWindowSubQuestBoard_render_8c21e5a4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27869c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c27869c[8] = {
    0,
    0,
    TWindowSubQuestBoardSelect_dtor_8c21e690,
    TWindowSubQuestBoardSelect_update_8c21e6e4,
    TWindowSubQuestBoardSelect_render_8c21e7b4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
