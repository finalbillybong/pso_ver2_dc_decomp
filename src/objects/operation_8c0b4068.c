typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
Object *operation_8c0b4068(Object *o)
{
    o->tag = 0;
    return o;
}
