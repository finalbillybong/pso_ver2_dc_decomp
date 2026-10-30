typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
};
struct S_vv1 {
    int f00;
    short f04;
    char unknown6[0x6];
    int f0c;
    char unknown10[0x4];
    S_vv1_14 *f14;
};
struct S_vv4 {
    int f00;
    short f04;
    char unknown6[0x6];
    int f0c;
};
extern int g_8c319b60;
extern void call_8c187648(S_vv4 *);
void operation_8c187648(Object *o)
{
    S_vv1 *v1;
    int v2;
    S_vv1 *c1;
    int v5;
    S_vv4 *v4;
    S_vv4 *c4;
    v1 = (S_vv1 *)o->f14;
    while (o->f14 != 0 && v1 != 0) {
        c1 = v1;
        v1 = (S_vv1 *)c1->f0c;
        v2 = (int)(c1->f00 == g_8c319b60);
        if (v2 != 0) {
            c1->f04 |= 1;
        } else {
            v4 = (S_vv4 *)c1->f14;
            while (c1->f14 != 0 && v4 != 0) {
                c4 = v4;
                v4 = (S_vv4 *)c4->f0c;
                v5 = (int)(c4->f00 == g_8c319b60);
                if (v5 != 0) {
                    c4->f04 |= 1;
                } else {
                    call_8c187648(c4);
                }
            }
        }
    }
}
