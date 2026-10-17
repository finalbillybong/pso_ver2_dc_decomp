typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void call_8c029cf0(Block8);
void operation_8c02a340(Object *o)
{
    Frame frame;
    (&frame)->f00.f04 = 0.0f;
    if (((o->f34 & 1)) != 0) {
        (&frame)->f00.f00 = 0xf;
        call_8c029cf0(*(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 2)) != 0) {
        (&frame)->f00.f00 = 0x10;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 0x40)) != 0) {
        (&frame)->f00.f00 = 7;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 8)) != 0) {
        (&frame)->f00.f00 = 0x11;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 0x10)) != 0) {
        (&frame)->f00.f00 = 0x12;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 0x20)) != 0) {
        (&frame)->f00.f00 = 2;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
    if (((o->f34 & 4)) != 0) {
        (&frame)->f00.f00 = 3;
        ((void (*)(Object *, Block8))call_8c029cf0)(o, *(Block8 *)&(&frame)->f00);
    }
}
