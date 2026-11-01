/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05b338
 * function: operation_8c05b338
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 38 of 43 reference instruction lines
 * differing bytes: 27
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
typedef struct S_g8c467980 S_g8c467980;
typedef struct S_g8c467980_dc S_g8c467980_dc;
typedef struct Arg2 Arg2;
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
struct Arg2 {
    char unknown0[0x8];
    float f08;
};
extern S_g8c467980 *g_8c467980;
extern void operation_8c0f34ec(void *, int);
extern void set_position_8c0f3504(void *, void *);
extern void call_8c0f3514(S_g8c467980 *, void *, Arg2 *, int);
void operation_8c05b338(int a0, int a1, Arg2 *a2, int a3)
{
    operation_8c0f34ec((void *)g_8c467980, a0);
    set_position_8c0f3504((void *)g_8c467980, (void *)a1);
    g_8c467980->fdc->f0c = a2->f08;
    g_8c467980->fdc->f18 = 0x13a03;
    call_8c0f3514(g_8c467980, (void *)((char *)a2 + 0xc), a2, a3);
}
