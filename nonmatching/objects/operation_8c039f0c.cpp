/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c039f0c
 * function: operation_8c039f0c
 * language: c++
 * reference size: 1828 bytes
 * compiled size: 1804 bytes (-1.3%)
 * differing lines: 268 of 652 reference instruction lines
 * differing bytes: 1711
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -24 bytes
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
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_33c_c Arg0_33c_c;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
class Arg0_334;
typedef struct Block_frame_20 {
    float f00;
    float f04;
    float f08;
} Block_frame_20;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    Arg0_38c *f38c;
    char unknown390[0x10];
    int f3a0;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
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
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(Object *, int, Block8);
};
typedef struct Arg0_334Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_334Data;
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    int f08;
};
struct Frame {
    Block_frame_0 f00;
    int f08;
    int f0c;
    int f10;
    float f14;
    float f18;
    float f1c;
    Block_frame_20 f20;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
    Arg0_33c_c *f0c;
};
extern int g_8c44be04;
extern S_g8c44bea0 *g_8c44bea0;
extern int g_8c4703c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" void move_and_capture_position(void *, void *, Vector3);
extern "C" int call_8c043f28(Object *, int);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void apply_object_velocity(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int call_8c18e768(void *, int);
extern "C" int operation_8c03afe0(Object *);
extern "C" void TTecMegid_create_8c0b55f0(void *, void *, void *, void *);
extern "C" void TTecMegid_create_8c0b55a0(void *, void *, void *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" float normalize_vector_checked(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TTecZondeEff_ctor_2_8c0d0788(int, void *, void *, void *, float, float, int, int);
extern "C" void TTecGiBarta_create_8c0b1aa0(void *, void *, void *, void *);
extern "C" void create_effect_b0ffc(void *, void *, void *, void *);
extern "C" void create_effect_b0fac(void *, void *, void *, void *);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void create_effect_7ab8(void *, void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c039f0c(Object *o)
{
    Frame frame;
    unsigned short v1;
    char *v76;
    char *v77;
    int v23;
    char *v78;
    int v26;
    int v28;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    float t16;
    float t17;
    float t18;
    int t19;
    int t20;
    int t21;
    int t22;
    v1 = (unsigned short)o->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v1));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (Arg0_334 *)t1;
            goto L_8c039f92;
        }
        o->f334 = (Arg0_334 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v1) {
            t2 = operation_8c012a14(v1);
            o->f334 = (Arg0_334 *)(int)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (Arg0_334 *)0;
        }
    }
L_8c039f92:;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c03a0e4;
        }
        if (o->f30c == 2) {
            goto L_8c03a5d4;
        }
    }
    if (o->f334 == 0) {
        o->f30c = 2;
        o->f3a0 = -1;
        o->f34 &= -0x200001;
    } else {
        t3 = call_8c0441d8(o, *(Vector3 *)&((Arg0_334Data *)o->f334)->f324);
        if (t3 != 0) {
            move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
            v76 = (char *)o->f36c->f08;
            t20 = call_8c043f28(o, (int)(v76));
            call_8c044410(o, (void *)(o->f64), o->f36c->f04);
            apply_object_velocity((void *)o);
            v23 = (int)t20;
        } else {
            *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&((Arg0_334Data *)o->f334)->f324;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(&o->f324));
            v77 = (char *)o->f36c->f08;
            t21 = operation_43fb4((void *)o, (int)(v77), (void *)(&(&frame)->f20));
            v23 = (int)t21;
        }
        if (0x100 > v23) {
            o->f30c = 1;
            o->ff0 = 4;
            v28 = (int)v23;
        } else {
            o->ff0 = 2;
            goto L_8c03a60a;
L_8c03a0e4:;
            t4 = check_range_8c01cf68((void *)o, 22.0f);
            if (t4 == 0) {
            } else {
                (&frame)->f14 = 0.0f;
                (&frame)->f18 = 3.0f;
                (&frame)->f1c = 17.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(o->f64));
                call_8c3be38c(0, (void *)(&(&frame)->f14), (void *)(&(&frame)->f14));
                njPopMatrix_8c38accc(1);
                call_8c3bdf60((void *)(&(&frame)->f14), (void *)(&o->f324));
                if (o->f334 != 0) {
                    *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&((Arg0_334Data *)o->f334)->f324;
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(&o->f324));
                    v78 = (char *)o->f36c->f08;
                    t22 = operation_43fb4((void *)o, (int)(v78), (void *)(&(&frame)->f20));
                    v28 = (int)t22;
                } else {
                    v26 = (int)o->f33c->f0c;
                    v28 = (int)v26;
                }
                if (g_8c4703c0 != 3) {
                } else {
                    if (o->f384 != 1) {
                    } else {
                        t5 = call_8c18e768((void *)(o->f33c->f0c), 2);
                        if (t5 > v28 && o->f334 != 0) {
                            t6 = operation_8c03afe0(o);
                            TTecMegid_create_8c0b55f0((void *)o, (void *)(&(&frame)->f14), (void *)(((char *)o->f334 + 0x324)), (void *)t6);
                        } else {
                            t7 = operation_8c03afe0(o);
                            TTecMegid_create_8c0b55a0((void *)o, (void *)(&(&frame)->f14), (void *)(o->f64), (void *)t7);
                        }
                        play_se_8c05fbf8(0x2000b, (void *)(&(&frame)->f14), 0, 0);
                        goto L_8c03a56c;
                    }
                    create_effect_777c((void *)(&(&frame)->f14), 0xb9);
                    create_effect_777c((void *)(&(&frame)->f14), 0xba);
                    t8 = call_8c18e768((void *)(o->f33c->f0c), 2);
                    if (t8 > v28) {
                        t9 = normalize_vector_checked((void *)(&(&frame)->f20));
                        if (1e-07f > t9) {
                            (&frame)->f20.f00 = 0.0f;
                            (&frame)->f20.f04 = 0.0f;
                            (&frame)->f20.f08 = 1.0f;
                            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                            njRotateY_8c37df90(0, (void *)(o->f64));
                            call_8c3be38c(0, (void *)(&(&frame)->f20), (void *)(&(&frame)->f20));
                            njPopMatrixEx_8c38ad10();
                        }
                        if (o->f334 == 0) {
                            goto L_8c03a396;
                        }
                        (&frame)->f00.f00 = 3;
                        t10 = operation_8c03afe0(o);
                        (&frame)->f00.f04 = (float)t10 * 20.0f + 240.0f;
                        o->f334->v25(o, 0, *(Block8 *)&(&frame)->f00);
                    } else {
                        (&frame)->f20.f00 = 0.0f;
                        (&frame)->f20.f04 = 0.0f;
                        (&frame)->f20.f08 = 1.0f;
                        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                        njRotateY_8c37df90(0, (void *)(o->f64));
                        call_8c3be38c(0, (void *)(&(&frame)->f20), (void *)(&(&frame)->f20));
                        njPopMatrixEx_8c38ad10();
                    }
L_8c03a396:;
                    t11 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t11 != 0) {
                        TTecZondeEff_ctor_2_8c0d0788(t11, g_8c44bea0, (void *)(&(&frame)->f14), (void *)(&(&frame)->f20.f00), o->f33c->f08, 1.8f, 0x14000000, 0x14);
                    }
                    play_se_8c05fbf8(0x20008, (void *)(&(&frame)->f14), 0, 0);
                    goto L_8c03a56c;
                }
                if (o->f384 != 1) {
                } else {
                    t12 = operation_8c03afe0(o);
                    TTecGiBarta_create_8c0b1aa0((void *)o, (void *)(&(&frame)->f14), (void *)(o->f64), (void *)t12);
                    goto L_8c03a4b8;
                }
                t13 = call_8c18e768((void *)(o->f33c->f0c), 2);
                if (t13 > v28 && o->f334 != 0) {
                    t14 = operation_8c03afe0(o);
                    create_effect_b0ffc((void *)o, (void *)(&(&frame)->f14), (void *)(((char *)o->f334 + 0x324)), (void *)t14);
                    goto L_8c03a4b8;
                }
                t15 = operation_8c03afe0(o);
                create_effect_b0fac((void *)o, (void *)(&(&frame)->f14), (void *)(o->f64), (void *)t15);
L_8c03a4b8:;
                (&frame)->f20.f00 = 0.0f;
                (&frame)->f20.f04 = 0.0f;
                (&frame)->f20.f08 = 1.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(o->f64));
                call_8c3be38c(0, (void *)(&(&frame)->f20), (void *)(&(&frame)->f20));
                njPopMatrix_8c38accc(1);
                t16 = signed_sqrt_8c37f6c0((&frame)->f20.f00 * (&frame)->f20.f00 + (&frame)->f20.f04 * (&frame)->f20.f04);
                t17 = errno_wrap_8c130334((&frame)->f20.f08, t16);
                (&frame)->f08 = (int)(t17 * 65536.0f / 6.28318405f);
                (&frame)->f0c = 0;
                t18 = errno_wrap_8c130334((&frame)->f20.f00, (&frame)->f20.f04);
                (&frame)->f10 = -(int)(t18 * 65536.0f / 6.28318405f);
                create_effect_7ab8((void *)(&(&frame)->f14), (void *)(&(&frame)->f08), 0xcc);
                t19 = call_8c24e644(0x30005, (void *)(o->f38c));
                play_se_8c05fbf8(t19, (void *)(&(&frame)->f14), 0, 0);
            }
L_8c03a56c:;
            if (o->fec != 4) {
                o->f30c = 2;
                o->f358 = 0x1e;
                v23 = (int)v28;
                goto L_8c03a60a;
L_8c03a5d4:;
                *(int *)((char *)o + 0x3a0) += 1;
                if (o->f3a0 >= 2) {
                    o->f3a0 = -1;
                    o->f34 &= -0x200001;
                } else {
                    o->f30c = 0;
                    o->f358 = 0;
                }
            }
        }
    }
    v23 = (int)v28;
L_8c03a60a:;
    operation_8c04a43c((void *)o, (void *)0, 0.0f);
    refresh_follow_effect_8c052180((void *)o);
}
