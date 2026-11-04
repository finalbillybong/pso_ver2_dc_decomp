/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7080
 * function: TTecRaBarta_ctor_2_8c0b7080
 * language: c
 * reference size: 976 bytes
 * compiled size: 972 bytes (-0.4%)
 * differing lines: 204 of 364 reference instruction lines
 * differing bytes: 520
 * provenance: generator draft (experimental generator, mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TTecRaBarta.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285688 S_L8c285688;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg3 Arg3;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12_0 S_vv12_0;
typedef struct S_vv12_0_0 S_vv12_0_0;
typedef struct S_vv22 S_vv22;
typedef struct S_vv22_0 S_vv22_0;
typedef struct S_vv22_0_0 S_vv22_0_0;
typedef struct S_vv23 S_vv23;
typedef struct S_vv34 S_vv34;
typedef struct S_vv34_110 S_vv34_110;
typedef struct S_vv34_110_0 S_vv34_110_0;
typedef struct S_vv35 S_vv35;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Vector3 f24;
    char unknown30[0x4c];
    short f7c;
    short f7e;
    int f80;
    Vector3 f84;
    char unknown90[0x8];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
    int f108;
    int f10c;
    Arg0_110 *f110;
    char unknown114[0x40];
    int f154;
};
struct Arg3 {
    Vector3 f00;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_L8c285688 {
    char unknown0[0x4];
    int f04;
};
struct S_vv11 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x5a];
    short f7e;
    int f80;
};
struct S_vv23 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv22 {
    char unknown0[0x80];
    int f80;
};
struct S_vv34 {
    char unknown0[0x80];
    int f80;
    char unknown84[0x8c];
    S_vv34_110 *f110;
};
struct S_vv35 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305300;
extern S_L8c285688 g_8c285688;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void initialize_effect5_template(void *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecRaBarta_ctor_2_8c0b7080(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    int v6;
    int v5;
    int v9;
    int v10;
    S_vv11 *v11;
    int v12;
    char *v13;
    unsigned int v17;
    short v19;
    int v21;
    S_vv22 *v22;
    int v20;
    S_vv23 *v23;
    unsigned int v30;
    int v33;
    S_vv34 *v34;
    S_vv35 *v35;
    unsigned int v42;
    int v65;
    short v66;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a3, a4);
    o->dispatch = (void *)0x8c266138;
    o->tag = (int)(g_8c305300);
    o->size = 0x158;
    initialize_effect5_template((void *)o);
    o->f10c = 1;
    *(Vector3 *)&o->f84 = *(Vector3 *)&a3->f00;
    *(Vector3 *)&o->f24 = *(Vector3 *)&a3->f00;
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98;
    }
    v5 = (int)0xffff;
    v9 = (int)0;
    goto L_8c0b713c;
    v6 = (int)0;
    do {
        *(short *)((char *)((char *)o + 0x114) + (v6 << 1)) = v5;
        v6 = (int)(v6 + 1);
        v9 = (int)v6;
L_8c0b713c:;
        v6 = (int)v9;
    } while (0x20 > v9);
    o->f154 = 0;
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c285688.f04 + (o->f80 << 3)) << 2));
    v10 = (int)0;
    o->f110 = (Arg0_110 *)t2;
    v17 = (unsigned int)v10;
    goto L_8c0b71c4;
    v11 = (S_vv11 *)/* ? clobbered */ 0;
    v12 = (int)/* ? clobbered */ 0;
    v13 = (char *)v10;
    do {
        t3 = create_effect_769c((void *)(v11->f20 + 0x324), (int)(*(S_vv12_0_0 **)((char *)((char *)*(S_vv12_0 **)((char *)((char *)v12 + 0x0) + ((int)((void *)&g_8c285688))) + 0x0) + ((int)(v13) << 3))));
        *(int *)((char *)((char *)o->f110 + 0x0) + ((int)(v13) << 2)) = (int)(t3);
        v13 = (char *)(v13 + 1);
        v17 = (unsigned int)v13;
L_8c0b71c4:;
        v11 = (S_vv11 *)o;
        v12 = (int)(v11->f80 << 3);
        v13 = (char *)v17;
    } while ((unsigned int)*(int *)((char *)&g_8c285688.f04 + (v11->f80 << 3)) > v17);
    if (v11->f80 == 2) {
        v19 = (short)v11->f7e;
        if ((short)v19 >= 0xf && 0x19 > (short)v19) {
            v20 = (int)0x110;
            v30 = (unsigned int)0;
            goto L_8c0b7230;
            v21 = (int)0;
            v22 = (S_vv22 *)(short)v19;
            do {
                if (v21 == 1) {
                    v23 = (S_vv23 *)*(S_vv22_0_0 **)((char *)((char *)*(S_vv22_0 **)((char *)((char *)v22 + 0x0) + (v20)) + 0x0) + (v21 << 2));
                    if (v23 != 0) {
                        v23->f44 = 1.3f;
                        v23->f48 = 1.3f;
                    }
                }
                v21 = (int)(v21 + 1);
                v30 = (unsigned int)v21;
L_8c0b7230:;
                v21 = (int)v30;
                v22 = (S_vv22 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c285688.f04 + (v22->f80 << 3)) > v30);
            goto L_8c0b72a8;
        }
        if ((short)v19 >= 0x19 && 0x1e > (short)v19) {
            v42 = (unsigned int)0;
            goto L_8c0b7298;
            v33 = (int)0;
            v34 = (S_vv34 *)(short)v19;
            do {
                if (v33 == 1) {
                    v35 = (S_vv35 *)*(S_vv34_110_0 **)((char *)((char *)v34->f110 + 0x0) + (v33 << 2));
                    if (v35 != 0) {
                        v35->f44 = 1.3f;
                        v35->f48 = 1.8f;
                    }
                }
                v33 = (int)(v33 + 1);
                v42 = (unsigned int)v33;
L_8c0b7298:;
                v33 = (int)v42;
                v34 = (S_vv34 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c285688.f04 + (v34->f80 << 3)) > v42);
        }
    }
L_8c0b72a8:;
    v65 = (int)o->f80;
    if (v65 != 0) {
        if (v65 == 1) {
            goto L_8c0b7314;
        }
        if (v65 == 2) {
            goto L_8c0b7340;
        }
    } else {
        t4 = play_se_8c05fbf8(0x20006, (void *)(((char *)o->f20 + 0x324)), 0, 0);
        o->f108 = (int)(t4);
        if (!(o->f108 >= 0)) {
        } else {
            emit_control_60320((int)(o->f108), 0x100, 0);
            goto L_8c0b7414;
L_8c0b7314:;
            t5 = play_se_8c05fbf8(0x20006, (void *)(((char *)o->f20 + 0x324)), 0, 0);
            o->f108 = (int)(t5);
            goto L_8c0b7414;
L_8c0b7340:;
            v66 = (short)o->f7e;
            if ((short)v66 >= 0xf && 0x19 > (short)v66) {
                t6 = play_se_8c05fbf8(0x20006, (void *)(((char *)o->f20 + 0x324)), 0, 0);
                o->f108 = (int)(t6);
                if (!(o->f108 >= 0)) {
                    goto L_8c0b7414;
                }
                emit_control_60320((int)(o->f108), -0x180, 0);
                goto L_8c0b7414;
            }
            if ((short)v66 >= 0x19 && 0x1e > (short)v66) {
                t7 = play_se_8c05fbf8(0x20006, (void *)(((char *)o->f20 + 0x324)), 0, 0);
                o->f108 = (int)(t7);
                if (!(o->f108 >= 0)) {
                    goto L_8c0b7414;
                }
                emit_control_60320((int)(o->f108), -0x250, 0);
                goto L_8c0b7414;
            }
            t8 = play_se_8c05fbf8(0x20006, (void *)(((char *)o->f20 + 0x324)), 0, 0);
            o->f108 = (int)(t8);
            if (o->f108 >= 0) {
                emit_control_60320((int)(o->f108), -0x100, 0);
            }
        }
    }
L_8c0b7414:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
