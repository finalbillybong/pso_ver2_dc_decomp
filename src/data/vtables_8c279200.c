/* Static data 8c279200-8c27923c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TChallenge_dtor_8c237998(void);
extern void TChallenge_update_8c237a1c(void);
extern void TChallenge_render_8c237bcc(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemShootWindCane_dtor_8c239aa4(void);
extern void operation_1abbcc(void);
extern void TItemShootWindCane_render_8c239a30(void);
extern void TItemShootWindCane_v05_8c239a20(void);

/* 8c279200: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TChallenge_vtable_8c279200[7] = {
    0,
    0,
    TChallenge_dtor_8c237998,
    TChallenge_update_8c237a1c,
    TChallenge_render_8c237bcc,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c27921c: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TItemShootWindCane_vtable_8c27921c[8] = {
    0,
    0,
    TItemShootWindCane_dtor_8c239aa4,
    operation_1abbcc,
    TItemShootWindCane_render_8c239a30,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TItemShootWindCane_v05_8c239a20
};
