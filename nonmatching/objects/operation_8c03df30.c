/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03df30
 * function: operation_8c03df30
 * language: c
 * reference size: 224 bytes
 * compiled size: 232 bytes (+3.6%)
 * differing lines: 54 of 96 reference instruction lines
 * differing bytes: 125
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_c Arg0_0_c;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
struct Frame {
    int f00;
    int f04;
};
struct S_vv5 {
    S_vv5_0 *f00;
};
struct Arg0_0_c {
    char unknown0[0x4];
    int f04;
};
extern char g_8c2ef0e4[];
extern int operation_8c03ec84(void *, int, int, int);
extern void debug_error_stub_8c03ef80(void *, ...);
int operation_8c03df30(Object *o, unsigned int a1, int a2, int a3)
{
    Frame frame;
    int v2;
    int v1;
    int v3;
    S_vv5 *v5;
    int v4;
    unsigned int v8;
    int v11;
    int t1;
    v1 = (int)0x42c;
    v2 = (int)(a2 << 4);
    *(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x8) + (v2)) = 0;
    *(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0xc) + (v2)) = 0;
    (&frame)->f04 = 0;
    v8 = (unsigned int)0;
    goto L_8c03dfd8;
L_8c03df66:;
    t1 = operation_8c03ec84((void *)o, a3, (int)(&(&frame)->f04), (int)(&frame));
    v3 = (int)(&frame)->f00;
    if (0x4e4a434d != v3) {
        if (0x4e4a544c == v3) {
            goto L_8c03df94;
        }
        v11 = (int)v3;
    } else {
        *(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x8) + (v2)) = (int)(t1);
        v8 = (unsigned int)((int)*(int *)((char *)((char *)o + 0x0) + (v1)) + 8);
        goto L_8c03dfd8;
L_8c03df94:;
        *(int *)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0xc) + (v2)) = (int)(t1);
        v8 = (unsigned int)0;
        goto L_8c03dfb2;
        v4 = (int)0;
        v5 = (S_vv5 *)t1;
L_8c03dfa6:;
        *(void **)((char *)((char *)v5->f00 + 0x0) + (v4 * 0xc)) = (void *)0x8c466d20;
        v8 = (unsigned int)(v4 + 1);
L_8c03dfb2:;
        if ((unsigned int)(*(Arg0_0_c **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0xc) + (v2)))->f04 > v8) {
            v4 = (int)v8;
            v5 = (S_vv5 *)*(Arg0_0_c **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0xc) + (v2));
            goto L_8c03dfa6;
        }
        goto L_8c03dfd8;
        v11 = (int)v8;
    }
    debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x1ce)), v11);
    v8 = (unsigned int)/* ? clobbered */ 0;
L_8c03dfd8:;
    if (a1 > (unsigned int)(&frame)->f04) {
        goto L_8c03df66;
    }
    return 1;
}
