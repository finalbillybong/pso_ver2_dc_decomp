typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30c];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x22c];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x3c];
    int f5c8;
    char unknown5cc[0xe4];
    short f6b0;
    short f6b2;
    char unknown6b4[0x4];
    float f6b8;
    float f6bc;
    float f6c0;
};
extern void operation_021f88(void *, int, short);
void operation_8c1f1034(Object *o)
{
    o->f6b0 = 0;
    o->f6b2 = 0;
    o->f6b8 = 0.0f;
    o->f6c0 = 0.0f;
    o->f6bc = 0.0f;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
    o->f5c8 = 0;
    *(int *)((char *)o + 0x350) |= 4;
    o->f350 |= 0x200000;
    o->f30c = 0;
    operation_021f88((void *)o, 0x16, (short)0);
}
