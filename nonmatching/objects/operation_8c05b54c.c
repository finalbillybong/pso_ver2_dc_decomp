/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05b54c
 * function: operation_8c05b54c
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 26 of 39 reference instruction lines
 * differing bytes: 20
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
typedef struct S_g8c467980 S_g8c467980;
typedef struct S_g8c467980_dc S_g8c467980_dc;
typedef struct Arg1 Arg1;
struct S_g8c467980 {
    char unknown0[0xdc];
    S_g8c467980_dc *fdc;
};
struct S_g8c467980_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct Arg1 {
    char unknown0[0x8];
    float f08;
};
extern S_g8c467980 *g_8c467980;
extern void operation_8c0f34ec(void *, int);
extern void set_position_8c0f3504(void *, void *);
extern void call_8c0f363c(S_g8c467980 *, void *, int);
void operation_8c05b54c(int a0, Arg1 *a1)
{
    operation_8c0f34ec((void *)g_8c467980, a0);
    set_position_8c0f3504((void *)g_8c467980, (void *)(a0 + 0x3c));
    g_8c467980->fdc->f0c = a1->f08;
    g_8c467980->fdc->f18 = 0x13a03;
    call_8c0f363c(g_8c467980, (void *)(((char *)a1 + 0xc)), 0);
}
