/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15eb34
 * function: operation_8c15eb34
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 14 of 164 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
} Object;
extern float njScalor_8c37e480(Vector3 *);
extern void call_8c3bdf60(Vector3 *, Vector3 *);
extern float squared_distance_xz(Vector3 *, Vector3 *);
extern int operation_8c051ff4(Object *, Vector3 *, void *);
extern int operation_8c0113bc(Vector3 *, Vector3 *);
extern void refresh_follow_effect_8c052180(Object *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
int operation_8c15eb34(Object *o, Vector3 *a1)
{
    Vector3 d;
    Vector3 q;
    Vector3 p;
    int i;
    int a;
    int m;
    float s;
    float c;
    d = *a1;
    d.y = 0.0f;
    if (njScalor_8c37e480(&d) == 0.0f) {
        return 0;
    }
    q = o->f3c;
    call_8c3bdf60(&q, a1);
    if (squared_distance_xz(&q, &o->f54) > 250000.0f) {
        return 0;
    }
    i = 1;
    m = -1;
    for (; i < 0x10; i++) {
        p = o->f3c;
        call_8c3bdf60(&p, &d);
        p.y += 10.0f;
        if (operation_8c051ff4(o, &p, 0) != 0 && operation_8c0113bc(&o->f3c, &p) == 0) {
            o->f48 = o->f3c;
            o->f3c = p;
            refresh_follow_effect_8c052180(o);
            return 1;
        }
        a = i << 12;
        if ((i & 1) != 0) {
            a *= m;
        }
        s = njSin_8c37eb0c(a);
        c = njCos_8c38c154(a);
        d.x = c * d.x - s * d.z;
        d.z = s * d.x + c * d.z;
    }
    return 0;
}
