typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0xc];
    float f40;
};
struct Arg0_30 {
    int f00;
};
struct S_vv1 {
    char unknown0[0x10];
    float f10;
};
extern void call_8c0e2328(S_vv1 *, float);
void operation_8c215ab8(Object *o)
{
    char *v24;
    S_vv1 *v1;
    v24 = (char *)o->f30->f00;
    if (v24 != 0) {
        v1 = (S_vv1 *)v24;
        call_8c0e2328(v1, 1000000.0f);
        o->f40 = v1->f10 + *(float *)0x8c2e160c * 2.0f;
    }
}
