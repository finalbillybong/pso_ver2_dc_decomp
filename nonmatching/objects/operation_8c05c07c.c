/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05c07c
 * function: operation_8c05c07c
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 2 of 38 reference instruction lines
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
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    int f3ac;
};
extern int operation_8c05a1b4(int, float);
extern int lookup_object_by_id(unsigned short);
int operation_8c05c07c(Object *o, float f0)
{
    int v1;
    int v6;
    int t1;
    int t2;
    t1 = operation_8c05a1b4((int)o, f0 * f0);
    v1 = (int)0xffff;
    if ((unsigned short)t1 != (unsigned short)v1) {
        o->f3a8 = t1;
        if ((unsigned short)t1 != v1) {
            t2 = lookup_object_by_id((unsigned short)(o->f3a8));
            o->f3ac = (int)(t2);
        } else {
            o->f3ac = 0;
        }
        v6 = (int)1;
    } else {
        o->f3ac = 0;
        o->f3a8 = v1;
        v6 = (int)0;
    }
    return (int)(v6);
}
