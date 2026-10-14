typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41825c S_L8c41825c;
struct S_L8c41825c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c4dc684;
extern int g_8c4dc688;
extern S_L8c41825c g_8c41825c;
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c1a21a8(void)
{
    int t1;
    g_8c4dc684 = (int)((&g_8c41825c)->f04);
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)(&*(int *)((char *)0x8c31d740 + (g_8c4dc684 << 4))), 0, 0, 0);
    }
    g_8c4dc688 = (int)(t1);
}
