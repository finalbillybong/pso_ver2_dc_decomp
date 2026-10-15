typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e1950 S_L8c4e1950;
struct S_L8c4e1950 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern S_L8c4e1950 g_8c4e1950;
void operation_8c150054(int a0, int a1, int a2, int a3, int a4)
{
    if (a1 > 0x11 || a2 > 0x11) {
        return;
    }
    if ((short)a0 != 0) {
        if ((short)a0 == 1) {
            goto L_8c1500c4;
        }
        if ((short)a0 == 2) {
            goto L_8c1500a0;
        }
        if ((short)a0 == 3) {
            goto L_8c1500c4;
        }
        return;
    }
    *(int *)((char *)&g_8c4e1950 + (a1 * 0xc)) = a2;
    *(int *)((char *)&g_8c4e1950.f04 + (a1 * 0xc)) = a3;
    *(int *)((char *)&g_8c4e1950.f08 + (a1 * 0xc)) = 0;
    *(short *)((char *)0x8c4da664 + (a1 << 1)) = a0;
    return;
L_8c1500a0:;
    *(int *)((char *)&g_8c4e1950 + (a1 * 0xc)) = a2;
    *(int *)((char *)&g_8c4e1950.f04 + (a1 * 0xc)) = a3;
    *(int *)((char *)&g_8c4e1950.f08 + (a1 * 0xc)) = a4;
    *(short *)((char *)0x8c4da664 + (a1 << 1)) = a0;
    return;
L_8c1500c4:;
    *(short *)((char *)0x8c4da664 + (a1 << 1)) = a0;
}
