/* Static data 8c278e30-8c278e4c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemTexLoad_dtor_8c22bf70(void);
extern void TItemTexLoad_update_8c22bfcc(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c278e30: type-information and this-adjustment header, then 5 slots */
VirtualFunction const vt_8c278e30[7] = {
    0,
    0,
    TItemTexLoad_dtor_8c22bf70,
    TItemTexLoad_update_8c22bfcc,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
