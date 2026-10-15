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
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x232];
    Vector3 f324;
    char unknown330[0x7c];
    Arg0_3ac *f3ac;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
extern void create_effect_7bc0(void *, void *, int, int, int);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c11cdc0(Object *o)
{
    Frame frame;
    o->f3ac->f18 = (unsigned int)o->f3ac->f18 >> 1 << 1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
    (&frame)->f00.f04 += 10.0f;
    create_effect_7bc0((void *)(&frame), (void *)(((char *)o + 0x60)), 0x106, 0x22, 0x3c);
    call_8c05fbf8(0x3002d, (void *)(((char *)o + 0x3c8)), 0, 0);
    call_8c05fbf8(0x3002c, (void *)(((char *)o + 0x3e0)), 0, 0);
    o->ff0 = 0xa;
}
