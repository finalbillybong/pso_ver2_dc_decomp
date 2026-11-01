/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7ec8
 * function: TTecRaFoie_update_8c0b7ec8
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 4 of 70 reference instruction lines
 * differing bytes: 4
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
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xac];
    unsigned short fd0;
    char unknownd2[0x32];
    int f104;
    int f108;
    unsigned short f10c;
    char unknown10e[0x56];
    int f164;
};
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0b7d40(void *, void *);
extern int effect_query_is_true(void *);
extern int call_8c0b628c(int);
void TTecRaFoie_update_8c0b7ec8(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f104 == 0) {
        o->f04 |= 1;
        return;
    }
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (int)(t1);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f164 == 1) {
        operation_8c0b7d40((void *)o, (void *)(((char *)o + 0x84)));
        return;
    }
    if (o->f108 == 0) {
        o->f04 |= 1;
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(o->f10c));
    t3 = effect_query_is_true((void *)t2);
    if (t3 != 0) {
        t4 = call_8c0b628c(t2);
        if (t4 != 0) {
            operation_8c0b7d40((void *)o, (void *)(t2 + 0x3c));
        }
    }
}
