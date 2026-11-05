/* Static data 8c272018-8c272058: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjRoomId_dtor_8c185448(void);
extern void TObjRoomId_update_8c18548c(void);
extern void TObjRoomId_render_8c185604(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjectShared_vslot05_8c0104fc(void);
extern void TObjectShared_vslot06_8c01d694(void);
extern void reset_shared_object(void);
extern void TObjectShared_vslot08_8c010500(void);
extern void TObjectShared_vslot09_8c010504(void);
extern void TObjectShared_vslot10_8c010508(void);
extern void TObjectShared_vslot11_8c01d3b0(void);
extern void fn_8c01d4c4(void);
extern void TObjectShared_vslot13_8c010510(void);

/* 8c272018: type-information and this-adjustment header, then 14 slots */
VirtualFunction const TObjRoomId_vtable_8c272018[16] = {
    0,
    0,
    TObjRoomId_dtor_8c185448,
    TObjRoomId_update_8c18548c,
    TObjRoomId_render_8c185604,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TObjectShared_vslot05_8c0104fc,
    TObjectShared_vslot06_8c01d694,
    reset_shared_object,
    TObjectShared_vslot08_8c010500,
    TObjectShared_vslot09_8c010504,
    TObjectShared_vslot10_8c010508,
    TObjectShared_vslot11_8c01d3b0,
    fn_8c01d4c4,
    TObjectShared_vslot13_8c010510
};
