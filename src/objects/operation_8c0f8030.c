typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv12 S_vv12;
typedef struct Block_frame_0 {
    short f00;
    short f02;
    char unknown4[0x2];
    short f06;
    char unknown8[0x8];
    Vector3 f10;
    char unknown1c[0x24];
} Block_frame_0;
typedef struct Block_p0_390 {
    short f00;
    char unknown2[0x4];
    unsigned short f06;
    char unknown8[0x38];
} Block_p0_390;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    Block_p0_390 f390;
    int f3d0;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg2 {
    Vector3 f00;
};
struct S_vv12 {
    int f00;
    int f04;
};
extern int operation_8c0f820c(int, int);
extern int operation_8c0f8278(int, int, int);
int operation_8c0f8030(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    S_vv12 *v12;
    int off;
    int t1;
    int t2;
    if (a1 < 0 || a1 >= o->f3d0 || *(int *)((char *)((char *)o + 0x3d4) + (off = a1 << 3)) != 0) {
        return 0;
    }
    *(Block64 *)&(&frame)->f00 = *(Block64 *)&o->f390;
    a1++;
    (&frame)->f00.f00 = o->f390.f00 + a1;
    (&frame)->f00.f02 = 0;
    (&frame)->f00.f06 = (o->f390.f06 & 0xffff) + a1;
    if (a2 == 0) {
        *(Vector3 *)&(&frame)->f00.f10 = *(Vector3 *)&o->f3c;
    } else {
        *(Vector3 *)&(&frame)->f00.f10 = *(Vector3 *)&a2->f00;
    }
    v12 = (S_vv12 *)((char *)o + off + 0x3d4);
    if (a3 == 0) {
        t1 = operation_8c0f820c((int)o, (int)(&frame));
        v12->f04 = (int)(t1);
    } else {
        t2 = operation_8c0f8278((int)o, (int)(&frame), a3);
        v12->f04 = (int)(t2);
    }
    if (v12->f04 == 0) {
        return 0;
    }
    v12->f00 = 1;
    return 1;
}
