typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e18c0 S_L8c4e18c0;
typedef struct S_L8c4e1950 S_L8c4e1950;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
    int f04;
    int f08;
};
struct S_L8c4e1950 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_L8c4e18c0 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c510ba4;
extern S_L8c4e18c0 g_8c4e18c0;
extern S_L8c4e1950 g_8c4e1950;
int operation_8c1a9a00(int a0, Arg1 *a1)
{
    if (a0 > 0x11) {
        return 0;
    }
    if (g_8c510ba4 != 0) {
        a1->f00 = (int)(*(int *)((char *)&g_8c4e1950 + (a0 * 0xc)));
        a1->f04 = (int)(*(int *)((char *)&g_8c4e1950.f04 + (a0 * 0xc)));
        a1->f08 = (int)(*(int *)((char *)&g_8c4e1950.f08 + (a0 * 0xc)));
    } else {
        a1->f00 = a0;
        a1->f04 = (int)(*(int *)((char *)&g_8c4e18c0 + (a0 << 3)));
        a1->f08 = (int)(*(int *)((char *)&g_8c4e18c0.f04 + (a0 << 3)));
    }
    return 1;
}
