/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c140f98
 * function: TOTrap_v88_8c140f98
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 8 of 81 reference instruction lines
 * differing bytes: 10
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
    char unknown0[0x88];
    int f88;
    char unknown8c[0x27e];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x18];
    float f350;
    float f354;
    unsigned short f358;
};
extern int g_8c418248;
extern void update_object_center(void *);
extern int call_8c04a52c(Object *, int, float);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void operation_8c02671c(void *, void *, int, float);
void TOTrap_v88_8c140f98(Object *o)
{
    int v2;
    int v1;
    float v3;
    int t1;
    int t2;
    float t3;
    update_object_center((void *)o);
    t1 = call_8c04a52c(o, 0, o->f350);
    o->f358 = t1;
    v2 = (int)(o->f358 & 0xffff);
    v1 = (int)0xffff;
    if (v2 != (unsigned short)v1) {
        t2 = lookup_low_id(v2);
        o->f334 = (int)(t2);
        if (o->f334 == 0) {
            return;
        }
        t3 = squared_distance_xz((void *)((int)o->f334 + 0x3c), (void *)(((char *)o + 0x3c)));
        v3 = (float)o->f354;
        if ((v3 * v3) > t3) {
            o->f30a = 3;
            if ((o->f358 & 0xffff) != g_8c418248) {
                return;
            }
            operation_8c02671c((void *)t2, (void *)(((char *)o + 0x3c)), (int)(o->f88), o->f354);
            return;
        }
        o->f358 = 0xffff;
        o->f334 = 0;
        return;
    }
    o->f334 = 0;
}
