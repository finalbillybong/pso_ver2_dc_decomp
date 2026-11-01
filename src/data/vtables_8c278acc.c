/* Static data 8c278acc-8c278b68: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubSymbolChatPartsSet_dtor_8c223ec4(void);
extern void TWindowSubSymbolChatPartsSet_update_8c223f1c(void);
extern void TWindowSubSymbolChatPartsSet_render_8c223ff8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TWindowSubSymbolChatParts_dtor_8c2248d0(void);
extern void TWindowSubSymbolChatParts_update_8c224938(void);
extern void TWindowSubSymbolChatParts_render_8c224a28(void);
extern void fn_8c1192e8(void);
extern void TWindowMessageLog_dtor_8c225620(void);
extern void TWindowMessageLog_update_8c225688(void);
extern void TWindowMessageLog_render_8c225704(void);
extern void destroy_object_8c22607c(void);
extern void fn_8c2260c0(void);
extern void operation_8c2262b8(void);
extern void TWindowMessageInfomation_dtor_8c226798(void);
extern void TWindowMessage_update_8c119598(void);
extern void TWindowMessageInfomation_render_8c2267dc(void);

/* 8c278acc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278acc[8] = {
    0,
    0,
    TWindowSubSymbolChatPartsSet_dtor_8c223ec4,
    TWindowSubSymbolChatPartsSet_update_8c223f1c,
    TWindowSubSymbolChatPartsSet_render_8c223ff8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278aec: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278aec[8] = {
    0,
    0,
    TWindowSubSymbolChatParts_dtor_8c2248d0,
    TWindowSubSymbolChatParts_update_8c224938,
    TWindowSubSymbolChatParts_render_8c224a28,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c278b0c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278b0c[8] = {
    0,
    0,
    TWindowMessageLog_dtor_8c225620,
    TWindowMessageLog_update_8c225688,
    TWindowMessageLog_render_8c225704,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};

/* 8c278b2c: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278b2c[7] = {
    0,
    0,
    destroy_object_8c22607c,
    fn_8c2260c0,
    operation_8c2262b8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c278b48: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278b48[8] = {
    0,
    0,
    TWindowMessageInfomation_dtor_8c226798,
    TWindowMessage_update_8c119598,
    TWindowMessageInfomation_render_8c2267dc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    fn_8c1192e8
};
