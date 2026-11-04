/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21b760
 * function: TObjDFJisin_update_8c21b760
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 16 of 99 reference instruction lines
 * differing bytes: 107
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjDFJisin.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    char unknown24[0x4];
    float f28;
    float f2c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern float njScalor_8c37e480(Frame *);
extern void emit_raised_ring_particle(void *, void *);
extern void call_8c21b8a4(Object *, Frame *);
void TObjDFJisin_update_8c21b760(Object *o)
{
    Frame frame;
    int v2;
    int v4;
    int v1;
    int v3;
    float t1;
    float t2;
    float t3;
    v1 = (int)0;
    v2 = (int)0;
    v4 = (int)(int)(1638400.0f / (o->f2c * 6.28f));
    (&frame)->f04 = 0.0f;
    v3 = (int)0x10000;
    while (v3 > v2) {
        t1 = njSin_8c37eb0c(v2);
        (&frame)->f00 = o->f2c * t1 + o->f20;
        t2 = njCos_8c38c154(v2);
        (&frame)->f08 = o->f28 + o->f2c * t2;
        t3 = njScalor_8c37e480((Frame *)((&frame)));
        if (!(t3 > 255.0f)) {
            emit_raised_ring_particle((void *)o, (void *)(&frame));
            call_8c21b8a4(o, (Frame *)((&frame)));
            v1 = (int)(v1 + 1);
        }
        v2 = (int)(v2 + v4);
    }
    if (o->f2c > 300.0f && v1 == 0) {
        o->f04 |= 1;
        return;
    }
    o->f2c += 25.0f;
}
