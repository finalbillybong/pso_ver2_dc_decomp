/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0afe6c
 * function: TTecDeband_ctor_1_8c0afe6c
 * language: c
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 6 of 194 reference instruction lines
 * differing bytes: 12
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_f8_dc Arg0_f8_dc;
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
    char unknownc6[0x32];
    Arg0_f8 *ff8;
    int ffc;
    char unknown100[0x58];
    int f158;
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
extern void TTecPlayerInfluence_ctor_8c0b6a74(void *, int, void *, int);
extern void call_8c18e044(void *, void *, int, int, int);
extern void initialize_effect10_template(void *);
extern int call_8c18e768(int, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
extern void create_effect_777c(void *, int);
Object *TTecDeband_ctor_1_8c0afe6c(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    TTecPlayerInfluence_ctor_8c0b6a74((void *)o, a1, (void *)a2, a3);
    o->dispatch = (void *)0x8c265e4c;
    call_8c18e044((void *)(((char *)o + 0x100)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->ffc = 0;
    {
        int *v9 = (int *)0x8c305158;
        o->tag = *v9;
    }
    o->size = 0x15c;
    o->f158 = 0;
    initialize_effect10_template((void *)o);
    if (o->ff8 != 0) {
        o->ff8->fdc->f0c = o->f80 + 5.0f;
    }
    {
        Object *base = o;
        t1 = call_8c18e768((int)(base->fbc), 5);
        base->fc0 = (int)(t1);
        if (o->fc0 != 0) {
            if (o->fc0 == 1) {
                goto L_8c0aff54;
            }
            if (o->fc0 == 2) {
                goto L_8c0aff90;
            }
        } else {
            t2 = play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
            if (t2 >= 0) {
                emit_control_60320(t2, 0x100, 0);
            }
            if (o->fbc >= 2) {
                *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&o->f24;
                (&frame)->f1c.f04 += 0.3f;
                create_effect_777c((void *)(&(&frame)->f1c), 0x1cf);
                goto L_8c0affd6;
L_8c0aff54:;
                play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
                *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&o->f24;
                (&frame)->f10.f04 += 0.3f;
                create_effect_777c((void *)(&(&frame)->f10), 0x1cf);
                goto L_8c0affd6;
L_8c0aff90:;
                t3 = play_se_8c05fbf8(0x20016, (void *)(&o->f24), 0, 0);
                if (t3 >= 0) {
                    emit_control_60320(t3, -0x100, 0);
                }
                *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&o->f24;
                (&frame)->f04.f04 += 0.3f;
                create_effect_777c((void *)(&(&frame)->f04), 0x1da);
            }
        }
    }
L_8c0affd6:;
    if (o->f20 != 0) {
        o->fc4 = o->f20->f20;
    }
    return o;
}
