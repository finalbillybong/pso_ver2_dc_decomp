typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    int f30;
    char unknown34[0x10];
    float f44;
};
struct S_vv2 {
    char unknown0[0x44];
    float f44;
};
void operation_8c097630(Object *o)
{
    S_vv2 *v2;
    if (o->f30 != 0) {
        v2 = (S_vv2 *)o;
    } else {
        if (!((o->f44 += 0.0833333358f) > 1.0f)) {
            return;
        }
        o->f44 = 1.0f;
        return;
    }
    if (0.0f > (v2->f44 += -0.222222224f)) {
        v2->f44 = 0.0f;
    }
}
