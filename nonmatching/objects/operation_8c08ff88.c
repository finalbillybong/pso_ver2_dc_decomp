/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08ff88
 * function: operation_8c08ff88
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 124 of 123 reference instruction lines
 * differing bytes: 113
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
typedef struct S_g8c469dc8 S_g8c469dc8;
typedef struct Arg1 Arg1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12 S_vv12;
typedef struct S_vv13 S_vv13;
typedef struct S_vv26 S_vv26;
typedef struct S_vv27 S_vv27;
typedef struct S_vv28 S_vv28;
struct S_vv13 {
    short f00;
    char unknown2[0x12];
    float f14;
    float f18;
    float f1c;
};
struct Arg1 {
    float f00;
};
struct S_vv11 {
    float f00;
};
struct S_vv12 {
    float f00;
};
struct S_vv28 {
    short f00;
    char unknown2[0x12];
    float f14;
    float f18;
    float f1c;
};
struct S_vv26 {
    float f00;
};
struct S_vv27 {
    float f00;
};
extern int g_8c44be04;
extern S_g8c469dc8 *g_8c469dc8;
extern int g_8c46ec54;
int operation_8c08ff88(int a0, Arg1 *a1)
{
    int v1;
    int v3;
    int v2;
    int v4;
    int v7;
    int v9;
    short v10;
    S_vv13 *v13;
    S_vv26 *v26;
    float v14;
    S_vv11 *v11;
    S_vv12 *v12;
    int v16;
    int v25;
    short v24;
    S_vv28 *v28;
    int v15;
    float v30;
    int v29;
    S_vv27 *v27;
    char *v31;
    float d1;
    float d2;
    v1 = (int)g_8c44be04;
    v16 = (int)0;
    if (v1 > 0x11) {
        v7 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46eca0 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v7 = (int)(g_8c46ec54 + v2 * 0x48);
    }
    v9 = (int)*(int *)((char *)0x8c46eca0 + (v1 << 2));
    v10 = (short)-1;
    v11 = (S_vv11 *)((char *)a1 + 0x4);
    v12 = (S_vv12 *)((char *)a1 + 0x8);
    v13 = (S_vv13 *)v7;
    v14 = (float)1000000000.0f;
    v15 = (int)0;
    while (v9 > v15) {
        if (v13->f00 != v10) {
            d1 = (a1->f00 - v13->f14) * (a1->f00 - v13->f14) + (v11->f00 - v13->f18) * (v11->f00 - v13->f18) + (v12->f00 - v13->f1c) * (v12->f00 - v13->f1c);
            if (v14 > d1) {
                v14 = d1;
                v16 = (int)v13;
            }
        }
        v15 = (int)(v15 + 1);
        v13 = (S_vv13 *)((char *)v13 + 72);
    }
    v24 = (short)-1;
    v26 = (S_vv26 *)((char *)a1 + 0x4);
    v27 = (S_vv27 *)((char *)a1 + 0x8);
    v28 = (S_vv28 *)g_8c469dc8;
    v29 = (int)0;
    v30 = (float)v14;
    v31 = (char *)v16;
    v25 = (int)0x80;
    while (v25 > v29) {
        if (v28->f00 != v24) {
            d2 = (a1->f00 - v28->f14) * (a1->f00 - v28->f14) + (v26->f00 - v28->f18) * (v26->f00 - v28->f18) + (v27->f00 - v28->f1c) * (v27->f00 - v28->f1c);
            if (v30 > d2) {
                v30 = d2;
                v31 = (char *)v28;
            }
        }
        v29 = (int)(v29 + 1);
        v28 = (S_vv28 *)((char *)v28 + 72);
    }
    return (int)(v31);
}
