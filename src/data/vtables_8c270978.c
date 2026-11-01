/* Static data 8c270978-8c2709a0: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TSeqVarsEdit_dtor_8c17729c(void);
extern void TSeqVarsEdit_update_8c1772e0(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TSeqVarsEdit_v05_8c1776fc(void);
extern void TEditor_v06_8c03cea8(void);
extern void TSeqVarsEdit_v07_8c177700(void);

/* 8c270978: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c270978[10] = {
    0,
    0,
    TSeqVarsEdit_dtor_8c17729c,
    TSeqVarsEdit_update_8c1772e0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TSeqVarsEdit_v05_8c1776fc,
    TEditor_v06_8c03cea8,
    TSeqVarsEdit_v07_8c177700
};
