/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c019770
 * function: operation_8c019770
 * language: c
 * reference size: 284 bytes
 * compiled size: 272 bytes (-4.2%)
 * differing lines: 74 of 119 reference instruction lines
 * differing bytes: 171
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c41c60c *g_8c41c60c;
extern void *g_8c41c8e8;
extern char g_8c41c8ec;
extern char g_8c2e3014[];
extern int operation_8c19fb18(int);
extern void operation_8c1cd918(void *, int, int, unsigned char, char, char, char, int, int);
extern void operation_8c1cdc30(void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, int, int);
void operation_8c019770(int a0, Arg1 *a1, int a2)
{
    S_vv4 *v4;
    int i;
    int k;
    int off;
    int f;
    int kind;
    int m;
    if (g_8c41c8ec == 0) {
        g_8c41c8e8 = (g_8c2e3014 + 0xdd);
        g_8c41c8ec = 1;
    }
    if (g_8c41c60c != 0) {
        v4 = (S_vv4 *)g_8c41c60c;
        v4->f04 |= 1;
        g_8c41c60c = (S_g8c41c60c *)0;
    }
    g_8c41c60c = (S_g8c41c60c *)operation_8c19fb18((int)g_8c41c8e8);
    for (i = 0, k = -0x22; i < a0; i++) {
        off = i * 0x1c;
        f = *(char *)((char *)a1 + 0x1b + off);
        kind = 0;
        if (f & 0x10) {
            kind = 2;
        }
        if (f & 0x20) {
            kind = 1;
        }
        m = 0;
        if (f & 0x40) {
            m = 1;
        }
        operation_8c1cd918(g_8c41c60c, f & 2, (int)((int)a1 + off + 0xa), *(unsigned char *)((char *)a1 + 0x9 + off), (char)4, (char)(*(unsigned char *)((char *)a1 + 0x8 + off) + k), (char)kind, m, i);
    }
    operation_8c1cdc30(g_8c41c60c);
    memset_8c12b880((void *)((void *)0x8c41c656), 0, 0x11);
    strncpy_8c12b154((void *)((void *)0x8c41c656), (int)(a2 + 0xa), 0x11);
}
