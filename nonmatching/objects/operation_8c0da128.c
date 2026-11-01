/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0da128
 * function: operation_8c0da128
 * language: c
 * reference size: 172 bytes
 * compiled size: 186 bytes (+8.1%)
 * differing lines: 136 of 85 reference instruction lines
 * differing bytes: 176
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +14 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv17 S_vv17;
typedef struct S_vv8 S_vv8;
typedef struct S_x36992 S_x36992;
typedef struct S_x38336 S_x38336;
struct S_x36992 {
    float f00;
};
struct Frame {
    int f00;
    int f04;
    char unknown8[0x8];
};
struct S_vv8 {
    int f00;
    int f04;
};
struct S_vv17 {
    int f00;
    int f04;
};
struct S_x38336 {
    int f00;
    int f04;
};
int operation_8c0da128(int a0, int a1, int a2, int a3)
{
    Frame frame;
    int v11;
    int v14;
    int v9;
    int v10;
    int v12;
    int v13;
    float v19;
    float v18;
    S_vv8 *v8;
    int v20;
    S_vv17 *v17;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    v11 = (int)a1;
    v12 = (int)a2;
    v14 = (int)a3;
    v9 = (int)(v11 + 4);
    v10 = (int)(v14 << 3);
    v19 = (float)((S_x36992 *)(v9 + v10))->f00;
    v8 = (S_vv8 *)((char *)(&frame) + 0x8);
    v13 = (int)(v12 + -1);
L_8c0da146:;
    v13 = (int)(v13 + 1);
    v18 = (float)*(float *)((char *)((char *)v9 + 0x0) + (v13 << 3));
    if (v19 > v18) {
        goto L_8c0da146;
    }
L_8c0da158:;
    v14 -= 1;
    if (v14 > v13) {
        v18 = (float)*(float *)((char *)((char *)v9 + 0x0) + (v14 << 3));
        if (v18 > v19) {
            goto L_8c0da158;
        }
    }
    if (v13 < v14) {
        v20 = (int)*(int *)((char *)v11 + (v13 << 3) + 0x4);
        v8->f00 = (int)(*(int *)((char *)((char *)v11 + 0x0) + (v13 << 3)));
        v8->f04 = (int)(v20);
        v17 = (S_vv17 *)&*(int *)((char *)((char *)v11 + 0x0) + (v14 << 3));
        v21 = (int)v17->f04;
        *(int *)((char *)((char *)v11 + 0x0) + (v13 << 3)) = (int)(v17->f00);
        *(int *)((char *)v11 + (v13 << 3) + 0x4) = (int)(v21);
        v22 = (int)v8->f04;
        v17->f00 = (int)(v8->f00);
        v17->f04 = (int)(v22);
        goto L_8c0da146;
    }
    v23 = (int)*(int *)((char *)v11 + (v13 << 3) + 0x4);
    (&frame)->f00 = (int)(*(int *)((char *)((char *)v11 + 0x0) + (v13 << 3)));
    (&frame)->f04 = (int)(v23);
    v24 = (int)((S_x38336 *)(v11 + v10))->f04;
    *(int *)((char *)((char *)v11 + 0x0) + (v13 << 3)) = (int)(((S_x38336 *)(v11 + v10))->f00);
    *(int *)((char *)v11 + (v13 << 3) + 0x4) = (int)(v24);
    v25 = (int)(&frame)->f04;
    ((S_x38336 *)(v11 + v10))->f00 = (int)((&frame)->f00);
    ((S_x38336 *)(v11 + v10))->f04 = (int)(v25);
    return (int)(v13);
}
