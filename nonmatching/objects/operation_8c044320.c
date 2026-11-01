/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044320
 * function: operation_8c044320
 * language: c
 * reference size: 240 bytes
 * compiled size: 244 bytes (+1.7%)
 * differing lines: 14 of 96 reference instruction lines
 * differing bytes: 88
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x318];
    float f318;
    char unknown31c[0x4];
    float f320;
};
extern void vector_sub_in_place_8c37f6f0(Vector3 *, Vector3 *);
extern float call_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, Vector3 *, Vector3 *);
extern void njPopMatrix_8c38accc(int);
void operation_8c044320(Object *o, float f0, Vector3 a2, Vector3 a3)
{
    Vector3 v;
    int v1;
    float t1;
    v = a3;
    vector_sub_in_place_8c37f6f0(&v, &a2);
    if (v.x * v.x + v.z * v.z < 1e-07f) {
        o->f320 = 0.0f;
        o->f318 = 0.0f;
        return;
    }
    t1 = call_8c130334(v.x, v.z);
    v1 = (int)(t1 * 65536.0f / 6.28318405f);
    v.y = 0.0f;
    v.x = 0.0f;
    v.z = f0;
    njPushMatrix_8c38ade4((void *)0x8c400500);
    njRotateY_8c37df90(0, v1);
    call_8c3be38c(0, &v, &v);
    njPopMatrix_8c38accc(1);
    o->f318 = v.x;
    o->f320 = v.z;
}
