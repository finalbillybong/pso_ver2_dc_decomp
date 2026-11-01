/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b0058
 * function: TTecDeband_ctor_2_8c0b0058
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 8 of 216 reference instruction lines
 * differing bytes: 4
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_f8_dc Arg0_f8_dc;
typedef struct Arg3 Arg3;
typedef struct Block_frame_1c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_1c;
typedef struct Block_frame_10 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_10;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_4;
typedef struct Block_p0_fc {
    int f00;
    char unknown4[0x58];
} Block_p0_fc;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Vector3 f24;
    char unknown30[0x50];
    float f80;
    char unknown84[0x38];
    short fbc;
    char unknownbe[0x2];
    int fc0;
    short fc4;
    char unknownc6[0x2];
    int fc8;
    char unknowncc[0x2c];
    Arg0_f8 *ff8;
    Block_p0_fc ffc;
    int f158;
};
struct Arg3 {
    Block92 f00;
};
struct Arg0_f8 {
    char unknown0[0xdc];
    Arg0_f8_dc *fdc;
};
struct Arg0_f8_dc {
    char unknown0[0xc];
    float f0c;
};
struct Frame {
    Block_frame_4 f04;
    Block_frame_10 f10;
    Block_frame_1c f1c;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c305158;
extern void TTecPlayerInfluence_ctor_8c0b6a74(void *, int, void *, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect10_template(void *);
extern int call_8c18e768(int, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
extern void create_effect_777c(void *, int);
extern void operation_8c07de9c();
Object *TTecDeband_ctor_2_8c0b0058(Object *o, int a1, int a2, Arg3 *a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    Vector3 *pm4;
    int t3;
    int pm5;
    int pm6;
    TTecPlayerInfluence_ctor_8c0b6a74((void *)o, a1, (void *)a2, a4);
    o->dispatch = (void *)0x8c265e4c;
    call_8c18e044((void *)(((char *)o + 0x100)), operation_8c07de9c, 0, 8, 0xb);
    o->ffc.f00 = 0;
    a2 = (int)(g_8c305158);
    o->tag = a2;
    o->size = 0x15c;
    o->f158 = 1;
    *(Block92 *)&o->ffc = *(Block92 *)&a3->f00;
    (void)home;
    initialize_effect10_template((void *)o);
    if (o->ff8 != 0) {
        o->ff8->fdc->f0c = o->f80 + 5.0f;
    }
    {
        Object *base = o;
        pm6 = (int)(base->fbc);
        t1 = call_8c18e768(pm6, 5);
        base->fc0 = (int)(t1);
        t1 = o->fc8;
        if (0 != t1) {
            a1 = o->fc0;
            switch (a1) {
                case 0:
                t2 = play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
                if (!(t2 < 0)) {
                    emit_control_60320(t2, 0x100, 0);
                }
                pm5 = 2;
                if (!(o->fbc >= pm5)) {
                    goto L_8c0b01ee;
                }
                *(Vector3 *)&(&frame)->f1c = *(&o->f24);
                (&frame)->f1c.f04 += 0.3f;
                create_effect_777c((void *)(&(&frame)->f1c), 0x1cf);
                break;
                case 1:
                play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
                pm4 = (Vector3 *)&(&frame)->f10;
                *pm4 = *(Vector3 *)&o->f24;
                (&frame)->f10.f04 = (&frame)->f10.f04 + 0.3f;
                create_effect_777c((void *)(&(&frame)->f10), 0x1cf);
                break;
                case 2:
                t3 = play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
                if (t3 >= 0) {
                    emit_control_60320(t3, -0x100, 0);
                }
                *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f24;
                (&frame)->f04.f04 = 0.3f + (&frame)->f04.f04;
                create_effect_777c((void *)(&(&frame)->f04), 0x1da);
            }
        }
    }
L_8c0b01ee:
    ;
    if (0 != o->f20) {
        o->fc4 = (int)o->f20->f20;
    }
    return o;
}
