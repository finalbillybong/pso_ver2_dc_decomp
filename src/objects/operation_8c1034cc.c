typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char f01;
    short f02;
};
Object *operation_8c1034cc(Object *o)
{
    o->tag = 0;
    o->f01 = 0;
    o->f02 = 0;
    return o;
}
