/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b19c8
 * function: TTecGiBarta_update_8c0b19c8
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 2 of 28 reference instruction lines
 * differing bytes: 2
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
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0xac];
    unsigned short fd0;
};
extern int lookup_object_by_id(unsigned short);
extern void operation_8c0b9d68(Object *);
extern void operation_8c0b9f74(Object *);
extern void operation_8c0ba12c(void *);
void TTecGiBarta_update_8c0b19c8(Object *o)
{
    int t1;
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (int)(t1);
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    operation_8c0b9d68(o);
    operation_8c0b9f74(o);
    operation_8c0ba12c((void *)o);
}
