/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0acd00
 * function: TTecBarta_ctor_2_8c0acd00
 * language: c
 * reference size: 956 bytes
 * compiled size: 956 bytes (+0.0%)
 * differing lines: 242 of 368 reference instruction lines
 * differing bytes: 750
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
typedef struct S_L8c2852d0 S_L8c2852d0;
typedef struct Frame Frame;
typedef struct S_g8c2852d0 S_g8c2852d0;
typedef struct S_g8c2852d0_0 S_g8c2852d0_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv24 S_vv24;
typedef struct S_vv24_14c S_vv24_14c;
typedef struct S_vv24_14c_0 S_vv24_14c_0;
typedef struct S_vv26 S_vv26;
typedef struct S_vv37 S_vv37;
typedef struct S_vv37_14c S_vv37_14c;
typedef struct S_vv37_14c_0 S_vv37_14c_0;
typedef struct S_vv39 S_vv39;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9_0 S_vv9_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
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
    char unknownd2[0x5e];
    int f130;
    char unknown134[0x18];
    Arg0_14c *f14c;
    char unknown150[0x40];
    int f190;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
};
struct S_L8c2852d0 {
    char unknown0[0x4];
    int f04;
};
struct S_vv8 {
    char unknown0[0x60];
    int f60;
    char unknown64[0x66];
    short fca;
    int fcc;
};
struct S_vv24 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv24_14c *f14c;
};
struct S_vv26 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv37 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv37_14c *f14c;
};
struct S_vv39 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c3047d8;
extern S_L8c2852d0 g_8c2852d0;
extern void call_8c0b99f4(Object *, int, int, int, int);
extern void call_8c0ad348(Object *);
extern int call_8c18e768(int, int);
extern int operator_new_8c18de4c(int);
extern int create_effect_785c(void *, void *, int);
extern int create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecBarta_ctor_2_8c0acd00(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int v4;
    unsigned int v5;
    int v7;
    int v9;
    char *v6;
    int v10;
    S_vv8 *v8;
    short v22;
    int v23;
    S_vv24 *v24;
    S_vv26 *v26;
    unsigned int v33;
    int v36;
    S_vv37 *v37;
    S_vv39 *v39;
    unsigned int v46;
    int v69;
    short v70;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    (void)home;
    call_8c0b99f4(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c265dc8;
    o->tag = (int)(g_8c3047d8);
    o->size = 0x194;
    call_8c0ad348(o);
    o->f130 = 0x80003;
    v4 = (int)0;
    goto L_8c0acd74;
    v1 = (int)0;
    do {
        *(unsigned short *)((char *)((char *)o + 0x150) + (v1 << 1)) = 0xffff;
        v4 = (int)(v1 + 1);
L_8c0acd74:;
        v1 = (int)v4;
    } while (0x20 > v4);
    o->f190 = 0;
    {
        Object *base = o;
        (&frame)->f10 = (int)(base->f58);
        (&frame)->f14 = 0;
        (&frame)->f18 = (int)(base->f60);
        t1 = call_8c18e768((int)(base->fc8), 5);
        base->fcc = (int)(t1);
    }
    t2 = operator_new_8c18de4c((int)(*(int *)((char *)&g_8c2852d0.f04 + (o->fcc << 3)) << 2));
    v5 = (unsigned int)0;
    o->f14c = (Arg0_14c *)t2;
    goto L_8c0ace9a;
    v6 = (char *)v5;
    v7 = (int)/* ? clobbered */ 0;
    v8 = (S_vv8 *)/* ? clobbered */ 0;
    do {
        v9 = (int)*(int *)((char *)((char *)v7 + 0x0) + ((int)((void *)&g_8c2852d0)));
        v10 = (int)*(int *)((char *)((char *)v9 + 0x4) + ((int)(v6) << 3));
        if (((v10 & 1)) != 0) {
            (&frame)->f08 = 0;
            (&frame)->f0c = (int)(v8->f60);
            t3 = create_effect_785c((void *)((int)v8 + 0x24), (void *)(&(&frame)->f04), (int)(*(S_g8c2852d0_0 **)((char *)((char *)*(S_g8c2852d0 **)((char *)&g_8c2852d0 + (v8->fcc << 3)) + 0x0) + ((int)(v6) << 3))));
            *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v6) << 2)) = (int)(t3);
        } else {
            if (((v10 & 2)) != 0) {
                t4 = create_effect_785c((void *)((int)v8 + 0x24), (void *)(&(&frame)->f10), (int)(*(S_vv9_0 **)((char *)((char *)v9 + 0x0) + ((int)(v6) << 3))));
                *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v6) << 2)) = (int)(t4);
            } else {
                t5 = create_effect_769c((void *)((int)v8 + 0x24), (int)(*(S_vv9_0 **)((char *)((char *)v9 + 0x0) + ((int)(v6) << 3))));
                *(int *)((char *)((char *)o->f14c + 0x0) + ((int)(v6) << 2)) = (int)(t5);
            }
        }
        v5 = (unsigned int)(v6 + 1);
L_8c0ace9a:;
        v6 = (char *)v5;
        v7 = (int)(v8->fcc << 3);
        v8 = (S_vv8 *)o;
    } while ((unsigned int)*(int *)((char *)&g_8c2852d0.f04 + (v8->fcc << 3)) > v5);
    if (v8->fcc == 2) {
        v22 = (short)v8->fca;
        if ((short)v22 >= 0xf && 0x19 > (short)v22) {
            v33 = (unsigned int)0;
            goto L_8c0acf10;
            v23 = (int)0;
            v24 = (S_vv24 *)(short)v22;
            do {
                if (v23 != 0 && v23 != 3) {
                } else {
                    v26 = (S_vv26 *)*(S_vv24_14c_0 **)((char *)((char *)v24->f14c + 0x0) + (v23 << 2));
                    if (v26 != 0) {
                        v26->f44 = 1.6f;
                        v26->f48 = 1.6f;
                    }
                }
                v33 = (unsigned int)(v23 + 1);
L_8c0acf10:;
                v23 = (int)v33;
                v24 = (S_vv24 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c2852d0.f04 + (v24->fcc << 3)) > v33);
            goto L_8c0acf88;
        }
        if ((short)v22 >= 0x19 && 0x1e > (short)v22) {
            v46 = (unsigned int)0;
            goto L_8c0acf78;
            v36 = (int)0;
            v37 = (S_vv37 *)(short)v22;
            do {
                if (v36 != 0 && v36 != 3) {
                } else {
                    v39 = (S_vv39 *)*(S_vv37_14c_0 **)((char *)((char *)v37->f14c + 0x0) + (v36 << 2));
                    if (v39 != 0) {
                        v39->f44 = 2.2f;
                        v39->f48 = 2.2f;
                    }
                }
                v46 = (unsigned int)(v36 + 1);
L_8c0acf78:;
                v36 = (int)v46;
                v37 = (S_vv37 *)o;
            } while ((unsigned int)*(int *)((char *)&g_8c2852d0.f04 + (v37->fcc << 3)) > v46);
        }
    }
L_8c0acf88:;
    v69 = (int)o->fcc;
    switch (v69) {
    case 0:
        t6 = play_se_8c05fbf8(0x20004, (void *)(((char *)o + 0x24)), 0, 0);
        if (!(t6 >= 0)) {
            goto L_8c0ad08a;
        }
        emit_control_60320(t6, 0x100, 0);
        break;
    case 1:
        play_se_8c05fbf8(0x20004, (void *)(((char *)o + 0x24)), 0, 0);
        break;
    case 2:
        v70 = (short)o->fca;
        if ((short)v70 >= 0xf) {
            if (0x19 > (short)v70) {
                t7 = play_se_8c05fbf8(0x20004, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t7 >= 0)) {
                    goto L_8c0ad08a;
                }
                emit_control_60320(t7, -0x180, 0);
                goto L_8c0ad08a;
            }
        }
        if ((short)v70 >= 0x19) {
            if (0x1e > (short)v70) {
                t8 = play_se_8c05fbf8(0x20004, (void *)(((char *)o + 0x24)), 0, 0);
                if (!(t8 >= 0)) {
                    goto L_8c0ad08a;
                }
                emit_control_60320(t8, -0x250, 0);
                goto L_8c0ad08a;
            }
        }
        t9 = play_se_8c05fbf8(0x20004, (void *)(((char *)o + 0x24)), 0, 0);
        if (t9 >= 0) {
            emit_control_60320(t9, -0x100, 0);
        }
    }
L_8c0ad08a:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
