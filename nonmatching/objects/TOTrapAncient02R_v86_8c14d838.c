/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14d838
 * function: TOTrapAncient02R_v86_8c14d838
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 2 of 78 reference instruction lines
 * differing bytes: 86
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOTrapAncient02R.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown35a[0x22];
    int f37c;
};
extern void operation_8c05428c(void *, int, int);
extern void update_object_center(void *);
extern int operation_03d080(unsigned short);
extern int call_8c04a52c(Object *, int, float);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
void TOTrapAncient02R_v86_8c14d838(Object *o)
{
    char *v5;
    int v6;
    int v3;
    char *v4;
    int t1;
    int t2;
    int t3;
    float t4;
    operation_8c05428c((void *)o, 0, 1);
    update_object_center((void *)o);
    v5 = (char *)o->f37c;
    if ((int)(v5) != -1) {
        t1 = operation_03d080((unsigned short)v5);
        if ((unsigned char)t1 != 1) {
            return;
        }
    }
    t2 = call_8c04a52c(o, 0, o->f350);
    o->f358 = t2;
    v6 = (unsigned short)o->f358;
    v3 = (int)0xffff;
    if (v6 != (unsigned short)v3) {
        t3 = lookup_low_id(v6);
        o->f334 = (int)(t3);
        v4 = (char *)o->f334;
        if (v4 != 0) {
            t4 = squared_distance_xz((void *)(v4 + 0x3c), (void *)(((char *)o + 0x3c)));
            if (!((o->f350 * o->f350) > t4)) {
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
