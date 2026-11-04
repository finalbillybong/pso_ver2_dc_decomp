/* Static data 8c265904-8c265920: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TSetManager_dtor_8c09d6fc(void);
extern void TSetManager_update_8c09d740(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c265904: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TSetManager_vtable_8c265904[7] = {
    0,
    0,
    TSetManager_dtor_8c09d6fc,
    TSetManager_update_8c09d740,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
