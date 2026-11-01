/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0be9bc
 * function: operation_8c0be9bc
 * language: c++
 * reference size: 1020 bytes
 * compiled size: 1016 bytes (-0.4%)
 * differing lines: 58 of 361 reference instruction lines
 * differing bytes: 942
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c46f3d4 S_g8c46f3d4;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
class Arg0_3e0;
typedef struct Block_frame_18 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_18;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x8];
    float ff8;
    char unknownfc[0x5c];
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
    char unknown356[0x36];
    Arg0_38c *f38c;
    int f390;
    char unknown394[0x24];
    int f3b8;
    char unknown3bc[0x24];
    Arg0_3e0 *f3e0;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    Block_frame_18 f18;
};
class Arg0_3e0 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3e0Data {

} Arg0_3e0Data;
extern int g_8c44be04;
extern S_g8c46f3d4 *g_8c46f3d4;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int angle_halfway(int, int);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" void move_and_capture_position(void *, void *, Vector3);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void apply_object_velocity(void *);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0be070(void *);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0be9bc(Object *o)
{
    Frame frame;
    unsigned short v1;
    float v31;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (unsigned short)o->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v1));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (S_c8c021ef8 *)t1;
            goto L_8c0bea42;
        }
        o->f334 = (S_c8c021ef8 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v1) {
            t2 = operation_8c012a14(v1);
            o->f334 = (S_c8c021ef8 *)(int)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (S_c8c021ef8 *)0;
        }
    }
L_8c0bea42:;
    o->f34 |= 0x6000000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    operation_8c01c5f0(o);
    t3 = angle_halfway((int)(o->f3b8), 0);
    o->f3b8 = (int)t3;
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c0bec24;
        }
        if (o->f30c == 2) {
            goto L_8c0bed44;
        }
    } else {
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        t4 = check_range_8c01cf68((void *)o, 11.0f);
        if (t4 == 0) {
        } else {
            if (o->f334 == 0) {
            } else {
                t5 = call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
                if (t5 == 0) {
                } else {
                    o->f30c = 1;
                    move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
                    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f164;
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(&o->f324));
                    t6 = signed_sqrt_8c37f6c0((&frame)->f18.f00 * (&frame)->f18.f00 + (&frame)->f18.f08 * (&frame)->f18.f08);
                    call_8c044320(o, (t6 - 15.0f) * 0.0583333336f, *(Vector3 *)&o->f158, *(Vector3 *)&o->f164);
                    t7 = call_8c24e644(0x30003, (void *)(o->f38c));
                    play_se_8c05fbf8(t7, (void *)(((char *)o + 0x3c)), 0, 0);
                    goto L_8c0bec0a;
                }
            }
            o->f30c = 2;
L_8c0bec0a:;
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
            goto L_8c0bed80;
L_8c0bec24:;
            apply_object_velocity((void *)o);
            v31 = (float)o->ff8;
            if (!(11.0f > v31) && !(v31 > 27.0f)) {
                t8 = call_8c119190(g_8c46f3d4, v31);
                if (t8 != 0) {
                    njPushMatrixEx_8c38ae68();
                    njUnitMatrix_8c37b5c4(0);
                    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                    njRotateY_8c37df90(0, (void *)(o->f64));
                    call_8c3be2dc(0, t8, (Frame *)((&frame)), 2);
                    njPopMatrixEx_8c38ad10();
                    if (o->f3e0 != 0) {
                        o->f3e0->v5((&frame), &(&frame)->f0c);
                    }
                }
            }
            t9 = check_range_8c01cf68((void *)o, 23.0f);
            if (t9 != 0) {
                o->f30c = 2;
                operation_8c0be070((void *)o);
                create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
                t10 = call_8c24e644(0x30004, (void *)(o->f38c));
                play_se_8c05fbf8(t10, (void *)(((char *)o + 0x3c)), 0, 0);
                o->f390 &= -0x11;
                goto L_8c0bed80;
L_8c0bed44:;
                if (((o->f34 & 0x800000)) == 0) {
                    operation_8c04a43c((void *)o, 0.0f, (void *)0);
                }
                if (o->fec != 4) {
                    call_8c044410(o, (void *)(o->f64), 0.0f);
                    o->f34 &= -0x6200001;
                    o->fdc->f18 |= 1;
                }
            }
        }
    }
L_8c0bed80:;
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
