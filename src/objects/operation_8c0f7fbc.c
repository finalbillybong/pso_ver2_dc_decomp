typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
struct S_vv2 {
    int f00;
    S_vv3 *f04;
};
struct S_vv3 {
    char unknown0[0x40c];
    int f40c;
};
void operation_8c0f7fbc(int a0)
{
    int v1;
    S_vv2 *v2;
    int k;
    int m;
    k = 0x3d4;
    m = 0x40c;
    for (v1 = 0; v1 < 4; v1++) {
        v2 = (S_vv2 *)((char *)a0 + (v1 << 3) + k);
        if (v2->f00 == 1) {
            if (v2->f04 != 0) {
                *(int *)((char *)v2->f04 + m) = 0;
                v2->f04 = 0;
            }
            v2->f00 = 2;
        }
    }
}
