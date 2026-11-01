/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21bfc0
 * function: operation_8c21bfc0
 * language: c
 * reference size: 332 bytes
 * compiled size: 328 bytes (-1.2%)
 * differing lines: 84 of 131 reference instruction lines
 * differing bytes: 200
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_p0_364 {
    float f00;
    float f04;
    float f08;
} Block_p0_364;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x35e];
    Block_p0_364 f364;
    char unknown370[0x10];
    float f380;
    int f384;
    Vector3 f388;
    float f394;
    float f398;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float call_8c38d7d8(void *);
void operation_8c21bfc0(Object *o)
{
    Frame frame;
    float v4;
    float t1;
    float t3;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f388;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x324)));
    t1 = njScalor_8c37e480((void *)(&(&frame)->f0c));
    if (t1 > 0.01f) {
        if (njScalor_8c37e480((void *)(&o->f364)) > 0.01f) {
            goto L_8c21c014;
        }
    }
    o->f04 |= 1;
    return;
L_8c21c014:;
    njUnitVector_8c37b630((void *)(&(&frame)->f0c));
    njUnitVector_8c37b630((void *)(&o->f364));
    v4 = (float)(o->f380 * -0.3f + 0.8f);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f364;
    o->f364.f00 = v4 * o->f364.f00 + (1.0f - v4) * (&frame)->f0c.f00;
    o->f364.f04 = o->f364.f04 * v4 + (1.0f - v4) * (&frame)->f0c.f04;
    o->f364.f08 = o->f364.f08 * v4 + (1.0f - v4) * (&frame)->f0c.f08;
    if (!(o->f398 > o->f394)) {
        t3 = call_8c38d7d8((void *)(&o->f364));
        if (!(t3 > 0.001f)) {
            o->f384 = 2;
        }
    }
}
