typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    float f68;
    float f6c;
    float f70;
};
void operation_8c2154f0(Object *o, int a1, int a2)
{
    o->f6c = (float)a1;
    o->f70 = (float)a2;
    o->f68 = 1.0f / o->f6c;
}
