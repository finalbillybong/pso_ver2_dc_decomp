/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03a630
 * function: operation_8c03a630
 * language: c++
 * reference size: 1060 bytes
 * compiled size: 1064 bytes (+0.4%)
 * differing lines: 78 of 388 reference instruction lines
 * differing bytes: 393
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv63 S_vv63;
class S_vv37;
typedef struct Block_frame_8 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
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
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x4];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x32];
    Arg0_38c *f38c;
    char unknown390[0x4];
    float f394;
    char unknown398[0x8];
    int f3a0;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv63 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
};
class S_vv37 {
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
typedef struct S_vv37Data {
    char unknown0[0x20];
    unsigned short f20;
} S_vv37Data;
struct Arg0_0 {
    short f00;
    char unknown2[0xe];
    float f10;
};
extern int g_8c418248;
extern int g_8c44be04;
extern int g_8c467870;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" void move_and_capture_position(void *, void *, Vector3);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" void apply_object_velocity(void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c0a1ed0(int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c03a630(Object *o)
{
    Frame frame;
    unsigned short v2;
    int v1;
    S_vv63 *v63;
    S_vv37 *v37;
    int v36;
    int v49;
    unsigned short v38;
    int v33;
    int v34;
    int v35;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    int t7;
    float t8;
    float t9;
    int t10;
    v2 = (unsigned short)o->f354;
    v1 = (int)0x1000;
    if ((unsigned int)(unsigned short)v2 < (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v2));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (S_c8c021ef8 *)t1;
            goto L_8c03a6be;
        }
        o->f334 = (S_c8c021ef8 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v2) {
            t2 = operation_8c012a14(v2);
            o->f334 = (S_c8c021ef8 *)(int)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (S_c8c021ef8 *)0;
        }
    }
L_8c03a6be:;
    o->f34 |= 0x6000000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c03a854;
        }
        if (o->f30c == 2) {
            goto L_8c03a9f8;
        }
    }
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    t3 = check_range_8c01cf68((void *)o, 8.0f);
    if (t3 == 0) {
        return;
    }
    v63 = (S_vv63 *)o->f334;
    if (v63 != 0) {
        t4 = call_8c0441d8(o, *(Vector3 *)&v63->f324);
        if (t4 != 0) {
            move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
            *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&o->f164;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f08), (void *)(&o->f324));
            t5 = signed_sqrt_8c37f6c0((&frame)->f08.f00 * (&frame)->f08.f00 + (&frame)->f08.f08 * (&frame)->f08.f08);
            o->f394 = t5 + -20.0f;
            o->f394 = o->f394 / (12.0f / o->f100);
            o->f30c = 1;
            goto L_8c03a80e;
        }
        o->f30c = 2;
    } else {
        o->f30c = 2;
    }
L_8c03a80e:;
    create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
    t6 = call_8c24e644(0x30002, (void *)(o->f38c));
    play_se_8c05fbf8(t6, (void *)(((char *)o + 0x3c)), 0, 0);
    return;
L_8c03a854:;
    call_8c044320(o, o->f394, *(Vector3 *)&o->f158, *(Vector3 *)&o->f164);
    apply_object_velocity((void *)o);
    t7 = check_range_8c01cf68((void *)o, 20.0f);
    if (t7 == 0) {
        return;
    }
    o->f30c = 2;
    v33 = (int)0x1000;
    v34 = (int)0x324;
    v35 = (int)0x33c;
    v49 = (int)0;
    goto L_8c03a982;
    v36 = (int)0;
L_8c03a8e0:;
    v37 = (S_vv37 *)*(S_g8c467240 **)((char *)0x8c467240 + (v36 << 2));
    v49 = (int)v36;
    if (v37 != 0) {
        v38 = (unsigned short)((S_vv37Data *)v37)->f20;
        v49 = (int)v36;
        if (v38 < (unsigned int)(unsigned short)v33) {
            t8 = squared_distance_xz((void *)((int)v37 + v34), (void *)((int)o + v34));
            if (!(t8 > ((*(Arg0_0 **)((char *)((char *)o + 0x0) + (v35)))->f10 * (*(Arg0_0 **)((char *)((char *)o + 0x0) + (v35)))->f10))) {
                (&frame)->f00.f00 = 0;
                (&frame)->f00.f04 = (float)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v35)))->f00;
                t9 = v37->v25(o, 0, *(Block8 *)&(&frame)->f00);
                v37->v27(o, t9);
            } else {
                if (!(t8 > 10000.0f) && g_8c418248 == ((S_vv37Data *)v37)->f20) {
                    operation_8c0a1ed0(0);
                }
            }
            v49 = (int)(v36 + 1);
L_8c03a982:;
            v36 = (int)v49;
            if (g_8c467870 > v49) {
                goto L_8c03a8e0;
            }
        }
    }
    create_effect_777c((void *)(((char *)o + 0x3c)), 0xcb);
    create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
    t10 = call_8c24e644(0x30003, (void *)(o->f38c));
    play_se_8c05fbf8(t10, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x300);
    return;
L_8c03a9f8:;
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    if (o->fec != 4) {
        o->f34 &= -0x6200001;
        o->fdc->f18 |= 1;
        o->f3a0 = -1;
        o->f358 = 0;
    }
}
