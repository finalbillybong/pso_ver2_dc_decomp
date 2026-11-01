/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c110be4
 * function: operation_8c110be4
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 10 of 65 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg1 Arg1;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c03bb4c(float, short, int, float, float);
extern void operation_8c021cc0(S_c8c021ef8 *, int);
void operation_8c110be4(int a0, Arg1 *a1, int a2)
{
    S_c8c021ef8 *t1;
    int v4;
    int v3;
    int v2;
    int v1;
    v1 = (int)0x5f8;
    v2 = (int)0xffff;
    v3 = (int)0;
    while (4 > v3) {
        t1 = lookup_low_id(v3);
        if (t1 != 0) {
            v4 = (int)(t1->f308 == 3);
            if (v4 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v1)) & 0xffff) != (unsigned short)v2) {
                operation_8c03bb4c(a1->f00, t1->f20, a2, a1->f04, a1->f08);
                operation_8c021cc0(t1, a0);
            }
        }
        v3 = (int)(v3 + 1);
    }
}
