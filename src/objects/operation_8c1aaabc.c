typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    short tag;
};
short operation_8c1aaabc(Object *o)
{
    short t;
    int v2;
    t = o->tag;
    if (t < 0 || t >= 3) {
        v2 = 0;
    } else {
        v2 = 1;
    }
    if (v2 == 0) {
        t = 0;
    }
    return t;
}
