typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
void operation_8c172c30(Object *o, int a1, int a2)
{
    o->tag += a1;
    if (a1 > 0) {
        if (o->tag >= a2) {
            o->tag = a2;
            return;
        }
    }
    if (a2 > o->tag) {
        o->tag = a2;
    }
}
