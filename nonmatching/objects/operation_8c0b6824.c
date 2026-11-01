/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b6824
 * function: operation_8c0b6824
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 2 of 53 reference instruction lines
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
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    short f20;
    short f22;
    Arg0_24 *f24;
    int f28;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int play_se_8c05fbf8(void *, int, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0b6824(Object *o, int a1, int a2, int a3, register int a4, int a5)
{
    Object **home = &o;
    int pm8;
    int pm10;
    int pm2;
    int pm5;
    int pm4;
    void *pm9;
    int pm6;
    int pm11;
    int pm12;
    pm9 = (void *)a5;
    TObject_ctor_8c0330e4((void *)o, pm9);
    o->dispatch = (void *)0x8c2660a4;
    o->f20 = (short)a2;
    pm4 = (short)0;
    pm11 = 0;
    o->f22 = (short)pm4;
    o->f24 = (Arg0_24 *)a3;
    pm8 = pm11;
    pm10 = 0;
    pm9 = (void *)(o->f24);
    pm5 = play_se_8c05fbf8(pm9, a1, pm8, pm10);
    (void)home;
    o->f28 = (pm5);
    pm12 = o->f28;
    if (!(pm12 < 0) && !(a4 == 0)) {
        int pm3;
        pm2 = 0;
        pm3 = pm2;
        pm6 = o->f28;
        emit_control_60320((pm6), a4, pm3);
    }
    return o;
}
