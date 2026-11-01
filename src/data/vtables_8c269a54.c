/* Static data 8c269a54-8c269a98: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TMedicalCenterMes_dtor_8c10ae44(void);
extern void TMedicalCenterMes_update_8c10aea8(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TMedicalCenterSequence_dtor_8c10a8e4(void);
extern void operation_8c1067d0(void);
extern void TMedicalCenterSequence_v05_8c10a970(void);
extern void TMedicalCenterSequence_v06_8c10aa40(void);
extern void TMedicalCenterSequence_v07_8c10ad64(void);

/* 8c269a54: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c269a54[7] = {
    0,
    0,
    TMedicalCenterMes_dtor_8c10ae44,
    TMedicalCenterMes_update_8c10aea8,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c269a70: type-information and this-adjustment header, then 8 slots */
VirtualFunction const vt_8c269a70[10] = {
    0,
    0,
    TMedicalCenterSequence_dtor_8c10a8e4,
    operation_8c1067d0,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TMedicalCenterSequence_v05_8c10a970,
    TMedicalCenterSequence_v06_8c10aa40,
    TMedicalCenterSequence_v07_8c10ad64
};
