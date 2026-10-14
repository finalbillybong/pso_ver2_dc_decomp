typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xc];
    Block_p0_3c f54;
    char unknown60[0x340];
    float f3a0;
    int f3a4;
    char unknown3a8[0x4];
    Arg0_3ac *f3ac;
    char unknown3b0[0x48];
    int f3f8;
    int f3fc;
    char unknown400[0x40];
    int f440;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
extern int operation_8c051ff4(void *, void *, void *);
void operation_8c11bc2c(Object *o)
{
    Frame frame;
    int t1;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f54;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 += 10.0f;
    t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)(((char *)o + 0x170)));
    if (t1 != 0) {
        o->f3a0 = (&frame)->f00.f04;
    }
    o->f3c.f04 = o->f3a0 + -39.6000023f;
    o->f34 |= 0x40000;
    o->f3ac->f18 = (unsigned int)o->f3ac->f18 >> 1 << 1;
    o->f3ac->f18 |= 0x10000000;
    o->f3fc = 0;
    o->f3f8 = 0;
    o->f3a4 = (int)(o->f440);
}
