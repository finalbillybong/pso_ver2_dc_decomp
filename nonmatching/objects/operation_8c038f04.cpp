/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c038f04
 * function: operation_8c038f04
 * language: c++
 * reference size: 984 bytes
 * compiled size: 984 bytes (+0.0%)
 * differing lines: 64 of 385 reference instruction lines
 * differing bytes: 70
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
class S_vv6;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x4];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x10];
    float f100;
    char unknown104[0x54];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19c];
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x34];
    short f358;
    char unknown35a[0x32];
    Arg0_38c *f38c;
    int f390;
    float f394;
    char unknown398[0x8];
    int f3a0;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
    Vector3 f14;
    float f20;
    float f24;
    float f28;
};
class S_vv6 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual float v25(Object *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv6Data {
    char unknown0[0x20];
    unsigned short f20;
} S_vv6Data;
extern int g_8c418248;
extern int g_8c467870;
extern "C" void operation_8c01c5f0(Object *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" float call_8c130334(float, float);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c0a1ed0(int);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c038f04(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    int v5;
    S_vv6 *v6;
    int v3;
    int v4;
    int t1;
    float t2;
    float t3;
    int t4;
    float t5;
    float t6;
    int t7;
    o->f34 |= 0x6000000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c03909e;
        }
        if (o->f30c == 2) {
            goto L_8c0391c0;
        }
    }
    (&frame)->f20 = 0.0f;
    (&frame)->f24 = -500.0f;
    (&frame)->f28 = 200.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be38c(0, (void *)(&(&frame)->f20), (void *)(&(&frame)->f20));
    njPopMatrix_8c38accc(1);
    *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&o->f54;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f14), (void *)(&(&frame)->f20));
    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f14;
    t1 = check_range_8c01cf68((void *)o, 8.0f);
    if (t1 == 0) {
        return;
    }
    *(Vector3 *)&o->f164 = *(Vector3 *)&o->f54;
    *(Vector3 *)&o->f158 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&o->f164;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f08), (void *)(&o->f3c));
    t2 = call_8c130334((&frame)->f08.f00, (&frame)->f08.f08);
    o->f64 = (Arg0_64 *)(int)(t2 * 65536.0f / 6.28318405f);
    t3 = signed_sqrt_8c37f6c0((&frame)->f08.f00 * (&frame)->f08.f00 + (&frame)->f08.f08 * (&frame)->f08.f08);
    o->f394 = t3;
    v1 = (float)12.0f;
    v2 = (float)(v1 / o->f100);
    o->f394 = o->f394 / v2;
    call_8c044320(o, o->f394, *(Vector3 *)&o->f158, *(Vector3 *)&o->f164);
    o->f31c = (&frame)->f08.f04 / v2;
    o->f30c = 1;
    return;
L_8c03909e:;
    o->f3c.f00 += o->f318;
    o->f3c.f04 += o->f31c;
    o->f3c.f08 += o->f320;
    t4 = check_range_8c01cf68((void *)o, 20.0f);
    if (t4 == 0) {
        return;
    }
    o->f30c = 2;
    v3 = (int)0x1000;
    v5 = (int)0;
    v4 = (int)0x324;
    while (g_8c467870 > v5) {
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
        if (v6 == 0) {
            goto L_8c039186;
        }
        if (!((unsigned int)((S_vv6Data *)v6)->f20 < (unsigned int)(unsigned short)v3)) {
            goto L_8c039186;
        }
        t5 = squared_distance_xz((void *)((int)v6 + v4), (void *)((int)o + v4));
        if (!(t5 > 2500.0f)) {
            (&frame)->f00.f00 = 0;
            (&frame)->f00.f04 = 25.0f;
            t6 = v6->v25(o, 0, *(Block8 *)&(&frame)->f00);
            v6->v27(o, t6);
        } else {
            if (!(t5 > 10000.0f) && g_8c418248 == ((S_vv6Data *)v6)->f20) {
                operation_8c0a1ed0(0);
            }
        }
        v5 = (int)(v5 + 1);
    }
L_8c039186:;
    create_effect_777c((void *)(&o->f3c), 0xcb);
    create_effect_777c((void *)(&o->f3c), 0xf0);
    t7 = call_8c24e644(0x30003, (void *)(o->f38c));
    play_se_8c05fbf8(t7, (void *)(&o->f3c), 0, 0);
    update_last_effect(-0x300);
    return;
L_8c0391c0:;
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    if (o->fec != 4) {
        o->f34 &= -0x6200001;
        o->fdc->f18 |= 1;
        o->f3a0 = -1;
        o->f358 = 0;
        o->f390 = 0;
    }
}
