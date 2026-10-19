typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    short f02;
    float f04;
};
Object *operation_8c07de9c(Object *o)
{
    o->tag = 0xffff;
    o->f02 = 0;
    o->f04 = 0.0f;
    return o;
}
