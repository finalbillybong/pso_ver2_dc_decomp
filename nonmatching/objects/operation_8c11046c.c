/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11046c
 * function: operation_8c11046c
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 6 of 47 reference instruction lines
 * differing bytes: 9
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
typedef struct Arg3 Arg3;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    unsigned short f06;
    short f08;
    short f0a;
};
struct Arg3 {
    float f00;
    float f04;
    float f08;
};
extern void operation_8c03bb4c(unsigned short, int, float, float, float);
extern void operation_8c0368a8(void *);
extern void operation_8c02a438(unsigned short, void *, int);
void operation_8c11046c(int a0, int a1, int a2, Arg3 *a3, register int a4)
{
    Frame frame;
    (&frame)->f00 = 0x69;
    (&frame)->f01 = 3;
    (&frame)->f04 = a0;
    (&frame)->f06 = 0xffff;
    (&frame)->f08 = 0;
    (&frame)->f0a = a2;
    (&frame)->f06 = a1;
    operation_8c03bb4c((&frame)->f06, a4, a3->f00, a3->f04, a3->f08);
    operation_8c0368a8((void *)(&frame));
    operation_8c02a438((&frame)->f06, (void *)a3, a4);
}
