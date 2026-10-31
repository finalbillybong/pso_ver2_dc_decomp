typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct S_vv3 {
    char unknown0[0x8];
    int f08;
};
struct S_vv7 {
    short f00;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
extern int operation_8c186fd4(void);
int operation_8c186f1c(short *a0)
{
    int t1;
    int v2;
    int v4;
    S_vv3 *v3;
    int v5;
    int m;
    t1 = operation_8c186fd4();
    m = -3;
    for (v2 = 0; v2 < 0x12; v2++) {
        v3 = *(S_vv3 **)((v2 << 2) + 0x8c4dbba0);
        if (v3 != 0) {
            v4 = v3->f08;
            v3 = (S_vv3 *)((char *)v3 + 0x10);
            for (v5 = 0; v5 < v4; v5++) {
                *a0 = ((S_vv6 *)v3)->f04 & m;
                v3 = (S_vv3 *)((char *)v3 + 20);
                a0++;
            }
        }
    }
    return t1;
}
