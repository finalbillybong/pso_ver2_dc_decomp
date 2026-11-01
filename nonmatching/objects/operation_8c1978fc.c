/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1978fc
 * function: operation_8c1978fc
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 20 of 89 reference instruction lines
 * differing bytes: 46
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x8];
    float f18;
    char unknown1c[0x10];
    int f2c;
};
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
void operation_8c1978fc(Object *o, int a1, int a2)
{
    S_vv1 *v1;
    float t2;
    int v2;
    float t1;
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (a2 << 2));
    t1 = njCos_8c38c154(a1);
    v1->f08 = (t1 + 1.0f) * 13.0f - 9.0f + 3.0f;
    t2 = njSin_8c37eb0c(a1);
    v1->f0c = 5.0f + ((t2 + 1.0f) * 41.5f - 13.0f) + 13.0f;
    if (!(((0x8000 & a1 + -0x4000)) == 0)) {
        float t3;
        float pm4;
        t3 = njCos_8c38c154(a1);
        pm4 = 1.0f - t3 * 0.5f;
        v1->f18 = 0.1f;
        v2 = (int)(int)((pm4) * 255.0f);
        a2 = v2 << 0x10 | -0x1000000 | v2 << 8;
        v1->f2c = a2 | v2;
        return;
    }
    v1->f18 = 0.6f;
    v1->f2c = -1;
}
