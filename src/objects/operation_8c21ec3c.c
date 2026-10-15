typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x35];
    char f69;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
extern void call_8c0e2278(S_vv1 *, int, int);
extern void call_8c0e2328(S_vv1 *, float);
void operation_8c21ec3c(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)o->f30->f04;
    call_8c0e2278(v1, (int)(o->f69 * 0x24 + 0x8c4db528), 0);
    call_8c0e2328(v1, 100000.0f);
    v1->f08 = 380.0f - v1->f10;
}
