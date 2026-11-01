typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4704e0 S_g8c4704e0;
typedef struct S_g8c4704e4 S_g8c4704e4;
typedef struct S_g8c4704e4_4 S_g8c4704e4_4;
struct S_g8c4704e4 {
    char unknown0[0x4];
    S_g8c4704e4_4 *f04;
};
extern S_g8c4704e0 *g_8c4704e0;
extern S_g8c4704e4 *g_8c4704e4;
extern void call_8c37d534(void *);
extern void game_free_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void operator_delete_8c18de08(S_g8c4704e4 *);
void release_assets_fe_obj_o_door04l_8c0efc4c(void)
{
    call_8c37d534((void *)(g_8c4704e4->f04));
    game_free_8c011ec0((void *)(g_8c4704e4->f04));
    if (g_8c4704e0 != 0) {
        call_8c03dc40(g_8c4704e0, 1);
    }
    if (g_8c4704e4 != 0) {
        operator_delete_8c18de08(g_8c4704e4);
    }
}
