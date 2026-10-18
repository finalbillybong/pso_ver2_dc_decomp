typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d59e8 S_g8c4d59e8;
typedef struct Arg1 Arg1;
typedef struct Arg1_0 Arg1_0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct Arg1 {
    Arg1_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv3 {
    short f00;
};
struct S_vv1 {
    char unknown0[0x2];
    short f02;
};
int operation_8c1032a0(int a0, Arg1 *a1)
{
    short *v3;
    S_vv1 *v1;
    int v2;
    v3 = *(short **)((char *)0x8c4d59e8 + (a0 << 2));
    if (v3 != 0) {
        v1 = (S_vv1 *)a1->f00;
        for (v2 = 0; v2 < a1->f08; v2++) {
            *v3 = v1->f02;
            v1 = (S_vv1 *)((char *)v1 + 0x28);
            v3++;
        }
    } else {
        return 0;
    }
    return 1;
}
