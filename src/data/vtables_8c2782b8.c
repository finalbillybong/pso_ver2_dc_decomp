/* Static data 8c2782b8-8c2782d4: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TWindowSubShortMail_dtor_8c2169c8(void);
extern void TWindowSubShortMail_update_8c216ab8(void);
extern void TWindowSubShortMail_render_8c2171c4(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);

/* 8c2782b8: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TWindowSubShortMail_vtable_8c2782b8[7] = {
    0,
    0,
    TWindowSubShortMail_dtor_8c2169c8,
    TWindowSubShortMail_update_8c216ab8,
    TWindowSubShortMail_render_8c2171c4,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};
