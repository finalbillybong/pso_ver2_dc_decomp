typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x2e];
    short f82;
    char unknown84[0x10];
    Arg0_94 *f94;
};
struct S_vv1 {
    float f00;
    float f04;
};
void operation_8c1cdc30(Object *o)
{
    S_vv1 *v1;
    float v4;
    int v5;
    v1 = (S_vv1 *)o->f94;
    if (v1 != 0) {
        v4 = (float)(o->f50 - 18.0f);
        if (v1 != 0) {
            v4 = (float)(o->f50 - 18.0f - 15.0f);
        }
        v5 = (int)(o->f82 * 0x14);
        v1->f00 = v4;
        v1->f04 = (float)(v5 + -2);
    }
}
