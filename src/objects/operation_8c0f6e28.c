typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470624 S_g8c470624;
extern int g_8c470620;
extern S_g8c470624 *g_8c470624;
extern int g_8c470628;
extern void call_8c37dd28(int, void *);
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c0f6e28(void)
{
    int v1;
    int v2;
    v1 = (int)g_8c470620;
    switch (v1) {
    case 8:
        call_8c37dd28(0, g_8c470624);
        break;
    case 11:
    case 16:
    case 26:
    case 41:
        v2 = (int)g_8c470628;
        g_8c470628 = v2 + 0xc;
        release_render_mode_four_8c05b944((void *)((void *)0x8c470600), (void *)v2);
    }
    g_8c470620 += 1;
}
