typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    float f04;
    float f08;
    float f0c;
};
Object *operation_8c0b4020(Object *o)
{
    o->tag = 0;
    o->f0c = 0.0f;
    o->f08 = 0.0f;
    o->f04 = 0.0f;
    return o;
}
