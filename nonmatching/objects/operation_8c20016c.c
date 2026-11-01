/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20016c
 * function: operation_8c20016c
 * language: c
 * reference size: 340 bytes
 * compiled size: 304 bytes (-10.6%)
 * differing lines: 170 of 151 reference instruction lines
 * differing bytes: 322
 * provenance: generator draft (experimental generator, mode uc)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -36 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv55 S_vv55;
typedef struct S_vv59 S_vv59;
typedef struct S_vv63 S_vv63;
typedef struct S_x11184 S_x11184;
typedef struct S_x24112 S_x24112;
struct S_x11184 {
    char f00;
};
struct S_vv63 {
    char f00;
};
struct S_vv59 {
    char f00;
};
struct S_x24112 {
    char f00;
};
struct S_vv55 {
    S_vv63 *f00;
};
extern int call_8c2002c0(int);
int operation_8c20016c(int a0, int a1, int a2)
{
    int v51;
    int v53;
    S_vv63 *v63;
    int v54;
    int v52;
    int v57;
    int v46;
    int v47;
    S_vv59 *v59;
    int v48;
    int v49;
    S_vv55 *v55;
    int t1;
    int t2;
    v51 = (int)a0;
    v53 = (int)a1;
    v55 = (S_vv55 *)a2;
    t1 = call_8c2002c0(v51);
    if (((S_x11184 *)(v51 + (short)t1))->f00 == 0) {
        return 0;
    } else {
        v52 = (int)/* ? clobbered */ 0;
        v54 = (int)/* ? clobbered */ 0;
        v57 = (int)/* ? clobbered */ 0;
        v59 = (S_vv59 *)v53;
        v63 = (S_vv63 *)(v51 + (short)t1);
    }
    if ((unsigned char)v63->f00 != 0x22) {
        goto L_8c20028a;
    }
    v54 = (int)0;
    v57 = (int)0;
    v63 = (S_vv63 *)((char *)v63 + 1);
    goto L_8c200264;
L_8c2001a6:;
    if (v54 != 0) {
        if (!(v52 >= 0x30)) {
            goto L_8c2001ca;
        }
        if (v52 > 0x39) {
            goto L_8c2001ca;
        }
        v54 = (int)(v54 - 1);
        if (v54 == 0) {
            goto L_8c200260;
        }
        goto L_8c200264;
L_8c2001ca:;
        if (!(v52 >= 0x61)) {
            goto L_8c2001e2;
        }
        if (v52 > 0x66) {
            goto L_8c2001e2;
        }
        v54 = (int)(v54 - 1);
        if (v54 == 0) {
            goto L_8c200260;
        }
        goto L_8c200264;
L_8c2001e2:;
        v54 = (int)0;
        goto L_8c200264;
    }
    if (v57 != 0) {
        v46 = (int)v52;
        if (v46 != 0x72) {
            goto L_8c2001f4;
        }
        v52 = (int)0xd;
        goto L_8c200210;
L_8c2001f4:;
        if (v46 != 0x6e) {
            goto L_8c2001fe;
        }
        v52 = (int)0xa;
        goto L_8c200210;
L_8c2001fe:;
        v47 = (int)v52;
        if (v47 != 0x5c) {
            goto L_8c20020a;
        }
        v52 = (int)0x5c;
        goto L_8c200210;
L_8c20020a:;
        if (v47 != 0x22) {
            goto L_8c200216;
        }
        v52 = (int)0x22;
L_8c200210:;
        v59->f00 = v52;
        v59 = (S_vv59 *)((char *)v59 + 1);
        goto L_8c200222;
L_8c200216:;
        if (v52 != 0x78) {
            goto L_8c200222;
        }
        v52 = (int)2;
        v54 = (int)2;
L_8c200222:;
        v57 = (int)0;
        goto L_8c200264;
    }
    v48 = (int)v52;
    if (v48 == 0x5c) {
        v52 = (int)1;
        v57 = (int)1;
        goto L_8c200264;
    }
    if (v48 != 0x22) {
        goto L_8c200260;
    }
    v63 = (S_vv63 *)((char *)v63 + 1);
    goto L_8c200298;
L_8c200260:;
    v59->f00 = v52;
    v59 = (S_vv59 *)((char *)v59 + 1);
L_8c200264:;
    v52 = (int)((unsigned char)v63->f00);
    if (v52 == 0) {
        v63 = (S_vv63 *)((char *)v63 + 1);
        goto L_8c200298;
    }
    v63 = (S_vv63 *)((char *)v63 + 1);
    if (v52 != 0xa) {
        goto L_8c2001a6;
    }
    goto L_8c200298;
L_8c200276:;
    if (v49 == 0x20) {
        goto L_8c200298;
    }
    if (v52 == 0x2c) {
        goto L_8c200298;
    }
    if (v52 == 0x22) {
        goto L_8c200298;
    }
    v59->f00 = v52;
    v59 = (S_vv59 *)((char *)v59 + 1);
L_8c20028a:;
    v52 = (int)((unsigned char)v63->f00);
    if (v52 == 0) {
        v63 = (S_vv63 *)((char *)v63 + 1);
        goto L_8c200298;
    }
    v49 = (int)v52;
    v63 = (S_vv63 *)((char *)v63 + 1);
    if (v49 != 0xa) {
        goto L_8c200276;
    }
L_8c200298:;
    v59->f00 = 0;
    t2 = call_8c2002c0((int)((int)v63 + -1));
    if ((unsigned char)((S_x24112 *)((int)v63 + -1 + (short)t2))->f00 == 0x2c) {
        v63 = (S_vv63 *)((char *)((int)v63 + -1 + (short)t2) + 0x1);
    } else {
        v63 = (S_vv63 *)((int)v63 + -1 + (short)t2);
    }
    v55->f00 = v63;
    return 1;
}
