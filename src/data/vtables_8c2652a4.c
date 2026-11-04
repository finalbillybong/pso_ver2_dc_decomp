/* Static data 8c2652a4-8c26532c: vtable objects, in address order. */

typedef void (*VirtualFunction)(void);

extern void TObjEZBoneRotPlayer_dtor_8c08b714(void);
extern void TObjEZBoneRotPlayer_update_8c08b5d4(void);
extern void TObject_render_default_8c0111c8(void);
extern void TObject_render_shadow_default_8c0111cc(void);
extern void hierarchy_output(void);
extern void TObjEZBoneRotBase_dtor_8c08b35c(void);
extern void TObject_update_default_8c0111c4(void);
extern void TGroupSetEditor_dtor_8c08b900(void);
extern void operation_8c03ceac(void);
extern void TGroupSetEditor_v05_8c08b9a8(void);
extern void TGroupSetEditor_v06_8c08b944(void);
extern void TGroupSetEditor_v07_8c08ba38(void);
extern void TGroupEnemySetEditor_dtor_8c08de2c(void);
extern void TGroupEnemySetEditor_v05_8c08ded4(void);
extern void TGroupEnemySetEditor_v06_8c08de70(void);
extern void TGroupEnemySetEditor_v07_8c08df50(void);

/* 8c2652a4: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjEZBoneRotPlayer_vtable_8c2652a4[7] = {
    0,
    0,
    TObjEZBoneRotPlayer_dtor_8c08b714,
    TObjEZBoneRotPlayer_update_8c08b5d4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2652c0: type-information and this-adjustment header, then 5 slots */
VirtualFunction const TObjEZBoneRotBase_vtable_8c2652c0[7] = {
    0,
    0,
    TObjEZBoneRotBase_dtor_8c08b35c,
    TObject_update_default_8c0111c4,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output
};

/* 8c2652dc: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TGroupSetEditor_vtable_8c2652dc[10] = {
    0,
    0,
    TGroupSetEditor_dtor_8c08b900,
    operation_8c03ceac,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TGroupSetEditor_v05_8c08b9a8,
    TGroupSetEditor_v06_8c08b944,
    TGroupSetEditor_v07_8c08ba38
};

/* 8c265304: type-information and this-adjustment header, then 8 slots */
VirtualFunction const TGroupEnemySetEditor_vtable_8c265304[10] = {
    0,
    0,
    TGroupEnemySetEditor_dtor_8c08de2c,
    operation_8c03ceac,
    TObject_render_default_8c0111c8,
    TObject_render_shadow_default_8c0111cc,
    hierarchy_output,
    TGroupEnemySetEditor_v05_8c08ded4,
    TGroupEnemySetEditor_v06_8c08de70,
    TGroupEnemySetEditor_v07_8c08df50
};
