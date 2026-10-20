typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_40 S_frame_40;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv3 S_vv3;
struct Arg1 {
    char unknown0[0x30];
    int f30;
    float f34;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    char unknown10[0x4];
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    int f3c;
    Frame *f40;
    int f44;
    int f48;
};
struct S_frame_40 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv3 {
    int f00;
    char unknown4[0xc];
    int f10;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
};
extern void call_8c38e2d0(void *, int, int, float);
void operation_8c1de51c(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv3 *v3;
    int v1;
    int v2;
    float t;
    if (a1->f30 >= 0) {
        t = a1->f34 + 0.0897f;
        (&frame)->f3c = (int)(&(&frame)->f14);
        (&frame)->f40 = (&frame);
        (&frame)->f44 = 0;
        (&frame)->f40->f00 = -0xc97444;
        (&frame)->f40->f04 = (int)((&frame)->f40->f00);
        (&frame)->f40->f08 = (int)((&frame)->f40->f00);
        (&frame)->f40->f0c = (int)((&frame)->f40->f00);
        v3 = (S_vv3 *)(&frame)->f40;
        v3->f10 = (int)(v3->f00);
        (&frame)->f48 = 5;
        (&frame)->f14 = o->f48;
        (&frame)->f18 = o->f4c;
        (&frame)->f1c = o->f48 + 2.0f + 1.0f + 304.0f;
        (&frame)->f20 = o->f4c;
        (&frame)->f24 = o->f48 + 2.0f + 1.0f + 304.0f;
        (&frame)->f28 = o->f4c + 2.0f + 1.0f + 133.0f;
        (&frame)->f2c = o->f48;
        (&frame)->f30 = o->f4c + 2.0f + 1.0f + 133.0f;
        (&frame)->f34 = (&frame)->f14;
        (&frame)->f38 = (&frame)->f18;
        v1 = (int)5;
        v2 = (int)2;
        call_8c38e2d0((void *)(&(&frame)->f3c), v1, v2, t);
    }
}
