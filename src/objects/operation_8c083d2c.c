typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c44be20;
extern int g_8c469c80;
extern int g_8c469c84;
extern int g_8c4703c0;
extern char g_8c2ff8a0[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c083d2c(void)
{
    int t1;
    int t2;
    int t3;
    g_8c469c80 = 0;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c2ff52c), 0, 0, 0);
    }
    g_8c469c80 = (int)(t1);
    if (g_8c44be20 != 0 || g_8c4703c0 == 3) {
        t2 = call_8c118528((void *)((g_8c2ff8a0 + 0xc5)));
        g_8c469c84 = (int)(t2);
        return;
    }
    t3 = call_8c118528((void *)((g_8c2ff8a0 + 0xd9)));
    g_8c469c84 = (int)(t3);
}
