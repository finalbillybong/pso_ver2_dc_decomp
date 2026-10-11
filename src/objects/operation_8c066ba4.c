typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x78];
    Vector3 f78;
    char unknown84[0x2a0];
    Vector3 f324;
    char unknown330[0x120];
    Vector3 f450;
};
void operation_8c066ba4(Object *o)
{
    o->f324 = o->f450;
    o->f78 = o->f324;
}
