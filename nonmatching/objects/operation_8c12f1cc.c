/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f1cc
 * function: operation_8c12f1cc
 * language: c
 * reference size: 152 bytes
 * compiled size: 164 bytes (+7.9%)
 * differing lines: 94 of 66 reference instruction lines
 * differing bytes: 141
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
struct Frame {
    S_frame_0 *f00;
    char unknown4[0xc];
};
struct Arg1 {
    short f00;
};
struct S_vv5 {
    unsigned char f00;
};
extern void call_8c12f264(int, void *);
extern void memset_8c12b880(void *, int, int);
extern void bytes_shl(S_vv5 *, int, int);
extern void memcpy_8c12b77c(void *, S_vv5 *, int);
void operation_8c12f1cc(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    int v2;
    S_vv5 *v5;
    int v7;
    int v9;
    int v6;
    int v1;
    int v8;
    int v4;
    (&frame)->f00 = (S_frame_0 *)a2;
    a1->f00 = a0 + 0x3f;
    call_8c12f264(a0, (void *)(((char *)(&frame) + 0x8)));
    memset_8c12b880((void *)((&frame)->f00), 0, 8);
    v4 = (int)0;
    v5 = (S_vv5 *)((char *)(&frame) + 0x8);
    goto L_8c12f208;
    v1 = (int)0;
    v2 = (int)((char *)(&frame) + 0x8);
L_8c12f1fe:;
    a1->f00 -= 8;
    v4 = (int)(v1 + 1);
    v5 = (S_vv5 *)(v2 + 1);
L_8c12f208:;
    if (v5->f00 == 0) {
        v1 = (int)v4;
        v2 = (int)v5;
        goto L_8c12f1fe;
    }
    v8 = (int)0x80;
    v9 = (int)0;
    goto L_8c12f21a;
    v6 = (int)0x80;
    v7 = (int)0;
L_8c12f214:;
    v8 = (int)((unsigned int)(unsigned char)v6 >> 1);
    v9 = (int)(v7 + 1);
L_8c12f21a:;
    if (((v5->f00 & (unsigned char)v8)) == 0) {
        v6 = (int)v8;
        v7 = (int)v9;
        goto L_8c12f214;
    }
    bytes_shl(v5, (int)(8 - v4), v9);
    a1->f00 -= v9;
    memcpy_8c12b77c((void *)((&frame)->f00), v5, (int)(8 - v4));
}
