/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b77c
 * function: memcpy_8c12b77c
 * language: c
 * reference size: 192 bytes
 * compiled size: 204 bytes (+6.2%)
 * differing lines: 136 of 95 reference instruction lines
 * differing bytes: 199
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * runtime: DIVERGED on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (called 166 times where the original is called 1623 times); known
 *   incorrect
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv12 S_vv12;
typedef struct S_vv14 S_vv14;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv9 S_vv9;
typedef struct S_x54512 S_x54512;
struct S_vv3 {
    int f00;
};
struct Arg1 {
    int f00;
};
struct S_vv6 {
    short f00;
};
struct S_vv9 {
    char f00;
};
struct S_vv10 {
    int f00;
};
struct S_vv12 {
    short f00;
};
struct S_vv14 {
    char f00;
};
int memcpy_8c12b77c(unsigned int a0, Arg1 *a1, unsigned int a2)
{
    S_vv3 *v3;
    int v2;
    S_vv6 *v6;
    int v5;
    S_vv9 *v9;
    S_vv10 *v10;
    int v11;
    S_vv12 *v12;
    int v13;
    S_vv14 *v14;
    int v15;
    if (a0 != (int)(a1) && a2 > (unsigned int)0) {
        if (!(a0 >= (int)a1)) {
            if (((1 & (a0 | (int)(a1) | a2))) == 0) {
                if ((((a0 | (int)(a1) | a2) & 3)) == 0) {
                    v2 = (int)((unsigned int)a2 >> 2);
                    v3 = (S_vv3 *)a0;
                    do {
                        v2 -= 1;
                        v3->f00 = (int)(a1->f00);
                        v3 = (S_vv3 *)((char *)v3 + 4);
                    } while (v2 != 0);
                    goto L_8c12b830;
                }
                v5 = (int)((unsigned int)a2 >> 1);
                v6 = (S_vv6 *)a0;
                do {
                    v5 -= 1;
                    v6->f00 = *(short *)((char *)a1 + 0x0);
                    v6 = (S_vv6 *)((char *)v6 + 2);
                } while (v5 != 0);
                goto L_8c12b830;
            }
            v9 = (S_vv9 *)a0;
            do {
                a2 -= 1;
                v9->f00 = *(char *)((char *)a1 + 0x0);
                v9 = (S_vv9 *)((char *)v9 + 1);
            } while (a2 != 0);
        } else {
            if (((1 & (a0 | (int)(a1) | a2))) == 0) {
                if ((((a0 | (int)(a1) | a2) & 3)) == 0) {
                    v10 = (S_vv10 *)((int)a1 + a2);
                    v11 = (int)((unsigned int)a2 >> 2);
                    do {
                        v10--;
                        *(int *)((char *)((S_x54512 *)(a0 + a2)) - 0x4) = (int)(v10->f00);
                        v11 = (int)(v11 - 1);
                    } while (v11 != 0);
                    goto L_8c12b830;
                }
                v12 = (S_vv12 *)((int)a1 + a2);
                v13 = (int)((unsigned int)a2 >> 1);
                do {
                    v12--;
                    *(short *)((char *)((S_x54512 *)(a0 + a2)) - 0x2) = v12->f00;
                    v13 = (int)(v13 - 1);
                } while (v13 != 0);
            } else {
                v14 = (S_vv14 *)((int)a1 + a2);
                v15 = (int)a2;
                do {
                    v14--;
                    *(char *)((char *)((S_x54512 *)(a0 + a2)) - 0x1) = v14->f00;
                    v15 = (int)(v15 - 1);
                } while (v15 != 0);
            }
        }
    }
L_8c12b830:;
    return (int)(a0);
}
