/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bb024
 * function: TTecZonde_update_8c0bb024
 * language: c++
 * reference size: 1584 bytes
 * compiled size: 1588 bytes (+0.3%)
 * differing lines: 254 of 642 reference instruction lines
 * differing bytes: 1289
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TTecZonde.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    virtual void v7(S_c8c053d84 *);
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    S_c8c053d84 *f20;
    char unknown24[0xa6];
    short fca;
    int fcc;
    unsigned short fd0;
    char unknownd2[0x7a];
    int f14c;
    unsigned short f150;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int effect_query_is_true(void *);
extern "C" int rand(void);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TTecZondeEff_ctor_2_8c0d0788(int, void *, void *, void *, float, float, int, int);
extern "C" void operation_8c0d10d4(void *, void *, void *, int);
extern "C" int play_se_8c05fbf8(int, void *, int, int);
extern "C" void emit_control_60320(int, int, int);
extern "C" int call_8c0b628c(S_c8c053d84 *);
extern "C" void TTecZonde_update_8c0bb024(Object *o)
{
    Frame frame;
    short v10;
    short v30;
    S_c8c053d84 *t1;
    S_c8c053d84 *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float t8;
    float t9;
    float t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->fd0));
    ((ObjectData *)o)->f20 = (S_c8c053d84 *)t1;
    if (((ObjectData *)o)->f20 == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    if (((ObjectData *)o)->f14c == 0) {
        ((ObjectData *)o)->f04 |= 1;
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f150));
    t3 = effect_query_is_true((void *)t2);
    if (t3 == 0) {
    } else {
        (&frame)->f24 = t2->f3c;
        (&frame)->f28 = t2->f40 + 100.0f;
        (&frame)->f2c = t2->f44;
        t4 = rand();
        (&frame)->f18 = t2->f3c + (float)t4 / 32768.0f * 30.0f;
        (&frame)->f1c = t2->f40 + 100.0f;
        t5 = rand();
        (&frame)->f20 = t2->f44 + (float)t5 / 32768.0f * 30.0f;
        t6 = rand();
        (&frame)->f00 = t2->f3c + (float)t6 / 32768.0f * 30.0f;
        (&frame)->f04 = t2->f40 + 100.0f;
        t7 = rand();
        (&frame)->f08 = t2->f44 + (float)t7 / 32768.0f * 30.0f;
        (&frame)->f3c = t2->f3c - (&frame)->f24;
        (&frame)->f40 = t2->f40 - (&frame)->f28;
        (&frame)->f44 = t2->f44 - (&frame)->f2c;
        (&frame)->f30 = t2->f3c - (&frame)->f18;
        (&frame)->f34 = t2->f40 - (&frame)->f1c;
        (&frame)->f38 = t2->f44 - (&frame)->f20;
        (&frame)->f0c = t2->f3c - (&frame)->f00;
        (&frame)->f10 = t2->f40 - (&frame)->f04;
        (&frame)->f14 = t2->f44 - (&frame)->f08;
        t8 = njScalor_8c37e480((void *)(&(&frame)->f3c));
        if (t8 != 0.0f) {
            njUnitVector_8c37b630((void *)(&(&frame)->f3c));
        }
        t9 = njScalor_8c37e480((void *)(&(&frame)->f30));
        if (t9 != 0.0f) {
            njUnitVector_8c37b630((void *)(&(&frame)->f30));
        }
        t10 = njScalor_8c37e480((void *)(&(&frame)->f0c));
        if (t10 != 0.0f) {
            njUnitVector_8c37b630((void *)(&(&frame)->f0c));
        }
        if (((ObjectData *)o)->fcc == 0) {
            t11 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
            if (t11 == 0) {
                goto L_8c0bb4bc;
            }
            TTecZondeEff_ctor_2_8c0d0788(t11, g_8c44bea0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f3c), t8, 0.5f, 0x14000000, 0x14);
        } else {
            if (((ObjectData *)o)->fcc == 1) {
                t12 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                if (t12 == 0) {
                    goto L_8c0bb4bc;
                }
                TTecZondeEff_ctor_2_8c0d0788(t12, g_8c44bea0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f3c), t8, 1.8f, 0x14000000, 0x14);
            } else {
                v10 = (short)((ObjectData *)o)->fca;
                if ((short)v10 >= 0xf && 0x19 > (short)v10) {
                    t13 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t13 != 0) {
                        TTecZondeEff_ctor_2_8c0d0788(t13, g_8c44bea0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f3c), t8, 2.16f, 0x14000000, 0x14);
                    }
                    t14 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t14 == 0) {
                        goto L_8c0bb4bc;
                    }
                    TTecZondeEff_ctor_2_8c0d0788(t14, g_8c44bea0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f30), t9, 2.16f, 0x14000000, 0x14);
                    goto L_8c0bb4bc;
                }
                if ((short)v10 >= 0x19 && 0x1e > (short)v10) {
                    t15 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t15 != 0) {
                        TTecZondeEff_ctor_2_8c0d0788(t15, g_8c44bea0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f3c), t8, 2.16f, 0x14000000, 0x14);
                    }
                    t16 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t16 != 0) {
                        TTecZondeEff_ctor_2_8c0d0788(t16, g_8c44bea0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f30), t9, 2.16f, 0x14000000, 0x14);
                    }
                    t17 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                    if (t17 == 0) {
                        goto L_8c0bb4bc;
                    }
                    TTecZondeEff_ctor_2_8c0d0788(t17, g_8c44bea0, (void *)(&frame), (void *)(&(&frame)->f0c), t9, 2.16f, 0x14000000, 0x14);
                    goto L_8c0bb4bc;
                }
                t18 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                if (t18 != 0) {
                    TTecZondeEff_ctor_2_8c0d0788(t18, g_8c44bea0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f3c), t8, 1.8f, 0x14000000, 0x14);
                }
                t19 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
                if (t19 != 0) {
                    TTecZondeEff_ctor_2_8c0d0788(t19, g_8c44bea0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f30), t9, 1.8f, 0x14000000, 0x14);
                }
            }
        }
L_8c0bb4bc:;
        t20 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x40);
        if (t20 != 0) {
            operation_8c0d10d4((void *)t20, (void *)(&(&frame)->f24), (void *)(&t2->f3c), (int)g_8c44bea0);
        }
        switch (((ObjectData *)o)->fcc) {
        case 0:
            t21 = play_se_8c05fbf8(0x20008, (void *)(&t2->f3c), 0, 0);
            if (!(t21 >= 0)) {
                goto L_8c0bb604;
            }
            emit_control_60320(t21, 0x100, 0);
            break;
        case 1:
            play_se_8c05fbf8(0x20008, (void *)(&t2->f3c), 0, 0);
            break;
        case 2:
            v30 = (short)((ObjectData *)o)->fca;
            if ((short)v30 >= 0xf) {
                if (0x19 > (short)v30) {
                    t22 = play_se_8c05fbf8(0x20008, (void *)(&t2->f3c), 0, 0);
                    if (!(t22 >= 0)) {
                        goto L_8c0bb604;
                    }
                    emit_control_60320(t22, -0x180, 0);
                    goto L_8c0bb604;
                }
            }
            if ((short)v30 >= 0x19) {
                if (0x1e > (short)v30) {
                    t23 = play_se_8c05fbf8(0x20008, (void *)(&t2->f3c), 0, 0);
                    if (!(t23 >= 0)) {
                        goto L_8c0bb604;
                    }
                    emit_control_60320(t23, -0x250, 0);
                    goto L_8c0bb604;
                }
            }
            t24 = play_se_8c05fbf8(0x20008, (void *)(&t2->f3c), 0, 0);
            if (t24 >= 0) {
                emit_control_60320(t24, -0x100, 0);
            }
        }
    }
L_8c0bb604:;
    if (t2 != 0) {
        t25 = effect_query_is_true((void *)t2);
        if (t25 != 0) {
            t26 = call_8c0b628c(t2);
            if (t26 != 0) {
                o->v7(t2);
            }
        }
    }
    ((ObjectData *)o)->f04 |= 1;
}
