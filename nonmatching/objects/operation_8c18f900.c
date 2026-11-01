/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18f900
 * function: operation_8c18f900
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 4 of 49 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0xa8];
    int ffc;
    unsigned short f100;
    char unknown102[0x6];
    Arg0_108 *f108;
};
extern void call_8c3bdf60(void *, void *);
extern void call_8c0a7608(void *, void *);
extern int call_8c18f980(Object *, int);
void operation_8c18f900(Object *o)
{
    int t1;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0xe4)));
    if (o->f108 != 0) {
        call_8c0a7608((void *)(o->f108), (void *)(&o->f3c));
    }
    t1 = call_8c18f980(o, (int)(o->f100));
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    if (!(--o->ffc > 0)) {
        o->f04 |= 1;
    }
}
