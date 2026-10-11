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
    char unknownec[0x494];
    float f580;
    float f584;
    float f588;
};
void operation_8c1ef1d8(Object *o)
{
    o->f34 &= -0x201;
    *(int *)0x8c41cd2c = 0;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
    o->fe8 &= -0x41;
}
