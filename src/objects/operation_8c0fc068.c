typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    float f10;
};
void operation_8c0fc068(Object *o, int a1)
{
    o->f10 = 2.0f / (float)a1;
}
