/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dfa54
 * function: operation_8c0dfa54
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 2 of 99 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order; review found and fixed behaviour defects
 *   of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
};
struct Arg2 {
    float f00;
    float f04;
};
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern float call_8c381288(int);
void operation_8c0dfa54(Object *o, int a1, Arg2 *a2)
{
    float v1;
    float v2;
    int v3;
    float v14;
    float v13;
    float t1;
    float t2;
    float t3;
    float t4;
    v1 = (float)o->f40;
    v1 = (float)(v1 * 0.5f);
    v2 = (float)o->f44;
    v1 = (float)(v1 + 19.0f);
    v2 = (float)(v2 * 0.5f);
    v2 = (float)(v2 + 13.0f);
    v1 = (float)(v1 * 0.5f);
    v2 = (float)(v2 * 0.5f);
    t1 = njCos_8c38c154(a1);
    a2->f00 = v1 * t1;
    t2 = njSin_8c37eb0c(a1);
    a2->f04 = v2 * t2;
    v3 = a1 + 0x2000;
    if ((v3 & 0x4000) != 0) {
        v14 = call_8c381288(a1 + -0x4000);
        a1 &= 0x8000;
        if (a1 == 0) {
            v14 = -v14;
        }
        if (a1 != 0) {
            v13 = -1.0f;
        } else {
            v13 = 1.0f;
        }
    } else {
        v3 &= 0x8000;
        if (v3 != 0) {
            v14 = -1.0f;
        } else {
            v14 = 1.0f;
        }
        v13 = call_8c381288(a1);
        if (v3 != 0) {
            v13 = -v13;
        }
    }
    a2->f00 += v1 * v14;
    a2->f04 += v2 * v13;
}
