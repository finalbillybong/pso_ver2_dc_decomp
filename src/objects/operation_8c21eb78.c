typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct S_vv29 S_vv29;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    char f68;
    char f69;
};
struct S_vv4 {
    int f00;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct S_vv29 {
    int f00;
};
extern int operation_8c21ec0c(int, int);
void operation_8c21eb78(Object *o)
{
    S_vv4 *v4;
    int v3;
    int v15;
    int v1;
    int v5;
    int v2;
    S_vv29 *v29;
    int t1;
    v1 = (int)1;
    v15 = (int)0;
    v2 = (int)-3;
    goto L_8c21ebb6;
    v3 = (int)0;
L_8c21eb8e:;
    v4 = (S_vv4 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v3 + 2 << 2));
    t1 = operation_8c21ec0c((int)o, v3);
    if (t1 == 0) {
        v4->f00 |= 2;
        v5 = (int)v1;
    } else {
        v5 = (int)0;
        v4->f00 &= v2;
    }
    v1 = (int)v5;
    v15 = (int)(v3 + 1);
L_8c21ebb6:;
    v3 = (int)v15;
    if (6 > v15) {
        goto L_8c21eb8e;
    }
    v29 = (S_vv29 *)o->f30->f04;
    if (v1 != 0) {
        o->f69 = -1;
        v29->f00 |= 2;
        o->f68 |= 4;
        return;
    }
    v29->f00 &= -3;
    o->f68 &= -5;
}
