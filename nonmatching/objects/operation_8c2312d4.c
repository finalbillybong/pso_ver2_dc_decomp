/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2312d4
 * function: operation_8c2312d4
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 60 of 55 reference instruction lines
 * differing bytes: 111
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
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_x33104 S_x33104;
typedef struct S_x43744 S_x43744;
struct S_vv6 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv7 {
    char f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_x43744 {
    int f00;
};
struct S_vv2 {
    short f00;
};
struct S_x33104 {
    short f00;
};
extern int g_8c506564;
extern int call_8c12bc48(S_vv6 *, int, S_vv7 *, int);
void operation_8c2312d4(void)
{
    S_vv6 *v6;
    int v1;
    S_vv7 *v7;
    S_vv2 *v2;
    S_vv5 *v5;
    int v11;
    S_vv4 *v4;
    int v10;
    int v12;
    int t1;
    v1 = (int)0xf;
    v2 = (S_vv2 *)-0x17fff8;
    g_8c506564 += 1;
    v4 = (S_vv4 *)(void *)0x8c506590;
    v5 = (S_vv5 *)(void *)0x8c506598;
    v6 = (S_vv6 *)(void *)0x8c50659c;
    v7 = (S_vv7 *)-0x17fff4;
L_8c2312fa:;
    if (v6->f00 != v5->f00) {
        v6->f00 += 1;
        v7->f00 = *(char *)((char *)((char *)v4->f00 + 0x0) + (v6->f00 + -1));
        t1 = call_8c12bc48(v6, 0, v7, -0x81);
        ((S_x43744 *)(/* ? clobbered */ 0))->f00 = (int)(t1);
        v10 = (int)/* ? clobbered */ 0;
        v11 = (int)/* ? clobbered */ 0;
        v12 = (int)/* ? clobbered */ 0;
    } else {
        v2->f00 &= -0x81;
        v10 = (int)v6;
        v12 = (int)v7;
        goto L_8c23132a;
        v10 = (int)v6;
        v11 = (int)0;
        v12 = (int)v7;
    }
    if (!((v11 + 1) >= v1)) {
        v6 = (S_vv6 *)v10;
        v7 = (S_vv7 *)v12;
        goto L_8c2312fa;
    }
L_8c23132a:;
    ((S_x33104 *)(-0x17fff0))->f00 &= -0x21;
}
