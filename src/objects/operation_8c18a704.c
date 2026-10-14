typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_70 Arg0_70;
typedef struct Block_p0_30 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_30;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0x4];
    Block_p0_30 f30;
    float f3c;
    char unknown40[0x1c];
    float f5c;
    float f60;
    float f64;
    float f68;
    int f6c;
    Arg0_70 *f70;
};
struct Arg0_70 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Block_p0_30 f3c;
};
extern void call_8c0a7608(void *, void *);
extern void call_8c013b2c(int, float, float);
void operation_8c18a704(Object *o)
{
    o->f6c += 0x139d;
    if (o->f70 != 0) {
        o->f30 = o->f70->f3c;
    }
    o->f30.f04 = o->f28 * o->f5c / 29.0f + o->f30.f04;
    if (o->f20 != 0) {
        call_8c0a7608((void *)(o->f20), (void *)(&o->f30));
    }
    o->f3c = 1.0f - o->f28 / 29.0f;
    if (o->f70 != 0) {
        call_8c013b2c((int)(o->f70->f20), o->f64, o->f60);
    }
    if (!(1.0f > o->f60)) {
        o->f68 = o->f68 * -1.0f;
    }
    o->f60 += o->f68;
    if (o->f28 == 29.0f) {
        o->f04 |= 1;
    }
    o->f28 += 1.0f;
}
