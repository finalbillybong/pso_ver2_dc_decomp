typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv7 S_vv7;
struct S_vv1 {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
};
struct S_vv7 {
    char unknown0[0x4];
    int f04;
};
int operation_8c24522c(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    int v4;
    int v5;
    S_vv7 *v7;
    if (a0 != 0) {
        v1 = (S_vv1 *)a0;
L_8c245230:;
        v5 = (int)v1->f00;
        v7 = (S_vv7 *)v1;
        if (v1->f00 == 3) {
            v2 = (int)v1->f00;
            v4 = (int)v1;
            if (v1->f08 == a1) {
                *(int *)0x8c510e4c = v1->f0c;
                return (int)v1 + 0x10;
            }
            v5 = (int)v2;
            v7 = (S_vv7 *)v4;
        }
        if (v5 != 0) {
            v1 = (S_vv1 *)((int)v7 + v7->f04);
            goto L_8c245230;
        }
    }
    *(int *)0x8c510e4c = -1;
    return 0;
}
