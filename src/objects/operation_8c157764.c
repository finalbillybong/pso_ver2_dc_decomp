typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv11 S_vv11;
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x2e];
    short f82;
    char unknown84[0x10];
    Arg0_94 *f94;
};
struct S_vv11 {
    float f00;
    float f04;
};
void operation_8c157764(Object *o)
{
    S_vv11 *v11;
    int v1;
    v11 = (S_vv11 *)o->f94;
    if (v11 != 0) {
        v1 = (int)(o->f82 * 0x14 + -2);
        v11->f00 = o->f50 - 9.0f - 24.0f;
        v11->f04 = (float)v1;
    }
}
