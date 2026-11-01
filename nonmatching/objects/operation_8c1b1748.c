/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b1748
 * function: operation_8c1b1748
 * language: c
 * reference size: 204 bytes
 * compiled size: 196 bytes (-3.9%)
 * differing lines: 56 of 84 reference instruction lines
 * differing bytes: 148
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
};
extern void grid_position_8c1b1814(void *);
extern void operation_8c1b1668(void *, int);
void operation_8c1b1748(Object *o, int a1)
{
    int t;
    o->f3a8 = o->f3ac = (a1 >> 4 & 0xf) << 0xc;
    o->f3b0 = (a1 >> 8 & 0xf) << 0xc;
    o->f3b4 = a1 >> 0xc & 0xf;
    o->f3b8 = (short)((unsigned int)a1 >> 0x10) & 0xf;
    o->f3cc = (short)((unsigned int)a1 >> 0x10) >> 4 & 0xf;
    if (o->f3cc == 0xf) {
        o->f3cc = 0xffff;
    }
    grid_position_8c1b1814(o);
    t = a1 & 0xf;
    if (t < 0 || t >= 0xe) {
        return;
    }
    operation_8c1b1668(o, t);
}
