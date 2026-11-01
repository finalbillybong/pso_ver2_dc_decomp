/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c390
 * function: operation_8c12c390
 * language: c
 * reference size: 172 bytes
 * compiled size: 160 bytes (-7.0%)
 * differing lines: 112 of 74 reference instruction lines
 * differing bytes: 161
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv5 S_vv5;
struct Frame {
    int f00;
    int f04;
    char unknown8[0xc];
};
struct S_vv5 {
    unsigned char f00;
};
extern int call_8c12ba9c(int, void *);
extern void memcpy_8c12b77c(int, int, int);
extern void bytes_shl(int, int, int);
extern void call_8c12c12c(int, int, int);
extern void bytes_shl1(int, int);
void operation_8c12c390(int a0, int a1, int a2)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    int v4;
    S_vv5 *v5;
    int v7;
    int v8;
    int v3;
    (&frame)->f00 = a0;
    t1 = call_8c12ba9c(a0, (void *)(&(&frame)->f04));
    v1 = (int)(t1 + 1);
    v2 = (int)(v1 << 1);
    v3 = (int)(/* ? clobbered */ 0 - v2 + 8);
    v4 = (int)(/* ? clobbered */ 0 - v2 + 8);
    memcpy_8c12b77c(v4, v3, v2);
    bytes_shl(v4, v2, 2);
    call_8c12c12c(v3, v4, v2);
    bytes_shl1(v3, v2);
    if (a1 != 0) {
        v5 = (S_vv5 *)((&frame)->f00 + 7);
        v7 = (int)0;
        v8 = (int)7;
        do {
            v5->f00 = v7 + (v5->f00 + a1);
            if (!((int)(unsigned short)v5->f00 >= 0x100)) {
                return;
            }
            v8 -= 1;
            v5--;
            a1 = (int)0;
            v7 = (int)1;
        } while ((int)(unsigned short)v8 >= 0);
    }
}
