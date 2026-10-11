typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    short tag;
};
void operation_8c207710(Object *o, int a1)
{
    o->tag += a1;
    if (o->tag < 0) {
        o->tag = 0;
    }
    if (o->tag > 0xc8) {
        o->tag = 0xc8;
    }
}
