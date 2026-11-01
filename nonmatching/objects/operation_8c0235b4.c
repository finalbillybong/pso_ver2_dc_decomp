/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0235b4
 * function: operation_8c0235b4
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 8 of 43 reference instruction lines
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
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x874];
    int fbc8;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
};
extern void operation_8c026700(int, int);
extern void operation_8c1c7500(void *, int);
extern void operation_8c16be70(void *, int, int, int, int);
void operation_8c0235b4(Object *o, int a1)
{
    Frame frame;
    short pm6;
    int pm8;
    char *pm4;
    short pm9;
    if (!(a1 <= 0)) {
        int pm1;
        Frame *pm2;
        int pm3;
        pm8 = 0x384;
        operation_8c026700((int)o, pm8);
        pm2 = &frame;
        o->f350 = (2 | o->f350);
        operation_8c1c7500((void *)(pm2), a1);
        pm8 = -1;
        pm9 = (short)(pm8);
        pm2 = (&frame);
        pm1 = (int)(pm2);
        (&frame)->f0c = (int)pm9;
        pm4 = (char *)o;
        a1 = (int)o;
        pm6 = (char)(-1);
        pm3 = 0x7d4;
        pm8 = (int)((pm3 + pm4));
        operation_8c16be70((void *)(o->fbc8 + 0x24), pm8, a1, pm1, (int)pm6);
    }
}
