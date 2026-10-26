typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
void operation_8c19b4e0(Object *o)
{
    S_vv1 *v1;
    if (o->f54 != 0) {
        v1 = (S_vv1 *)o->f54;
        v1->f04 |= 1;
        o->f54 = (Arg0_54 *)0;
    }
}
