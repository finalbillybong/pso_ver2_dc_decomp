/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c242abc
 * function: operation_8c242abc
 * language: c++
 * reference size: 1920 bytes
 * compiled size: 1920 bytes (+0.0%)
 * differing lines: 48 of 738 reference instruction lines
 * differing bytes: 28
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_4c S_g8c46fe20_4c;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_40_0 Arg0_40_0;
typedef struct Arg0_40_4 Arg0_40_4;
typedef struct Arg0_40_8 Arg0_40_8;
typedef struct Arg0_40_c Arg0_40_c;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv5 S_vv5;
typedef struct S_vv93 S_vv93;
class S_c8c021ef8;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
    char unknown34[0xc];
    Arg0_40 *f40;
    int f44;
    char unknown48[0x4];
    Arg0_4c *f4c;
    Arg0_50 *f50;
    Arg0_54 *f54;
};
struct S_g8c46fe20 {
    char unknown0[0x4c];
    S_g8c46fe20_4c *f4c;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
class S_c8c021ef8 {
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
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x318];
    int f350;
} S_c8c021ef8Data;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_40 {
    Arg0_40_0 *f00;
    Arg0_40_4 *f04;
    Arg0_40_8 *f08;
    Arg0_40_c *f0c;
};
struct Arg0_50 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv93 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c418258;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern int g_8c510c94;
extern int g_8c510c98;
extern unsigned short g_8c510c9c;
extern S_L8c41cba0 g_8c41cba0;
extern "C" char g_8c33ab28[];
extern "C" void operation_8c2443e4(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TDuelEffectCtrl_ctor_8c24e6d8(void *, void *, unsigned char);
extern "C" void request_resource_release(void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02641c(void *);
extern "C" void call_8c244730(Object *);
extern "C" int operation_8c244850(void *);
extern "C" void clear_pair_8c244878(void *);
extern "C" void call_8c243cd4(Object *);
extern "C" void operation_8c243ed4(Object *);
extern "C" void operation_8c244014(int, int);
extern "C" void TWindowDuelResult_ctor_8c24e084(void *);
extern "C" void operation_8c2432a0(int, int);
extern "C" void operation_8c243330(int, int);
extern "C" int call_8c2436e4(Object *, int);
extern "C" void operation_8c2436b8(int, int, int);
extern "C" int call_8c1196d4(void *, void *, int);
extern "C" void operation_8c119764(int, int, int);
extern "C" int operation_8c156c24(int, int);
extern "C" void add_wrapper_8c156d30(Arg0_50 *, void *, int, int);
extern "C" void operation_8c156f50(Arg0_50 *);
extern "C" void operation_8c157138(void *);
extern "C" int operation_8c1571f4(void *);
extern "C" void operation_8c24451c(Object *);
extern "C" int player_flag9_8c026508(void);
extern "C" void operation_8c242abc(Object *o)
{
    S_vv5 *v5;
    int v69;
    int v30;
    int t7;
    S_c8c021ef8 *t8;
    S_c8c021ef8 *t14;
    S_vv93 *v93;
    int v117;
    int t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    S_c8c021ef8 *t4;
    S_c8c021ef8 *t5;
    int t6;
    int v24;
    int v52;
    S_c8c021ef8 *t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int v57;
    S_c8c021ef8 *t15;
    int t16;
    int t17;
    S_c8c021ef8 *t18;
    S_c8c021ef8 *t19;
    int t20;
    int v_id;
    switch (o->f24) {
    case 0:
        operation_8c2443e4((void *)o);
        g_8c510c94 = 0;
        g_8c510c98 = 0;
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x28);
        if (t1 != 0) {
            TDuelEffectCtrl_ctor_8c24e6d8((void *)t1, (void *)o, (unsigned char)1);
        }
        o->f30 = 0x78;
        if (g_8c46fe20 != 0) {
            if (g_8c46fe20->f4c != 0) {
                request_resource_release((void *)(g_8c46fe20->f4c));
                g_8c46fe20->f4c = (S_g8c46fe20_4c *)0;
            }
        }
        v5 = (S_vv5 *)g_8c46fe20;
        if (v5 != 0) {
            v5->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
        o->f24 = 1;
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 == 0) {
            goto L_8c243192;
        }
        operation_8c02641c((void *)t2);
        break;
    case 1:
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 != 0) {
            operation_8c02641c((void *)t3);
        }
        if (--o->f30 > 0) {
            goto L_8c243192;
        }
        call_8c244730(o);
        o->f30 = 0x5a;
        o->f24 = 2;
        break;
    case 2:
        t4 = lookup_low_id((int)g_8c418248);
        if (t4 != 0) {
            operation_8c02641c((void *)t4);
        }
        if (--o->f30 > 0) {
            goto L_8c243192;
        }
        o->f44 = 0x1c2;
        o->f24 = 3;
        break;
    case 3:
        t5 = lookup_low_id((int)g_8c418248);
        if (t5 != 0) {
            operation_8c02641c((void *)t5);
        }
        o->f44 -= 1;
        t6 = operation_8c244850((void *)o);
        if (t6 == 0) {
            if (o->f44 > 0) {
                goto L_8c243192;
            }
        }
        clear_pair_8c244878((void *)o);
        call_8c243cd4(o);
        operation_8c243ed4(o);
        if (g_8c510c9c == (int)(g_8c418248)) {
            operation_8c244014((int)(g_8c33ab28 + 0x2cf), 0x96);
        } else {
            operation_8c244014((int)(g_8c33ab28 + 0x2d7), 0x96);
        }
        o->f24 = 4;
        break;
    case 4:
        if (o->f54 != 0) {
            request_resource_release((void *)(o->f54));
        }
        t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x6c);
        if (t7 != 0) {
            TWindowDuelResult_ctor_8c24e084((void *)t7);
        }
        o->f54 = (Arg0_54 *)(int)t7;
        t8 = lookup_low_id((int)g_8c418248);
        if (t8 != 0) {
            v24 = (int)(((((S_c8c021ef8Data *)t8)->f350 & 1)) != 0);
            if (v24 == 0) {
                operation_8c2432a0((int)g_8c418248, 1);
            }
            operation_8c02641c((void *)t8);
        }
        o->f24 = 5;
        break;
    case 5:
        if ((((&g_8c41cba0)->f28 & 2)) == 0) {
            goto L_8c243192;
        }
        operation_8c243330((int)g_8c418248, 1);
        request_resource_release((void *)(o->f54));
        o->f54 = (Arg0_54 *)0;
        o->f24 = 6;
        t9 = lookup_low_id((int)g_8c418248);
        if (t9 == 0) {
            goto L_8c243192;
        }
        if (((((S_c8c021ef8Data *)t9)->f34 & 0x800)) == 0) {
            goto L_8c243192;
        }
        t9->v72();
        break;
    case 6:
        t10 = call_8c2436e4(o, 0);
        if (t10 != 0) {
            operation_8c2436b8(5, 1, 0);
            goto L_8c243192;
        }
        t14 = lookup_low_id((int)g_8c418248);
        v_id = (int)g_8c418248;
        if (v_id != g_8c418258) {
        } else {
            if (g_8c4dbde0 == 0) {
                v30 = (int)0;
            } else {
                v30 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v30 != 0) {
            } else {
                if (o->f4c == 0) {
                    t11 = call_8c1196d4((void *)((void *)0x8c2e1e48), (void *)((void *)0x8c2e1e50), 1);
                    o->f4c = (Arg0_4c *)(int)t11;
                    if (o->f4c != 0) {
                        operation_8c119764((int)(o->f4c), (int)(o->f40->f00), 0x80);
                    }
                }
                if (o->f50 == 0) {
                    t12 = operation_8c156c24((int)((void *)0x8c2e1e58), 3);
                    o->f50 = (Arg0_50 *)(int)t12;
                    add_wrapper_8c156d30((Arg0_50 *)(o->f50), (void *)(o->f40->f04), 6, 1);
                    add_wrapper_8c156d30((Arg0_50 *)(o->f50), (void *)(o->f40->f08), 6, 2);
                    add_wrapper_8c156d30((Arg0_50 *)(o->f50), (void *)(o->f40->f0c), 6, 3);
                    operation_8c156f50((Arg0_50 *)(o->f50));
                    operation_8c157138((void *)(o->f50));
                    o->f50->f80 = (o->f50->f80 & 0xffff) | 1;
                }
                if (o->f50 != 0) {
                    if (((o->f50->f80 & 0xffff & 2)) != 0) {
                        t13 = operation_8c1571f4((void *)(o->f50));
                        if (t13 != 1) {
                            if (t13 == 2) {
                                goto L_8c242fb0;
                            }
                            if (t13 == 3) {
                                goto L_8c242fb6;
                            }
                            goto L_8c242fd8;
                        }
                        operation_8c24451c(o);
                        o->f24 = 9;
                        goto L_8c242fd8;
L_8c242fb0:;
                        o->f24 = 7;
                        goto L_8c242fd8;
L_8c242fb6:;
                        operation_8c2436b8(4, 0, 0);
                        o->f24 = 9;
                    } else {
                        if (((o->f50->f80 & 0xffff & 4)) != 0) {
                            o->f24 = 7;
                        }
                    }
                }
L_8c242fd8:;
                if (t14 == 0) {
                    goto L_8c243192;
                }
                v52 = (int)(((((S_c8c021ef8Data *)t14)->f350 & 1)) != 0);
                if (v52 != 0) {
                    goto L_8c243192;
                }
                operation_8c2432a0((int)g_8c418248, 1);
                goto L_8c243192;
            }
        }
        if (t14 == 0) {
            goto L_8c243192;
        }
        v57 = (int)(((((S_c8c021ef8Data *)t14)->f350 & 1)) != 0);
        if (v57 == 0) {
            goto L_8c243192;
        }
        operation_8c243330(v_id, 1);
        break;
    case 7:
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        t15 = lookup_low_id((int)g_8c418248);
        if (t15 != 0) {
            v69 = (int)(((((S_c8c021ef8Data *)t15)->f350 & 1)) != 0);
            if (v69 != 0) {
                operation_8c243330((int)g_8c418248, 1);
            }
        }
        o->f24 = 8;
    case 8:
        t16 = call_8c2436e4(o, 0);
        if (t16 != 0) {
            operation_8c2436b8(5, 1, 0);
            goto L_8c243192;
        }
        t17 = player_flag9_8c026508();
        if (t17 != 0) {
            goto L_8c243192;
        }
        if ((((&g_8c41cba0)->f28 & 6)) == 0) {
            goto L_8c243192;
        }
        o->f24 = 6;
        break;
    case -1:
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        if (o->f54 != 0) {
            request_resource_release((void *)(o->f54));
            o->f54 = (Arg0_54 *)0;
        }
        t18 = lookup_low_id((int)g_8c418248);
        if (t18 != 0) {
            ((S_c8c021ef8Data *)t18)->f34 &= -0x20001;
        }
        if (g_8c46fe20 != 0) {
            if (g_8c46fe20->f4c != 0) {
                request_resource_release((void *)(g_8c46fe20->f4c));
                g_8c46fe20->f4c = (S_g8c46fe20_4c *)0;
            }
        }
        v93 = (S_vv93 *)g_8c46fe20;
        if (v93 != 0) {
            v93->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
    case 9:
        break;
    }
L_8c243192:;
    if (o->f24 != 6 && o->f24 != 8) {
        return;
    }
    t19 = lookup_low_id((int)g_8c418248);
    if (t19 != 0) {
        t20 = player_flag9_8c026508();
        if (t20 == 0) {
            if (g_8c4dbde0 == 0) {
                v117 = (int)0;
            } else {
                v117 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v117 == 0 && (((&g_8c41cba0)->f28 & 0x400)) != 0) {
                if (o->f4c != 0) {
                    request_resource_release((void *)(o->f4c));
                    o->f4c = (Arg0_4c *)0;
                }
                if (o->f50 != 0) {
                    request_resource_release((void *)(o->f50));
                    o->f50 = (Arg0_50 *)0;
                }
                o->f24 = 4;
            }
        }
    }
}
