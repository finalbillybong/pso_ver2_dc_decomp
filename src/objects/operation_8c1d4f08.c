typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x20];
    int f2c;
};
extern void call_8c19ed0c(S_vv1 *, int, int, int);
extern void call_8c19ea94(S_vv1 *, int, int);
void operation_8c1d4f08(Object *o, int a1, int a2, int a3)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2));
    if (a2 == 0) {
        call_8c19ed0c(v1, a1, 0, a3);
        v1->f08 += 18.0f;
        v1->f2c = -0x555556;
    } else {
        call_8c19ea94(v1, a2, a3);
    }
    if ((unsigned char)a1 == 4) {
        v1->f08 += 18.0f;
    }
    o->f82 += 1;
}
