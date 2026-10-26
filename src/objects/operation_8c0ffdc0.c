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
Object *operation_8c0ffdc0(Object *o, int a1)
{
    o->tag = a1;
    o->f04 = -1;
    return o;
}
