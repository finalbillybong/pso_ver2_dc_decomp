typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_144 Arg0_144;
typedef struct Arg0_s130 Arg0_s130;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_p0_114 {
    float f00;
    float f04;
    float f08;
} Block_p0_114;
struct Arg0_s130 {
    char unknown0[0x14];
    Arg0_144 *f14;
};
struct Arg0_144 {
    char unknown0[0x18];
    int f18;
};
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0xa4];
    int fec;
    char unknownf0[0x4];
    float ff4;
    char unknownf8[0x4];
    float ffc;
    char unknown100[0x4];
    float f104;
    char unknown108[0xc];
    Block_p0_114 f114;
    Vector3 f120;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Vector3 f00;
    Vector3 f0c;
};
extern S_c8c011290 *call_8c011290(Frame *, int);
void operation_8c0f42a8(Object *o)
{
    Frame frame;
    int t1;
    S_c8c011290 *t2;
    t1 = ((int (*)(void *))(((Arg0_s130 *)((char *)o + 0x130))->f14->f18))((void *)(((char *)o + 0x130)));
    if (t1 != 0) {
        o->fec = 0;
    }
    o->f114.f00 += o->ff4 * 10.0f * 0.2f;
    o->f114.f08 += o->ffc * 10.0f * 0.2f;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f114;
    (&frame)->f00.f04 = 20.0f;
    t2 = call_8c011290((Frame *)((&frame)), 0x16ef);
    if (t2 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t2->f04->f00;
        *(Vector3 *)&o->f120 = *(Vector3 *)&t2->f04->f0c;
    } else {
        o->f3c.f00 = o->f114.f00;
        o->f3c.f08 = o->f114.f08;
    }
    o->f104 = o->f114.f04 - o->f3c.f04;
    if (10.0f > o->f104) {
        o->f114.f04 = o->f3c.f04 + 10.0f;
        o->f104 = 10.0f;
    }
}
