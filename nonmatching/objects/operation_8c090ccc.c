/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c090ccc
 * function: operation_8c090ccc
 * language: c
 * reference size: 124 bytes
 * compiled size: 128 bytes (+3.2%)
 * differing lines: 18 of 48 reference instruction lines
 * differing bytes: 64
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
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern int object_random_fraction_wrapper_2_8c05b90c(int);
extern float object_random_fraction(void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c3bdf60(Arg1 *, int);
void operation_8c090ccc(int a0, Arg1 *a1)
{
    float v1;
    float t2;
    float t4;
    float t3;
    int t1;
    int pm6;
    float pm5;
    pm6 = object_random_fraction_wrapper_2_8c05b90c(a0);
    t4 = object_random_fraction((void *)a0);
    v1 = (t4 * 30.0f);
    t1 = pm6;
    v1 = 10.0f + v1;
    t2 = njSin_8c37eb0c(t1);
    t4 = v1 * t2;
    a1->f00 = t4;
    a1->f04 = 0.0f;
    t3 = njCos_8c38c154(t1);
    pm5 = v1 * t3;
    a1->f08 = pm5;
    call_8c3bdf60(a1, (a0 + 0x3c));
}
