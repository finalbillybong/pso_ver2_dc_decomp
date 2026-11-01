/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b2a18
 * function: operation_8c0b2a18
 * language: c++
 * reference size: 1308 bytes
 * compiled size: 1332 bytes (+1.8%)
 * differing lines: 566 of 518 reference instruction lines
 * differing bytes: 854
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_x35648 S_x35648;
typedef struct S_x38000 S_x38000;
typedef struct S_x38560 S_x38560;
typedef struct S_x39008 S_x39008;
typedef struct S_x39344 S_x39344;
typedef struct S_x39792 S_x39792;
typedef struct S_x40016 S_x40016;
typedef struct S_x70368 S_x70368;
typedef struct S_x9040 S_x9040;
class S_c8c053d84;
struct Object {
    char unknown0[0x24];
    float f24;
    float f28;
    float f2c;
    char unknown30[0x9a];
    short fca;
    int fcc;
    char unknownd0[0x80];
    unsigned short f150;
    short f152;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
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
    virtual int v42();
};
typedef struct S_c8c053d84Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    int fdc;
} S_c8c053d84Data;
struct S_x70368 {
    float f00;
};
struct S_x9040 {
    float f00;
};
struct S_x35648 {
    float f00;
};
struct S_x38000 {
    float f00;
};
struct S_x38560 {
    float f00;
};
struct S_x39008 {
    float f00;
};
struct S_x39344 {
    float f00;
};
struct S_x39792 {
    float f00;
};
struct S_x40016 {
    float f00;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TTecZondeEff_ctor_1_8c0d0360(int, void *, void *, void *, float);
extern "C" void TTecZondeEff_ctor_2_8c0d0788(int, void *, void *, void *, float, float, int, int);
extern "C" void operation_8c0d10d4(void *, void *, void *, int);
extern "C" int operation_8c0b2a18(Object *o)
{
    Frame frame;
    int v15;
    int v47;
    char *v33;
    S_c8c053d84 *t9;
    S_c8c053d84 *t11;
    int v14;
    int v50;
    int v17;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int v13;
    int t10;
    S_c8c053d84 *t1;
    int t12;
    int t13;
    int t14;
    float t15;
    int t16;
    int t17;
    int t18;
    t1 = lookup_object_by_id((unsigned short)(o->f150));
    t2 = effect_query_is_true((void *)t1);
    if (t2 == 0) {
        return 0;
    }
    (&frame)->f0c = ((S_x70368 *)(o->f152 * 0x2c + (((S_c8c053d84Data *)t1)->fdc + 0x1c)))->f00 - o->f24;
    (&frame)->f10 = ((S_x9040 *)(((S_c8c053d84Data *)t1)->fdc + 0x20 + o->f152 * 0x2c))->f00 - o->f28;
    (&frame)->f14 = ((S_x35648 *)(((S_c8c053d84Data *)t1)->fdc + 0x24 + o->f152 * 0x2c))->f00 - o->f2c;
    t3 = njScalor_8c37e480((void *)(&(&frame)->f0c));
    if (t3 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f0c));
    }
    if (o->fcc == 0) {
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
        if (t4 == 0) {
            goto L_8c0b2c1a;
        }
        TTecZondeEff_ctor_1_8c0d0360(t4, g_8c44bea0, (void *)(&o->f24), (void *)(&(&frame)->f0c), t3);
    } else {
        if (o->fcc == 2) {
            if (o->fca >= 0xf) {
                t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                if (t5 == 0) {
                    goto L_8c0b2c1a;
                }
                TTecZondeEff_ctor_2_8c0d0788(t5, g_8c44bea0, (void *)(&o->f24), (void *)(&(&frame)->f0c), t3, 6.4800005f, 0x8000000, 0x14);
                goto L_8c0b2c1a;
            }
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
            if (t6 == 0) {
                goto L_8c0b2c1a;
            }
            TTecZondeEff_ctor_2_8c0d0788(t6, g_8c44bea0, (void *)(&o->f24), (void *)(&(&frame)->f0c), t3, 5.4f, 0x8000000, 0x14);
        } else {
            t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
            if (t7 != 0) {
                TTecZondeEff_ctor_2_8c0d0788(t7, g_8c44bea0, (void *)(&o->f24), (void *)(&(&frame)->f0c), t3, 5.4f, 0x8000000, 0x14);
            }
        }
    }
L_8c0b2c1a:;
    t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
    if (t8 != 0) {
        operation_8c0d10d4((void *)t8, (void *)(((S_c8c053d84Data *)t1)->fdc + o->f152 * 0x2c + 0x1c), (void *)(&o->f24), (int)g_8c44bea0);
    }
    v13 = (int)0x14c;
    if (*(int *)((char *)((char *)o + 0x0) + (v13)) == 1) {
        return 1;
    }
    v14 = (int)0x152;
    v47 = (int)0;
    goto L_8c0b2f0a;
    v15 = (int)0;
    do {
        v17 = (int)(v15 << 3);
        t9 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)&o->f150 + (v17))));
        t11 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)o + 0x158) + (v17))));
        t10 = effect_query_is_true((void *)t9);
        if (t10 == 0) {
        } else {
            t12 = effect_query_is_true((void *)t11);
            if (t12 == 0) {
            } else {
                if (((((S_c8c053d84Data *)t9)->f34 & 0x20000000)) != 0 && ((((S_c8c053d84Data *)t11)->f34 & 0x20000000)) != 0) {
                    t13 = t9->v42();
                    if (t13 != 0) {
                        t14 = t11->v42();
                        if (t14 != 0) {
                            return 0;
                        }
                    }
                }
                (&frame)->f00 = ((S_x38000 *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + (((S_c8c053d84Data *)t11)->fdc + 0x1c)))->f00 - ((S_x38560 *)(*(short *)((char *)((char *)o + 0x15a) + (v17)) * 0x2c + (((S_c8c053d84Data *)t9)->fdc + 0x1c)))->f00;
                (&frame)->f04 = ((S_x39008 *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + (((S_c8c053d84Data *)t11)->fdc + 0x20)))->f00 - ((S_x39344 *)(*(short *)((char *)((char *)o + 0x15a) + (v17)) * 0x2c + (((S_c8c053d84Data *)t9)->fdc + 0x20)))->f00;
                (&frame)->f08 = ((S_x39792 *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + (((S_c8c053d84Data *)t11)->fdc + 0x24)))->f00 - ((S_x40016 *)(*(short *)((char *)((char *)o + 0x15a) + (v17)) * 0x2c + (((S_c8c053d84Data *)t9)->fdc + 0x24)))->f00;
                t15 = njScalor_8c37e480((void *)(&frame));
                if (t15 != 0.0f) {
                    njUnitVector_8c37b630((void *)(&frame));
                }
                if (o->fcc == 0) {
                    t16 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t16 == 0) {
                        goto L_8c0b2e8e;
                    }
                    TTecZondeEff_ctor_1_8c0d0360(t16, g_8c44bea0, (void *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + ((S_c8c053d84Data *)t9)->fdc + 0x1c), (void *)(&frame), t15);
                } else {
                    t17 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t17 != 0) {
                        TTecZondeEff_ctor_2_8c0d0788(t17, g_8c44bea0, (void *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + ((S_c8c053d84Data *)t9)->fdc + 0x1c), (void *)(&frame), t15, 1.8f, 0x14000000, 6);
                    }
                }
L_8c0b2e8e:;
                t18 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
                if (t18 == 0) {
                    goto L_8c0b2f08;
                }
                v33 = (char *)((S_c8c053d84Data *)t9)->fdc;
                operation_8c0d10d4((void *)t18, (void *)(*(short *)((char *)((char *)((int)o + v14) + 0x0) + (v17)) * 0x2c + ((S_c8c053d84Data *)t11)->fdc + 0x1c), (void *)(*(short *)((char *)((char *)o + 0x15a) + (v17)) * 0x2c + v33 + 0x1c), (int)g_8c44bea0);
                goto L_8c0b2f08;
            }
        }
        return 0;
L_8c0b2f08:;
        v15 = (int)(v15 + 1);
        v47 = (int)v15;
L_8c0b2f0a:;
        v50 = (int)-1;
        v15 = (int)v47;
    } while (((int)*(int *)((char *)((char *)o + 0x0) + (v13)) + v50) > v47);
    return 1;
}
