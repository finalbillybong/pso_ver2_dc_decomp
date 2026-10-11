typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0xc];
    float f3c;
    float f40;
};
void operation_8c22c4dc(Object *o)
{
    o->f20 += o->f3c;
    o->f24 += o->f40;
    o->f28 = o->f24;
    o->f2c = o->f24;
}
