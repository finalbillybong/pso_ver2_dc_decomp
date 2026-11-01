/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1076bc
 * function: operation_8c1076bc
 * language: c
 * reference size: 148 bytes
 * compiled size: 152 bytes (+2.7%)
 * differing lines: 10 of 58 reference instruction lines
 * differing bytes: 75
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x8];
    Arg0_38 *f38;
};
extern int rand(void);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c3bdf60(Frame *, void *);
extern void query_vector_position(void *, void *);
extern void call_8c0a7608(void *, Frame *);
void operation_8c1076bc(Object *o)
{
    float frame[3];
    int v1;
    float t1;
    float t2;
    int t3;
    t3 = rand();
    v1 = (int)(int)((float)t3 / 32768.0f * 65536.0f);
    t1 = njSin_8c37eb0c(v1);
    frame[0] = o->f2c * t1;
    frame[1] = 0.0f;
    t2 = njCos_8c38c154(v1);
    frame[2] = o->f2c * t2;
    call_8c3bdf60((Frame *)frame, (void *)(((char *)o + 0x20)));
    query_vector_position((void *)frame, (void *)frame);
    call_8c0a7608((void *)(o->f38), (Frame *)frame);
}
