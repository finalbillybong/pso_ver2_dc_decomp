typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
struct S_vv1 {
    int f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv6 {
    char unknown0[0x4];
    int f04;
};
int operation_8c245670(int a0, int a1)
{
    S_vv1 *v1;
    int v2;
    int v3;
    int v4;
    S_vv6 *v6;
    if (a0 != 0) {
        v1 = (S_vv1 *)a0;
L_8c245674:;
        v4 = (int)v1->f00;
        v6 = (S_vv6 *)v1;
        if (v1->f00 == 5) {
            v2 = (int)v1->f00;
            v3 = (int)v1;
            if (v1->f08 == a1) {
                return (int)v1 + 0x10;
            }
            v4 = (int)v2;
            v6 = (S_vv6 *)v3;
        }
        if (v4 != 0) {
            v1 = (S_vv1 *)((int)v6 + v6->f04);
            goto L_8c245674;
        }
    }
    return 0;
}
