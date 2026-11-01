/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b4bac
 * function: operation_8c0b4bac
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 8 of 55 reference instruction lines
 * differing bytes: 56
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_x16912 S_x16912;
typedef struct S_x57072 S_x57072;
typedef struct S_x57392 S_x57392;
struct S_c8c021ef8 {
    char unknown0[0x7b8];
    unsigned short f7b8;
};
struct S_x16912 {
    float f00;
};
struct S_x57072 {
    float f00;
};
struct S_x57392 {
    float f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c0b4bac(void)
{
    int v7;
    int v1;
    int v2;
    int v3;
    unsigned short v4;
    int v5;
    char *pm7;
    int v6;
    int pm2;
    S_c8c021ef8 *t1;
    char *pm9;
    char *pm5;
    int pm11;
    v1 = 0x7bc;
    pm2 = 0x7ba;
    v2 = pm2;
    v3 = 0x7c0;
    v4 = 0x7c4;
    pm11 = 0x7c8;
    v7 = 0;
    v5 = pm11;
    v6 = 0x7cc;
    while (v7 < 4) {
        t1 = lookup_low_id(v7);
        if (0 != t1) {
            float pm4;
            int pm3;
            S_x16912 *pm6;
            pm2 = (int)t1 + v4;
            t1->f7b8 = (unsigned short)0xffff;
            pm7 = (char *)t1 + 0x0;
            pm5 = (pm7);
            *(int *)((v1) + pm5) = 0;
            pm6 = (S_x16912 *)((int)t1 + v3);
            pm9 = (0x0 + (char *)t1);
            pm11 = (int)t1 + v5;
            *(short *)(pm9 + (v2)) = (short)0;
            pm3 = 0;
            (pm6)->f00 = 0.0f;
            pm4 = 0.0f;
            ((S_x57072 *)(pm2))->f00 = 0.0f;
            ((S_x57392 *)(pm11))->f00 = pm4;
            *(int *)((char *)(0x0 + (char *)t1) + (v6)) = pm3;
        }
        v7 += 1;
    }
}
