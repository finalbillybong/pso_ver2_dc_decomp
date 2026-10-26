typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    float f24;
    float f28;
    float f2c;
};
void operation_8c0fcd60(Object *o, int a1)
{
    o->f28 = (float)a1;
    o->f24 = (float)a1;
    o->f20 = a1;
    o->f2c = 0.0f;
}
