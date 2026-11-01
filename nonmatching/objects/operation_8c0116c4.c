/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0116c4
 * function: operation_8c0116c4
 * language: c
 * reference size: 128 bytes
 * compiled size: 132 bytes (+3.1%)
 * differing lines: 52 of 60 reference instruction lines
 * differing bytes: 112
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Ent Ent;
struct Ent {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    float f10;
    int f14;
};
typedef struct Object {
    float f00;
    char unknown4[0x4];
    float f08;
} Object;
extern int g_8c4dc5e0;
int operation_8c0116c4(Object *o, Ent **a1, int a2)
{
    Ent **out;
    Ent **list;
    int n;
    Ent *e;
    int f;
    float dx;
    float dz;
    out = a1;
    list = (Ent **)(g_8c4dc5e0 + 0x20);
    n = 0;
    while ((e = *list++) != 0) {
        f = e->f14;
        if ((f & a2) != 0 && (f & 0x20000000) == 0
            && (dx = e->f04 - o->f00, dz = e->f0c - o->f08, !(e->f10 * e->f10 < dx * dx + dz * dz))) {
            n++;
            if (!(0xf > n)) {
                break;
            }
            *out++ = e;
        }
    }
    *out = 0;
    return *(int *)a1;
}
