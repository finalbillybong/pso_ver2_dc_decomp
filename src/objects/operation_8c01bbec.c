typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e3258 S_L8c2e3258;
typedef struct S_L8c41cb00 S_L8c41cb00;
struct S_L8c41cb00 {
    int f00;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_L8c2e3258 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c418244;
extern S_L8c2e3258 g_8c2e3258;
extern S_L8c41cb00 g_8c41cb00;
extern void operation_8c01bc98(void);
extern void shutdown_game_8c01c054(void);
void operation_8c01bbec(void)
{
    char *v6;
    char *v3;
    char *v7;
    operation_8c01bc98();
    while ((&g_8c41cb00)->f00 != 0) {
        (&g_8c41cb00)->f10 = 0;
        v6 = (char *)*(int *)((char *)&g_8c2e3258 + ((&g_8c41cb00)->f00 * 0xc));
        if (v6 != 0) {
            ((void (*)(void))(v6))();
        }
        v3 = (char *)*(int *)((char *)&g_8c2e3258.f04 + ((&g_8c41cb00)->f00 * 0xc));
        while ((&g_8c41cb00)->f10 == 0 && v3 != 0) {
            ((void (*)(void))(v3))();
            g_8c418244 += 1;
        }
        v7 = (char *)*(int *)((char *)&g_8c2e3258.f08 + ((&g_8c41cb00)->f00 * 0xc));
        if (v7 != 0) {
            ((void (*)(void))(v7))();
        }
        switch ((&g_8c41cb00)->f10) {
        case 1:
        case 2:
        case 3:
            (&g_8c41cb00)->f00 = (int)((&g_8c41cb00)->f04);
        }
    }
    shutdown_game_8c01c054();
    for (;;) {
    }
}
