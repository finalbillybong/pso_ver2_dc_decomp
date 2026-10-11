typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2e8 S_g8c4dc2e8;
typedef struct S_g8c4dc2e8_14 S_g8c4dc2e8_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_c S_vv2_c;
struct S_vv1 {
    char unknown0[0x20];
    int f20;
};
struct S_vv2 {
    char unknown0[0xc];
    S_vv2_c *f0c;
};
struct S_g8c4dc2e8 {
    char unknown0[0x14];
    S_g8c4dc2e8_14 *f14;
};
int operation_8c1931b0(int a0)
{
    S_vv1 *v1;
    S_vv2 *v2;
    if (*(int *)0x8c4dc2e8 != 0) {
        v1 = (S_vv1 *)(*(S_g8c4dc2e8 **)0x8c4dc2e8)->f14;
        while (v1 != 0) {
            v2 = (S_vv2 *)v1;
            if (a0 == v1->f20) {
                return (int)v1 + 0x30;
            }
            v1 = (S_vv1 *)v2->f0c;
        }
    }
    return 0;
}
