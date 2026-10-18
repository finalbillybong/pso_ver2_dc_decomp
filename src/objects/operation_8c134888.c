typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    char unknown2c[0x10];
    Vector3 f3c;
};
extern void call_8c37b630(Frame *);
extern void operation_8c0c5488(void *, Frame *, int, int);
void operation_8c134888(Object *o)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c37b630((Frame *)((&frame)));
    (&frame)->f00.f00 *= 7.0f;
    (&frame)->f00.f04 *= 7.0f;
    (&frame)->f00.f08 *= 7.0f;
    (&frame)->f00.f00 += o->f20;
    (&frame)->f00.f04 += o->f24;
    (&frame)->f00.f08 += o->f28;
    operation_8c0c5488((void *)(&o->f20), (Frame *)((&frame)), -0x10000, -0x10000);
}
