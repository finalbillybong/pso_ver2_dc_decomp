/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b15d4
 * function: TTecGiBarta_ctor_2_8c0b15d4
 * language: c
 * reference size: 1012 bytes
 * compiled size: 1028 bytes (+1.6%)
 * differing lines: 220 of 392 reference instruction lines
 * differing bytes: 750
 * provenance: generator draft (experimental generator, mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2853d8 S_L8c2853d8;
typedef struct Frame Frame;
typedef struct S_g8c2853d8 S_g8c2853d8;
typedef struct S_g8c2853d8_0 S_g8c2853d8_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv22 S_vv22;
typedef struct S_vv22_0 S_vv22_0;
typedef struct S_vv22_0_0 S_vv22_0_0;
typedef struct S_vv23 S_vv23;
typedef struct S_vv34 S_vv34;
typedef struct S_vv34_14c S_vv34_14c;
typedef struct S_vv34_14c_0 S_vv34_14c_0;
typedef struct S_vv35 S_vv35;
typedef struct S_vv8_0 S_vv8_0;
typedef struct S_vv8_0_0 S_vv8_0_0;
typedef struct S_vv9 S_vv9;
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
    char unknown30[0x28];
    int f58;
    Arg0_5c *f5c;
    int f60;
    char unknown64[0x64];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x76];
    float f148;
    Arg0_14c *f14c;
    char unknown150[0x40];
    int f190;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    Block_frame_10 f10;
    int f1c;
    int f20;
    int f24;
};
struct S_L8c2853d8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv9 {
    char unknown0[0xca];
    short fca;
    int fcc;
};
struct S_vv23 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv22 {
    char unknown0[0xcc];
    int fcc;
};
struct S_vv34 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv34_14c *f14c;
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
extern int g_8c305184;
extern Vector3 g_8c305194;
extern S_L8c2853d8 g_8c2853d8;
extern void call_8c0b99f4(Object *, int, int, int, int);
extern void initialize_effect4_template(void *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_785c(void *, void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecGiBarta_ctor_2_8c0b15d4(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int v2;
    int v1;
    int v5;
    int v11;
    unsigned int v6;
    int v8;
    char *v7;
    S_vv9 *v9;
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
    call_8c0b99f4(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c265e98;
    o->tag = (int)(g_8c305184);
    o->size = 0x194;
    initialize_effect4_template((void *)o);
    o->f148 = 12.0f;
    v1 = (int)0xffff;
    v5 = (int)0;
    goto L_8c0b164c;
    v2 = (int)0;
    do {
        *(short *)((char *)((char *)o + 0x150) + (v2 << 1)) = v1;
        v2 = (int)(v2 + 1);
        v5 = (int)v2;
L_8c0b164c:;
        v2 = (int)v5;
    } while (0x20 > v5);
    o->f190 = 0;
    {
        Object *base = o;
        (&frame)->f1c = (int)(base->f58);
        (&frame)->f20 = 0;
        (&frame)->f24 = (int)(base->f60);
        t1 = call_8c18e768((int)(base->fc8), 5);
        base->fcc = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c2853d8.f04 + (o->fcc << 3)) << 2));
    v6 = (unsigned int)0;
    o->f14c = (Arg0_14c *)t2;
    goto L_8c0b1798;
    v7 = (char *)v6;
    v8 = (int)/* ? clobbered */ 0;
    v9 = (S_vv9 *)/* ? clobbered */ 0;
    do {
        v11 = (int)((int)(v7) << 3);
        if (((*(int *)((char *)((char *)*(S_vv8_0 **)((char *)((char *)v8 + 0x0) + ((int)((void *)&g_8c2853d8))) + 0x4) + (v11)) & 2)) != 0) {
            t3 = create_effect_785c((void *)((int)v9 + 0x24), (void *)(&(&frame)->f1c), (int)(*(S_vv8_0_0 **)((char *)((char *)*(S_vv8_0 **)((char *)((char *)v8 + 0x0) + ((int)((void *)&g_8c2853d8))) + 0x0) + (v11))));
            *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v7) << 2)) = (int)(t3);
        } else {
            *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c305194;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(o->f5c));
            call_8c3be280(0, (void *)(&(&frame)->f10), (void *)(&(&frame)->f10));
            njPopMatrix_8c38accc(1);
            (&frame)->f04 = o->f24 + (&frame)->f10.f00;
            (&frame)->f08 = o->f28 + (&frame)->f10.f04;
            (&frame)->f0c = o->f2c + (&frame)->f10.f08;
            t4 = create_effect_769c((void *)(&(&frame)->f04), (int)(*(S_g8c2853d8_0 **)((char *)((char *)*(S_g8c2853d8 **)((o->fcc << 3) + (int)&g_8c2853d8) + 0x0) + (v11))));
            *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v7) << 2)) = (int)(t4);
        }
        v7 = (char *)(v7 + 1);
        v6 = (unsigned int)v7;
L_8c0b1798:;
        v7 = (char *)v6;
        v8 = (int)(v9->fcc << 3);
        v9 = (S_vv9 *)o;
    } while ((unsigned int)*(int *)((char *)&g_8c2853d8.f04 + (v9->fcc << 3)) > v6);
    if (v9->fcc == 2) {
        v19 = (short)v9->fca;
        if ((short)v19 >= 0xf && 0x19 > (short)v19) {
            v20 = (int)0x14c;
            v30 = (unsigned int)0;
            goto L_8c0b1820;
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
L_8c0b1820:;
                v21 = (int)v30;
                v22 = (S_vv22 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c2853d8.f04 + (v22->fcc << 3)) > v30);
            goto L_8c0b1894;
        }
        if ((short)v19 >= 0x19 && 0x1e > (short)v19) {
            v42 = (unsigned int)0;
            goto L_8c0b1884;
            v33 = (int)0;
            v34 = (S_vv34 *)(short)v19;
            do {
                if (v33 == 1) {
                    v35 = (S_vv35 *)*(S_vv34_14c_0 **)((char *)((char *)v34->f14c + 0x0) + (v33 << 2));
                    if (v35 != 0) {
                        v35->f44 = 1.8f;
                        v35->f48 = 1.8f;
                    }
                }
                v33 = (int)(v33 + 1);
                v42 = (unsigned int)v33;
L_8c0b1884:;
                v33 = (int)v42;
                v34 = (S_vv34 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c2853d8.f04 + (v34->fcc << 3)) > v42);
        }
    }
L_8c0b1894:;
    v65 = (int)o->fcc;
    if (v65 != 0) {
        if (v65 == 1) {
            goto L_8c0b18e4;
        }
        if (v65 == 2) {
            goto L_8c0b18fc;
        }
    } else {
        t5 = play_se_8c05fbf8(0x20005, (void *)(&o->f24), 0, 0);
        if (t5 >= 0) {
            emit_control_60320(t5, 0x100, 0);
            goto L_8c0b1996;
L_8c0b18e4:;
            play_se_8c05fbf8(0x20005, (void *)(&o->f24), 0, 0);
            goto L_8c0b1996;
L_8c0b18fc:;
            v66 = (short)o->fca;
            if ((short)v66 >= 0xf && 0x19 > (short)v66) {
                t6 = play_se_8c05fbf8(0x20005, (void *)(&o->f24), 0, 0);
                if (!(t6 >= 0)) {
                    goto L_8c0b1996;
                }
                emit_control_60320(t6, -0x180, 0);
                goto L_8c0b1996;
            }
            if ((short)v66 >= 0x19 && 0x1e > (short)v66) {
                t7 = play_se_8c05fbf8(0x20005, (void *)(&o->f24), 0, 0);
                if (!(t7 >= 0)) {
                    goto L_8c0b1996;
                }
                emit_control_60320(t7, -0x250, 0);
                goto L_8c0b1996;
            }
            t8 = play_se_8c05fbf8(0x20005, (void *)(&o->f24), 0, 0);
            if (t8 >= 0) {
                emit_control_60320(t8, -0x100, 0);
            }
        }
    }
L_8c0b1996:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
