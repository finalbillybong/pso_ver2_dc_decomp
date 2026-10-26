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
void operation_8c21f47c(Object *o, int a1, int a2)
{
    o->f1c &= -0x20;
    o->f1c |= a2 << 2;
    o->f1c |= a1;
    o->tag |= 1;
}
