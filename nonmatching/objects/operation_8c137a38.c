/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137a38
 * function: operation_8c137a38
 * language: c
 * reference size: 176 bytes
 * compiled size: 180 bytes (+2.3%)
 * differing lines: 22 of 64 reference instruction lines
 * differing bytes: 150
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    Vector3 f94;
    char unknowna0[0xc];
    Vector3 fac;
    char unknownb8[0x8];
    int fc0;
};
extern float squared_distance_xz(void *, void *);
extern void call_8c137c68(Object *);
extern int call_8c137d40(void *, void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern void njUnitVector_8c37b630(void *);
void operation_8c137a38(Object *o)
{
    float t1;
    int t2;
    void *q;
    t1 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(&o->fac));
    if (25.0f > t1) {
        call_8c137c68(o);
        q = (void *)(&o->fac);
        t2 = call_8c137d40((void *)(((char *)o + 0xc8)), q, (void *)(((char *)o + 0xc4)), (void *)(((char *)o + 0xc6)));
        if (t2 == 0) {
            o->fc0 |= 1;
        } else {
            *(Vector3 *)&o->f94 = *(Vector3 *)&o->fac;
            vector_sub_in_place_8c37f6f0((void *)(&o->f94), (void *)(((char *)o + 0x3c)));
        }
        njUnitVector_8c37b630((void *)(&o->f94));
    }
}
