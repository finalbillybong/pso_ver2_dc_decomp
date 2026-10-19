typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    short f02;
};
Object *operation_8c1849f4(Object *o)
{
    o->tag = 0xffff;
    o->f02 = 0;
    return o;
}
