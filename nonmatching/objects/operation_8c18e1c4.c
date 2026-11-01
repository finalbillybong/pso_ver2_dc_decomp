/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e1c4
 * function: operation_8c18e1c4
 * language: c
 * reference size: 340 bytes
 * compiled size: 308 bytes (-9.4%)
 * differing lines: 143 of 169 reference instruction lines
 * differing bytes: 323
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -32 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
typedef struct S_vv83 S_vv83;
typedef struct S_vv84 S_vv84;
typedef struct S_vv85 S_vv85;
typedef struct S_vv89 S_vv89;
typedef struct S_vv90 S_vv90;
typedef struct S_vv91 S_vv91;
struct Arg2 {
    int f00;
};
struct S_vv91 {
    char f00;
};
struct S_vv83 {
    char f00;
    char f01;
};
struct S_vv84 {
    char f00;
};
struct S_vv89 {
    char f00;
};
struct S_vv90 {
    char f00;
    char f01;
};
struct S_vv85 {
    char f00;
};
int operation_8c18e1c4(int a0, int a1, Arg2 *a2)
{
    S_vv91 *v91;
    S_vv83 *v83;
    S_vv84 *v84;
    S_vv89 *v89;
    int v96;
    int v97;
    S_vv90 *v90;
    int v98;
    S_vv85 *v85;
    int v86;
    int v92;
    int v87;
    char v99;
    int v88;
    char v93;
    v89 = (S_vv89 *)a0;
    v91 = (S_vv91 *)a1;
    a2->f00 = 0;
    if (v91 == 0) {
        goto L_8c18e310;
    } else {
        v83 = (S_vv83 *)v91;
    }
    if (v91->f00 == 0x50) {
        v84 = (S_vv84 *)((int)v83 + 1);
        if (v83->f01 != 0x43) {
            goto L_8c18e1ea;
        }
        v84 = (S_vv84 *)((int)v83 + 2);
L_8c18e1ea:;
        if (v84->f00 != 0x56) {
            goto L_8c18e1f4;
        }
        v84 = (S_vv84 *)((char *)v84 + 1);
L_8c18e1f4:;
        if (v84->f00 != 0x76) {
            goto L_8c18e20c;
        }
        v96 = (int)v89->f00;
        if (v96 == 0x50) {
            goto L_8c18e208;
        }
        if (v96 != 0x2a) {
            goto L_8c18e20c;
        }
L_8c18e208:;
        goto L_8c18e310;
L_8c18e20c:;
        v83 = (S_vv83 *)v91;
    }
    v97 = (int)v89->f00;
    if (v97 == 0x21) {
        goto L_8c18e21e;
    }
    if (v97 == 0x2a) {
        goto L_8c18e21e;
    }
    goto L_8c18e2da;
L_8c18e21e:;
    if (v89->f00 == v83->f00) {
        v85 = (S_vv85 *)((int)v83 + 1);
        v90 = (S_vv90 *)((int)v89 + 1);
        goto L_8c18e232;
    }
    goto L_8c18e310;
L_8c18e232:;
    v98 = (int)v90->f00;
    if (v98 != v85->f00) {
        goto L_8c18e270;
    }
    v90 = (S_vv90 *)((char *)v90 + 1);
    v85 = (S_vv85 *)((char *)v85 + 1);
    if (v98 != 0x21) {
        goto L_8c18e232;
    }
    v86 = (int)0;
    v92 = (int)-0x30;
    goto L_8c18e262;
L_8c18e24e:;
    v86 = (int)(((int)(&*(int *)((char *)((char *)v86 + 0x0) + (v86 << 2))) << 1) + v90->f00 + v92);
    v90 = (S_vv90 *)((char *)v90 + 1);
L_8c18e262:;
    if (v90->f00 != 0x21) {
        goto L_8c18e24e;
    }
    a2->f00 = (int)(v86);
    goto L_8c18e310;
L_8c18e270:;
    if (v90->f00 != 0x21) {
        v90 = (S_vv90 *)((char *)v90 + 1);
        goto L_8c18e270;
    }
    v90 = (S_vv90 *)((char *)v90 + 1);
L_8c18e27a:;
    if (v90->f00 != 0x21) {
        v90 = (S_vv90 *)((char *)v90 + 1);
        goto L_8c18e27a;
    }
    if (v90->f01 == 0) {
        goto L_8c18e310;
    } else {
        v90 = (S_vv90 *)((char *)v90 + 1);
    }
    v85 = (S_vv85 *)((int)v91 + 1);
    goto L_8c18e232;
L_8c18e296:;
    v83 = (S_vv83 *)((char *)v83 + 1);
    v89 = (S_vv89 *)((char *)v89 + 1);
    if (v83->f00 == 0x43) {
        if (v89->f00 != 0x43) {
            goto L_8c18e2ac;
        }
        v89 = (S_vv89 *)((char *)v89 + 1);
L_8c18e2ac:;
        v83 = (S_vv83 *)((char *)v83 + 1);
    }
    v87 = (int)v89->f00;
    if (v87 == 0x43) {
        goto L_8c18e310;
    }
    if (v83->f00 == 0x56) {
        if (v87 != 0x56) {
            goto L_8c18e2cc;
        }
        v89 = (S_vv89 *)((char *)v89 + 1);
L_8c18e2cc:;
        v83 = (S_vv83 *)((char *)v83 + 1);
    }
    if (v89->f00 != 0x56) {
        goto L_8c18e2da;
    }
    goto L_8c18e310;
L_8c18e2da:;
    v99 = (char)v89->f00;
    v88 = (int)v99;
    if ((char)v88 != 0x50) {
        if ((char)v88 != 0x52) {
            goto L_8c18e302;
        }
    }
    if ((char)v88 == v83->f00) {
        goto L_8c18e296;
    }
    goto L_8c18e302;
L_8c18e2f4:;
    if (v93 == 0) {
        goto L_8c18e310;
    }
    v89 = (S_vv89 *)((char *)v89 + 1);
    v83 = (S_vv83 *)((char *)v83 + 1);
L_8c18e302:;
    v93 = (char)v89->f00;
    if (v93 == v83->f00) {
        goto L_8c18e2f4;
    }
L_8c18e310:;
    return 0;
}
