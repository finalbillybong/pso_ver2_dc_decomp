typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x30];
    int f3d4;
};
void operation_8c1b53e8(Object *o)
{
    o->f3a0 = (int)(o->f3d4);
}
