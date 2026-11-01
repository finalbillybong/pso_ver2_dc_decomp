/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c225378
 * function: operation_8c225378
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 44 of 77 reference instruction lines
 * differing bytes: 84
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
typedef struct Arg0_9c Arg0_9c;
struct Object {
    char unknown0[0x54];
    float f54;
    char unknown58[0x24];
    float f7c;
    char unknown80[0x2];
    char f82;
    char f83;
    char unknown84[0x2];
    short f86;
    char unknown88[0x14];
    Arg0_9c *f9c;
};
struct Frame {
    float f00;
    float f04;
};
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void operation_8c199e14(void *, void *, void *);
void operation_8c225378(Object *o, int a1)
{
    Frame frame;
    int v4;
    v4 = o->f86;
    if (a1 >= v4) {
        a1 = v4 - 1;
    }
    o->f83 = call_8c18e768(a1, 4);
    o->f82 = call_8c18e8a0(a1, 4);
    o->f7c = (float)o->f83 * 40.0f + 9.0f + 16.0f;
    o->f7c -= 80.0f;
    frame.f00 = 0.0f;
    frame.f04 = o->f54 - 13.0f - 15.0f;
    operation_8c199e14((void *)o->f9c, (char *)o + 0x78, &frame);
}
