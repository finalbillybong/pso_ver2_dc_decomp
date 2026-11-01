/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a65b8
 * function: operation_8c1a65b8
 * language: c
 * reference size: 76 bytes
 * compiled size: 80 bytes (+5.3%)
 * differing lines: 22 of 36 reference instruction lines
 * differing bytes: 70
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
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_4_14 Arg0_4_14;
typedef struct Arg0_4_4 Arg0_4_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
extern void call_8c1a661c(void *, void *, int, int, int, int, int);
void operation_8c1a65b8(Object *o, int a1, int a2)
{
    char *b;
    int i;
    b = (char *)o->f04;
    i = a2 << 2;
    a1 = (unsigned short)a1;
    call_8c1a661c(*(void **)((char *)(b + 0x4) + i), *(void **)((char *)(b + 0x14) + i), (unsigned char)a1, a1 >> 8 & 7, a1 >> 0xb & 1, a1 >> 0xc & 1, a2);
}
