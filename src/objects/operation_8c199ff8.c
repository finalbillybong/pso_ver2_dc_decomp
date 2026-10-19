typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    unsigned char dispatch;
};
extern void call_8c19a0bc(Arg1 *, Frame *, float, unsigned char);
void operation_8c199ff8(Object *o, Arg1 *a1)
{
    Frame frame;
    (&frame)->f00 = a1->f00 + o->f04;
    (&frame)->f04 = a1->f04 + o->f08;
    call_8c19a0bc(a1, (Frame *)((&frame)), o->f0c, o->dispatch);
}
