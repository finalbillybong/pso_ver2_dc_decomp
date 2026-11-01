/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c147e28
 * function: operation_8c147e28
 * language: c++
 * reference size: 2288 bytes
 * compiled size: 2456 bytes (+7.3%)
 * differing lines: 1268 of 854 reference instruction lines
 * differing bytes: 2333
 * provenance: generator draft (experimental generator, mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +168 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_10 S_frame_10;
typedef struct S_frame_14 S_frame_14;
typedef struct S_frame_18 S_frame_18;
typedef struct S_frame_1c S_frame_1c;
typedef struct S_frame_1c_0 S_frame_1c_0;
typedef struct S_frame_20 S_frame_20;
typedef struct S_frame_24 S_frame_24;
typedef struct Arg0_3e8 Arg0_3e8;
typedef struct Arg0_508 Arg0_508;
typedef struct Arg0_50c Arg0_50c;
typedef struct Arg0_640 Arg0_640;
typedef struct Arg0_75c Arg0_75c;
typedef struct Arg0_s508 Arg0_s508;
typedef struct S_vv1 S_vv1;
typedef struct S_vv50 S_vv50;
typedef struct S_x33888 S_x33888;
typedef struct S_x5248 S_x5248;
class Object;
class Arg0_600;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
typedef struct Block_p0_508 {
    Arg0_508 *f00;
    char unknown4[0x8];
} Block_p0_508;
typedef struct Block_frame_28 {
    float f00;
    float f04;
    float f08;
} Block_frame_28;
struct Frame {
    int f04;
    int f08;
    char unknownc[0x4];
    S_frame_10 *f10;
    S_frame_14 *f14;
    S_frame_18 *f18;
    S_frame_1c *f1c;
    S_frame_20 *f20;
    S_frame_24 *f24;
    Block_frame_28 f28;
};
class Object {
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x20];
    int f68;
    char unknown6c[0x7c];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2e0];
    int f3dc;
    char unknown3e0[0x8];
    Arg0_3e8 *f3e8;
    char unknown3ec[0x11c];
    Block_p0_508 f508;
    char unknown514[0x160];
    int f674;
    char unknown678[0x4c];
    float f6c4;
    char unknown6c8[0x54];
    float f71c;
    float f720;
    char unknown724[0x8];
    float f72c;
    float f730;
    char unknown734[0x28];
    Arg0_75c *f75c;
} ObjectData;
struct S_x5248 {
    Vector3 f00;
};
struct S_frame_14 {
    float f00;
};
struct S_frame_18 {
    float f00;
};
struct S_frame_10 {
    float f00;
};
struct S_x33888 {
    float f00;
};
struct S_frame_24 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_frame_20 {
    int f00;
};
struct S_frame_1c {
    S_frame_1c_0 *f00;
};
struct Arg0_3e8 {
    char unknown0[0x8];
    int f08;
};
struct Arg0_s508 {
    char unknown0[0x4];
    Arg0_50c *f04;
};
struct S_vv50 {
    char unknown0[0x4];
    short f04;
};
class Arg0_600 {
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
};
typedef struct Arg0_600Data {

} Arg0_600Data;
extern "C" char g_8c286300[];
extern "C" void send_code_8c14472c(void *, int);
extern "C" void operation_8c144d8c(void *);
extern "C" void operation_8c01c5f0(void *);
extern "C" void operation_8c0a1ed0(int);
extern "C" void operation_8c14b81c(void);
extern "C" void operation_8c14b838(void);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c142224(void *);
extern "C" float object_random_fraction(void *, void *, void *);
extern "C" void operation_8c18582c(int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void operation_8c147e28(Object *o, int a1, int a2)
{
    Frame frame;
    int *home2 = &a2;
    int v54;
    S_vv1 *v1;
    int v6;
    float v24;
    int v34;
    float v35;
    float v48;
    float v49;
    float v55;
    S_vv50 *v50;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home2;
    v1 = (S_vv1 *)((char *)o + 0x700);
    (&frame)->f24 = (S_frame_24 *)((char *)o + 0x704);
    (&frame)->f20 = (S_frame_20 *)((char *)o + 0x708);
    (&frame)->f1c = (S_frame_1c *)((char *)o + 0x70c);
    (&frame)->f18 = (S_frame_18 *)((char *)o + 0x724);
    (&frame)->f14 = (S_frame_14 *)((char *)o + 0x728);
    (&frame)->f10 = (S_frame_10 *)((char *)o + 0x734);
    v54 = (int)0x738;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        (&frame)->f04 = 0;
        goto L_8c147f6e;
L_8c147f50:;
        (*(Arg0_600 **)((char *)((char *)o + 0x600) + ((&frame)->f04 << 2)))->v102();
        (&frame)->f04 += 1;
L_8c147f6e:;
        if (0xa > (&frame)->f04) {
            goto L_8c147f50;
        }
        *(int *)((char *)o + 0x3dc) |= 4;
        ((ObjectData *)o)->f3dc &= -0x101;
        ((ObjectData *)o)->f674 = a2;
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((S_x5248 *)(((ObjectData *)o)->f674 * 0xc + g_8c286300))->f00;
        ((ObjectData *)o)->f6c4 = 0.0f;
        ((ObjectData *)o)->f68 = 0;
        ((ObjectData *)o)->f71c = 0.0f;
        (&frame)->f14->f00 = 0.0f;
        (&frame)->f18->f00 = 0.0f;
        ((ObjectData *)o)->f720 = 0.0f;
        ((ObjectData *)o)->f72c = -0.2f;
        ((ObjectData *)o)->f730 = 0.0f;
        (&frame)->f10->f00 = ((ObjectData *)o)->f3c.f08;
        ((S_x33888 *)((int)o + v54))->f00 = 0.0f;
        (&frame)->f24->f00 = 0;
        v1->f00 = 0;
        (&frame)->f20->f00 = 0;
        ((ObjectData *)o)->f75c = (Arg0_75c *)0;
        (&frame)->f1c->f00 = (S_frame_1c_0 *)0;
        return;
    case 2:
        v6 = (int)((ObjectData *)o)->f3e8->f08;
        if (((v6 & 0x400)) != 0) {
            if (((ObjectData *)o)->f674 == 0) {
                send_code_8c14472c((void *)o, 0x14);
                return;
            }
            send_code_8c14472c((void *)o, 0x15);
            return;
        }
        if (((v6 & 4)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f674 == 0) {
            send_code_8c14472c((void *)o, 0x16);
            return;
        }
        send_code_8c14472c((void *)o, 0x17);
        return;
    case 9:
        if (((ObjectData *)o)->ff0 != 0xa) {
            if (((ObjectData *)o)->ff0 != 9) {
                return;
            }
        }
        operation_8c144d8c((void *)o);
        return;
    case 0:
        operation_8c01c5f0((void *)o);
        switch (v1->f00) {
        case 0:
            (&frame)->f24->f00 += 1;
            if (!((&frame)->f24->f00 > 0xa)) {
                goto L_8c14836c;
            }
            (&frame)->f24->f00 = 0;
            v1->f00 = 1;
            if (((ObjectData *)o)->f674 == 0) {
                ((ObjectData *)o)->ff0 = 7;
                ((ObjectData *)o)->f71c = -1.0f;
                goto L_8c14836c;
            }
            ((ObjectData *)o)->ff0 = 8;
            ((ObjectData *)o)->f71c = 1.0f;
            break;
        case 1:
            if (((((ObjectData *)o)->fe8 & 4)) != 0) {
                goto L_8c14836c;
            }
            v1->f00 = 2;
            break;
        case 2:
            if (6.0f > ((ObjectData *)o)->ff8) {
                goto L_8c14836c;
            }
            v1->f00 = 3;
            (&frame)->f14->f00 = 0.0f;
            ((ObjectData *)o)->f720 = ((ObjectData *)o)->f3c.f00;
            (&frame)->f18->f00 = (((ObjectData *)o)->f71c * 100.0f - ((ObjectData *)o)->f720) / 7.0f;
            ((ObjectData *)o)->f72c = -(((ObjectData *)o)->f730 / 7.0f);
            (&frame)->f10->f00 = ((ObjectData *)o)->f3c.f08;
            ((ObjectData *)o)->f730 = 0.0f;
            break;
        case 3:
            if (13.0f > ((ObjectData *)o)->ff8) {
                goto L_8c14836c;
            }
            v1->f00 = 4;
            (&frame)->f14->f00 = 0.0f;
            ((ObjectData *)o)->f720 = ((ObjectData *)o)->f71c * 100.0f;
            (&frame)->f18->f00 = (((ObjectData *)o)->f71c * 135.0f - ((ObjectData *)o)->f720) / 7.0f;
            (&frame)->f10->f00 = ((ObjectData *)o)->f3c.f08;
            ((ObjectData *)o)->f72c = (10.0f - ((ObjectData *)o)->f3c.f08) * 2.0f / 144.0f;
            ((ObjectData *)o)->f730 = 0.0f;
            break;
        case 4:
            if (20.0f > ((ObjectData *)o)->ff8) {
                goto L_8c14836c;
            }
            v1->f00 = 5;
            (&frame)->f14->f00 = 0.0f;
            ((ObjectData *)o)->f720 = ((ObjectData *)o)->f71c * 135.0f;
            (&frame)->f18->f00 = (((ObjectData *)o)->f71c * 100.0f - ((ObjectData *)o)->f720) / 5.0f;
            ((S_x33888 *)((int)o + v54))->f00 = -((ObjectData *)o)->f71c * 1280.0f / 5.0f;
            break;
        case 5:
            if (!(25.0f > ((ObjectData *)o)->ff8)) {
                v1->f00 = 6;
                operation_8c0a1ed0(1);
                if (((ObjectData *)o)->f674 == 0) {
                    operation_8c14b81c();
                } else {
                    operation_8c14b838();
                }
                play_se_8c05fbf8(0x30007, (void *)(((char *)o + 0x538)), 0, 0);
                (&frame)->f08 = 0;
                goto L_8c148364;
L_8c14834c:;
                call_8c142224((void *)(*(Arg0_640 **)((char *)((char *)o + 0x640) + ((&frame)->f08 << 2))));
                (&frame)->f08 += 1;
L_8c148364:;
                if (4 > (&frame)->f08) {
                    goto L_8c14834c;
                }
            }
        case 6:
            break;
        }
L_8c14836c:;
        (&frame)->f20->f00 += 1;
        if (v1->f00 == 0) {
        } else {
            if (v1->f00 == 1) {
            } else {
                v24 = (float)((ObjectData *)o)->ff8;
                if (!(15.0f > v24)) {
                    if (!(v24 > 17.0f)) {
                        if ((&frame)->f20->f00 >= 2) {
                            (&frame)->f20->f00 = 0;
                            *(Vector3 *)&(&frame)->f28 = *(Vector3 *)&((ObjectData *)o)->f508;
                            t1 = object_random_fraction((void *)o, (void *)(((Arg0_s508 *)((char *)o + 0x508))->f04), (void *)(((ObjectData *)o)->f508.f00));
                            (&frame)->f28.f00 -= ((ObjectData *)o)->f71c * (t1 * 50.0f);
                            (&frame)->f28.f04 = -5.0f;
                            (&frame)->f28.f08 += 40.0f;
                            operation_8c18582c((int)(&(&frame)->f28), 0x121);
                        }
                    }
                }
                t2 = check_range_8c01cf68((void *)o, 15.0f);
                if (t2 != 0) {
                    play_se_8c05fbf8(0x30011, (void *)(((char *)o + 0x538)), 0, 0);
                }
                v34 = (int)((ObjectData *)o)->f75c;
                if (v34 == 0) {
                    t3 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x161);
                    ((ObjectData *)o)->f75c = (Arg0_75c *)(int)t3;
                    if (((ObjectData *)o)->f75c == 0) {
                        goto L_8c14851e;
                    }
                    set_effect_bit0((void *)(((ObjectData *)o)->f75c));
                } else {
                    v35 = (float)((ObjectData *)o)->ff8;
                    if (!(24.0f > v35)) {
                        if (!(v35 > 30.0f)) {
                            (&frame)->f1c->f00 = (S_frame_1c_0 *)((int)(&frame)->f1c->f00 + 1);
                            t4 = call_8c18e8a0((void *)((&frame)->f1c->f00), 4);
                            if (t4 == 0) {
                                call_8c0a7608((void *)(((ObjectData *)o)->f75c), (void *)(((char *)o + 0x46c)));
                                goto L_8c14851e;
                            }
                            if (t4 == 2) {
                                call_8c0a7608((void *)(((ObjectData *)o)->f75c), (void *)(((char *)o + 0x478)));
                                goto L_8c14851e;
                            }
                            set_effect_bit0((void *)(((ObjectData *)o)->f75c));
                            goto L_8c14851e;
                        }
                    }
                    set_effect_bit0((void *)v34);
                }
            }
        }
L_8c14851e:;
        switch (v1->f00) {
        case 0:
        case 1:
        case 2:
            ((ObjectData *)o)->f730 += ((ObjectData *)o)->f72c;
            if (-7.0f > ((ObjectData *)o)->f730) {
                ((ObjectData *)o)->f730 = -7.0f;
            }
            ((ObjectData *)o)->f3c.f08 += ((ObjectData *)o)->f730;
            break;
        case 3:
            v48 = (float)(((ObjectData *)o)->ff8 - 6.0f);
            ((ObjectData *)o)->f3c.f00 = (&frame)->f18->f00 * v48 + ((ObjectData *)o)->f720;
            ((ObjectData *)o)->f3c.f08 = (((ObjectData *)o)->f72c * 0.5f * v48 + -7.0f) * v48 + (&frame)->f10->f00;
            t5 = check_range_8c01cf68((void *)o, 8.5f);
            if (t5 == 0) {
                return;
            }
            play_se_8c05fbf8(0x30012, (void *)(((char *)o + 0x538)), 0, 0);
            break;
        case 4:
            v49 = (float)(((ObjectData *)o)->ff8 - 13.0f);
            ((ObjectData *)o)->f3c.f00 = (&frame)->f18->f00 * v49 + ((ObjectData *)o)->f720;
            ((ObjectData *)o)->f3c.f08 = ((ObjectData *)o)->f72c * 0.5f * v49 * v49 + (&frame)->f10->f00;
            ((ObjectData *)o)->f6c4 = v49 * 28.0f;
            if (!(((ObjectData *)o)->f6c4 > 4.0f)) {
                return;
            }
            ((ObjectData *)o)->f6c4 = 4.0f;
            break;
        case 5:
            v55 = (float)(((ObjectData *)o)->ff8 - 20.0f);
            ((ObjectData *)o)->f3c.f00 = (&frame)->f18->f00 * v55 + ((ObjectData *)o)->f720;
            ((ObjectData *)o)->f3c.f08 = ((ObjectData *)o)->f72c * 0.5f * (((ObjectData *)o)->ff8 - 13.0f) * (((ObjectData *)o)->ff8 - 13.0f) + (&frame)->f10->f00;
            ((ObjectData *)o)->f68 = (int)(((S_x33888 *)((int)o + v54))->f00 * v55);
            break;
        case 6:
            break;
        }
        return;
    case 5:
        ((ObjectData *)o)->f3dc &= -5;
        if (((ObjectData *)o)->f75c != 0) {
            v50 = (S_vv50 *)((ObjectData *)o)->f75c;
            v50->f04 |= 1;
            ((ObjectData *)o)->f75c = (Arg0_75c *)0;
        }
        return;
    case 1:
    case 3:
    case 6:
    case 7:
    case 8:
        break;
    }
}
