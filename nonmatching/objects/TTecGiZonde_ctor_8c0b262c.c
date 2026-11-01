/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b262c
 * function: TTecGiZonde_ctor_8c0b262c
 * language: c
 * reference size: 644 bytes
 * compiled size: 640 bytes (-0.6%)
 * differing lines: 166 of 271 reference instruction lines
 * differing bytes: 330
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block92 {
    int words[23];
} Block92;
typedef struct S_L8c285450 S_L8c285450;
typedef struct Frame Frame;
typedef struct S_g8c285450 S_g8c285450;
typedef struct S_g8c285450_0 S_g8c285450_0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg3 Arg3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5_0 S_vv5_0;
typedef struct Block_p0_14c {
    int f00;
    char unknown4[0x58];
} Block_p0_14c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0xa4];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x7a];
    Block_p0_14c f14c;
};
struct Arg3 {
    Block92 f00;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
struct S_vv4 {
    char unknown0[0x58];
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x66];
    short fca;
    int fcc;
};
struct S_L8c285450 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c3051d0;
extern S_L8c285450 g_8c285450;
extern void call_8c0b9730(Object *, int, int, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect7_template(void *);
extern int call_8c18e768(int, int);
extern void create_effect_7ab8(void *, void *, int);
extern void create_effect_7cc0(void *, int, int, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
extern void operation_8c07de9c();
Object *TTecGiZonde_ctor_8c0b262c(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int v3;
    int v5;
    int v2;
    S_vv4 *v4;
    short v6;
    int v1;
    unsigned int v20;
    short v22;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    call_8c0b9730(o, a1, a2, 0, a4);
    o->dispatch = (void *)0x8c265f00;
    call_8c18e044((void *)(((char *)o + 0x150)), operation_8c07de9c, 0, 8, 0xb);
    o->f14c.f00 = 0;
    o->tag = (int)(g_8c3051d0);
    o->size = 0x1a8;
    initialize_effect7_template((void *)o);
    *(Block92 *)&o->f14c = *(Block92 *)&a3->f00;
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->fc8), 5);
        base->fcc = (int)(t1);
        v1 = (int)0x19f;
        v20 = (unsigned int)0;
        goto L_8c0b2756;
        v2 = (int)0;
        v3 = (int)/* ? clobbered */ 0;
        v4 = (S_vv4 *)/* ? clobbered */ 0;
L_8c0b26b2:;
        v5 = (int)*(int *)((char *)((char *)v3 + 0x0) + ((int)((void *)&g_8c285450)));
        if (((*(int *)((char *)((char *)v5 + 0x4) + (v2 << 3)) & 2)) != 0) {
            (&frame)->f04 = (int)(v4->f58);
            (&frame)->f08 = 0;
            (&frame)->f0c = (int)(v4->f60);
            create_effect_7ab8((void *)((int)v4 + 0x24), (void *)(&(&frame)->f04), (int)(*(S_g8c285450_0 **)((char *)((char *)*(S_g8c285450 **)((v4->fcc << 3) + (int)&g_8c285450) + 0x0) + (v2 << 3))));
        } else {
            if (v4->fcc == 2) {
                v6 = (short)v4->fca;
                if ((short)v6 >= 0xf && 0x19 > (short)v6) {
                    create_effect_7cc0((void *)((int)v4 + 0x24), (int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + (v2 << 3))), 0, 0x1e);
                    goto L_8c0b2754;
                }
                if (!((short)v6 >= 0x19)) {
                    goto L_8c0b2754;
                }
                if (!(0x1e > (short)v6)) {
                    goto L_8c0b2754;
                }
                create_effect_7cc0((void *)((int)v4 + 0x24), v1, 0, 0x1e);
            } else {
                create_effect_7cc0((void *)((int)v4 + 0x24), (int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + (v2 << 3))), 0, 0x1e);
            }
        }
    }
L_8c0b2754:;
    v20 = (unsigned int)(v2 + 1);
L_8c0b2756:;
    {
        Object *base = o;
        v2 = (int)v20;
        v3 = (int)(base->fcc << 3);
        v4 = (S_vv4 *)base;
        if ((unsigned int)*(int *)((char *)&g_8c285450.f04 + (base->fcc << 3)) > v20) {
            goto L_8c0b26b2;
        }
        if (base->fcc != 0) {
            if (base->fcc == 1) {
                goto L_8c0b27a0;
            }
            if (base->fcc == 2) {
                goto L_8c0b27b2;
            }
        } else {
            t2 = play_se_8c05fbf8(0x20009, (void *)(((char *)base + 0x24)), 0, 0);
            if (t2 >= 0) {
                emit_control_60320(t2, 0x100, 0);
                goto L_8c0b282e;
L_8c0b27a0:;
                play_se_8c05fbf8(0x20009, (void *)(((char *)base + 0x24)), 0, 0);
                goto L_8c0b282e;
L_8c0b27b2:;
                v22 = (short)base->fca;
                if ((short)v22 >= 0xf && 0x19 > (short)v22) {
                    t3 = play_se_8c05fbf8(0x20009, (void *)(((char *)base + 0x24)), 0, 0);
                    if (!(t3 >= 0)) {
                        goto L_8c0b282e;
                    }
                    emit_control_60320(t3, -0x180, 0);
                    goto L_8c0b282e;
                }
                if ((short)v22 >= 0x19 && 0x1e > (short)v22) {
                    t4 = play_se_8c05fbf8(0x20009, (void *)(((char *)base + 0x24)), 0, 0);
                    if (!(t4 >= 0)) {
                        goto L_8c0b282e;
                    }
                    emit_control_60320(t4, -0x250, 0);
                    goto L_8c0b282e;
                }
                t5 = play_se_8c05fbf8(0x20009, (void *)(((char *)base + 0x24)), 0, 0);
                if (t5 >= 0) {
                    emit_control_60320(t5, -0x100, 0);
                }
            }
        }
    }
L_8c0b282e:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
