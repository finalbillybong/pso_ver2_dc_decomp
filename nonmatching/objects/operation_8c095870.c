/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c095870
 * function: operation_8c095870
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 32 of 55 reference instruction lines
 * differing bytes: 20
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4f0 Arg0_4f0;
struct Object {
    char unknown0[0x3ac];
    int f3ac;
    char unknown3b0[0x13c];
    int f4ec;
};
struct Arg0_4f0 {
    char unknown0[0x3ac];
    int f3ac;
    char unknown3b0[0x34];
    int f3e4;
};
extern int operation_8c05bbf8(Object *);
int operation_8c095870(Object *o)
{
    int n;
    int cnt;
    int i;
    int v;
    Arg0_4f0 *p;
    n = 0;
    cnt = o->f4ec;
    for (i = 0; i < cnt; i++) {
        p = *(Arg0_4f0 **)((char *)((char *)o + 0x4f0) + (i << 2));
        if ((p->f3e4 & 0x40000) != 0) {
            v = p->f3ac;
        } else {
            v = 0;
        }
        if (o->f3ac == v) {
            n++;
        }
    }
    if (operation_8c05bbf8(o) != 0) {
        return 4 > n;
    }
    return 2 > n;
}
