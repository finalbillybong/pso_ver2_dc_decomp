/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1190b8
 * function: operation_8c1190b8
 * language: c
 * reference size: 216 bytes
 * compiled size: 220 bytes (+1.9%)
 * differing lines: 10 of 86 reference instruction lines
 * differing bytes: 113
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d82ec S_g8c4d82ec;
typedef struct S_g8c4d82f8 S_g8c4d82f8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_30 S_vv1_30;
struct S_vv1 {
    int f00;
    char unknown4[0x28];
    S_vv1_2c *f2c;
    S_vv1_30 *f30;
};
extern S_g8c4d82ec *g_8c4d82ec;
extern int g_8c4d82f0;
extern int g_8c4d82f4;
extern S_g8c4d82f8 *g_8c4d82f8;
extern int g_8c4d82fc;
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3aba08(int, S_vv1 *, int);
extern void call_8c3be280(int, void *, void *);
extern int call_8c1190b8(int, void *, int);
extern void njPopMatrixEx_8c38ad10(void);
int operation_8c1190b8(int a0, S_vv1 *a1, int a2)
{
    int v9;
    int i;
    do {
        njPushMatrixEx_8c38ae68();
        call_8c3aba08(0, a1, 0);
        v9 = a1->f00;
        while (((int *)g_8c4d82f8)[i = g_8c4d82f4] == a2) {
            if (g_8c4d82fc == 0) {
                call_8c3be280(0, (void *)0x8c4d82e0, g_8c4d82ec);
            } else {
                call_8c3be280(0, (void *)(g_8c4d82fc + i * 0xc), g_8c4d82ec);
            }
            g_8c4d82ec = (S_g8c4d82ec *)((int)g_8c4d82ec + 0xc);
            g_8c4d82f4 += 1;
        }
        a2 = a2 + 1;
        if ((v9 & 0x10) == 0) {
            a2 = call_8c1190b8(a0, (void *)a1->f2c, a2);
        }
        njPopMatrixEx_8c38ad10();
        a1 = (S_vv1 *)a1->f30;
        if (a1 == 0) {
            break;
        }
    } while (g_8c4d82f4 < g_8c4d82f0);
    return a2;
}
