typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x36c];
    int f3a4;
};
void operation_8c128b80(Object *o)
{
    o->f34 |= 0x4040000;
    *(int *)((char *)o + 0x3a4) &= -0x20000001;
    o->f3a4 |= 0x10000000;
}
