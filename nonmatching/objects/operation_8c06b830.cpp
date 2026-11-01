/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06b830
 * function: operation_8c06b830
 * language: c++
 * reference size: 1616 bytes
 * compiled size: 1624 bytes (+0.5%)
 * differing lines: 96 of 572 reference instruction lines
 * differing bytes: 171
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c468904 S_L8c468904;
typedef struct S_L8c468904_10 S_L8c468904_10;
typedef struct Frame Frame;
typedef struct S_g8c468904 S_g8c468904;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_6a8 Arg0_6a8;
typedef struct Arg0_700 Arg0_700;
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_dc Arg0_73c_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
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
    virtual void v93(int, int);
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x9c];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x76];
    unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    short f69c;
    char unknown69e[0xa];
    Arg0_6a8 *f6a8;
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x44];
    Arg0_700 *f700;
    char unknown704[0x24];
    int f728;
    char unknown72c[0x10];
    Arg0_73c *f73c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_700 {
    char unknown0[0x8];
    int f08;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    char f0c;
    char f0d;
    short f0e;
    short f10;
    short f12;
    int f14;
    float f18;
    float f1c;
    char f20;
    char f21;
    short f22;
    short f24;
    short f26;
    int f28;
    float f2c;
    float f30;
};
struct S_L8c468904 {
    S_g8c468904 *f00;
    char unknown4[0xc];
    S_L8c468904_10 *f10;
};
struct Arg0_73c {
    char unknown0[0xdc];
    Arg0_73c_dc *fdc;
};
struct Arg0_73c_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern S_L8c468904 g_8c468904;
extern "C" char g_8c284c80[];
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int player_flag9_8c026508(void);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" int operation_8c06752c(Object *);
extern "C" int operation_8c05bbf8(void);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void operation_8c05b950(void *, int, void *, int);
extern "C" void set_position_8c0f3504(void *, void *);
extern "C" void call_8c0f363c(Arg0_73c *, void *, int);
extern "C" void call_8c05b54c(Object *, void *);
extern "C" void call_8c067834(Object *, float, float, float);
extern "C" void operation_8c198c70(void *, int, int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c198d30(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" float call_8c3845f0(Frame *, Frame *);
extern "C" void advance_and_apply_contact(void *, float, float, float);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c06b830(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int v30;
    int v31;
    float v23;
    float v24;
    float v29;
    float v25;
    int v32;
    int v4;
    int v6;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float t8;
    float t9;
    float t10;
    int t11;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 8;
        o->v102();
        ((ObjectData *)o)->f404 = 0;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc |= 0x680;
        ((ObjectData *)o)->f3dc &= -0x801;
        v1->f00 = 0;
        v2->f00 = 0;
        play_se_8c05fbf8(0x30006, (void *)(((char *)o + 0x658)), 0, 0);
        return;
    case 11:
        if (v1->f00 >= 0x96) {
            v4 = (int)((ObjectData *)o)->f700->f08;
            t1 = player_flag9_8c026508();
            v6 = (int)v4;
            if (t1 != 0) {
                v6 = (int)(v4 & -0x30607);
            }
            if (((v6 & 2)) != 0) {
                v1->f00 = 0x1c2;
            }
        }
        if (v2->f00 != 2) {
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        o->v93(0x17, 6);
        (&frame)->f20 = 0x12;
        (&frame)->f21 = 5;
        (&frame)->f22 = ((ObjectData *)o)->f20;
        (&frame)->f24 = 0x17;
        (&frame)->f26 = ((ObjectData *)o)->f698;
        (&frame)->f28 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f2c = ((ObjectData *)o)->f6ac;
        (&frame)->f30 = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->f20));
        return;
    case 2:
        if (v2->f00 != 2) {
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        o->v93(0x17, 6);
        (&frame)->f0c = 0x12;
        (&frame)->f0d = 5;
        (&frame)->f0e = ((ObjectData *)o)->f20;
        (&frame)->f10 = 0x17;
        (&frame)->f12 = ((ObjectData *)o)->f698;
        (&frame)->f14 = ((ObjectData *)o)->f3a8 & 0xffff;
        (&frame)->f18 = ((ObjectData *)o)->f6ac;
        (&frame)->f1c = ((ObjectData *)o)->f6b0;
        operation_8c0368a8((void *)(&(&frame)->f0c));
        return;
    case 9:
        if (v2->f00 != 2) {
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f728 != 0) {
            call_8c06741c(o);
            return;
        }
        t2 = operation_8c06752c(o);
        if (t2 != 0) {
            return;
        }
        t3 = operation_8c05bbf8();
        if (t3 != 0) {
            ((ObjectData *)o)->f698 = (int)(*(int *)((char *)0x8c2fcda8 + (((ObjectData *)o)->f698 << 2)));
        } else {
            ((ObjectData *)o)->f698 = (int)(*(int *)((char *)0x8c2fcd60 + (((ObjectData *)o)->f698 << 2)));
        }
        call_8c06741c(o);
        return;
    case 7:
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v2->f00 != 0) {
            if (v2->f00 == 1) {
                goto L_8c06bd14;
            }
            if (v2->f00 == 2) {
                goto L_8c06bd70;
            }
            return;
        }
        t4 = check_range_8c01cf68((void *)o, 7.0f);
        if (t4 != 0) {
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f10), 0);
            t5 = operation_8c05bbf8();
            if (t5 != 0) {
                set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(((char *)o + 0x3c)));
                ((ObjectData *)o)->f73c->fdc->f0c = *(float *)(g_8c284c80 + 0x8);
                ((ObjectData *)o)->f73c->fdc->f18 = 0x13a03;
                call_8c0f363c((Arg0_73c *)(((ObjectData *)o)->f73c), (void *)((g_8c284c80 + 0xc)), 0);
            } else {
                call_8c05b54c(o, (void *)((void *)g_8c284c80));
            }
            operation_8c05b950((void *)o, 0, (void *)((&g_8c468904)->f00), 0);
        } else {
            t6 = check_range_8c01cf68((void *)o, 14.0f);
            if (t6 != 0) {
                call_8c067834(o, 10.0f, -60.0f, -140.0f);
            } else {
                t7 = check_range_8c01cf68((void *)o, 18.0f);
                if (t7 != 0) {
                    call_8c067834(o, 10.0f, 90.0f, 60.0f);
                }
            }
        }
        if (((ObjectData *)o)->ff0 == 8) {
            return;
        }
        operation_8c198c70((void *)(((ObjectData *)o)->f6a8), (int)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f64));
        v2->f00 = 1;
        return;
L_8c06bd14:;
        call_8c05fd7c(0x30012, o, (void *)(((char *)o + 0x658)), 0, 0);
        v1->f00 += 1;
        if (!(v1->f00 >= 0x1c2)) {
            return;
        }
        ((ObjectData *)o)->ff0 = 0xa;
        v2->f00 = 2;
        operation_8c198d30((void *)(((ObjectData *)o)->f6a8));
        return;
L_8c06bd70:;
        v23 = (float)0.9f;
        t8 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        t9 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        v25 = (float)v23;
        if (((ObjectData *)o)->f728 != 0) {
            v24 = (float)0.9f;
            (&frame)->f00 = ((ObjectData *)o)->f3c + t8 * v24;
            (&frame)->f04 = 0.0f;
            (&frame)->f08 = ((ObjectData *)o)->f44 + t9 * v24;
            t10 = call_8c3845f0((Frame *)((&frame)), (Frame *)((&frame)));
            v25 = (float)v24;
            if (t10 > 28900.0f) {
                v25 = (float)0.0f;
            }
        }
        v29 = (float)((ObjectData *)o)->ff8;
        if (13.0f > v29) {
            return;
        }
        if (v29 > 20.0f) {
            return;
        }
        advance_and_apply_contact((void *)o, t8, t9, v25);
        return;
    case 5:
        v30 = (int)((ObjectData *)o)->f198;
        t11 = call_8c18e768(v30, 0xa);
        v32 = (int)(v30 - t11);
        goto L_8c06be4e;
        v31 = (int)(v30 - t11);
L_8c06be4c:;
        v32 = (int)(v31 - (t11 + t11));
L_8c06be4e:;
        if ((short)v32 >= ((ObjectData *)o)->f330) {
            v31 = (int)v32;
            goto L_8c06be4c;
        }
        ((ObjectData *)o)->f69c = v32;
        operation_8c198d30((void *)(((ObjectData *)o)->f6a8));
        return;
    case 1:
    case 3:
    case 8:
    case 10:
        break;
    }
}
