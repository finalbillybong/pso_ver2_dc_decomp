typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x14];
    Arg0_30_14 *f14;
    int f18;
};
struct Arg0_30_14 {
    int f00;
};
struct S_vv1 {
    int f00;
};
extern void call_8c1d6cf8(Object *);
void operation_8c1d6cd0(Object *o)
{
    char *v2;
    S_vv1 *v1;
    call_8c1d6cf8(o);
    v2 = (char *)o->f30->f18;
    v1 = (S_vv1 *)v2;
    o->f30->f14->f00 |= 2;
    v1->f00 |= 2;
}
