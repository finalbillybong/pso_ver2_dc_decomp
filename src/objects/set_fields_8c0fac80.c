typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    Vector3 f390;
};
void set_fields_8c0fac80(Object *o)
{
    o->f390 = o->f3c;
}
