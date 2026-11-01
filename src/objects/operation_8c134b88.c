typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9ac0 S_g8c4d9ac0;
typedef struct S_g8c4d9ac4 S_g8c4d9ac4;
typedef struct S_g8c4d9ac4_0 S_g8c4d9ac4_0;
struct S_g8c4d9ac4 {
    S_g8c4d9ac4_0 *f00;
};
extern void call_8c37d534(void *);
extern void game_free_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void operator_delete_8c18de08(S_g8c4d9ac4 *);
void release_assets_fs_obj_do_doa02_8c134b88(void)
{
    call_8c37d534((void *)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f00));
    game_free_8c011ec0((void *)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f00));
    if (*(int *)0x8c4d9ac0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9ac0 **)0x8c4d9ac0), 1);
    }
    if (*(int *)0x8c4d9ac4 != 0) {
        operator_delete_8c18de08((S_g8c4d9ac4 *)(*(S_g8c4d9ac4 **)0x8c4d9ac4));
    }
}
