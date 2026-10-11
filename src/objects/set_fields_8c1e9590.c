typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x22c];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2c];
    int f350;
    char unknown354[0x214];
    int f568;
    char unknown56c[0x14];
    float f580;
    float f584;
    float f588;
};
void set_fields_8c1e9590(Object *o)
{
    o->f34 &= -0xf01;
    o->f350 &= -0x81;
    o->f568 = 0;
    o->fe8 &= -0x41;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
}
