typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
int operation_8c03c1a4(Object *o)
{
    if (o->tag < 0 || o->tag > 0x63) {
        return 0;
    }
    return (int)(o->tag);
}
