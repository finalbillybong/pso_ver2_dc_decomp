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
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    char unknown0[0x30];
    int f30;
};
struct S_vv1 {
    int f00;
};
void operation_8c22cd34(Object *o)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)o->f30->f00;
    o->f30->f00->f30 = (int)(((char *)o + 0x70));
    v1->f00 &= -3;
}
