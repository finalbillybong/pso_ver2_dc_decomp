typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
};
Object *operation_8c16b228(Object *o)
{
    o->tag = -1;
    o->f04 = 0;
    return o;
}
