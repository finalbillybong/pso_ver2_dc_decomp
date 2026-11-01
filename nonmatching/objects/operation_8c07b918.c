/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07b918
 * function: operation_8c07b918
 * language: c
 * reference size: 368 bytes
 * compiled size: 364 bytes (-1.1%)
 * differing lines: 120 of 162 reference instruction lines
 * differing bytes: 335
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c012a14 S_c8c012a14;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv51 S_vv51;
typedef struct S_vv52 S_vv52;
typedef struct S_vv53 S_vv53;
typedef struct S_vv54 S_vv54;
typedef struct S_vv56 S_vv56;
typedef struct S_vv92 S_vv92;
struct Object {
    char unknown0[0x398];
    int f398;
};
struct S_vv56 {
    int f00;
    char unknown4[0x1c];
    short f20;
    char unknown22[0xa];
    short f2c;
    char unknown2e[0x342];
    float f370;
    char unknown374[0xd0];
    short f444;
};
struct S_vv53 {
    float f00;
};
struct S_vv52 {
    short f00;
};
struct S_vv51 {
    short f00;
};
struct S_vv54 {
    int f00;
};
struct S_c8c012a14 {
    char unknown0[0x374];
    float f374;
};
struct S_vv92 {
    char unknown0[0x398];
    int f398;
};
extern int g_8c2fdb64;
extern int g_8c467874;
extern int g_8c467878;
extern S_c8c012a14 *operation_8c012a14(int);
void operation_8c07b918(Object *o)
{
    int v50;
    int v55;
    S_vv56 *v56;
    int v57;
    int v96;
    S_c8c012a14 *t1;
    S_vv53 *v53;
    S_vv52 *v52;
    int v58;
    int v76;
    int v77;
    int v75;
    int v93;
    S_vv51 *v51;
    S_vv92 *v92;
    int v95;
    S_vv54 *v54;
    int v94;
    int v97;
    int v98;
    int v78;
    S_c8c012a14 *t2;
    o->f398 = 0;
    v50 = (int)g_8c467874;
    v51 = (S_vv51 *)((char *)o + 0x20);
    v52 = (S_vv52 *)((char *)o + 0x2c);
    v53 = (S_vv53 *)((char *)o + 0x370);
    v54 = (S_vv54 *)&o->f398;
    v55 = (int)v50;
    while ((g_8c467874 + g_8c467878) > v55) {
        v56 = (S_vv56 *)*(S_g8c467240 **)((char *)0x8c467240 + (v55 << 2));
        if (v56 != 0) {
            v57 = (int)(v56->f00 == g_8c2fdb64);
            if (v57 != 0 && v53->f00 == v56->f370 && v52->f00 == v56->f2c) {
                v56->f444 = v51->f00;
                v58 = (int)v54->f00;
                v54->f00 = v58 + 1;
                *(short *)((char *)((char *)o + 0x3a0) + (v58 << 1)) = v56->f20;
                if (o->f398 >= 0x10) {
                    goto L_8c07b9b6;
                }
            }
        }
        v55 = (int)(v55 + 1);
    }
L_8c07b9b6:;
    v76 = (int)o->f398;
    v77 = (int)v76;
    v75 = (int)0xffff;
    while (0x10 > v77) {
        *(short *)((char *)((char *)o + 0x3a0) + (v77 << 1)) = v75;
        v77 = (int)(v77 + 1);
    }
    v92 = (S_vv92 *)o;
    v94 = (int)0x444;
    v93 = (int)0;
    goto L_8c07ba3e;
L_8c07b9d8:;
    v95 = (int)(v93 << 1);
    v51 = (S_vv51 *)v95;
    v52 = (S_vv52 *)(v93 + 1);
    goto L_8c07ba34;
L_8c07b9e2:;
    t1 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)v92 + v78) + 0x0) + ((int)(v51)))));
    v96 = (int)((int)(v52) << 1);
    v94 = (int)v96;
    t2 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)v92 + v78) + 0x0) + (v94))));
    if (t1 == 0) {
        goto L_8c07ba32;
    }
    if (t2 == 0) {
        goto L_8c07ba32;
    }
    if (!(t1->f374 > t2->f374)) {
        goto L_8c07ba32;
    }
    v97 = (int)*(unsigned short *)((char *)((char *)((int)v92 + v78) + 0x0) + ((int)(v51)));
    *(short *)((char *)((char *)((int)v92 + v78) + 0x0) + ((int)(v51))) = *(volatile unsigned short *)((char *)((char *)((int)v92 + v78) + 0x0) + (v94)) & 0xffff;
    *(short *)((char *)((char *)((int)v92 + v78) + 0x0) + (v94)) = v97;
L_8c07ba32:;
    v52 = (S_vv52 *)((char *)v52 + 1);
L_8c07ba34:;
    if (v92->f398 > (int)v52) {
        goto L_8c07b9e2;
    }
    v93 = (int)(v93 + 1);
L_8c07ba3e:;
    v98 = (int)-1;
    if ((v92->f398 + v98) > v93) {
        goto L_8c07b9d8;
    }
}
