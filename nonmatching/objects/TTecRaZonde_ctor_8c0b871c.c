/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b871c
 * function: TTecRaZonde_ctor_8c0b871c
 * language: c
 * reference size: 1140 bytes
 * compiled size: 1172 bytes (+2.8%)
 * differing lines: 404 of 436 reference instruction lines
 * differing bytes: 933
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +32 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285728 S_L8c285728;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv6_0_0 S_vv6_0_0;
typedef struct S_vv8 S_vv8;
typedef struct S_x73008 S_x73008;
typedef struct S_x73456 S_x73456;
typedef struct S_x73792 S_x73792;
typedef struct S_x74352 S_x74352;
typedef struct S_x74576 S_x74576;
typedef struct Block_frame_4 {
    float f00;
    float f04;
    float f08;
} Block_frame_4;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
} Block_frame_10;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x4c];
    short f7c;
    short f7e;
    int f80;
    char unknown84[0x14];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_vv8 {
    char unknown0[0x80];
    int f80;
};
struct S_L8c285728 {
    char unknown0[0x4];
    int f04;
};
struct S_x73008 {
    float f00;
};
struct S_x73456 {
    float f00;
};
struct S_x73792 {
    float f00;
};
struct Frame {
    Block_frame_4 f04;
    Block_frame_10 f10;
};
struct S_x74352 {
    Vector3 f00;
};
struct S_x74576 {
    Vector3 f00;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305358;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c285728 g_8c285728;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect8_template(void *);
extern int call_8c18e768(int, int);
extern void create_effect_777c(void *, int);
extern void create_effect_7cc0(void *, int, int, int);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TTecZondeEff_ctor_2_8c0d0788(int, void *, void *, void *, float, float, int, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecRaZonde_ctor_8c0b871c(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v6;
    int v34;
    S_vv8 *v8;
    int v22;
    float v20;
    short v24;
    float v27;
    int v41;
    int v23;
    int v40;
    int v50;
    float v21;
    float v33;
    int v18;
    int v49;
    float v46;
    int v19;
    int v48;
    int v47;
    int v7;
    unsigned int v14;
    int v17;
    int v51;
    float v56;
    short v57;
    float v58;
    float v60;
    float v67;
    int v78;
    short v84;
    int t1;
    float t2;
    float t3;
    float t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a2, a3);
    o->dispatch = (void *)0x8c26619c;
    o->tag = (int)(g_8c305358);
    o->size = 0x16c;
    initialize_effect8_template((void *)o);
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98 + 5.0f;
    }
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (int)(t1);
        v14 = (unsigned int)0;
    }
    goto L_8c0b8800;
    v6 = (int)/* ? clobbered */ 0;
    v7 = (int)0;
    v8 = (S_vv8 *)/* ? clobbered */ 0;
    do {
        if (((*(int *)((char *)((char *)*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + ((int)((void *)&g_8c285728))) + 0x4) + (v7 << 3)) & 8)) != 0) {
            create_effect_777c((void *)((int)v8 + 0x24), (int)(*(S_vv6_0_0 **)((char *)((char *)*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + ((int)((void *)&g_8c285728))) + 0x0) + (v7 << 3))));
        } else {
            create_effect_7cc0((void *)((int)v8 + 0x24), (int)(*(S_vv6_0_0 **)((char *)((char *)*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + ((int)((void *)&g_8c285728))) + 0x0) + (v7 << 3))), 0, 0x1e);
        }
        v7 = (int)(v7 + 1);
        v14 = (unsigned int)v7;
L_8c0b8800:;
        v6 = (int)(v8->f80 << 3);
        v7 = (int)v14;
        v8 = (S_vv8 *)o;
    } while ((unsigned int)*(int *)((char *)&g_8c285728.f04 + (v8->f80 << 3)) > v14);
    v17 = (int)0x10c;
    v18 = (int)0x110;
    v19 = (int)0x114;
    v20 = (float)0.0f;
    v40 = (int)0;
    v41 = (int)0;
    v46 = (float)v20;
    goto L_8c0b88d2;
    v21 = (float)v20;
    v22 = (int)0;
    v23 = (int)0;
    do {
        {
            Object *base = o;
            v27 = (float)5.4f;
            if (base->f80 == 2) {
                v24 = (short)base->f7e;
                if ((short)v24 >= 0xf && 0x19 > (short)v24) {
                    v33 = (float)8.1f;
                    goto L_8c0b8882;
                }
                v27 = (float)5.4f;
                if ((short)v24 >= 0x19) {
                    v27 = (float)5.4f;
                    if (0x1e > (short)v24) {
                        v27 = (float)10.8f;
                    }
                }
            }
            v33 = (float)v27;
L_8c0b8882:;
            v22 = (int)(v22 + 0x2aaa);
            t2 = njCos_8c38c154(v22);
            v34 = (int)(v23 * 0xc);
            ((S_x73008 *)((int)base + v17 + v34))->f00 = (v21 + v33) * t2 + base->f24;
        }
        ((S_x73456 *)((int)o + v18 + v34))->f00 = o->f28;
        t3 = njSin_8c37eb0c(v22);
        ((S_x73792 *)((int)o + v19 + v34))->f00 = (v21 + v33) * t3 + o->f2c;
        v23 = (int)(v23 + 1);
        v40 = (int)v23;
        v41 = (int)v22;
        v46 = (float)(v21 + v33);
L_8c0b88d2:;
        v21 = (float)v46;
        v22 = (int)v41;
        v23 = (int)v40;
    } while (8 > v40);
    v47 = (int)0x10c;
    v48 = (int)0x118;
    v49 = (int)0x298;
    v50 = (int)0x14000000;
    v78 = (int)0;
    goto L_8c0b8a38;
    v51 = (int)0;
    for (;;) {
        *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&((S_x74352 *)((int)o + v47 + v51 * 0xc))->f00;
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x74576 *)((int)o + v48 + v51 * 0xc))->f00;
        (&frame)->f04.f00 -= (&frame)->f10.f00;
        (&frame)->f04.f04 -= (&frame)->f10.f04;
        (&frame)->f04.f08 -= (&frame)->f10.f08;
        t4 = njScalor_8c37e480((void *)(&(&frame)->f04));
        if (t4 != 0.0f) {
            njUnitVector_8c37b630((void *)(&(&frame)->f04));
        }
        if (o->f80 == 0) {
            t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v49);
            if (t5 == 0) {
                goto L_8c0b8a36;
            }
            TTecZondeEff_ctor_2_8c0d0788(t5, g_8c44bea0, (void *)(&(&frame)->f10.f00), (void *)(&(&frame)->f04.f00), t4, 1.0f, v50, 6);
        } else {
            v56 = (float)1.8f;
            v60 = (float)v56;
            if (o->f80 == 2) {
                v57 = (short)o->f7e;
                if ((short)v57 >= 0xf && 0x19 > (short)v57) {
                    v58 = (float)2.7f;
                    v67 = (float)v58;
                    goto L_8c0b8a0a;
                }
                v60 = (float)v56;
                if ((short)v57 >= 0x19) {
                    v60 = (float)v56;
                    if (0x1e > (short)v57) {
                        v60 = (float)3.6f;
                    }
                }
            }
            v67 = (float)v60;
L_8c0b8a0a:;
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v49);
            if (t6 != 0) {
                TTecZondeEff_ctor_2_8c0d0788(t6, g_8c44bea0, (void *)(&(&frame)->f10.f00), (void *)(&(&frame)->f04.f00), t4, v67, v50, 6);
            }
        }
L_8c0b8a36:;
        v78 = (int)(v51 + 1);
L_8c0b8a38:;
        if (!(7 > v78)) {
            v51 = (int)v78;
            break;
        }
        v51 = (int)v78;
    }
    if (o->f80 != 0) {
        if (o->f80 == 1) {
            goto L_8c0b8aa0;
        }
        if (o->f80 == 2) {
            goto L_8c0b8ab8;
        }
    } else {
        t7 = play_se_8c05fbf8(0x2000a, (void *)(&o->f24), 0, 0);
        if (t7 >= 0) {
            emit_control_60320(t7, 0x100, 0);
            goto L_8c0b8b52;
L_8c0b8aa0:;
            play_se_8c05fbf8(0x2000a, (void *)(&o->f24), 0, 0);
            goto L_8c0b8b52;
L_8c0b8ab8:;
            v84 = (short)o->f7e;
            if ((short)v84 >= 0xf && 0x19 > (short)v84) {
                t8 = play_se_8c05fbf8(0x2000a, (void *)(&o->f24), 0, 0);
                if (!(t8 >= 0)) {
                    goto L_8c0b8b52;
                }
                emit_control_60320(t8, -0x180, 0);
                goto L_8c0b8b52;
            }
            if ((short)v84 >= 0x19 && 0x1e > (short)v84) {
                t9 = play_se_8c05fbf8(0x2000a, (void *)(&o->f24), 0, 0);
                if (!(t9 >= 0)) {
                    goto L_8c0b8b52;
                }
                emit_control_60320(t9, -0x250, 0);
                goto L_8c0b8b52;
            }
            t10 = play_se_8c05fbf8(0x2000a, (void *)(&o->f24), 0, 0);
            if (t10 >= 0) {
                emit_control_60320(t10, -0x100, 0);
            }
        }
    }
L_8c0b8b52:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
