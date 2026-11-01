/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02ca48
 * function: operation_8c02ca48
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 26 of 70 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
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
struct Object {
    char unknown0[0x3b0];
    int f3b0;
};
struct Arg1 {
    char unknown0[0x7];
    char f07;
    char unknown8[0x1b];
    char f23;
    char unknown24[0x1b];
    char f3f;
    char unknown40[0x1b];
    char f5b;
    char unknown5c[0x1b];
    char f77;
    char unknown78[0x1b];
    char f93;
    char unknown94[0x1b];
    char faf;
    char unknownb0[0x1b];
    char fcb;
};
struct Frame {
    int f00;
    int f04;
    char unknown8[0x8];
};
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, Frame *);
void operation_8c02ca48(Object *o, Arg1 *a1)
{
    Frame frame;
    unsigned int v;
    unsigned int w;
    v = o->f3b0;
    if (v != 0) {
        a1->f07 |= (unsigned char)v & 0xff;
        a1->f23 |= (unsigned char)(v >> 8) & 0xff;
        a1->f3f |= (unsigned char)(v >> 16) & 0xff;
        a1->f5b |= (unsigned char)(v >> 24) & 0xff;
        call_8c36d3ca((void *)(&(&frame)->f04));
        call_8c36d4c0((void *)(&(&frame)->f04), (Frame *)((&frame)));
        w = (unsigned int)(&frame)->f00;
        a1->f77 = (unsigned char)w & 0xff;
        a1->f93 = (unsigned char)(w >> 8) & 0xff;
        a1->faf = (unsigned char)(w >> 16) & 0xff;
        a1->fcb = (unsigned char)(w >> 24) & 0xff;
    }
}
