/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1575dc
 * function: operation_8c1575dc
 * language: c
 * reference size: 40 bytes
 * compiled size: 40 bytes (+0.0%)
 * differing lines: 14 of 16 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    char unknown0[0x24];
    int f24;
} Rec;
typedef struct Pair {
    int flags;
    int f04;
} Pair;
typedef struct Object {
    char unknown0[0x30];
    Rec **f30;
    char unknown34[0x5c];
    Pair *f90;
} Object;
void operation_8c1575dc(Object *o, short a1)
{
    Rec **t;
    Pair *u;
    int k;
    int i;
    t = o->f30;
    u = o->f90;
    k = 0xff686868;
    i = a1;
    (*(Rec **)((char *)t + (i << 2)))->f24 = k;
    *(int *)((char *)u + (i << 3)) |= 0x10;
}
