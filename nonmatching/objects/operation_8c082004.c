/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c082004
 * function: operation_8c082004
 * language: c
 * reference size: 64 bytes
 * compiled size: 64 bytes (+0.0%)
 * differing lines: 8 of 27 reference instruction lines
 * differing bytes: 31
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_vv3 S_vv3;
struct S_g8c44be98 {
    char unknown0[0x14];
    int f14;
};
struct S_vv3 {
    int f00;
    char unknown4[0x2];
    unsigned short f06;
    char unknown8[0x4];
    int f0c;
};
extern int g_8c2ff030;
extern S_g8c44be98 *g_8c44be98;
S_vv3 *operation_8c082004(int a0)
{
    int v1;
    char *v4;
    int v5;
    int v2;
    S_vv3 *v3;
    v1 = (int)g_8c44be98->f14;
    v4 = (char *)v1;
    v3 = (S_vv3 *)v1;
    v2 = (int)g_8c2ff030;
    while (0 != v4 && !(v3 == 0)) {
        int v7;
        v5 = v3->f00;
        v1 = v3->f0c;
        v7 = v1;
        if ((v5 == v2) != 0) {
            if ((int)v3->f06 == (unsigned short)a0) {
                return v3;
            }
        }
        v3 = (S_vv3 *)v7;
    }
    return 0;
}
