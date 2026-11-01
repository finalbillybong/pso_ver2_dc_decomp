/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f21e8
 * function: operation_8c1f21e8
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 8 of 52 reference instruction lines
 * differing bytes: 11
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
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x14];
    float f80;
    char unknown84[0x14];
    float f98;
    float f9c;
    float fa0;
};
extern void memset_8c12b880(void *, int, int);
extern void call_8c1f1fac(Object *);
void operation_8c1f21e8(Object *o)
{
    o->f80 += 1.0f;
    if (*(float *)0x8c32c3f8 == o->f80) {
        o->f68 &= -0x19;
        memset_8c12b880((void *)(((char *)o + 0x38)), 0, 0xc);
        memset_8c12b880((void *)(((char *)o + 0x5c)), 0, 0xc);
        o->f98 = o->f9c = o->fa0 = 0.0f;
    }
    call_8c1f1fac(o);
}
