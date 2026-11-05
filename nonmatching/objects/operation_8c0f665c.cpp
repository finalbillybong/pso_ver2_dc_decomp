/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f665c
 * function: operation_8c0f665c
 * language: c++
 * reference size: 1456 bytes
 * compiled size: 1456 bytes (+0.0%)
 * differing lines: 10 of 530 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c470618 S_g8c470618;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_468 Arg0_468;
typedef struct S_vv1 S_vv1;
typedef struct S_vv17 S_vv17;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv52 S_vv52;
typedef struct S_vv5_0 S_vv5_0;
class Object;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x290];
    Arg0_38c *f38c;
    char unknown390[0x2c];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x14];
    int f3dc;
    char unknown3e0[0x70];
    int f450;
    char unknown454[0x8];
    int f45c;
    char unknown460[0x8];
    Arg0_468 *f468;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv5 {
    S_vv5_0 *f00;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    Block_frame_c f0c;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c470618 {
    char unknown0[0x24];
    int f24;
};
struct S_vv52 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c470618 *g_8c470618;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int operation_8c0f5158(int);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c104070(void *, int, void *, float);
extern "C" int call_8c0f5220(Object *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" void call_8c0a7608(int, void *);
extern "C" int angle_step(int, int, int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" int operation_8c05bbf8(void);
extern "C" void call_8c1045b8(void *, void *, void *, float);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void set_effect_words(void *, void *);
extern "C" void operation_8c0f665c(Object *o, int a1)
{
    int k;
    Frame frame;
    S_vv2 *v2;
    S_vv1 *v1;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int v11;
    float v12;
    S_vv17 *v17;
    int v20;
    float v32;
    int v36;
    float v37;
    S_vv52 *v52;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float t14;
    int t15;
    int t16;
    v1 = (S_vv1 *)((char *)o + 0x474);
    v2 = (S_vv2 *)((char *)o + 0x478);
    v3 = (S_vv3 *)((char *)o + 0x47c);
    v4 = (S_vv4 *)((char *)o + 0x480);
    v5 = (S_vv5 *)((char *)o + 0x48c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 9;
        operation_8c059ef8((void *)o, 4);
        {
            int *pf1 = (int *)((char *)o + 0x3dc);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f3dc |= 4;
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = 0;
        v4->f00 = (S_vv4_0 *)0;
        v5->f00 = (S_vv5_0 *)0;
        return;
    case 3:
        if (v1->f00 != 4) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c0f6900;
            }
            if (v1->f00 == 2) {
                goto L_8c0f699c;
            }
            if (v1->f00 == 3) {
                goto L_8c0f6b98;
            }
        } else {
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                t1 = operation_8c0f5158((int)o);
                if (t1 != 0) {
                    set_fields_wrapper_8c05c184((void *)o);
                    aim_direction_8c05bdd4((void *)o);
                    t2 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                    v4->f00 = (S_vv4_0 *)(unsigned short)(int)(t2 * 65536.0f / 6.28318405f);
                    v1->f00 = 1;
                    ((ObjectData *)o)->ff0 = 1;
                    goto L_8c0f6baa;
                }
                v1->f00 = 4;
            } else {
                t3 = check_range_8c01cf68((void *)o, 8.0f);
                if (t3 != 0) {
                    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f3c;
                    (&frame)->f0c.f04 += 8.0f;
                    t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x104);
                    if (t4 != 0) {
                        TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c104070((void *)t4, (int)o, (void *)(&(&frame)->f0c), 100.0f);
                    }
                }
                t5 = check_range_8c01cf68((void *)o, 12.0f);
                if (t5 != 0) {
                    t6 = call_8c0f5220(o);
                    v3->f00 = (int)t6;
                    t7 = call_8c24e644(0x3000b, (void *)(((ObjectData *)o)->f38c));
                    play_se_8c05fbf8(t7, (void *)(((char *)o + 0x3c)), 0, 0);
                }
                v11 = (int)v5->f00;
                if (v11 == 0) {
                    t8 = create_effect_769c((void *)(((char *)o + 0x43c)), 0xeb);
                    v5->f00 = (S_vv5_0 *)(int)t8;
                    if (v5->f00 == 0) {
                        goto L_8c0f6baa;
                    }
                    set_effect_bit0((void *)(v5->f00));
                } else {
                    v12 = (float)((ObjectData *)o)->ff8;
                    if (!(11.0f > v12)) {
                        if (!(v12 > 28.0f)) {
                            goto L_8c0f68e8;
                        }
                    }
                    set_effect_bit0((void *)v11);
                    goto L_8c0f6baa;
L_8c0f68e8:;
                    call_8c0a7608(v11, (void *)(((char *)o + 0x43c)));
                    goto L_8c0f6baa;
L_8c0f6900:;
                    t9 = angle_step((int)(((ObjectData *)o)->f64), (int)(v4->f00), 0x300);
                    ((ObjectData *)o)->f64 = (int)t9;
                    if ((unsigned short)((ObjectData *)o)->f64 == (int)(v4->f00)) {
                        v1->f00 = 2;
                        ((ObjectData *)o)->ff0 = 5;
                        t10 = call_8c24e644(0x3000a, (void *)(((ObjectData *)o)->f38c));
                        play_se_8c05fbf8(t10, (void *)(((char *)o + 0x3c)), 0, 0);
                    }
                    if (v5->f00 != 0) {
                        v17 = (S_vv17 *)v5->f00;
                        v17->f04 |= 1;
                        v5->f00 = (S_vv5_0 *)0;
                    }
                    t11 = call_8c24e644(0x30008, (void *)(((ObjectData *)o)->f38c));
                    call_8c05fd7c(t11, o, (void *)(((char *)o + 0x3c)), 0, 0);
                    goto L_8c0f6baa;
L_8c0f699c:;
                    if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                        t12 = operation_8c05bbf8();
                        if (t12 != 0) {
                            v2->f00 += 1;
                            v20 = (int)v2->f00;
                            if (3 > v20) {
                                t13 = operation_8c0f5158((int)o);
                                if (t13 != 0) {
                                    set_fields_wrapper_8c05c184((void *)o);
                                    aim_direction_8c05bdd4((void *)o);
                                    t14 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                                    v4->f00 = (S_vv4_0 *)(unsigned short)(int)(t14 * 65536.0f / 6.28318405f);
                                    v1->f00 = 1;
                                    ((ObjectData *)o)->ff0 = 1;
                                    goto L_8c0f6a7e;
                                }
                                v1->f00 = 4;
                                goto L_8c0f6a7e;
                            }
                            v2->f00 = 0;
                            v1->f00 = 3;
                            ((ObjectData *)o)->f45c = 0;
                            ((ObjectData *)o)->f450 = 1;
                            ((ObjectData *)o)->f3dc &= -9;
                        } else {
                            v1->f00 = 3;
                            ((ObjectData *)o)->f45c = 0;
                            ((ObjectData *)o)->f450 = 1;
                            ((ObjectData *)o)->f3dc &= -9;
                        }
                    }
L_8c0f6a7e:;
                    t15 = check_range_8c01cf68((void *)o, 14.0f);
                    if (t15 != 0) {
                        v32 = (float)g_8c470618->f24;
                        if (v3->f00 > 0x96) {
                            v32 *= 2.0f;
                        } else if (v3->f00 > 0x46) {
                            v32 *= 1.5f;
                        }
                        call_8c1045b8((void *)(((ObjectData *)o)->f468), (void *)(((char *)o + 0x430)), (void *)(v4->f00), v32);
                    }
                    v36 = (int)v5->f00;
                    if (v36 == 0) {
                        t16 = create_effect_769c((void *)(((char *)o + 0x3c)), 0xed);
                        v5->f00 = (S_vv5_0 *)(int)t16;
                        if (v5->f00 == 0) {
                            goto L_8c0f6baa;
                        }
                        (&frame)->f00 = 0;
                        k = -0x4000;
                        (&frame)->f04 = (int)v4->f00 + k;
                        (&frame)->f08 = k;
                        set_effect_bits((void *)(v5->f00), (unsigned short)2);
                        set_effect_words((void *)(v5->f00), (void *)(&frame));
                        set_effect_bit0((void *)(v5->f00));
                    } else {
                        v37 = (float)((ObjectData *)o)->ff8;
                        if (!(7.0f > v37)) {
                            if (!(v37 > 14.0f)) {
                                goto L_8c0f6b80;
                            }
                        }
                        set_effect_bit0((void *)v36);
                        goto L_8c0f6baa;
L_8c0f6b80:;
                        call_8c0a7608(v36, (void *)(((char *)o + 0x430)));
                        goto L_8c0f6baa;
L_8c0f6b98:;
                        v2->f00 += 1;
                        if (v2->f00 >= 0x3c) {
                            v1->f00 = 4;
                        }
                    }
                }
            }
        }
L_8c0f6baa:;
        o->v108();
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->f3dc &= -9;
        ((ObjectData *)o)->f45c = 0;
        if (v5->f00 != 0) {
            v52 = (S_vv52 *)v5->f00;
            v52->f04 |= 1;
            v5->f00 = (S_vv5_0 *)0;
        }
    }
}
