/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e044
 * function: operation_8c18e044
 * language: c
 * reference size: 128 bytes
 * compiled size: 122 bytes (-4.7%)
 * differing lines: 72 of 63 reference instruction lines
 * differing bytes: 106
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -6 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
typedef struct StkArg {
    int f00;
} StkArg;
void operation_8c18e044(int a0, int a1, int a2, int a3, StkArg sp)
{
    Frame frame;
    int v2;
    int v11;
    int v26;
    unsigned int v24;
    int v29;
    int v69;
    unsigned int v1;
    int v25;
    v1 = (unsigned int)sp.f00;
    (&frame)->f00 = a0;
    (&frame)->f04 = a3;
    (&frame)->f08 = (int)(v1);
    (&frame)->f0c = a2;
    (&frame)->f10 = 0;
    v11 = (int)a0;
    goto L_8c18e078;
    v2 = (int)a0;
L_8c18e06a:;
    ((void (*)(int, int))(a1))(v2, 1);
    (&frame)->f10 += 1;
    v11 = (int)(v2 + a3);
L_8c18e078:;
    v24 = (unsigned int)(&frame)->f10;
    v2 = (int)v11;
    if (v1 > v24) {
        goto L_8c18e06a;
    }
    v25 = (int)v1;
    v29 = (int)v11;
    if ((unsigned int)(&frame)->f08 > v24) {
        v25 = (int)v1;
        v29 = (int)v11;
        if ((&frame)->f0c != 0) {
            v25 = (int)-1;
            v29 = (int)((&frame)->f04 * v24 + (&frame)->f00);
            goto L_8c18e0aa;
            v26 = (int)((&frame)->f04 * v24 + (&frame)->f00);
L_8c18e098:;
            v69 = (int)(&frame)->f04;
            ((void (*)(int, int))((&frame)->f0c))((int)(v26 - v69), v25);
            (&frame)->f10 -= 1;
            v29 = (int)(v26 - v69);
L_8c18e0aa:;
            v26 = (int)v29;
            if ((&frame)->f10 != 0) {
                goto L_8c18e098;
            }
        }
    }
}
