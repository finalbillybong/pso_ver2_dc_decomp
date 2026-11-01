/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c140ec0
 * function: TOTrap_v86_8c140ec0
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 6 of 63 reference instruction lines
 * differing bytes: 8
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
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x18];
    float f350;
    char unknown354[0x4];
    unsigned short f358;
};
extern void update_object_center(void *);
extern int call_8c04a52c(Object *, int, float);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
void TOTrap_v86_8c140ec0(Object *o)
{
    int v9;
    int v2;
    char *v1;
    int t1;
    int t2;
    float t3;
    update_object_center((void *)o);
    t1 = call_8c04a52c(o, 0, o->f350);
    o->f358 = t1;
    v2 = (int)(o->f358 & 0xffff);
    v9 = 0xffff;
    if (v2 != (unsigned short)v9) {
        t2 = lookup_low_id(v2);
        o->f334 = (int)(t2);
        v1 = (char *)o->f334;
        if (v1 != 0) {
            t3 = squared_distance_xz((void *)(v1 + 0x3c), (void *)(((char *)o + 0x3c)));
            if (!((o->f350 * o->f350) > t3)) {
                return;
            }
            o->f30a = 2;
            return;
        }
        o->f358 = 0xffff;
        o->f334 = 0;
        return;
    }
    o->f334 = 0;
}
