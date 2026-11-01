/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1103fc
 * function: operation_8c1103fc
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 6 of 47 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg2 Arg2;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    unsigned short f06;
    short f08;
    short f0a;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
extern void operation_8c03bb4c(unsigned short, int, float, float, float);
extern void operation_8c0368a8(void *);
extern void operation_8c02a438(int, void *, int);
void operation_8c1103fc(int a0, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    (&frame)->f00 = 0x69;
    (&frame)->f01 = 3;
    (&frame)->f04 = a0;
    (&frame)->f06 = 0xffff;
    (&frame)->f08 = 0;
    (&frame)->f0a = a1;
    (&frame)->f06 = 1;
    operation_8c03bb4c((&frame)->f06, a3, a2->f00, a2->f04, a2->f08);
    operation_8c0368a8((void *)(&frame));
    operation_8c02a438((&frame)->f06, (void *)a2, a3);
}
