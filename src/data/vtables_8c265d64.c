/* Static data 8c265d64-8c265d88: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TTecReverser_dtor_8c0abf3c(void);
extern void TTecReverser_update_8c0ac098(void);
extern void TTecReverser_render_8c0ac11c(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TTecReverser_v05_8c0ac284(void);
extern void operation_8c0ad9a8(void);

/* 8c265d64: type-information and this-adjustment header, then 7 slots */
VirtualFunction const TTecReverser_vtable_8c265d64[9] = {
    0,
    0,
    TTecReverser_dtor_8c0abf3c,
    TTecReverser_update_8c0ac098,
    TTecReverser_render_8c0ac11c,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TTecReverser_v05_8c0ac284,
    operation_8c0ad9a8
};
