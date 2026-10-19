typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c310bd8 S_L8c310bd8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct S_x44560 S_x44560;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x64];
    int f3f8;
};
struct Frame {
    Vector3 f00;
};
struct S_L8c310bd8 {
    char unknown0[0xc];
    int f0c;
};
struct S_x44560 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c310bd8 g_8c310bd8;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c11b3dc(void *, int);
extern "C" void call_8c11b9c0(Object *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void update_context_blend(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c01c5f0(Object *);
extern "C" void call_8c102cd0(void *, int, int, int);
extern "C" void operation_8c11aff0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    if (o->f390 != 0) {
        t1 = operation_8c03d338();
        if (t1 != 0) {
            operation_8c11b3dc((void *)o, 0);
        }
    }
    call_8c11b9c0(o);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x44560 *)((char *)&g_8c310bd8.f0c + o->f390 * 0x18))->f00;
    t2 = call_8c18e6fc((Frame *)((&frame)));
    if (t2 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        if (o->f3f8 != 0) {
            o->f34 &= -0x2000001;
        } else {
            o->f34 |= 0x2000000;
        }
        *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
        if (o->f184 != 0) {
            o->f324.f04 += o->f184->f10 * 0.5f;
        }
        if (o->f390 != 0) {
            update_context_blend((void *)(((char *)o + 0x41c)));
            if (o->f3f8 != 0) {
                call_8c027090(o);
                call_8c01c5f0(o);
            }
            if (o->f3f8 != 0 && o->f390 != 4) {
                goto L_8c11b0d4;
            }
            if (o->f390 == 1) {
L_8c11b0d4:;
                call_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
            }
        }
    }
}
