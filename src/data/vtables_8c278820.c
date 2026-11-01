/* Static data 8c278820-8c278860: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubSymbolChatHelp_dtor_8c21f7d0(void);
extern void TWindowSubSymbolChatHelp_update_8c21f814(void);
extern void TWindowSubSymbolChatHelp_render_8c21f840(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TWindowSubSymbolChatFaceType_dtor_8c21ffb0(void);
extern void TWindowSubSymbolChatFaceType_update_8c220004(void);
extern void TWindowSubSymbolChatFaceType_render_8c2200c8(void);

/* 8c278820: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278820[8] = {
    0,
    0,
    TWindowSubSymbolChatHelp_dtor_8c21f7d0,
    TWindowSubSymbolChatHelp_update_8c21f814,
    TWindowSubSymbolChatHelp_render_8c21f840,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278840: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278840[8] = {
    0,
    0,
    TWindowSubSymbolChatFaceType_dtor_8c21ffb0,
    TWindowSubSymbolChatFaceType_update_8c220004,
    TWindowSubSymbolChatFaceType_render_8c2200c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
