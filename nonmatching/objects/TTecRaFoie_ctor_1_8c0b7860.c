/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7860
 * function: TTecRaFoie_ctor_1_8c0b7860
 * language: c
 * reference size: 520 bytes
 * compiled size: 520 bytes (+0.0%)
 * differing lines: 24 of 210 reference instruction lines
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
typedef struct Block92 {
    int words[23];
} Block92;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg3 Arg3;
typedef struct Block_p0_108 {
    int f00;
    char unknown4[0x58];
} Block_p0_108;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0x58];
    short f7c;
    short f7e;
    int f80;
    char unknown84[0x14];
    float f98;
    char unknown9c[0x34];
    short fd0;
    char unknownd2[0x32];
    Arg0_104 *f104;
    Block_p0_108 f108;
    int f164;
};
struct Arg3 {
    Block92 f00;
};
struct Arg0_104 {
    char unknown0[0xdc];
    Arg0_104_dc *fdc;
};
struct Arg0_104_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305328;
extern void operation_8c0ad45c(void *, int, void *, void *, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect2_template(void *);
extern int call_8c18e768(int, int);
extern void create_effect_777c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
extern void operation_8c07de9c();
Object *TTecRaFoie_ctor_1_8c0b7860(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    short v5;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a2, a4);
    o->dispatch = (void *)0x8c266178;
    call_8c18e044((void *)(((char *)o + 0x10c)), operation_8c07de9c, 0, 8, 0xb);
    o->f108.f00 = 0;
    o->tag = (int)(g_8c305328);
    o->size = 0x168;
    initialize_effect2_template((void *)o);
    o->f164 = 0;
    *(Block92 *)&o->f108 = *(Block92 *)&a3->f00;
    if (o->f104 != 0) {
        o->f104->fdc->f0c = o->f98;
    }
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->f7c), 5);
        base->f80 = (int)(t1);
    }
    create_effect_777c((void *)(((char *)o + 0x84)), 0x39);
    create_effect_777c((void *)(((char *)o + 0x84)), 0x3a);
    create_effect_777c((void *)(((char *)o + 0x84)), 0x3b);
    {
        Object *self = o;
    switch (self->f80) {
        case 0:
            t2 = play_se_8c05fbf8(0x20002, (void *)(((char *)self + 0x84)), 0, 0);
            if (!(t2 >= 0)) {
                goto L_8c0b79ea;
            }
            emit_control_60320(t2, 0x100, 0);
            break;
        case 1:
            play_se_8c05fbf8(0x20002, (void *)(((char *)self + 0x84)), 0, 0);
            break;
        case 2:
            v5 = (short)self->f7e;
            if ((short)v5 >= 0xf) {
                if (0x19 > (short)v5) {
                    t3 = play_se_8c05fbf8(0x20002, (void *)(((char *)self + 0x84)), 0, 0);
                    if (!(t3 >= 0)) {
                        goto L_8c0b79ea;
                    }
                    emit_control_60320(t3, -0x180, 0);
                    goto L_8c0b79ea;
                }
            }
            if ((short)v5 >= 0x19) {
                if (0x1e > (short)v5) {
                    t4 = play_se_8c05fbf8(0x20002, (void *)(((char *)self + 0x84)), 0, 0);
                    if (!(t4 >= 0)) {
                        goto L_8c0b79ea;
                    }
                    emit_control_60320(t4, -0x250, 0);
                    goto L_8c0b79ea;
                }
            }
            t5 = play_se_8c05fbf8(0x20002, (void *)(((char *)self + 0x84)), 0, 0);
            if (t5 >= 0) {
                emit_control_60320(t5, -0x100, 0);
            }
        }
    }
L_8c0b79ea:;
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
