/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07cdfc
 * function: TEneEffHamon_render_8c07cdfc
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 90 of 112 reference instruction lines
 * differing bytes: 123
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order, constant loading; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
typedef struct S_g8c469b40 S_g8c469b40;
typedef struct S_g8c469b44 S_g8c469b44;
typedef struct Block16 {
    int w[4];
} Block16;
struct Object {
    char unknown0[0x38];
    float f38;
    char unknown3c[0x8];
    float f44;
    char unknown48[0x8];
    int f50;
};
extern S_g8c469b40 *g_8c469b40;
extern S_g8c469b44 *g_8c469b44;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern Block16 g_8c46f564;
extern Block16 g_8c5755ac;
extern void call_8c38c0e6(int, int);
extern void call_8c3827d8(void *);
extern void call_8c38c0f0(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TEneEffHamon_render_8c07cdfc(Object *o)
{
    int *v1;
    float v5;
    if (!(o->f50 > 0)) {
        g_8c46f560 = g_8c575570;
        v1 = (int *)0x8c5755a8;
        g_8c46f564 = g_8c5755ac;
        g_8c46f574 = g_8c5755a4;
        g_8c575570 |= 0x810;
        g_8c46f578 = *v1;
        call_8c38c0e6(-0xff01, 0x800);
        call_8c3827d8(g_8c469b44);
        call_8c38c0f0((void *)(((char *)o + 0x54)));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
        v5 = o->f44 * o->f38;
        njScale_8c37e2e4(0, v5, v5, v5);
        call_8c3aa716(g_8c469b40);
        njPopMatrixEx_8c38ad10();
        call_8c38c0f0((void *)0x8c305fd8);
        g_8c5755a4 = g_8c46f574;
        *v1 = g_8c46f578;
        g_8c5755ac = g_8c46f564;
        g_8c575570 = g_8c46f560;
    }
}
