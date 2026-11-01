/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c6818
 * function: operation_8c0c6818
 * language: c++
 * reference size: 668 bytes
 * compiled size: 672 bytes (+0.6%)
 * differing lines: 14 of 270 reference instruction lines
 * differing bytes: 591
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct Arg0_128 Arg0_128;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_se4 Arg0_se4;
typedef struct S_vv68 S_vv68;
class S_c8c053d84;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xde];
    Block8 fe4;
    char unknownec[0x4];
    Vector3 ff0;
    char unknownfc[0x28];
    int f124;
    Arg0_128 *f128;
    float f12c;
    Arg0_130 *f130;
    int f134;
    unsigned short f138;
    unsigned short f13a;
};
struct S_vv68 {
    Block8 f00;
    int f08;
};
struct Arg0_se4 {
    char unknown0[0x8];
    int f08;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f08;
};
class S_c8c053d84 {
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
    virtual void v25(S_c8c053d84 *, int, Block8);
};
typedef struct S_c8c053d84Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2ec];
    Vector3 f324;
} S_c8c053d84Data;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void set_effect_bit0(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void scale_vector_to_length(void *, float);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" int operation_8c011214(int, int, int);
extern "C" float squared_distance_xyz(void *, void *);
extern "C" void request_actor_mode_twelve(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void trigger_actor_view_countdown(void *, void *);
extern "C" void operation_8c0c6818(Object *o)
{
    Frame frame;
    S_vv68 *v68;
    S_c8c053d84 *t1;
    char *v2;
    S_c8c053d84 *t2;
    int t3;
    float t4;
    t1 = lookup_object_by_id((unsigned short)(o->f13a));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(o->f138));
    if (o->f134 != 0) {
        if (o->f134 != 1) {
            return;
        }
    } else {
        *(int *)((char *)o + 0x124) -= 1;
        if (!(o->f124 > 0)) {
            o->f124 = 0;
            v68 = (S_vv68 *)o->f128;
            *(Block8 *)&o->fe4 = *(Block8 *)&v68->f00;
            v2 = (char *)v68->f08;
            ((Arg0_se4 *)((char *)o + 0xe4))->f08 = (int)v2;
            o->f134 = 1;
            play_se_8c05fbf8(0x30028, (void *)(&o->fe4), 0, 0);
            return;
        }
        if (o->f130 == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f130));
        return;
    }
    *(int *)((char *)o + 0x124) += 1;
    if (o->f124 >= 0x5a) {
        o->f04 |= 1;
        return;
    }
    if (t2 != 0) {
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&((S_c8c053d84Data *)t2)->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f08), (void *)(&o->fe4));
        scale_vector_to_length((void *)(&(&frame)->f08), o->f12c);
        o->f12c += *(float *)0x8c46f400;
        call_8c3bdf60((void *)(((char *)o + 0xfc)), (void *)(&(&frame)->f08));
        scale_vector_to_length((void *)(((char *)o + 0xfc)), *(float *)0x8c46f3f8);
    }
    *(Vector3 *)&o->ff0 = *(Vector3 *)&o->fe4;
    call_8c3bdf60((void *)(&o->fe4), (void *)(((char *)o + 0xfc)));
    if (o->f130 != 0) {
        call_8c0a7608((void *)(o->f130), (void *)(&o->fe4));
    }
    t3 = operation_8c011214((int)(&o->ff0), (int)(&o->fe4), -1);
    if (t3 != 0) {
        o->f04 |= 1;
        return;
    }
    if (t2 != 0 && ((((S_c8c053d84Data *)t2)->f34 & 0x4000a00)) == 0) {
        t4 = squared_distance_xyz((void *)(&o->fe4), (void *)(((char *)t2 + 0x324)));
        if (!(t4 > (*(float *)0x8c46f3f8 **(float *)0x8c46f3f8))) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c3065f0;
            (&frame)->f00.f04 = (float)*(int *)0x8c46f408;
            t2->v25(t1, 0, *(Block8 *)&(&frame)->f00);
            if (((((S_c8c053d84Data *)t2)->f34 & 0x800)) != 0) {
                request_actor_mode_twelve((void *)t1);
            }
            create_effect_777c((void *)(((char *)t2 + 0x324)), 0xfb);
            create_effect_777c((void *)(((char *)t2 + 0x324)), 0xfc);
            if (*(int *)0x8c418248 == (o->f138 & 0xffff)) {
                trigger_actor_view_countdown((void *)t1, (void *)t2);
            }
            o->f04 |= 1;
        }
    }
}
