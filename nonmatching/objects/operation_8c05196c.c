/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05196c
 * function: operation_8c05196c
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 10 of 36 reference instruction lines
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
typedef struct S_g8c467218 S_g8c467218;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x2a4];
    int f384;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_g8c467218 {
    float f00;
    float f04;
    float f08;
};
extern char g_8c2f2e58[];
void operation_8c05196c(Object *o)
{
    int off;
    off = 0x384;
    o->fdc->f0c = (*(S_g8c467218 **)((char *)0x8c467218 + (*(int *)((char *)o + off) << 2)))->f00;
    *(float *)(g_8c2f2e58 + 0x68) = (*(S_g8c467218 **)((char *)0x8c467218 + (*(int *)((char *)o + off) << 2)))->f04;
    *(float *)(g_8c2f2e58 + 0x88) = (*(S_g8c467218 **)((char *)0x8c467218 + (*(int *)((char *)o + off) << 2)))->f08;
}
