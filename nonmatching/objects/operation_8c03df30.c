/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03df30
 * function: operation_8c03df30
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 80 of 96 reference instruction lines
 * differing bytes: 123
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
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_c Arg0_0_c;
typedef struct S_vv4 S_vv4;
struct Frame {
    int f00;
    int f04;
};
struct Arg0_0_c {
    char unknown0[0x4];
    int f04;
};
struct S_vv4 {
    int f00;
};
extern char g_8c2ef0e4[];
extern int operation_8c03ec84(void *, int, int, int);
extern void debug_error_stub_8c03ef80(void *, ...);
int operation_8c03df30(Object *o, unsigned int a1, int a2, int a3)
{
    Frame frame;
    int off;
    int v2;
    unsigned int v3;
    S_vv4 *v4;
    char *v5;
    int t1;
    off = a2 << 4;
    *(int *)((char *)((char *)*(Arg0_0 **)((char *)o + 0x42c) + 0x8) + off) = 0;
    *(int *)((char *)((char *)*(Arg0_0 **)((char *)o + 0x42c) + 0xc) + off) = 0;
    (&frame)->f04 = 0;
    while (a1 > (unsigned int)(&frame)->f04) {
        t1 = operation_8c03ec84((void *)o, a3, (int)(&(&frame)->f04), (int)(&frame));
        v2 = (int)(&frame)->f00;
        switch (v2) {
        case 1313489741:
            *(int *)((char *)((char *)*(Arg0_0 **)((char *)o + 0x42c) + 0x8) + off) = (int)(t1);
            break;
        case 1313494092:
            *(int *)((char *)((char *)*(Arg0_0 **)((char *)o + 0x42c) + 0xc) + off) = (int)(t1);
            v3 = (unsigned int)0;
            v4 = (S_vv4 *)t1;
            while ((unsigned int)(*(Arg0_0_c **)((char *)((char *)*(Arg0_0 **)((char *)o + 0x42c) + 0xc) + off))->f04 > v3) {
                v5 = (char *)v4->f00;
                *(void **)((char *)((char *)v5 + 0x0) + (v3 * 0xc)) = (void *)0x8c466d20;
                v4 = (S_vv4 *)v5;
                v3 = (unsigned int)(v3 + 1);
            }
            break;
        default:
            debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x1ce)), v2);
            break;
        }
    }
    return 1;
}
