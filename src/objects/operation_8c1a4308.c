typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc720 S_g8c4dc720;
typedef struct S_g8c4dc724 S_g8c4dc724;
extern S_g8c4dc720 *g_8c4dc720;
extern S_g8c4dc724 *g_8c4dc724;
extern void call_8c37d534(void *);
extern void game_free_8c011ec0(void *);
extern void operation_8c105320(int);
void release_assets_TObjNpcHFW00_8c1a4308(void)
{
    call_8c37d534(g_8c4dc724);
    game_free_8c011ec0(g_8c4dc724);
    if (g_8c4dc720 != 0) {
        operation_8c105320((int)g_8c4dc720);
    }
}
