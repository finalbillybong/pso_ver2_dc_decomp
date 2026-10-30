typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
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
extern void call_8c09ede0(S_vv3 *, int);
void operation_8c09ede0(Object *o, int a1)
{
    int v47;
    S_vv1 *v1;
    S_vv3 *v3;
    int v15;
    v47 = (int)o->f14;
    while (o->f14 != 0 && v47 != 0) {
        v1 = (S_vv1 *)v47;
        v47 = v1->f0c;
        if ((int)v1 == a1) {
            v1->f04 |= 1;
        } else {
            v15 = (int)v1->f14;
            while (v1->f14 != 0 && v15 != 0) {
                v3 = (S_vv3 *)v15;
                v15 = v3->f0c;
                if ((int)v3 == a1) {
                    v3->f04 |= 1;
                } else {
                    call_8c09ede0(v3, a1);
                }
            }
        }
    }
}
