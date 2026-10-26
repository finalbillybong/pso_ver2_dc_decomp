typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
int operation_8c03c1b8(Object *o, int a1)
{
    o->tag -= a1;
    if (!(o->tag >= 0)) {
        o->tag = 0;
        return 0;
    }
    return 1;
}
