/* Static data 8c2676f0-8c26770c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TLockOnCursor_dtor_8c0d8e84(void);
extern void TLockOnCursor_update_8c0d8fcc(void);
extern void TLockOnCursor_render_8c0d9094(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2676f0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c2676f0[7] = {
    0,
    0,
    TLockOnCursor_dtor_8c0d8e84,
    TLockOnCursor_update_8c0d8fcc,
    TLockOnCursor_render_8c0d9094,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
