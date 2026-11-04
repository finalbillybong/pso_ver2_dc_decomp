/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b5080
 * function: TTecMegid_ctor_2_8c0b5080
 * language: c
 * reference size: 844 bytes
 * compiled size: 852 bytes (+0.9%)
 * differing lines: 224 of 321 reference instruction lines
 * differing bytes: 713
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TTecMegid.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285640 S_L8c285640;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_14c S_vv17_14c;
typedef struct S_vv17_14c_0 S_vv17_14c_0;
typedef struct S_vv18 S_vv18;
typedef struct S_vv29 S_vv29;
typedef struct S_vv29_14c S_vv29_14c;
typedef struct S_vv29_14c_0 S_vv29_14c_0;
typedef struct S_vv30 S_vv30;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv7_0_0 S_vv7_0_0;
typedef struct S_vv8 S_vv8;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0x3c];
    int f60;
    char unknown64[0x64];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x7a];
    Arg0_14c *f14c;
    char unknown150[0x40];
    int f190;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
struct S_L8c285640 {
    char unknown0[0x4];
    int f04;
};
struct S_vv8 {
    char unknown0[0xca];
    short fca;
    int fcc;
};
struct S_vv17 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv17_14c *f14c;
};
struct S_vv18 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv29 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv29_14c *f14c;
};
struct S_vv30 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305270;
extern S_L8c285640 g_8c285640;
extern void call_8c0b99f4(Object *, int, int, int, int);
extern void call_8c0b572c(Object *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_785c(void *, void *, int);
extern int create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecMegid_ctor_2_8c0b5080(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v4;
    unsigned int v5;
    int v7;
    char *v6;
    S_vv8 *v8;
    short v15;
    int v16;
    S_vv17 *v17;
    S_vv18 *v18;
    unsigned int v25;
    int v28;
    S_vv29 *v29;
    S_vv30 *v30;
    unsigned int v37;
    int v61;
    short v62;
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
    o->dispatch = (void *)0x8c266060;
    o->tag = (int)(g_8c305270);
    o->size = 0x194;
    call_8c0b572c(o);
    v4 = (int)0;
    goto L_8c0b50e4;
    v1 = (int)0;
    do {
        *(unsigned short *)((char *)((char *)o + 0x150) + (v1 << 1)) = 0xffff;
        v4 = (int)(v1 + 1);
L_8c0b50e4:;
        v1 = (int)v4;
    } while (0x20 > v4);
    o->f190 = 0;
    {
        Object *base = o;
        (&frame)->f08 = 0;
        (&frame)->f0c = (int)(base->f60);
        t1 = call_8c18e768((int)(base->fc8), 5);
        base->fcc = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c285640.f04 + (o->fcc << 3)) << 2));
    v5 = (unsigned int)0;
    o->f14c = (Arg0_14c *)t2;
    goto L_8c0b51ae;
    v6 = (char *)v5;
    v7 = (int)/* ? clobbered */ 0;
    v8 = (S_vv8 *)/* ? clobbered */ 0;
    do {
        if (((*(int *)((char *)((char *)*(S_vv7_0 **)((char *)((char *)v7 + 0x0) + ((int)((void *)&g_8c285640))) + 0x4) + ((int)(v6) << 3)) & 2)) != 0) {
            t3 = create_effect_785c((void *)((int)v8 + 0x24), (void *)(&(&frame)->f04), (int)(*(S_vv7_0_0 **)((char *)((char *)*(S_vv7_0 **)((char *)((char *)v7 + 0x0) + ((int)((void *)&g_8c285640))) + 0x0) + ((int)(v6) << 3))));
            *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v6) << 2)) = (int)(t3);
        } else {
            t4 = create_effect_769c((void *)((int)v8 + 0x24), (int)(*(S_vv7_0_0 **)((char *)((char *)*(S_vv7_0 **)((char *)((char *)v7 + 0x0) + ((int)((void *)&g_8c285640))) + 0x0) + ((int)(v6) << 3))));
            *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v6) << 2)) = (int)(t4);
        }
        v5 = (unsigned int)(v6 + 1);
L_8c0b51ae:;
        v6 = (char *)v5;
        v7 = (int)(v8->fcc << 3);
        v8 = (S_vv8 *)o;
    } while ((unsigned int)*(int *)((char *)&g_8c285640.f04 + (v8->fcc << 3)) > v5);
    if (v8->fcc == 2) {
        v15 = (short)v8->fca;
        if ((short)v15 >= 0xf && 0x19 > (short)v15) {
            v25 = (unsigned int)0;
            goto L_8c0b521e;
            v16 = (int)0;
            v17 = (S_vv17 *)(short)v15;
            do {
                if (v16 >= 1) {
                    v18 = (S_vv18 *)*(S_vv17_14c_0 **)((char *)((char *)v17->f14c + 0x0) + (v16 << 2));
                    if (v18 != 0) {
                        v18->f44 = 1.6f;
                        v18->f48 = 1.6f;
                    }
                }
                v25 = (unsigned int)(v16 + 1);
L_8c0b521e:;
                v16 = (int)v25;
                v17 = (S_vv17 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c285640.f04 + (v17->fcc << 3)) > v25);
            goto L_8c0b5296;
        }
        if ((short)v15 >= 0x19 && 0x1e > (short)v15) {
            v37 = (unsigned int)0;
            goto L_8c0b5286;
            v28 = (int)0;
            v29 = (S_vv29 *)(short)v15;
            do {
                if (v28 >= 1) {
                    v30 = (S_vv30 *)*(S_vv29_14c_0 **)((char *)((char *)v29->f14c + 0x0) + (v28 << 2));
                    if (v30 != 0) {
                        v30->f44 = 1.6f;
                        v30->f48 = 2.2f;
                    }
                }
                v37 = (unsigned int)(v28 + 1);
L_8c0b5286:;
                v28 = (int)v37;
                v29 = (S_vv29 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c285640.f04 + (v29->fcc << 3)) > v37);
        }
    }
L_8c0b5296:;
    v61 = (int)o->fcc;
    switch (v61) {
    case 0:
        t5 = play_se_8c05fbf8(0x2000b, (void *)(((char *)o + 0x24)), 0, 0);
        if (!(t5 >= 0)) {
            goto L_8c0b539a;
        }
        emit_control_60320(t5, 0x100, 0);
        break;
    case 1:
        play_se_8c05fbf8(0x2000b, (void *)(((char *)o + 0x24)), 0, 0);
        break;
    case 2:
        v62 = (short)o->fca;
        if ((short)v62 >= 0xf) {
            if (0x19 > (short)v62) {
                t6 = play_se_8c05fbf8(0x2000b, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t6 >= 0)) {
                    goto L_8c0b539a;
                }
                emit_control_60320(t6, -0x180, 0);
                goto L_8c0b539a;
            }
        }
        if ((short)v62 >= 0x19) {
            if (0x1e > (short)v62) {
                t7 = play_se_8c05fbf8(0x2000b, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t7 >= 0)) {
                    goto L_8c0b539a;
                }
                emit_control_60320(t7, -0x250, 0);
                goto L_8c0b539a;
            }
        }
        t8 = play_se_8c05fbf8(0x2000b, (void *)(((char *)o + 0x24)), 0, 0);
        if (t8 >= 0) {
            emit_control_60320(t8, -0x100, 0);
        }
    }
L_8c0b539a:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
