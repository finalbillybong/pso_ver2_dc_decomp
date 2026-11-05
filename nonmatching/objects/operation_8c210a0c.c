/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c210a0c
 * function: operation_8c210a0c
 * language: c
 * reference size: 272 bytes
 * compiled size: 280 bytes (+2.9%)
 * differing lines: 48 of 114 reference instruction lines
 * differing bytes: 107
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c20af34 S_c8c20af34;
typedef struct S_c8c20af34_0 S_c8c20af34_0;
typedef struct S_g8c5051f4 S_g8c5051f4;
typedef struct S_g8c505208 S_g8c505208;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv1_0 S_vv1_0;
struct S_g8c5051f4 {
    int f00;
    int f04;
};
struct S_vv10 {
    S_vv10_0 *f00;
    int f04;
};
struct S_vv1 {
    S_vv1_0 *f00;
    int f04;
};
struct S_c8c20af34 {
    S_c8c20af34_0 *f00;
    int f04;
};
extern int g_8c5051e0;
extern S_g8c5051f4 *g_8c5051f4;
extern short g_8c5051fc;
extern S_g8c505208 *g_8c505208;
extern int g_8c505214;
extern S_c8c20af34 *call_8c20af34(int);
void operation_8c210a0c(void)
{
    S_vv1 *v1;
    int v3;
    int v6;
    S_vv10 *v10;
    int v7;
    int v2;
    int v11;
    int v4;
    int v5;
    int v23;
    int v22;
    int v27;
    int v25;
    int v29;
    char *v31;
    int v30;
    int v34;
    S_c8c20af34 *t1;
    v1 = (S_vv1 *)0;
    v6 = (int)g_8c5051f4;
    v2 = (int)g_8c5051f4->f00;
    switch (g_8c5051e0) {
    case 0:
        v5 = (int)2;
        v6 = (int)5;
        break;
    case 1:
    default:
        v5 = (int)2;
        v6 = (int)6;
        break;
    case 4:
        v5 = (int)2;
        v6 = (int)6;
        break;
    case 2:
        v5 = (int)2;
        v6 = (int)6;
        break;
    case 3:
        v3 = (int)6;
        v4 = (int)2;
        v5 = (int)v4;
        v6 = (int)v3;
    }
    v7 = (int)(g_8c5051fc + -0x57);
    if (v6 < 0 || v6 >= g_8c505214) {
        v10 = (S_vv10 *)0;
        goto L_8c210a86;
    }
    v10 = (S_vv10 *)&*(int *)((char *)((char *)g_8c505208 + 0x0) + (v6 << 3));
L_8c210a86:;
    if (v10 != 0 && v7 >= 0) {
        v11 = (int)v7;
        if (v10->f04 > v7) {
            v1 = (S_vv1 *)call_8c20af34((int)(*(short *)((char *)((char *)v10->f00 + 0x0) + (v7 << 1))));
            v11 = (int)v1;
        }
        v7 = (int)v11;
    }
    t1 = call_8c20af34(v5);
    v29 = (int)0;
    if (v1 != 0) {
        v25 = (int)0;
        v27 = (int)0;
        goto L_8c210ac8;
        v22 = (int)0;
        v23 = (int)0;
L_8c210ab6:;
        *(short *)((char *)((char *)v2 + 0x0) + (v23 << 1)) = *(short *)((char *)((char *)v1->f00 + 0x0) + (v22 << 1));
        v25 = (int)(v23 + 1);
        v27 = (int)(v22 + 1);
L_8c210ac8:;
        if (v1->f04 > v27 && 0x20 > v25) {
            v22 = (int)v27;
            v23 = (int)v25;
            goto L_8c210ab6;
        }
        v29 = (int)v25;
    }
    v34 = (int)0;
    goto L_8c210aea;
    v30 = (int)0;
    v31 = (char *)v29;
L_8c210ad8:;
    *(short *)((char *)((char *)v2 + 0x0) + ((int)(v31) << 1)) = *(short *)((char *)((char *)t1->f00 + 0x0) + (v30 << 1));
    v29 = (int)(v31 + 1);
    v34 = (int)(v30 + 1);
L_8c210aea:;
    if (t1->f04 > v34 && 0x20 > v29) {
        v30 = (int)v34;
        v31 = (char *)v29;
        goto L_8c210ad8;
    }
    g_8c5051f4->f04 = (int)(v29);
}
