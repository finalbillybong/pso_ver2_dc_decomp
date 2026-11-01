/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0da5f4
 * function: operation_8c0da5f4
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 72 of 166 reference instruction lines
 * differing bytes: 93
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Object {
    float tag;
    float f04;
    float f08;
};
extern void normalize_vector_checked(void *);
extern float call_8c3845f0(void *, Frame *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
int operation_8c0da5f4(Object *o, Arg1 *a1, int a2, float f0, float f1)
{
    Frame frame;
    float v2;
    float v1;
    float t1;
    float t2;
    float t3;
    float t4;
    if (!(f0 > -1.0f)) {
    } else {
        if (!(1.0f > f0)) {
        } else {
            if (f1 == 0.0f) {
                (&frame)->f0c = a1->f00 - o->tag;
                (&frame)->f10 = 0.0f;
                (&frame)->f14 = a1->f08 - o->f08;
                (&frame)->f00 = (&frame)->f0c;
                (&frame)->f04 = a1->f04 - o->f04;
                (&frame)->f08 = (&frame)->f14;
                normalize_vector_checked((void *)(&(&frame)->f0c));
                normalize_vector_checked((void *)(&frame));
                t1 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
                if (f0 > t1) {
                    return 0;
                }
                goto L_8c0da72a;
            }
            t4 = njSin_8c37eb0c((int)(a2 + 0x8000));
            v1 = (float)o->f04;
            v2 = (float)(f1 * t4 + o->tag);
            t2 = njCos_8c38c154((int)(a2 + 0x8000));
            (&frame)->f0c = a1->f00 - v2;
            (&frame)->f10 = 0.0f;
            (&frame)->f14 = a1->f08 - (f1 * t2 + o->f08);
            (&frame)->f00 = (&frame)->f0c;
            (&frame)->f04 = a1->f04 - v1;
            (&frame)->f08 = (&frame)->f14;
            normalize_vector_checked((void *)(&(&frame)->f0c));
            normalize_vector_checked((void *)(&frame));
            t3 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
            if (f0 > t3) {
                return 0;
            }
        }
    }
L_8c0da72a:;
    return 1;
}
