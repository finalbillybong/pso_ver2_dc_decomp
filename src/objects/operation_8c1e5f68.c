typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
void operation_8c1e5f68(Object *o, int a1)
{
    if (a1 != 0) {
        o->tag |= 0x10;
        return;
    }
    o->tag &= -0x11;
}
