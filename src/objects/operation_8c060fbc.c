typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_324 {
    float f00;
    float f04;
    float f08;
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x30];
    Block_p0_324 f78;
    char unknown84[0x2a0];
    Block_p0_324 f324;
    char unknown330[0xf8];
    float f428;
};
void operation_8c060fbc(Object *o)
{
    o->f324.f00 = o->f3c;
    o->f324.f04 = o->f428 + (o->f40 + 10.0f);
    o->f324.f08 = o->f44;
    o->f78 = o->f324;
}
