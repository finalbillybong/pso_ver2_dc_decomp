typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    float tag;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
};
Object *operation_8c199b8c(Object *o, Arg1 *a1)
{
    o->tag = a1->f00;
    o->f04 = a1->f04;
    return o;
}
