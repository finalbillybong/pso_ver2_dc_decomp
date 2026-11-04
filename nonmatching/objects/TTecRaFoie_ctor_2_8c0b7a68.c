/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7a68
 * function: TTecRaFoie_ctor_2_8c0b7a68
 * language: c
 * reference size: 500 bytes
 * compiled size: 504 bytes (+0.8%)
 * differing lines: 20 of 199 reference instruction lines
 * differing bytes: 216
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_104_dc Arg0_104_dc;
typedef struct Arg0_20 Arg0_20;
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
    int f108;
    char unknown10c[0x58];
    int f164;
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
Object *TTecRaFoie_ctor_2_8c0b7a68(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    char *pm6;
    short v5;
    int t3;
    int t5;
    int t1;
    int pm8;
    int t2;
    short pm11;
    char *pm12;
    operation_8c0ad45c((void *)o, a1, (void *)a2, (void *)a3, a4);
    (void)home;
    o->dispatch = (void *)0x8c266178;
    call_8c18e044((void *)(((char *)o + 0x10c)), operation_8c07de9c, 0, 8, 0xb);
    o->f108 = 0;
    o->tag = (int)(g_8c305328);
    o->size = (short)0x168;
    initialize_effect2_template((void *)o);
    o->f108 = 0;
    o->f164 = 1;
    if (!(0 == o->f104)) {
        o->f104->fdc->f0c = o->f98;
    }
    {
        Object *base = o;
        t1 = call_8c18e768((int)((int)base->f7c), 5);
        base->f80 = (int)(t1);
    }
    create_effect_777c((void *)((0x84 + (char *)o)), 0x39);
    pm6 = (char *)o;
    create_effect_777c((void *)((pm6 + 0x84)), 0x3a);
    create_effect_777c((void *)(((char *)o + 0x84)), 0x3b);
    switch (o->f80) {
        case 0:
        pm12 = (char *)o + 0x84;
        t2 = play_se_8c05fbf8(0x20002, (void *)((pm12)), 0, 0);
        if (t2 < 0) {
            goto L_8c0b7bdc;
        }
        emit_control_60320(t2, 0x100, 0);
        break;
        case 1:
        play_se_8c05fbf8(0x20002, (void *)(((char *)o + 0x84)), 0, 0);
        break;
        case 2:
        pm11 = (short)(int)(int)o->f7e;
        v5 = pm11;
        if ((short)v5 >= 0xf && (short)v5 < 0x19) {
            pm6 = (char *)o;
            t2 = play_se_8c05fbf8(0x20002, (void *)((pm6 + 0x84)), 0, 0);
            t3 = t2;
            if (!(t3 >= 0)) {
                goto L_8c0b7bdc;
            }
            emit_control_60320(t3, -0x180, 0);
            goto L_8c0b7bdc;
        }
        if (0x19 <= (short)(int)v5) {
            if (0x1e > (int)(int)v5) {
                int t4;
                int pm7;
                unsigned char pm10;
                pm10 = 0x84;
                pm7 = play_se_8c05fbf8(0x20002, (void *)((pm10 + (char *)o)), 0, 0);
                t4 = pm7;
                if (!(t4 >= 0)) {
                    goto L_8c0b7bdc;
                }
                a1 = -0x250;
                emit_control_60320(t4, a1, 0);
                goto L_8c0b7bdc;
            }
        }
        pm8 = 0x84;
        t5 = play_se_8c05fbf8(0x20002, (void *)((pm8 + (char *)o)), 0, 0);
        if (0 <= t5) {
            int pm9;
            pm9 = -0x100;
            emit_control_60320(t5, pm9, 0);
        }
    }
L_8c0b7bdc:
    ;
    if (0 != o->f20) {
        v5 = o->f20->f20;
        o->fd0 = (int)v5;
    }
    return o;
}
