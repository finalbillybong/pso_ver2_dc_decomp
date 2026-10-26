typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
    float f08;
    float f0c;
    float f10;
};
Object *operation_8c02cc68(Object *o)
{
    o->tag = 0;
    o->f04 = 0;
    o->f10 = 0.0f;
    o->f0c = 0.0f;
    o->f08 = 0.0f;
    return o;
}
