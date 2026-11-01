/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d2074
 * function: operation_8c0d2074
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 8 of 61 reference instruction lines
 * differing bytes: 18
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
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x41c];
    int f484;
};
extern int signed_angle_delta(int, int);
int operation_8c0d2074(Object *o, int a1, int a2)
{
    int v1;
    int t1;
    int v2;
    v1 = (int)0;
    t1 = signed_angle_delta((int)(o->f64), a1);
    if (t1 > a2) {
        o->f64 = (Arg0_64 *)((int)o->f64 + a2);
        v2 = o->f484;
        if (!(v2 >= 0)) {
            v2 = v1;
        } else {
            v2 += a2;
        }
        o->f484 = v2;
    } else {
        if (-a2 > t1) {
            o->f64 = (Arg0_64 *)((int)o->f64 - a2);
            v2 = o->f484;
            if (v2 > 0) {
                v2 = v1;
            } else {
                v2 -= a2;
            }
            o->f484 = v2;
        } else {
            o->f64 = (Arg0_64 *)a1;
            v1 = (int)1;
        }
    }
    return (int)(v1);
}
