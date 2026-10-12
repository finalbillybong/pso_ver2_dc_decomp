typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
int operation_8c21f354(Object *o)
{
    if (((o->tag & 1)) != 0) {
        return 1;
    }
    return ((o->tag & 2)) != 0;
}
