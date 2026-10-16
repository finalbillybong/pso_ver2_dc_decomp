typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_484 Arg0_484;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x484];
    Arg0_484 *f484;
};
struct Arg0_484 {
    char unknown0[0x4];
    float f04;
};
extern void call_8c05b3a8(Object *, int, Frame *);
void operation_8c0911f4(Object *o, int a1)
{
    Frame frame;
    *(Block20 *)&(&frame)->f00 = *(Block20 *)&*(Block20 *)0x8c284ff8;
    (&frame)->f00.f04 = o->f484->f04;
    call_8c05b3a8(o, a1, (Frame *)((&frame)));
}
