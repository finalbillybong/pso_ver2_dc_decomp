/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04bfc8
 * function: operation_8c04bfc8
 * language: c
 * reference size: 320 bytes
 * compiled size: 324 bytes (+1.2%)
 * differing lines: 140 of 144 reference instruction lines
 * differing bytes: 257
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv102 S_vv102;
typedef struct S_vv87 S_vv87;
typedef struct S_vv89 S_vv89;
typedef struct S_vv99 S_vv99;
typedef struct S_vv99_0 S_vv99_0;
typedef struct S_x64560 S_x64560;
struct S_vv99 {
    S_vv99_0 *f00;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_x64560 {
    short f00;
};
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct S_vv102 {
    unsigned short f00;
};
struct S_vv89 {
    unsigned short f00;
};
struct S_vv87 {
    short f00;
};
extern int call_8c04bf14(int);
extern int call_8c04bdf8(S_vv99 *, int, Frame *, void *, void *);
void operation_8c04bfc8(int a0, int a1)
{
    Frame frame;
    int v106;
    int v93;
    int v101;
    int v83;
    S_vv99 *v99;
    int v84;
    int v88;
    int v85;
    unsigned short v104;
    int v94;
    int v96;
    int v97;
    int v105;
    int v91;
    int v86;
    int v90;
    int v103;
    S_vv102 *v102;
    short v107;
    int v95;
    int v82;
    int v108;
    int v109;
    int v92;
    S_vv89 *v89;
    S_vv87 *v87;
    int t1;
    int t2;
    v90 = (int)a0;
    v93 = (int)a1;
    v101 = (int)v93;
    v99 = (S_vv99 *)v90;
    v83 = (int)(unsigned short)v101;
    if (v83 == 0x814a) {
        t1 = call_8c04bf14(v90);
        if (t1 == 0) {
            goto L_8c04c04e;
        }
        return;
    }
    if (v83 != 0x814b) {
        goto L_8c04c04e;
    }
    v84 = (int)v99->f04;
    if (v84 == 0) {
        v86 = (int)0;
        goto L_8c04c04a;
    }
    v88 = (int)v99->f00;
    v85 = (int)(v84 << 1);
    v104 = (unsigned short)*(unsigned short *)((char *)((char *)v88 - 0x2) + (v85));
    if ((unsigned int)(unsigned short)v104 >= (unsigned int)0x8340) {
        v94 = (int)(v104 - 0xa1);
    } else {
        v94 = (int)v104;
    }
    v96 = (int)(unsigned short)v94;
    v91 = (int)5;
    v97 = (int)0;
    goto L_8c04c044;
L_8c04c024:;
    if (v96 == (*(unsigned short *)((char *)0x8c2f1f48 + (v97 << 1)) & 0xffff)) {
        v105 = (int)(((S_x64560 *)(v88 + -2 + v85))->f00 + 2);
        ((S_x64560 *)(v88 + -2 + v85))->f00 = v105;
        v86 = (int)1;
        goto L_8c04c04a;
    }
    v97 = (int)(v97 + 1);
L_8c04c044:;
    if (v91 > v97) {
        goto L_8c04c024;
    }
    v86 = (int)0;
L_8c04c04a:;
    if (v86 != 0) {
        return;
    }
L_8c04c04e:;
    (&frame)->f08 = 0;
    (&frame)->f04 = 0;
    (&frame)->f00 = 0;
    v106 = (int)v99->f00;
    v102 = (S_vv102 *)v106;
    v103 = (int)0;
    goto L_8c04c088;
L_8c04c05a:;
    if (v103 == v99->f04) {
        v95 = (int)v101;
        goto L_8c04c068;
    }
    v107 = (short)v102->f00;
    v102 = (S_vv102 *)((char *)v102 + 2);
    v95 = (int)v107;
L_8c04c068:;
    v103 = (int)(v103 + 1);
    t2 = call_8c04bdf8(v99, v95, (Frame *)((&frame)), (void *)(&(&frame)->f04), (void *)(&(&frame)->f08));
    if (t2 == 0) {
        goto L_8c04c088;
    }
    v82 = (int)1;
    goto L_8c04c098;
L_8c04c088:;
    if (v102->f00 != 0) {
        goto L_8c04c05a;
    }
    if (v103 == v99->f04) {
        goto L_8c04c05a;
    }
    v82 = (int)0;
L_8c04c098:;
    if (v82 != 0) {
        return;
    }
    v108 = (int)v99->f00;
    v109 = (int)(v99->f04 << 1);
    v89 = (S_vv89 *)(v108 + v109);
    v92 = (int)0;
    goto L_8c04c0ac;
L_8c04c0a8:;
    v89 = (S_vv89 *)((char *)v89 + 2);
    v92 = (int)(v92 + 1);
L_8c04c0ac:;
    if (v89->f00 != 0) {
        goto L_8c04c0a8;
    }
    v87 = (S_vv87 *)((int)v89 + 2);
L_8c04c0b8:;
    v87->f00 = v89->f00;
    v87--;
    if (v92 != 0) {
        v89--;
        v92 -= 1;
        goto L_8c04c0b8;
    }
    v99->f10 += 1;
    *(short *)((char *)((char *)v99->f00 + 0x0) + (v99->f04 << 1)) = v101;
    v99->f04 += 1;
}
