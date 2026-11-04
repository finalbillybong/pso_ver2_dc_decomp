/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b1060
 * function: TBoss4Type2_update_8c1b1060
 * language: c++
 * reference size: 592 bytes
 * compiled size: 592 bytes (+0.0%)
 * differing lines: 2 of 235 reference instruction lines
 * differing bytes: 1
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss4Type2.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3262f8 S_L8c3262f8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_430 Arg0_430;
typedef struct S_x53552 S_x53552;
typedef struct S_x62544 S_x62544;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    Arg0_394 *f394;
    char unknown398[0x4];
    Arg0_39c *f39c;
    char unknown3a0[0x28];
    float f3c8;
    char unknown3cc[0x24];
    float f3f0;
    char unknown3f4[0x38];
    Arg0_42c *f42c;
    Arg0_430 *f430;
};
struct Arg0_394 {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Block_frame_18 f18;
    Vector3 f24;
    Vector3 f30;
};
struct S_L8c3262f8 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x8];
    int f20;
};
struct S_x62544 {
    Vector3 f00;
};
struct S_x53552 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_39c {
    char unknown0[0x18];
    int f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c326680;
extern Vector3 g_8c32668c;
extern S_L8c3262f8 g_8c3262f8;
extern "C" int call_8c18e6fc(void *);
extern "C" void operation_8c1b1318(void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c027090(int);
extern "C" void call_8c102e38(void *, int, int, int, float);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void call_8c1b1578(Object *);
extern "C" void forward_effect_view(void *, void *);
extern "C" void TBoss4Type2_update_8c1b1060(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    v1 = (int)(o->f394->f394 == 0);
    if (v1 != 0) {
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&((S_x62544 *)((char *)&g_8c3262f8.f14 + o->f390 * 0x2c))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f30));
        if (t1 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f30)))();
        }
    }
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)((char *)&g_8c3262f8 + (o->f390 * 0x2c + 0x20));
    t2 = call_8c18e6fc((void *)(&(&frame)->f30));
    if (t2 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f30)))();
    }
    operation_8c1b1318((void *)o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    if (o->f3f0 == 0.0f) {
        o->f39c->f18 |= 1;
        refresh_follow_effect_8c052180((void *)o);
        operation_8c027090((int)o);
    } else {
        o->f39c->f18 = (unsigned int)o->f39c->f18 >> 1 << 1;
    }
    call_8c102e38((void *)(&o->f324), -0x5db4, 1, 1, 5.0f);
    if (o->f390 != 2) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f3c;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f3c;
        (&frame)->f18.f04 = 0.0f;
        njUnitVector_8c37b630((void *)(&(&frame)->f18));
        (&frame)->f18.f00 *= -50.0f;
        (&frame)->f18.f08 *= -50.0f;
        (&frame)->f18.f04 = 50.0f;
        call_8c3bdf60((void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
        if (o->f42c != 0) {
            call_8c0a7608((void *)(o->f42c), (void *)(&(&frame)->f24));
        }
        if (o->f430 != 0) {
            call_8c0a7608((void *)(o->f430), (void *)(&(&frame)->f24));
        }
        call_8c1b1578(o);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c326680;
    {
        Vector3 *p_ = (Vector3 *)&g_8c32668c;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    forward_effect_view((void *)(&(&frame)->f0c), (void *)(&frame));
    if (!(1.0f > (o->f3c8 += 0.0222222228f))) {
        o->f3c8 -= 1.0f;
    }
}
