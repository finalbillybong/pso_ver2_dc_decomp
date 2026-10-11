typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Block_p0_324 f3c;
    char unknown48[0x30];
    Block_p0_324 f78;
    char unknown84[0x2a0];
    Block_p0_324 f324;
};
void operation_8c05cfa0(Object *o)
{
    o->f324 = o->f3c;
    o->f324.f04 += 8.0f;
    o->f78 = o->f324;
}
