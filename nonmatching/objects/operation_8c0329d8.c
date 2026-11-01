/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0329d8
 * function: operation_8c0329d8
 * language: c
 * reference size: 48 bytes
 * compiled size: 48 bytes (+0.0%)
 * differing lines: 16 of 22 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_8 S_vv1_8;
struct S_vv1 {
    short f00;
    char unknown2[0x6];
    S_vv1_8 *f08;
};
extern S_g8c44be0c *g_8c44be0c;
int operation_8c0329d8(int a0)
{
    int pm5;
    short pm8;
    int v2;
    int v6;
    char *pm3;
    S_vv1_8 *pm6;
    S_vv1_8 *pm4;
    int pm1;
    int pm7;
    int pm10;
    S_vv1 *v1;
    v6 = 0;
    v1 = (S_vv1 *)g_8c44be0c;
    goto L_8c0329fc;
    pm10 = 0;
    v2 = pm10;
L_8c0329e6:
    ;
    pm6 = v1->f08;
    pm1 = 0x3c;
    pm3 = (0x0 + (char *)pm6) + (v2 * pm1);
    if ((*(int *)(pm3)) == a0) {
        int pm2;
        pm4 = v1->f08;
        pm10 = (int)pm4;
        pm2 = pm10 + v2 * 0x3c;
        return pm2;
    }
    pm5 = 1 + v2;
    v6 = (pm5);
L_8c0329fc:
    ;
    v2 = v6;
    pm8 = (int)(int)v1->f00;
    pm7 = (int)(int)pm8;
    if (pm7 > v6) {
        goto L_8c0329e6;
    }
    return 0;
}
