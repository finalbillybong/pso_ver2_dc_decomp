/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b8b90
 * function: TTecRaZonde_update_8c0b8b90
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 2 of 57 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TTecRaZonde.h (shared layout for modders; this draft keeps its own local types)
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
};
extern int lookup_object_by_id(unsigned short);
extern void create_effect_777c(void *, int);
extern void operation_8c0ada54(Object *);
void TTecRaZonde_update_8c0b8b90(Object *o)
{
    int v3;
    int v1;
    int v2;
    int t1;
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
    v1 = (int)0x19f;
    v3 = (int)0;
    v2 = (int)0x10c;
    while (8 > v3) {
        create_effect_777c((void *)((int)o + v3 * 0xc + v2), v1);
        v3 = (int)(v3 + 1);
    }
    operation_8c0ada54(o);
    o->f04 |= 1;
}
