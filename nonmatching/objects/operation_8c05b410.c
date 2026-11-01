/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05b410
 * function: operation_8c05b410
 * language: c
 * reference size: 104 bytes
 * compiled size: 108 bytes (+3.8%)
 * differing lines: 10 of 40 reference instruction lines
 * differing bytes: 56
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
extern void call_8c0f3514(S_g8c467980 *, void *, Arg1 *, char);
void operation_8c05b410(int a0, Arg1 *a1)
{
    void *pm2;
    void *pm1;
    int pm3;
    char *pm4;
    S_g8c467980_dc *pm5;
    unsigned char pm6;
    pm1 = (void *)g_8c467980;
    operation_8c0f34ec(pm1, a0);
    pm2 = (void *)g_8c467980;
    pm1 = pm2;
    set_position_8c0f3504(pm1, (void *)((a0 + 0x3c)));
    pm6 = 0;
    pm3 = pm6;
    pm5 = g_8c467980->fdc;
    pm5->f0c = a1->f08;
    g_8c467980->fdc->f18 = 0x13a03;
    pm4 = (char *)a1;
    call_8c0f3514(g_8c467980, (void *)((pm4 + 0xc)), a1, pm3);
}
