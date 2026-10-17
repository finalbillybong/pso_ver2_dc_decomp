typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e18 S_g8c469e18;
extern int g_8c469e14;
extern S_g8c469e18 *g_8c469e18;
extern void call_8c38ae68(void);
extern void release_render_mode_four_8c05b938(void);
extern void call_8c3be280(int, void *, int);
extern void call_8c3be38c(int, void *, int);
extern void call_8c38ad10(void);
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c094bb4(void)
{
    int v1;
    int v2;
    int v3;
    switch (g_8c469e14) {
    case 2:
    case 3:
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        v1 = (int)g_8c469e18;
        g_8c469e18 = (S_g8c469e18 *)(v1 + 0xc);
        call_8c3be280(0, (void *)((void *)0x8c469e34), v1);
        v2 = (int)g_8c469e18;
        g_8c469e18 = (S_g8c469e18 *)(v2 + 0xc);
        call_8c3be38c(0, g_8c469e18, v2);
        call_8c38ad10();
        break;
    case 6:
    case 11:
    case 14:
        v3 = (int)g_8c469e18;
        g_8c469e18 = (S_g8c469e18 *)(v3 + 0xc);
        release_render_mode_four_8c05b944((void *)((void *)0x8c469e34), (void *)v3);
    }
    g_8c469e14 += 1;
}
