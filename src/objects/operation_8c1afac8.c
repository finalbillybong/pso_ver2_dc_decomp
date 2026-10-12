typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x4];
    int f2c;
    int f30;
};
void operation_8c1afac8(Object *o)
{
    o->f20 += 8.0f;
    o->f24 += 2.0f;
    if (!(255.0f > o->f20)) {
        o->f20 = 255.0f;
    }
    if (!(70.0f > o->f24)) {
        o->f24 = 70.0f;
        if (o->f30 != 0) {
            ((void (*)(Object *))(o->f30))(o);
        }
        o->f2c = 0;
    }
}
