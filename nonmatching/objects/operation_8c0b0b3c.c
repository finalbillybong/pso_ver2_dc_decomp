/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b0b3c
 * function: operation_8c0b0b3c
 * language: c
 * reference size: 840 bytes
 * compiled size: 848 bytes (+1.0%)
 * differing lines: 220 of 326 reference instruction lines
 * differing bytes: 789
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285378 S_L8c285378;
typedef struct Frame Frame;
typedef struct S_g8c285378 S_g8c285378;
typedef struct S_g8c285378_0 S_g8c285378_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv15_0_0 S_vv15_0_0;
typedef struct S_vv16 S_vv16;
typedef struct S_vv27 S_vv27;
typedef struct S_vv27_14c S_vv27_14c;
typedef struct S_vv27_14c_0 S_vv27_14c_0;
typedef struct S_vv28 S_vv28;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv3_0_0 S_vv3_0_0;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    char unknown24[0x34];
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x64];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x7a];
    Arg0_14c *f14c;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
};
struct S_L8c285378 {
    char unknown0[0x4];
    int f04;
};
struct S_vv4 {
    char unknown0[0x58];
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x68];
    int fcc;
};
struct S_vv16 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv27 {
    char unknown0[0x14c];
    S_vv27_14c *f14c;
};
struct S_vv28 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern S_L8c285378 g_8c285378;
extern void call_8c0b99f4(Object *, int, int, int, int);
extern void initialize_effect0_template(void *);
extern void create_effect_7ab8(void *, void *, int);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_785c(void *, void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0b0b3c(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    unsigned int v1;
    int v3;
    char *v2;
    S_vv4 *v4;
    char *v70;
    short v12;
    int v14;
    int v15;
    int v13;
    S_vv16 *v16;
    unsigned int v23;
    int v26;
    S_vv27 *v27;
    S_vv28 *v28;
    unsigned int v35;
    int v42;
    int v49;
    int v55;
    int v59;
    short v60;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    call_8c0b99f4(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c265e70;
    initialize_effect0_template((void *)o);
    (&frame)->f10 = (int)(o->f58);
    (&frame)->f14 = 0;
    (&frame)->f18 = (int)(o->f60);
    create_effect_7ab8((void *)(((char *)o + 0x24)), (void *)(&(&frame)->f10), 0x18);
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->fc8), 5);
        base->fcc = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c285378.f04 + (o->fcc << 3)) << 2));
    v1 = (unsigned int)0;
    o->f14c = (Arg0_14c *)t2;
    goto L_8c0b0c6e;
    v2 = (char *)v1;
    v3 = (int)/* ? clobbered */ 0;
    v4 = (S_vv4 *)/* ? clobbered */ 0;
L_8c0b0be8:;
    if (((*(int *)((char *)((char *)*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)((void *)&g_8c285378))) + 0x4) + ((int)(v2) << 3)) & 1)) != 0) {
        (&frame)->f04 = v4->f58 + 0x8000;
        (&frame)->f08 = 0;
        (&frame)->f0c = (int)(v4->f60);
        t3 = create_effect_785c((void *)((int)v4 + 0x24), (void *)(&(&frame)->f04), (int)(*(S_g8c285378_0 **)((char *)((char *)*(S_g8c285378 **)((char *)&g_8c285378 + (v4->fcc << 3)) + 0x0) + ((int)(v2) << 3))));
        *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v2) << 2)) = (int)(t3);
    } else {
        t4 = create_effect_785c((void *)((int)v4 + 0x24), (void *)(&(&frame)->f10), (int)(*(S_vv3_0_0 **)((char *)((char *)*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)((void *)&g_8c285378))) + 0x0) + ((int)(v2) << 3))));
        *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v2) << 2)) = (int)(t4);
    }
    v1 = (unsigned int)(v2 + 1);
L_8c0b0c6e:;
    {
        Object *base = o;
        v70 = (char *)base->fcc;
        if ((unsigned int)*(int *)((char *)&g_8c285378.f04 + ((int)(v70) << 3)) > v1) {
            v2 = (char *)v1;
            v3 = (int)((int)(v70) << 3);
            v4 = (S_vv4 *)base;
            goto L_8c0b0be8;
        }
        v55 = (int)((int)(v70) << 3);
        if ((int)(v70) == 2) {
            v12 = (short)base->fca;
            if ((short)v12 >= 0xf && 0x19 > (short)v12) {
                v13 = (int)0x14c;
                v23 = (unsigned int)0;
                goto L_8c0b0cde;
                v14 = (int)0;
                v15 = (int)(short)v12;
L_8c0b0cbc:;
                if (1 >= v14) {
                    v16 = (S_vv16 *)*(S_vv15_0_0 **)((char *)((char *)*(S_vv15_0 **)((char *)((char *)v15 + 0x0) + (v13)) + 0x0) + (v14 << 2));
                    if (v16 != 0) {
                        v16->f44 = 1.6f;
                        v16->f48 = 1.6f;
                    }
                }
                v23 = (unsigned int)(v14 + 1);
L_8c0b0cde:;
                if ((unsigned int)*(int *)((char *)&g_8c285378.f04 + (o->fcc << 3)) > v23) {
                    v14 = (int)v23;
                    v15 = (int)o;
                    goto L_8c0b0cbc;
                }
                goto L_8c0b0d52;
            }
            v49 = (int)((int)(v70) << 3);
            if ((short)v12 >= 0x19) {
                v42 = (int)((int)(v70) << 3);
                if (0x1e > (short)v12) {
                    v35 = (unsigned int)0;
                    goto L_8c0b0d42;
                    v26 = (int)0;
                    v27 = (S_vv27 *)(short)v12;
L_8c0b0d20:;
                    if (1 >= v26) {
                        v28 = (S_vv28 *)*(S_vv27_14c_0 **)((char *)((char *)v27->f14c + 0x0) + (v26 << 2));
                        if (v28 != 0) {
                            v28->f44 = 2.2f;
                            v28->f48 = 2.2f;
                        }
                    }
                    v35 = (unsigned int)(v26 + 1);
L_8c0b0d42:;
                    v26 = (int)v35;
                    v27 = (S_vv27 *)o;
                    if ((unsigned int)*(int *)((char *)&g_8c285378.f04 + (o->fcc << 3)) > v35) {
                        goto L_8c0b0d20;
                    }
                    v42 = (int)v35;
                }
                v49 = (int)v42;
            }
            v55 = (int)v49;
        }
    }
    v23 = (unsigned int)v55;
L_8c0b0d52:;
    v59 = (int)o->fcc;
    if (v59 != 0) {
        if (v59 == 1) {
            goto L_8c0b0da0;
        }
        if (v59 == 2) {
            goto L_8c0b0db8;
        }
    } else {
        t5 = play_se_8c05fbf8(0x20000, (void *)(((char *)o + 0x24)), 0, 0);
        if (t5 >= 0) {
            emit_control_60320(t5, 0x100, 0);
            goto L_8c0b0e52;
L_8c0b0da0:;
            play_se_8c05fbf8(0x20000, (void *)(((char *)o + 0x24)), 0, 0);
            goto L_8c0b0e52;
L_8c0b0db8:;
            v60 = (short)o->fca;
            if ((short)v60 >= 0xf && 0x19 > (short)v60) {
                t6 = play_se_8c05fbf8(0x20000, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t6 >= 0)) {
                    goto L_8c0b0e52;
                }
                emit_control_60320(t6, -0x180, 0);
                goto L_8c0b0e52;
            }
            if ((short)v60 >= 0x19 && 0x1e > (short)v60) {
                t7 = play_se_8c05fbf8(0x20000, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t7 >= 0)) {
                    goto L_8c0b0e52;
                }
                emit_control_60320(t7, -0x250, 0);
                goto L_8c0b0e52;
            }
            t8 = play_se_8c05fbf8(0x20000, (void *)(((char *)o + 0x24)), 0, 0);
            if (t8 >= 0) {
                emit_control_60320(t8, -0x100, 0);
            }
        }
    }
L_8c0b0e52:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
