/* Static data 8c2782f4-8c278334: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowBreakIn_dtor_8c217948(void);
extern void TWindowBreakIn_update_8c21798c(void);
extern void TWindowBreakIn_render_8c2179bc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void operation_8c0dc63c(void);
extern void TWindowUserSort_dtor_8c217ffc(void);
extern void TWindowUserSort_update_8c218040(void);
extern void TWindowUserSort_render_8c218070(void);

/* 8c2782f4: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c2782f4[8] = {
    0,
    0,
    TWindowBreakIn_dtor_8c217948,
    TWindowBreakIn_update_8c21798c,
    TWindowBreakIn_render_8c2179bc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};

/* 8c278314: type-information and this-adjustment header, then 6 slots */
VirtualFunction const vt_8c278314[8] = {
    0,
    0,
    TWindowUserSort_dtor_8c217ffc,
    TWindowUserSort_update_8c218040,
    TWindowUserSort_render_8c218070,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    operation_8c0dc63c
};
