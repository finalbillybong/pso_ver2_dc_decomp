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
void operation_8c1e5f20(Object *o, int a1)
{
    o->tag |= 4;
    o->f1c = a1;
}
