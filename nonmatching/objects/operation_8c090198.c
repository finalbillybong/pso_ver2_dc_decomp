/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c090198
 * function: operation_8c090198
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 70 of 69 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct S_vv12 S_vv12;
typedef struct S_vv19 S_vv19;
struct S_vv12 {
    short f00;
    char unknown2[0xa];
    short f0c;
};
struct S_vv19 {
    short f00;
    char unknown2[0xa];
    short f0c;
};
extern int g_8c44be04;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
int operation_8c090198(int a0, int a1)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v9;
    int v10;
    int v13;
    S_vv12 *v12;
    short v11;
    int v14;
    int v16;
    int v18;
    S_vv19 *v19;
    short v17;
    char *v20;
    v14 = 0;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v9 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46eca0 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v9 = (int)(g_8c46ec54 + v2 * 0x48);
    }
    v10 = (int)*(int *)((char *)0x8c46eca0 + (v1 << 2));
    v11 = (short)-1;
    v12 = (S_vv12 *)v9;
    v13 = (int)0;
    while (v10 > v13) {
        if (v12->f00 != v11 && v12->f0c == a1) {
            v14 = (int)(v14 + 1);
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 72);
    }
    v18 = (int)0;
    v19 = (S_vv19 *)g_8c469dc8;
    v20 = (char *)v14;
    v17 = (short)-1;
    v16 = (int)0x80;
    while (v16 > v18) {
        if (v19->f00 != v17 && v19->f0c == a1) {
            v20 = (char *)(v20 + 1);
        }
        v18 = (int)(v18 + 1);
        v19 = (S_vv19 *)((char *)v19 + 72);
    }
    return (int)(v20);
}
