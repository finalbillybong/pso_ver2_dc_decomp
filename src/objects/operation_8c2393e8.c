typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13];
    char f13;
};
int operation_8c2393e8(Object *o)
{
    if (o->f13 < 0 || o->f13 > 0x63) {
        return 0;
    }
    return o->f13;
}
