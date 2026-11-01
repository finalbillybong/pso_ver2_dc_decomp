/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12609c
 * function: operation_8c12609c
 * language: c++
 * reference size: 996 bytes
 * compiled size: 996 bytes (+0.0%)
 * differing lines: 56 of 381 reference instruction lines
 * differing bytes: 48
 * provenance: generator draft (mode switch2ext)
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
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
class Arg0_334;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0xec];
    int fec;
    short ff0;
    char unknownf2[0x226];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x34];
    float f3dc;
    char unknown3e0[0x16];
    short f3f6;
};
class Arg0_334 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25(Object *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_334Data;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
};
extern Block8 g_8c312298;
extern "C" void request_actor_mode_zero_8c1275a8(void *);
extern "C" void call_8c0c3128(Object *, float);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" void move_and_capture_position(void *, void *, Vector3);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" int query_capped_segment(void *, void *);
extern "C" void apply_object_velocity(void *);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" float distance_xz(void *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c12609c(Object *o)
{
    Frame frame;
    int v1;
    float v37;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    float t7;
    if (o->f398 == -1) {
    } else {
        switch (o->f398) {
        case 0:
            v1 = (int)(((o->f3a4 & 0x1000000)) != 0);
            if (v1 == 0) {
                request_actor_mode_zero_8c1275a8((void *)o);
                return;
            }
            call_8c0c3128(o, 250.0f);
            if ((o->f354 & 0xffff) != 0xffff) {
                o->ff0 = 1;
                o->f398 = 1;
                t1 = call_8c0441d8(o, *(Vector3 *)&o->f324);
                if (t1 == 0) {
                    goto L_8c12640e;
                }
                move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
                goto L_8c12640e;
            }
            request_actor_mode_zero_8c1275a8((void *)o);
            break;
        case 1:
            if (o->f334 == 0) {
                request_actor_mode_zero_8c1275a8((void *)o);
                goto L_8c12640e;
            }
            o->f31c = 0.0f;
            call_8c044320(o, 0.7f, *(Vector3 *)&o->f324, *(Vector3 *)&((Arg0_334Data *)o->f334)->f324);
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f324;
            (&frame)->f0c.f00 = o->f318 + (&frame)->f0c.f00;
            (&frame)->f0c.f08 += o->f320;
            t2 = query_capped_segment((void *)o, (void *)(&(&frame)->f0c));
            if (t2 == 0) {
                apply_object_velocity((void *)o);
            }
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(&o->f318));
            t3 = distance_xz((void *)(&o->f324), (void *)(((char *)o->f334 + 0x324)));
            o->f3dc = t3;
            v37 = (float)o->f33c->f08;
            if ((v37 * v37) < o->f3dc) {
                goto L_8c12640e;
            }
            o->ff0 = 2;
            o->f398 = 2;
            play_se_8c05fbf8(0x30033, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 2:
            if (o->f334 == 0) {
                request_actor_mode_zero_8c1275a8((void *)o);
            } else {
                o->f31c = 0.0f;
                call_8c044320(o, 0.7f, *(Vector3 *)&o->f324, *(Vector3 *)&((Arg0_334Data *)o->f334)->f324);
                apply_object_velocity((void *)o);
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
                (&frame)->f00.f00 += o->f318;
                (&frame)->f00.f08 += o->f320;
                t4 = query_capped_segment((void *)o, (void *)(&frame));
                if (t4 == 0) {
                    apply_object_velocity((void *)o);
                }
                t5 = check_range_8c01cf68((void *)o, 10.0f);
                if (t5 != 0) {
                    t6 = o->f334->v22(o, 1.0f);
                    if (t6 != 0) {
                        t7 = object_random_fraction((void *)o);
                        if (!(t7 > 0.1f)) {
                            o->f334->v25(o, 0, *(Block8 *)&g_8c312298);
                        }
                        o->f334->v24(o, 1.0f);
                        o->f334->v27(o, 3.0f);
                    }
                    o->f3f6 += 1;
                }
                if (o->fec != 4) {
                    request_actor_mode_zero_8c1275a8((void *)o);
                }
            }
        }
    }
L_8c12640e:;
    operation_8c01c5f0(o);
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    refresh_follow_effect_8c052180((void *)o);
}
