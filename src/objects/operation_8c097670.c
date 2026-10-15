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
    char unknown34[0x14];
    float f48;
};
struct S_vv2 {
    char unknown0[0x48];
    float f48;
};
void operation_8c097670(Object *o)
{
    S_vv2 *v2;
    if (o->f30 != 1) {
        v2 = (S_vv2 *)o;
    } else {
        if (!(0.0f > (o->f48 += -0.222222224f))) {
            return;
        }
        o->f48 = 0.0f;
        return;
    }
    if ((v2->f48 += 0.0833333358f) > 1.0f) {
        v2->f48 = 1.0f;
    }
}
