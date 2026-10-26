typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    short tag;
    short f02;
};
Object *operation_8c0d8e78(Object *o)
{
    o->f02 = 0;
    o->tag = 0;
    return o;
}
