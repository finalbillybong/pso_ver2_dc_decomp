/* Static data 8c27bfbc-8c27bfdc: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TItemShootRocketPunch_dtor_8c23fc14(void);
extern void TItemShoot_vslot01_8c1abbcc(void);
extern void TItemShootRocketPunch_render_8c23faf8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TItemShootRocketPunch_v05_8c23faf4(void);

/* 8c27bfbc: type-information and this-adjustment header, then 6 slots */
VirtualFunction const TItemShootRocketPunch_vtable_8c27bfbc[8] = {
    0,
    0,
    TItemShootRocketPunch_dtor_8c23fc14,
    TItemShoot_vslot01_8c1abbcc,
    TItemShootRocketPunch_render_8c23faf8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TItemShootRocketPunch_v05_8c23faf4
};
