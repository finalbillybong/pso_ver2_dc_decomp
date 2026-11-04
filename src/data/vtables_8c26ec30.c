/* Static data 8c26ec30-8c26ec94: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void destroy_object_8c157860(void);
extern void TObject_update_default_8c0111c4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TQuestListOffline_dtor_8c158bec(void);
extern void operation_8c1067d0(void);
extern void TQuestListOffline_v05_8c158c7c(void);
extern void THunterGuildSeqOffline_dtor_8c159270(void);
extern void THunterGuildSeqOffline_v05_8c159304(void);
extern void THunterGuildSeqOffline_v06_8c1593d4(void);
extern void THunterGuildSeqOffline_v07_8c1596e0(void);

/* 8c26ec30: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c26ec30[7] = {
    0,
    0,
    destroy_object_8c157860,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c26ec4c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TQuestListOffline_vtable_8c26ec4c[8] = {
    0,
    0,
    TQuestListOffline_dtor_8c158bec,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TQuestListOffline_v05_8c158c7c
};

/* 8c26ec6c: type-information and this-adjustment header, then 8 slots */
VirtualFunction const THunterGuildSeqOffline_vtable_8c26ec6c[10] = {
    0,
    0,
    THunterGuildSeqOffline_dtor_8c159270,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    THunterGuildSeqOffline_v05_8c159304,
    THunterGuildSeqOffline_v06_8c1593d4,
    THunterGuildSeqOffline_v07_8c1596e0
};
