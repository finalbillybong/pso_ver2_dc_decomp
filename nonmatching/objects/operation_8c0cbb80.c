/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cbb80
 * function: operation_8c0cbb80
 * language: c
 * reference size: 264 bytes
 * compiled size: 260 bytes (-1.5%)
 * differing lines: 146 of 128 reference instruction lines
 * differing bytes: 246
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Ent {
    float f00;
    unsigned int f04;
    char pad08[0xc];
} Ent;
typedef struct Object {
    char pad00[0x20];
    int f20;
    int f24;
    int f28;
    char pad2c[4];
    Ent *f30;
    int f34;
    float f38;
} Object;
static inline int fade(Object *o, int i)
{
    Ent *e;
    int k;
    int d;
    e = &o->f30[i];
    k = o->f34;
    if (e->f00 == 0.0f) {
        return 1;
    }
    e->f00 *= o->f38;
    if (0.01f > e->f00) {
        e->f00 = 0.0f;
        return 1;
    }
    d = e->f04;
    e->f04 = d & 0xffffff;
    d = (unsigned char)((unsigned int)d >> 24) - k;
    if (!(d > 0)) {
        return 1;
    }
    e->f04 |= d << 24;
    return 0;
}
void operation_8c0cbb80(Object *o, int a1, int a2)
{
    int m;
    int i;
    m = -1;
    o->f28 = o->f24 + m;
    for (i = o->f24 - 1; i >= 0; i--) {
        if (fade(o, i) == 0) {
            o->f28 = i;
        }
    }
    for (i = o->f20 - 1; i >= o->f24; i--) {
        if (fade(o, i) == 0) {
            o->f28 = i;
        }
    }
}
