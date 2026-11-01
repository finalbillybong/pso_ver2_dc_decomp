/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08db98
 * function: operation_8c08db98
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 36 of 69 reference instruction lines
 * differing bytes: 20
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da8 S_g8c469da8;
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
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
int operation_8c08db98(int a0, int a1)
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
    S_vv19 *v19;
    short v17;
    char *v20;
    v1 = (int)g_8c44be04;
    v14 = (int)0;
    if (v1 > 0x11) {
        v9 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46ec58 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v9 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v10 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v11 = (short)-1;
    v12 = (S_vv12 *)v9;
    v13 = (int)0;
    while (v10 > v13) {
        if (v12->f00 != v11 && v12->f0c == a1) {
            v14 = (int)(v14 + 1);
        }
        v13 = (int)(v13 + 1);
        v12 = (S_vv12 *)((char *)v12 + 68);
    }
    v10 = (int)0;
    v19 = (S_vv19 *)g_8c469da8;
    v20 = (char *)v14;
    v17 = (short)-1;
    v16 = (int)0x100;
    while (v16 > v10) {
        if (v19->f00 != v17 && v19->f0c == a1) {
            v20 = (char *)(v20 + 1);
        }
        v10 = (int)(v10 + 1);
        v19 = (S_vv19 *)((char *)v19 + 68);
    }
    return (int)(v20);
}
