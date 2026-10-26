typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    float f04;
    int f08;
};
Object *operation_8c026b04(Object *o)
{
    o->tag = 0;
    o->f04 = 0.0f;
    o->f08 = 0;
    return o;
}
