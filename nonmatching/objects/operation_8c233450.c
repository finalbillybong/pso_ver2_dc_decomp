/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c233450
 * function: operation_8c233450
 * language: c
 * reference size: 142 bytes
 * compiled size: 168 bytes (+18.3%)
 * differing lines: 92 of 69 reference instruction lines
 * differing bytes: 153
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +26 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_x5296 S_x5296;
struct Arg1 {
    int f00;
};
struct S_x5296 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c338cb4;
extern int call_8c23332c(int);
int operation_8c233450(int a0, Arg1 *a1)
{
    int v3;
    int v6;
    int v4;
    int v7;
    int v8;
    int v10;
    int v12;
    int t1;
    {
        Arg1 *base = a1;
        if (a0 != 1 && a0 != 2) {
        } else {
            if (base->f00 >= 0 && !(base->f00 > 5)) {
                goto L_8c233476;
            }
        }
        return -2;
L_8c233476:;
        t1 = call_8c23332c(a0);
        if (t1 != 0) {
            base->f00 = 1;
        } else {
            if (base->f00 == 0) {
                if (a0 == 1) {
                    v3 = (int)g_8c338cb4;
                    v4 = (int)0x2d0;
                    v6 = (int)v3;
                } else {
                    v4 = (int)0x528;
                    v6 = (int)g_8c338cb4;
                }
                if (((1 & ((S_x5296 *)(v6 + v4))->f04)) != 0) {
                    v12 = (int)2;
                } else {
                    if (((2 & ((S_x5296 *)(v6 + v4))->f04)) != 0) {
                        v10 = (int)3;
                    } else {
                        if (((4 & ((S_x5296 *)(v6 + v4))->f04)) != 0) {
                            v8 = (int)4;
                        } else {
                            if (((8 & ((S_x5296 *)(v6 + v4))->f04)) != 0) {
                                v7 = (int)5;
                            } else {
                                v7 = (int)1;
                            }
                            v8 = (int)v7;
                        }
                        v10 = (int)v8;
                    }
                    v12 = (int)v10;
                }
                base->f00 = (int)(v12);
            }
        }
    }
    return 0;
}
