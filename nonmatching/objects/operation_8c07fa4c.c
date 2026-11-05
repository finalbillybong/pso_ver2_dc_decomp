/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07fa4c
 * function: operation_8c07fa4c
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1581ac S_c8c1581ac;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0xcd];
    int f204;
    char f208;
};
struct S_c8c1581ac {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1];
    char f07;
};
extern S_c8c1581ac *operation_8c1581ac(int);
extern void memcpy_8c12b77c(void *, void *, int);
void operation_8c07fa4c(Object *o)
{
    S_c8c1581ac *t1;
    t1 = operation_8c1581ac((int)(o->f136));
    if (t1 != 0) {
        o->f204 = t1->f04;
        o->f208 = t1->f07;
        memcpy_8c12b77c((void *)(((char *)o + 0x209)), (void *)(((char *)t1 + 0x8)), 4);
        memcpy_8c12b77c((void *)(((char *)o + 0x20d)), (void *)(((char *)t1 + 0xc)), 4);
    }
}
