/* Static data 8c2701cc-8c270290: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemList_dtor_8c16bf08(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjItemOKWindow_dtor_8c174700(void);
extern void TObjItemNameSelect_dtor_8c1743dc(void);
extern void TObjItemNameEntry_dtor_8c1740dc(void);
extern void TQuestThreadBoard_dtor_8c173bd8(void);
extern void TQuestThreadBoard_update_8c173c54(void);
extern void TQuestThread_dtor_8c173848(void);
extern void TQuestThread_update_8c17388c(void);
extern void operation_8c1733d8(void);
extern void operation_8c17345c(void);

/* 8c2701cc: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2701cc[7] = {
    0,
    0,
    TItemList_dtor_8c16bf08,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2701e8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2701e8[7] = {
    0,
    0,
    TObjItemOKWindow_dtor_8c174700,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c270204: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270204[7] = {
    0,
    0,
    TObjItemNameSelect_dtor_8c1743dc,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c270220: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270220[7] = {
    0,
    0,
    TObjItemNameEntry_dtor_8c1740dc,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27023c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27023c[7] = {
    0,
    0,
    TQuestThreadBoard_dtor_8c173bd8,
    TQuestThreadBoard_update_8c173c54,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c270258: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270258[7] = {
    0,
    0,
    TQuestThread_dtor_8c173848,
    TQuestThread_update_8c17388c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c270274: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c270274[7] = {
    0,
    0,
    operation_8c1733d8,
    operation_8c17345c,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
