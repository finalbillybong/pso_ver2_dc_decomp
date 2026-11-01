/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b28b0
 * function: TTecGiZonde_update_8c0b28b0
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 2 of 38 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
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
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xac];
    unsigned short fd0;
    char unknownd2[0x7a];
    int f14c;
};
extern int lookup_object_by_id(unsigned short);
extern int call_8c0b2a18(Object *);
extern void call_8c0b2910(Object *);
void TTecGiZonde_update_8c0b28b0(Object *o)
{
    int t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (int)(t1);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f14c == 0) {
        o->f04 |= 1;
        return;
    }
    t2 = call_8c0b2a18(o);
    if (t2 == 1) {
        call_8c0b2910(o);
    }
    o->f04 |= 1;
}
