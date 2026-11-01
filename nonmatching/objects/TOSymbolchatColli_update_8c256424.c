/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c256424
 * function: TOSymbolchatColli_update_8c256424
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 2 of 46 reference instruction lines
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
    char unknown0[0x350];
    float f350;
    int f354;
    unsigned short f358;
};
extern int lookup_object_by_id(unsigned short);
extern float squared_distance_xz(void *, void *);
extern int call_8c256634(Object *);
extern void operation_8c256688(void *, int);
void TOSymbolchatColli_update_8c256424(Object *o)
{
    int t1;
    float t2;
    int t3;
    t1 = lookup_object_by_id((unsigned short)(o->f358));
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if (o->f350 > t2) {
            if (o->f354 != 0) {
                return;
            }
            o->f354 = 1;
            t3 = call_8c256634(o);
            operation_8c256688((void *)o, t3);
            return;
        }
        if (o->f354 != 0) {
            o->f354 = 0;
        }
    }
}
