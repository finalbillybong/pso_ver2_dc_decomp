typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x2a0];
    Vector3 f324;
};
void operation_8c1750c8(Object *o)
{
    o->f324 = o->f3c;
    o->f78 = o->f324;
}
