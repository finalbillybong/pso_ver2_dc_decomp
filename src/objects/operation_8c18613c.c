typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e18c0 S_L8c4e18c0;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct S_g8c4e18c4 S_g8c4e18c4;
struct S_L8c4e18c0 {
    char unknown0[0x4];
    S_g8c4e18c4 *f04;
};
extern short g_8c41cb82;
extern int g_8c46ed18;
extern int g_8c4dbb8c;
extern int g_8c4dbb94;
extern S_L8c4e18c0 g_8c4e18c0;
extern int operation_8c186380(int, int, int);
extern void call_8c1865f4(int);
extern void call_8c186510(void);
void operation_8c18613c(void)
{
    int v1;
    int v6;
    int v2;
    int t1;
    v1 = (int)0;
    while (0x10 > v1) {
        v2 = (int)(v1 << 3);
        t1 = operation_8c186380(v1, (int)(*(S_g8c4e18c0 **)((char *)&g_8c4e18c0 + (v2))), (int)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + (v2))));
        if (t1 != 0) {
            call_8c1865f4(v1);
        }
        v1 = (int)(v1 + 1);
    }
    call_8c186510();
    g_8c41cb82 += g_8c4dbb94;
    g_8c46ed18 = (int)(g_8c4dbb8c);
    v6 = 0;
    for (v2 = v6; 0x12 > v2; v2++) {
        v6 += *(int *)((char *)0x8c46eca0 + (v2 << 2));
    }
}
