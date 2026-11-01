/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199f4c
 * function: operation_8c199f4c
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 6 of 69 reference instruction lines
 * differing bytes: 5
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
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_14 Arg0_14;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
    char unknown8[0x28];
    int f30;
    float f34;
};
struct Frame {
    float f00;
    float f04;
};
struct Object {
    Arg0_0 *tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    Arg0_14 *f14;
    char unknown18[0x4];
    float f1c;
};
extern void operation_8c19a370(int, int, int, float, float);
extern void call_8c19a3a0(Frame *, void *, void *, float);
void operation_8c199f4c(Object *o, Arg1 *a1)
{
    Frame frame;
    if (a1->f30 >= 0) {
        Frame *pm1;
        pm1 = &frame;
        (&frame)->f00 = a1->f00 + o->f04 + (o->f0c + 160.0f) * 0.5f - o->f10 * 0.5f;
        (pm1)->f04 = a1->f04 + o->f08 + 4.0f;
        operation_8c19a370((int)a1, 0, 1, -1.0f / (a1->f34 + 0.0598f), 100000.0f);
        call_8c19a3a0((Frame *)((&frame)), (void *)(o->tag), (void *)(o->f14), o->f1c);
    }
}
