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
    char unknown0[0x3c];
    Block_frame_0 f3c;
};
extern void call_8c37f6f0(Frame *, void *);
extern void call_8c3bdf60(void *, Frame *);
void operation_8c0fac9c(Object *o)
{
    Frame frame;
    (&frame)->f00 = o->f3c;
    call_8c37f6f0((&frame), ((char *)o + 0x390));
    (&frame)->f00.f00 = (&frame)->f00.f00 * 0.025f;
    (&frame)->f00.f04 = (&frame)->f00.f04 * 0.025f;
    (&frame)->f00.f08 = (&frame)->f00.f08 * 0.025f;
    call_8c3bdf60(((char *)o + 0x390), (&frame));
}
