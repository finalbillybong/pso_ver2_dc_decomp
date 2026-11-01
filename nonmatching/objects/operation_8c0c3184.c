/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3184
 * function: operation_8c0c3184
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 2 of 78 reference instruction lines
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
    char unknown0[0x334];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
};
extern int call_8c04a52c(Object *, int);
extern int find_nearest_8c0c323c(void *, void *, float);
extern int lookup_object_by_id(unsigned short);
extern float distance_xz(void *, void *);
int operation_8c0c3184(Object *o, float f0)
{
    int v1;
    int t2;
    int v2;
    int t1;
    int v7;
    int t3;
    int t4;
    float t5;
    float t6;
    int t7;
    t1 = call_8c04a52c(o, 0);
    t2 = find_nearest_8c0c323c((void *)o, (void *)0, f0);
    v1 = (int)0xffff;
    if ((unsigned short)t1 == (unsigned short)v1) {
        o->f354 = v1;
        v2 = (int)t1;
    } else {
        if ((unsigned short)t2 == v1) {
            o->f354 = t1;
            v2 = (int)t1;
        } else {
            t3 = lookup_object_by_id((unsigned short)t1);
            t6 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(t3 + 0x3c));
            t4 = lookup_object_by_id((unsigned short)t2);
            t5 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(t4 + 0x3c));
            if (t5 > t6) {
                v2 = (int)t1;
            } else {
                v2 = (int)t2;
            }
            o->f354 = v2;
        }
    }
    t7 = lookup_object_by_id((unsigned short)(o->f354));
    o->f334 = (int)(t7);
    v7 = (int)(o->f334 != 0);
    return (int)(v7);
}
