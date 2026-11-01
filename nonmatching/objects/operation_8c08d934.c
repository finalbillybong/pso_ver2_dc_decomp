/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08d934
 * function: operation_8c08d934
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 100 of 123 reference instruction lines
 * differing bytes: 91
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469da8 S_g8c469da8;
typedef struct Arg1 Arg1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv12 S_vv12;
typedef struct S_vv13 S_vv13;
typedef struct S_vv25 S_vv25;
typedef struct S_vv26 S_vv26;
typedef struct S_vv27 S_vv27;
struct S_vv13 {
    short f00;
    char unknown2[0xe];
    float f10;
    float f14;
    float f18;
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
struct S_vv27 {
    short f00;
    char unknown2[0xe];
    float f10;
    float f14;
    float f18;
};
struct S_vv26 {
    float f00;
};
struct S_vv25 {
    float f00;
};
extern int g_8c44be04;
extern S_g8c469da8 *g_8c469da8;
extern int g_8c46ec50;
int operation_8c08d934(int a0, Arg1 *a1)
{
    int v1;
    int v3;
    int v2;
    int v7;
    int v9;
    S_vv11 *v11;
    S_vv13 *v13;
    short v24;
    float v14;
    short v10;
    S_vv12 *v12;
    int v15;
    S_vv27 *v27;
    int v28;
    S_vv26 *v26;
    S_vv25 *v25;
    int v16;
    float dx;
    float dy;
    float dz;
    float d;
    v16 = 0;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v7 = (int)0;
    } else {
        v2 = (int)0;
        for (v3 = 0; v1 > v3; v3++) {
            v2 += *(int *)((char *)0x8c46ec58 + (v3 << 2));
        }
        v7 = (int)(g_8c46ec50 + v2 * 0x44);
    }
    v9 = (int)*(int *)((char *)0x8c46ec58 + (v1 << 2));
    v10 = (short)-1;
    v11 = (S_vv11 *)((char *)a1 + 0x4);
    v12 = (S_vv12 *)((char *)a1 + 0x8);
    v13 = (S_vv13 *)v7;
    v14 = (float)100000000.0f;
    for (v15 = 0; v9 > v15; v15++) {
        if (v13->f00 != v10) {
            dx = a1->f00 - v13->f10;
            dy = v11->f00 - v13->f14;
            dz = v12->f00 - v13->f18;
            d = dx * dx + dy * dy + dz * dz;
            if (v14 > d) {
                v14 = d;
                v16 = (int)v13;
            }
        }
        v13 = (S_vv13 *)((char *)v13 + 68);
    }
    v24 = (short)-1;
    v25 = (S_vv25 *)((char *)a1 + 0x8);
    v26 = (S_vv26 *)((char *)a1 + 0x4);
    v27 = (S_vv27 *)g_8c469da8;
    for (v28 = 0; 0x100 > v28; v28++) {
        if (v27->f00 != v24) {
            dx = a1->f00 - v27->f10;
            dy = v26->f00 - v27->f14;
            dz = v25->f00 - v27->f18;
            d = dx * dx + dy * dy + dz * dz;
            if (v14 > d) {
                v14 = d;
                v16 = (int)v27;
            }
        }
        v27 = (S_vv27 *)((char *)v27 + 68);
    }
    return (int)(v16);
}
