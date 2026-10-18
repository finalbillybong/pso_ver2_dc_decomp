typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_14 Arg1_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv3 S_vv3;
struct Arg1 {
    char unknown0[0x14];
    Arg1_14 *f14;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
    char unknown10[0x4];
    S_vv1_14 *f14;
};
struct S_vv3 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x6];
    int f0c;
};
extern void call_8c0bbab8(int, S_vv3 *, int);
void operation_8c0bbab8(int a0, Arg1 *a1, int a2)
{
    S_vv1 *v1;
    S_vv1 *v2;
    S_vv3 *v3;
    S_vv3 *v4;
    v1 = (S_vv1 *)a1->f14;
    while (a1->f14 != 0 && v1 != 0) {
        v2 = v1;
        v1 = (S_vv1 *)v2->f0c;
        if ((int)(v2) == a2) {
            v2->f04 |= 1;
        } else {
            v3 = (S_vv3 *)v2->f14;
            while (v2->f14 != 0 && v3 != 0) {
                v4 = v3;
                v3 = (S_vv3 *)v4->f0c;
                if ((int)(v4) == a2) {
                    v4->f04 |= 1;
                } else {
                    call_8c0bbab8(a0, v4, a2);
                }
            }
        }
    }
}
