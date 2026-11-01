/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11b8b8
 * function: operation_8c11b8b8
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 14 of 116 reference instruction lines
 * differing bytes: 73
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
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Vector3 f00;
};
extern int operation_8c051ff4(void *, void *, void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
int operation_8c11b8b8(int a0, Arg1 *a1)
{
    Frame frame;
    int t4;
    int v5;
    int v4;
    int v1;
    int t1;
    int pm7;
    float v2;
    float t2;
    int pm9;
    float v3;
    float pm8;
    float pm5;
    void *pm12;
    short pm11;
    int pm10;
    float pm13;
    *(Vector3 *)&(&frame)->f00 = *(&a1->f00);
    pm8 = 10.0f + (&frame)->f00.f04;
    (&frame)->f00.f04 = pm8;
    t1 = operation_8c051ff4((void *)a0, (void *)(&frame), (void *)0);
    if (!(t1 != 0)) {
        return 0;
    }
    pm7 = 0x10000;
    v2 = 10.0f;
    pm5 = v2;
    v1 = pm7;
    v3 = pm5;
    while (!(v3 > 20.0f)) {
        float pm6;
        pm10 = 0;
        v4 = pm10;
        pm8 = 655360.0f / (6.28f * v3);
        v2 = pm8;
        v5 = (int)(v2);
        while (v1 > v4) {
            float t3;
            *(Vector3 *)&(&frame)->f00 = *(&a1->f00);
            pm5 = njSin_8c37eb0c(v4);
            t2 = pm5;
            (&frame)->f00.f00 += v3 * t2;
            (&frame)->f00.f04 = (&frame)->f00.f04 + 10.0f;
            t3 = njCos_8c38c154(v4);
            pm13 = t3 * v3;
            (&frame)->f00.f08 += pm13;
            pm12 = (void *)a0;
            t4 = operation_8c051ff4(pm12, (void *)(&frame), (void *)0);
            if (!(0 != t4)) {
                return 0;
            }
            pm7 = v5 + v4;
            pm9 = (pm7);
            v4 = (pm9);
        }
        pm6 = 10.0f;
        v3 += pm6;
    }
    return 1;
}
