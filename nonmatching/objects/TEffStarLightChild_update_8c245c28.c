/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c245c28
 * function: TEffStarLightChild_update_8c245c28
 * language: c
 * reference size: 320 bytes
 * compiled size: 324 bytes (+1.2%)
 * differing lines: 48 of 150 reference instruction lines
 * differing bytes: 240
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
};
extern void step_vector_toward(void *, void *, void *, float);
void TEffStarLightChild_update_8c245c28(Object *o)
{
    Frame frame;
    float v2;
    float v3;
    float v4;
    float v5;
    int v1;
    v1 = (int)0;
    (&frame)->f08 = 0.0f;
    (&frame)->f00 = (o->f24 + o->f2c) * 0.5f;
    (&frame)->f04 = (o->f28 + o->f30) * 0.5f;
    (&frame)->f20 = 0.0f;
    (&frame)->f18 = o->f24;
    (&frame)->f1c = o->f28;
    (&frame)->f14 = 0.0f;
    (&frame)->f0c = o->f2c;
    (&frame)->f10 = o->f30;
    step_vector_toward((void *)(&(&frame)->f18), (void *)(&frame), (void *)(&(&frame)->f18), o->f20);
    o->f24 = (&frame)->f18;
    o->f28 = (&frame)->f1c;
    step_vector_toward((void *)(&(&frame)->f0c), (void *)(&frame), (void *)(&(&frame)->f0c), o->f20);
    o->f2c = (&frame)->f0c;
    o->f30 = (&frame)->f10;
    v2 = (float)o->f24;
    if (!(-100.0f > v2) && !(v2 > 740.0f)) {
        v3 = (float)o->f28;
        if (!(-100.0f > v3) && !(v3 > 580.0f)) {
            v4 = (float)o->f2c;
            if (!(-100.0f > v4) && !(v4 > 740.0f)) {
                v5 = (float)o->f30;
                if (!(-100.0f > v5) && !(v5 > 580.0f)) {
                    v1 = (int)1;
                }
            }
        }
    }
    if (v1 == 0) {
        o->f04 |= 1;
        return;
    }
    if ((&frame)->f00 == (&frame)->f0c && (&frame)->f04 == (&frame)->f10) {
        o->f04 |= 1;
    }
}
