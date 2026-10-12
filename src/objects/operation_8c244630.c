typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_c S_vv4_c;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
};
struct S_vv1 {
    int f00;
    short f04;
    char unknown6[0x6];
    S_vv1_c *f0c;
    char unknown10[0x4];
    S_vv1_14 *f14;
};
struct S_vv4 {
    int f00;
    short f04;
    char unknown6[0x6];
    S_vv4_c *f0c;
};
extern void call_8c244630(S_vv4 *);
void operation_8c244630(Object *o)
{
    S_vv1 *v1;
    int v2;
    S_vv4 *v4;
    int v5;
    v1 = (S_vv1 *)o->f14;
    while (v1 != 0) {
        v2 = (int)(v1->f00 == *(int *)0x8c30b770);
        if (v2 != 0) {
            v1->f04 |= 1;
        }
        v4 = (S_vv4 *)v1->f14;
        while (v4 != 0) {
            v5 = (int)(v4->f00 == *(int *)0x8c30b770);
            if (v5 != 0) {
                v4->f04 |= 1;
            }
            call_8c244630(v4);
            v4 = (S_vv4 *)v4->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
