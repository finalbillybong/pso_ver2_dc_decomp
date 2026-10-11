typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x220];
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x2a4];
    int f5c8;
};
void operation_8c1f03e0(Object *o)
{
    int v1;
    o->fe8 &= -0x41;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f34 &= -0x21;
    if (o->f30c == 1) {
        v1 = (int)(o->f20 == *(int *)0x8c418248);
        if (v1 != 0) {
            o->f5c8 = 0;
        }
    }
}
