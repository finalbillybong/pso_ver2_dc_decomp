typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x1c];
    int f20;
};
void operation_8c1e5f5c(Object *o, int a1)
{
    o->tag |= 8;
    o->f20 = a1;
}
