/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a67b8
 * function: operation_8c1a67b8
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 12 of 34 reference instruction lines
 * differing bytes: 10
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
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Arg1 {
    char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
};
extern void operation_8c1a68d4(void *, int, int);
extern void operation_8c1a6810(void *, int, int, int);
void operation_8c1a67b8(Object *o, Arg1 *a1, int a2)
{
    void *v1;
    int t1;
    v1 = *(void **)((char *)((char *)o->f04 + 0x24) + (a2 << 2));
    operation_8c1a68d4(v1, a1->f01, a1->f02);
    t1 = a1->f00;
    a2 = a1->f03;
    operation_8c1a6810(v1, t1, a2 & 1, a2 >> 1 & 1);
}
