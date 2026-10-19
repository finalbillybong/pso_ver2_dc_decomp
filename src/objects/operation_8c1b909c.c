typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x50];
    float f3f4;
};
void operation_8c1b909c(Object *o)
{
    o->f3f4 = 0.2f;
    o->f3a0 = 0x31;
}
