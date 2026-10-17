typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469e98 S_L8c469e98;
typedef struct S_vv5 S_vv5;
struct S_L8c469e98 {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
    char unknown10[0x4];
    int f14;
};
struct S_vv5 {
    int f00;
};
extern S_L8c469e98 g_8c469e98;
void operation_8c09a5d0(void)
{
    int v1;
    int v3;
    char *v4;
    S_vv5 *v5;
    int v6;
    v1 = (int)((&g_8c469e98)->f0c & 0xf0);
    (&g_8c469e98)->f14 = 0;
    if (v1 == 0) {
        (&g_8c469e98)->f08 = 0;
        (&g_8c469e98)->f04 = 0;
        (&g_8c469e98)->f14 = 0;
        return;
    }
    if (((v1 & (&g_8c469e98)->f04)) != 0) {
        (&g_8c469e98)->f08 += 1;
        if ((&g_8c469e98)->f08 != 7 && !((&g_8c469e98)->f08 >= 0xa)) {
            return;
        }
        (&g_8c469e98)->f14 = (int)((&g_8c469e98)->f04);
        (&g_8c469e98)->f08 = 7;
        return;
    }
    v5 = (S_vv5 *)(void *)0x8c30127c;
    v6 = (int)v1;
    goto L_8c09a618;
    v3 = (int)(void *)0x8c30127c;
    v4 = (char *)v1;
L_8c09a616:;
    v5 = (S_vv5 *)(v3 + 4);
    v6 = (int)v4;
L_8c09a618:;
    v3 = (int)v5;
    v4 = (char *)(v6 & ~v5->f00);
    if (((v6 & ~v5->f00)) != 0) {
        goto L_8c09a616;
    }
    (&g_8c469e98)->f14 = (&g_8c469e98)->f04 = v1 & v5->f00;
    (&g_8c469e98)->f08 = 0;
}
