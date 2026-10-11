typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    int f1c;
};
void operation_8c21f648(Object *o, int a1)
{
    int v1;
    v1 = a1;
    if (a1 != 0) {
        v1 = 1;
    }
    o->f1c &= -0x201;
    o->f1c |= v1 << 9;
    o->tag |= 1;
}
