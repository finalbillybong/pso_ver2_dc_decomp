/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238eec
 * function: operation_8c238eec
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 18 of 60 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    char unknown0[0x10];
    int f10;
};
extern int g_8c510ba0;
extern S_L8c339ca0 g_8c339ca0;
extern int operation_8c247e8c(int);
int operation_8c238eec(void)
{
    int v1;
    char *v2;
    int v4;
    int v7;
    int v8;
    int v9;
    int t1;
    int mask;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0) {
        return 0x12c;
    }
    v2 = (char *)(&g_8c339ca0)->f10;
    if (v2 == 0) {
        v9 = (int)0;
    } else {
        mask = 0xffff;
        v1 = (short)((unsigned int)(int)(v2) >> 0x10) & mask;
        t1 = operation_8c247e8c(v1);
        if (4 > t1 || t1 > 0xc) {
            v4 = (int)-1;
            goto L_8c238f36;
        }
        v4 = (int)(unsigned short)(v1 ^ (int)(v2));
L_8c238f36:;
        if (0x3c > v4 || v4 > 0x8c9f) {
            v7 = (int)1;
            goto L_8c238f48;
        }
        v7 = (int)0;
L_8c238f48:;
        v8 = (int)v4;
        if (v7 != 0) {
            v8 = (int)0;
        }
        v9 = (int)v8;
    }
    if (0x3c > v9 || v9 > 0xe10) {
        return 0x12c;
    }
    return (int)(v9);
}
