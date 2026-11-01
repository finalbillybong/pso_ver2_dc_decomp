/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c9618
 * function: operation_8c0c9618
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 52 of 70 reference instruction lines
 * differing bytes: 75
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
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x380];
    float f3e8;
    float f3ec;
    float f3f0;
    float f3f4;
    float f3f8;
    float f3fc;
};
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
void operation_8c0c9618(Object *o)
{
    float v1;
    float v2;
    float t1;
    float t2;
    t1 = njCos_8c38c154((void *)(o->f64));
    v1 = (float)(t1 * 15.0f);
    t2 = njSin_8c37eb0c((void *)(o->f64));
    v2 = (float)(-t2 * 15.0f);
    o->f3f4 = o->f3c + v1;
    o->f3f8 = o->f40 + 18.0f;
    o->f3fc = o->f44 + v2;
    o->f3e8 = o->f3c - v1;
    o->f3ec = o->f40 + 18.0f;
    o->f3f0 = o->f44 - v2;
}
