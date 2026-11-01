/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137b4c
 * function: operation_8c137b4c
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 12 of 60 reference instruction lines
 * differing bytes: 11
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
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern void operation_8c075894(void *, void *, int, int);
void operation_8c137b4c(Object *o, int a1, int a2)
{
    Frame frame;
    float v1;
    operation_8c075894((void *)a2, (void *)a1, 1, (int)(&(&frame)->f0c));
    operation_8c075894((void *)a2, (void *)a1, 2, (int)(&frame));
    v1 = 2.0f;
    o->f3c = ((&frame)->f0c + (&frame)->f00) / v1;
    o->f40 = ((&frame)->f10 + (&frame)->f04) / v1;
    o->f44 = ((&frame)->f14 + (&frame)->f08) / v1;
}
