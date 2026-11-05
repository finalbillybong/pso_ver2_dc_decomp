typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x324];
    Vector3 f324;
    short f330;
    char unknown332[0x72];
    int f3a4;
    char unknown3a8[0x4];
    Arg0_3ac *f3ac;
    char unknown3b0[0x48];
    int f3f8;
    char unknown3fc[0x4];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_400 {
    char unknown0[0x330];
    short f330;
};
struct Arg0_404 {
    char unknown0[0x330];
    short f330;
};
extern void create_effect_7bc0(void *, void *, int, int, int);
extern void operation_8c15e8f0(int);
void TObjEnePanarms_state22_8c11d1d0(Object *o)
{
    Frame frame;
    int k;
    int k2;
    int k3;
    o->f3f8 = 0;
    o->f3ac->f18 = (unsigned int)o->f3ac->f18 >> 1 << 1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
    (&frame)->f00.f04 += 10.0f;
    create_effect_7bc0((void *)(&frame), (void *)(((char *)o + 0x60)), 0x106, 0x2d, 0x25);
    k2 = 0x404;
    k3 = 0x330;
    k = 0x400;
    *(short *)((char *)o + k3) = *(short *)((char *)*(Arg0_400 **)((char *)o + k) + k3) + *(short *)((char *)*(Arg0_404 **)((char *)o + k2) + k3);
    operation_8c15e8f0(*(int *)((char *)o + k));
    operation_8c15e8f0((int)(o->f404));
    o->f3a4 = 0x40;
}
