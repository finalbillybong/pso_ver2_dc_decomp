/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04e4a8
 * function: operation_8c04e4a8
 * language: c++
 * reference size: 2264 bytes
 * compiled size: 2284 bytes (+0.9%)
 * differing lines: 276 of 837 reference instruction lines
 * differing bytes: 1780
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv44_0 S_vv44_0;
typedef struct S_vv60 S_vv60;
typedef struct S_x13296 S_x13296;
typedef struct S_x13424 S_x13424;
typedef struct S_x99056 S_x99056;
class S_vv45;
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
    short ff0;
    char unknownf2[0xe];
    float f100;
    char unknown104[0xc];
    int f110;
    char unknown114[0x1f8];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    S_c8c021ef8 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    volatile unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    char unknown390[0x24];
    float f3b4;
    char unknown3b8[0x8];
    int f3c0;
    int f3c4;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
};
struct S_x99056 {
    float f00;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    float f14;
    Block_frame_18 f18;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    float f00;
    char unknown4[0x4];
    int f08;
};
struct Arg0_33c {
    char unknown0[0xc];
    int f0c;
};
struct S_x13424 {
    float f00;
};
class S_vv45 {
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
    virtual float v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv45Data {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
} S_vv45Data;
struct S_vv60 {
    char unknown0[0x4];
    float f04;
    int f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_x13296 {
    float f00;
};
extern int g_8c2e2ad8;
extern int g_8c418248;
extern int g_8c44be04;
extern int g_8c4703c0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c01c5f0(void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" float call_8c130334(float, float);
extern "C" float object_distance_by_id(void *, unsigned short, void *);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" float operation_8c054228(void *, int);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int call_8c0441d8(Object *, Vector3);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void move_and_capture_position(void *, void *, Vector3);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int operation_8c052648(void *, void *, float);
extern "C" void operation_8c0a1ed0(int);
extern "C" void call_8c043f28(Object *, int);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void apply_object_velocity(void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void create_effect_7ab8(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c04e4a8(Object *o)
{
    Frame frame;
    unsigned short v112;
    int v1;
    int v22;
    int v23;
    S_vv45 *v45;
    int v27;
    int v28;
    int v31;
    int v33;
    int v35;
    int v36;
    int v38;
    int v39;
    int v43;
    int v55;
    int v40;
    int v42;
    int v44;
    unsigned short v46;
    int v24;
    int v41;
    S_vv60 *v60;
    float v61;
    float v64;
    unsigned short v113;
    int v78;
    int v80;
    int v90;
    int v91;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    float t4;
    float t5;
    float t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float t12;
    float t13;
    int t14;
    float t15;
    float t16;
    float t17;
    float t18;
    v112 = (unsigned short)o->f354;
    v1 = (int)0x1000;
    if ((unsigned int)(v112 & 0xffff) < (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)(v112 & 0xffff));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (S_c8c021ef8 *)t1;
            goto L_8c04e51a;
        }
        o->f334 = (S_c8c021ef8 *)0;
    } else {
        o->f354 = 0xffff;
        o->f334 = (S_c8c021ef8 *)0;
    }
L_8c04e51a:;
    o->f34 &= -0x40001;
    if (o->f334 == 0) {
        o->f354 = 0xffff;
        o->f34 &= -0x4202001;
        o->f358 = 0;
        return;
    }
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c04e910;
        }
        if (o->f30c == 2) {
            goto L_8c04eca8;
        }
        if (o->f30c == 3) {
            goto L_8c04e898;
        }
        o->f30c = 0;
    }
    o->f34 &= -0x4000001;
    v22 = (int)0;
    v23 = (int)0x100;
    operation_8c05428c((void *)o, v22, v23);
    t2 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t2, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x200);
    o->f100 = ((S_x99056 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * 2.0f;
    operation_8c01c5f0((void *)o);
    operation_8c04a43c((void *)o, (void *)0, 0.0f);
    if (o->f334 == 0) {
    } else {
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f334->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(&o->f324));
        t3 = operation_43fb4((void *)o, (int)((int)((float)o->f36c->f08 * 2.0f)), (void *)(&(&frame)->f18));
        if (!(o->f33c->f0c > t3)) {
        } else {
            t18 = call_8c130334((&frame)->f18.f00, (&frame)->f18.f08);
            v24 = (int)(int)(t18 * 65536.0f / 6.28318405f);
            t4 = object_distance_by_id((void *)o, (unsigned short)(o->f354), (void *)0);
            t5 = signed_sqrt_8c37f6c0(t4);
            t6 = operation_8c054228((void *)o, 0);
            o->f3b4 = t5 + t6 + 30.0f;
            if (100.0f > o->f3b4) {
                o->f3b4 = 100.0f;
            }
            (&frame)->f18.f08 = 0.0f;
            (&frame)->f18.f00 = 0.0f;
            (&frame)->f18.f08 = o->f3b4;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, v24);
            call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f18));
            njPopMatrix_8c38accc(1);
            call_8c3bdf60((void *)(&(&frame)->f18), (void *)(&o->f324));
            t7 = call_8c0441d8(o, *(Vector3 *)&(&frame)->f18);
            if (t7 == 0) {
                t8 = call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
                if (t8 == 0) {
                    goto L_8c04e834;
                }
            }
            o->f30c = 3;
            o->ff0 = 7;
            o->f34 |= 0x4000000;
            v27 = (int)0;
            v28 = (int)0x100;
            operation_8c05426c((void *)o, v27, v28);
            move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
            t9 = call_8c24e644(0x30006, (void *)(o->f38c));
            play_se_8c05fbf8(t9, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
            goto L_8c04ed16;
L_8c04e834:;
            if ((o->f354 & 0xffff) == 0xffff) {
                o->f334 = (S_c8c021ef8 *)0;
            } else {
                o->f30c = 2;
                o->ff0 = 0;
                o->f358 = 0x5a;
            }
            v33 = (int)0;
            goto L_8c04e890;
            v31 = (int)0;
            do {
                *(int *)((char *)((char *)o + 0x3f0) + (v31 << 2)) = 0;
                v31 = (int)(v31 + 1);
                v33 = (int)v31;
L_8c04e890:;
                v31 = (int)v33;
            } while (0xc > v33);
            goto L_8c04ed16;
L_8c04e898:;
            o->f34 |= 0x4000000;
            v35 = (int)0;
            v36 = (int)0x100;
            operation_8c05426c((void *)o, v35, v36);
            operation_8c01c5f0((void *)o);
            operation_8c04a43c((void *)o, (void *)(int)(0.0f), (float)0);
            if (o->fec == 0x20) {
            } else {
                o->f30c = 1;
                o->ff0 = 1;
                o->f34 &= -0x4000001;
                operation_8c05428c((void *)o, 0, 0x100);
                goto L_8c04ed16;
L_8c04e910:;
                o->f34 &= -0x4000001;
                v38 = (int)0;
                v39 = (int)0x100;
                operation_8c05428c((void *)o, v38, v39);
                o->f100 = ((S_x13424 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * 2.0f;
                operation_8c01c5f0((void *)o);
                v40 = (int)0x3f0;
                v41 = (int)0x1000;
                v42 = (int)0x400;
                v55 = (int)0;
                goto L_8c04ea12;
                v43 = (int)0;
                do {
                    v44 = (int)(v43 << 2);
                    if (*(int *)((char *)((char *)((int)o + v40) + 0x0) + (v44)) == 0) {
                        v45 = (S_vv45 *)*(S_vv44_0 **)((char *)((char *)v44 + 0x0) + ((int)((void *)0x8c467240)));
                        if (v45 == 0) {
                            goto L_8c04ea18;
                        }
                        v46 = (unsigned short)((S_vv45Data *)v45)->f20;
                        if (!(v46 < (unsigned int)(unsigned short)v41)) {
                            goto L_8c04ea18;
                        }
                        t10 = operation_8c052648((void *)o, (void *)v45, 10000.0f);
                        if (t10 != 0) {
                            t11 = v45->v22(o, 1.0f);
                            if (t11 != 0) {
                                t12 = v45->v24(o, 1.0f);
                                ((S_vv45Data *)v45)->f34 |= v42;
                                v45->v27(o, t12 * 2.0f);
                                if (g_8c418248 == ((S_vv45Data *)v45)->f20) {
                                    operation_8c0a1ed0(1);
                                }
                                *(S_vv45 **)((char *)((char *)((int)o + v40) + 0x0) + (v44)) = (S_vv45 *)v45;
                            }
                        }
                    }
                    v43 = (int)(v43 + 1);
                    v55 = (int)v43;
L_8c04ea12:;
                    v43 = (int)v55;
                } while (0xc > v55);
L_8c04ea18:;
                if (o->f334 == 0) {
                } else {
                    v60 = (S_vv60 *)o->f36c;
                    v64 = (float)(v60->f04 * 2.0f);
                    if (g_8c2e2ad8 == 1) {
                        v64 = (float)(v60->f04 * 2.0f);
                        if (g_8c4703c0 == 3) {
                            v61 = (float)(v60->f04 * 2.0f * 2.0f);
                            v64 = (float)v61;
                        }
                    }
                    call_8c043f28(o, (int)((int)((float)v60->f08 * 2.0f)));
                    call_8c044410(o, (void *)(o->f64), v64);
                    apply_object_velocity((void *)o);
                    t13 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(&o->f324));
                    v113 = (unsigned short)0xffff;
                    if ((o->f354 & 0xffff) == v113) {
                        o->f3c0 += 1;
                    }
                    if (!(((v64 + o->fdc->f0c) * (v64 + o->fdc->f0c)) > t13) && !(t13 > (o->f36c->f00 * o->f36c->f00)) && !((float)o->f3c0 > 150.0f)) {
                        goto L_8c04eb76;
                    }
                    if ((o->f354 & 0xffff) == 0xffff) {
                        o->f334 = (S_c8c021ef8 *)0;
                    } else {
                        o->f30c = 2;
                        o->ff0 = 0;
                        o->f358 = 0x5a;
                    }
                    v80 = (int)0;
                    goto L_8c04eb6c;
                    v78 = (int)0;
                    do {
                        *(int *)((char *)((char *)o + 0x3f0) + (v78 << 2)) = 0;
                        v78 = (int)(v78 + 1);
                        v80 = (int)v78;
L_8c04eb6c:;
                        v78 = (int)v80;
                    } while (0xc > v80);
                    o->f3c0 = 0;
                }
L_8c04eb76:;
                t14 = call_8c24e644(0x30000, (void *)(o->f38c));
                call_8c05fd7c(t14, o, (void *)(((char *)o + 0x3c)), 0, 0);
                if (o->f3c4 == 0) {
                } else {
                    (&frame)->f10 = 0.0f;
                    (&frame)->f0c = 0.0f;
                    (&frame)->f14 = 4.0f;
                    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                    njRotateY_8c37df90(0, (int)(o->f64));
                    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
                    njPopMatrixEx_8c38ad10();
                    call_8c3bdf60((void *)(((char *)o + 0x390)), (void *)(&(&frame)->f0c));
                    t15 = signed_sqrt_8c37f6c0(o->f318 * o->f318);
                    t16 = call_8c130334(o->f320, t15);
                    (&frame)->f00 = -(int)(t16 * 65536.0f / 6.28318405f);
                    (&frame)->f04 = 0;
                    t17 = call_8c130334(o->f318, 0.0f);
                    (&frame)->f08 = (int)(t17 * 65536.0f / 6.28318405f);
                    create_effect_7ab8((void *)(((char *)o + 0x390)), (void *)(&frame), 0x150);
                    goto L_8c04ed16;
L_8c04eca8:;
                    o->f34 &= -0x4000001;
                    v90 = (int)0;
                    v91 = (int)0x100;
                    operation_8c05428c((void *)o, v90, v91);
                    o->f100 = ((S_x13296 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * 2.0f;
                    operation_8c01c5f0((void *)o);
                    operation_8c04a43c((void *)o, (void *)0, 0.0f);
                    *(short *)((char *)o + 0x358) -= 1;
                    if (!(o->f358 >= 0)) {
                        o->f34 &= -0x200001;
                        o->f358 = 0;
                        o->f354 = 0xffff;
                        o->f334 = (S_c8c021ef8 *)0;
                    }
                }
            }
        }
    }
L_8c04ed16:;
    transform_actor_records((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
