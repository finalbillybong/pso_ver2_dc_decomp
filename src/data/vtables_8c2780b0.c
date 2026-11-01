/* Static data 8c2780b0-8c278154: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TAdFloorLoad_dtor_8c207998(void);
extern void TAdFloorLoad_update_8c207a0c(void);
extern void TAdFloorLoad_render_8c207b00(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void THunterGuildSeqOnline_Client_dtor_8c208d94(void);
extern void operation_8c1067d0(void);
extern void TObject_render_default_8c0111c8(void);
extern void THunterGuildSeqOnline_Client_v05_8c208e30(void);
extern void THunterGuildSeqOnline_Client_v06_8c208f00(void);
extern void THunterGuildSeqOnline_Client_v07_8c2092bc(void);
extern void THunterGuildSeqOnline_Server_dtor_8c2084bc(void);
extern void THunterGuildSeqOnline_Server_v05_8c208558(void);
extern void THunterGuildSeqOnline_Server_v06_8c208644(void);
extern void THunterGuildSeqOnline_Server_v07_8c208a6c(void);
extern void THunterGuildSeqOnlineTask_dtor_8c2083b4(void);
extern void THunterGuildSeqOnlineTask_update_8c2083f8(void);
extern void TWindowGetComCard_dtor_8c2094ac(void);
extern void TWindowGetComCard_update_8c209564(void);
extern void TWindowGetComCard_render_8c20972c(void);

/* 8c2780b0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2780b0[7] = {
    0,
    0,
    TAdFloorLoad_dtor_8c207998,
    TAdFloorLoad_update_8c207a0c,
    TAdFloorLoad_render_8c207b00,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2780cc: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2780cc[10] = {
    0,
    0,
    THunterGuildSeqOnline_Client_dtor_8c208d94,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    THunterGuildSeqOnline_Client_v05_8c208e30,
    THunterGuildSeqOnline_Client_v06_8c208f00,
    THunterGuildSeqOnline_Client_v07_8c2092bc
};

/* 8c2780f4: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c2780f4[10] = {
    0,
    0,
    THunterGuildSeqOnline_Server_dtor_8c2084bc,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    THunterGuildSeqOnline_Server_v05_8c208558,
    THunterGuildSeqOnline_Server_v06_8c208644,
    THunterGuildSeqOnline_Server_v07_8c208a6c
};

/* 8c27811c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c27811c[7] = {
    0,
    0,
    THunterGuildSeqOnlineTask_dtor_8c2083b4,
    THunterGuildSeqOnlineTask_update_8c2083f8,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278138: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278138[7] = {
    0,
    0,
    TWindowGetComCard_dtor_8c2094ac,
    TWindowGetComCard_update_8c209564,
    TWindowGetComCard_render_8c20972c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
