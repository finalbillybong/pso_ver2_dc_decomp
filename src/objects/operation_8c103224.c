typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d5a30 S_g8c4d5a30;
typedef struct Arg1 Arg1;
typedef struct Arg1_0 Arg1_0;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
struct Arg1 {
    Arg1_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv2 {
    char unknown0[0x2];
    short f02;
};
struct S_vv4 {
    short f00;
};
struct S_vv6 {
    char unknown0[0x2];
    short f02;
};
extern S_g8c4d5a30 *g_8c4d5a30;
int operation_8c103224(int a0, Arg1 *a1)
{
    int v1;
    S_vv2 *v2;
    int v3;
    S_vv4 *v4;
    int t1;
    v1 = a0 << 2;
    v4 = *(S_vv4 **)(v1 + 0x8c4d59e8);
    if (v4 != 0) {
        v2 = (S_vv2 *)a1->f00;
        for (v3 = 0; v3 < a1->f08; v3++) {
            v2->f02 = v4->f00;
            v4++;
            v2 = (S_vv2 *)((char *)v2 + 40);
        }
    } else {
        t1 = ((int (*)(void *, int))0x8c122744)(g_8c4d5a30, a1->f08 << 1);
        if (t1 != 0) {
            *(int *)(v1 + 0x8c4d59e8) = t1;
        } else {
            return 0;
        }
        v2 = (S_vv2 *)a1->f00;
        for (v3 = 0; v3 < a1->f08; v3++) {
            v2->f02 = 0;
            v2->f02 |= 1;
            v2 = (S_vv2 *)((char *)v2 + 40);
        }
    }
    return 1;
}
