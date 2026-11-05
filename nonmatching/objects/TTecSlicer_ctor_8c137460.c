/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c137460
 * function: TTecSlicer_ctor_8c137460
 * language: c
 * reference size: 704 bytes
 * compiled size: 656 bytes (-6.8%)
 * differing lines: 398 of 272 reference instruction lines
 * differing bytes: 663
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -48 bytes
 * class header: src/include/classes/TTecSlicer.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1581d8 S_c8c1581d8;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Arg1 Arg1;
typedef struct Arg1_s18 Arg1_s18;
typedef struct S_vv45 S_vv45;
typedef struct S_vv45_108 S_vv45_108;
typedef struct S_vv45_10c S_vv45_10c;
typedef struct S_vv46 S_vv46;
typedef struct S_vv49 S_vv49;
typedef struct S_vv51 S_vv51;
typedef struct S_vv57 S_vv57;
typedef struct S_vv63 S_vv63;
typedef struct S_vv66 S_vv66;
typedef struct S_vv68 S_vv68;
struct S_vv45 {
    int f00;
    short f04;
    char unknown6[0x12];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x4c];
    float f94;
    float f98;
    float f9c;
    char unknowna0[0x18];
    float fb8;
    float fbc;
    int fc0;
    unsigned short fc4;
    char fc6;
    char unknownc7[0x41];
    S_vv45_108 *f108;
    S_vv45_10c *f10c;
    short f110;
    char unknown112[0x2];
    int f114;
    char unknown118[0x4];
    float f11c;
    int f120;
};
struct Arg1 {
    short f00;
    char unknown2[0x2];
    int f04;
    int f08;
    int f0c;
    short f10;
    short f12;
    float f14;
    int f18;
};
struct S_vv49 {
    char unknown0[0x118];
    short f118;
};
struct S_vv51 {
    char unknown0[0x11a];
    short f11a;
};
struct Arg1_s18 {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
};
struct S_vv63 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv45_10c {
    char unknown0[0x64];
    int f64;
};
struct S_c8c1581d8 {
    float f00;
};
struct S_vv66 {
    Vector3 f00;
};
struct S_vv68 {
    Vector3 f00;
};
struct S_vv46 {
    char unknown0[0xc0];
    int fc0;
    char unknownc4[0x48];
    int f10c;
};
struct S_vv57 {
    int f00;
};
extern int g_8c312f50;
extern S_g8c44be9c *g_8c44be9c;
extern void TObjectShared_ctor_8c01d1ec(S_vv45 *, void *);
extern void call_8c137d08(void *);
extern int operation_8c192738(void);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern int find_record_8c0744dc(int);
extern void operation_8c137ae8(void *, int, int);
extern void call_8c137b4c(S_vv45 *, S_vv45_10c *, void *);
extern S_c8c1581d8 *operation_8c1581d8(void *, int);
extern void operation_8c137d18(void *, short, short);
S_vv45 *TTecSlicer_ctor_8c137460(int a0, Arg1 *a1, int a2, int a3, int a4)
{
    S_vv45 *v45;
    int v61;
    S_vv49 *v49;
    S_vv51 *v51;
    int v62;
    S_vv63 *v63;
    int v64;
    int v65;
    int v59;
    float v74;
    S_vv66 *v66;
    S_vv68 *v68;
    S_vv46 *v46;
    int v70;
    S_vv57 *v57;
    int v71;
    int v43;
    int v72;
    int v73;
    int v44;
    int t1;
    float t2;
    float t3;
    int t5;
    S_c8c1581d8 *t6;
    v45 = (S_vv45 *)a0;
    TObjectShared_ctor_8c01d1ec(v45, g_8c44be9c);
    v45->f18 = (void *)0x8c26d0a0;
    v45->fc0 = 0;
    call_8c137d08((void *)((int)v45 + 0xc8));
    call_8c137d08((void *)((int)v45 + 0xe8));
    v45->f00 = (int)(g_8c312f50);
    v45->f1e = 0x134;
    v61 = (int)(v45->f04 | 0x10);
    v45->f04 = v61;
    t1 = operation_8c192738();
    v45->f20 = t1;
    v45->f38 = (int)(a1->f08);
    v45->f28 = (int)(a1->f04);
    v45->f110 = a1->f00;
    v45->f114 = (int)(a1->f0c);
    v49 = (S_vv49 *)v45;
    v49->f118 = a1->f10;
    v51 = (S_vv51 *)v45;
    v62 = (int)a1->f12;
    v51->f11a = v62;
    v45->f11c = a1->f14;
    v63 = (S_vv63 *)((int)v45 + 0x124);
    v64 = (int)((Arg1_s18 *)((char *)a1 + 0x18))->f04;
    v63->f00 = (int)(a1->f18);
    v63->f04 = (int)(v64);
    v65 = (int)((Arg1_s18 *)((char *)a1 + 0x18))->f0c;
    v63->f08 = (int)(((Arg1_s18 *)((char *)a1 + 0x18))->f08);
    v63->f0c = (int)(v65);
    t2 = njSin_8c37eb0c(a4);
    v45->f94 = t2;
    v45->f98 = 0.0f;
    t3 = njCos_8c38c154(a4);
    v45->f9c = t3;
    if (njScalor_8c37e480((void *)((int)v45 + 0x94)) != 0.0f) {
        njUnitVector_8c37b630((void *)((int)v45 + 0x94));
        v59 = (int)a2;
    } else {
        v59 = (int)a2;
    }
    v45->f10c = (S_vv45_10c *)v59;
    t5 = find_record_8c0744dc((int)(v45->f114));
    v45->f108 = (S_vv45_108 *)t5;
    operation_8c137ae8((void *)v45, (int)(v45->f10c), (int)(v45->f10c->f64));
    call_8c137b4c(v45, (S_vv45_10c *)(v45->f10c), (void *)(v45->f108));
    t6 = operation_8c1581d8((void *)(v45->f108), 0);
    v74 = (float)t6->f00;
    v45->fbc = v74 * v74;
    v45->fb8 = 6.0f;
    v66 = (S_vv66 *)((int)v45 + 0xa0);
    *(Vector3 *)&v66->f00 = *(Vector3 *)&v45->f3c;
    v68 = (S_vv68 *)((int)v45 + 0xac);
    *(Vector3 *)&v68->f00 = *(Vector3 *)&v45->f3c;
    v46 = (S_vv46 *)v45;
    v70 = (int)((int)(v46->f10c + 0x754) + 0x30);
    v57 = (S_vv57 *)v70;
    if (v57 == 0) {
        goto L_8c13764a;
    }
    v71 = (int)v57->f00;
    if (v71 >= 0) {
        v43 = (int)v71;
        if (!(v71 > 0xa)) {
            goto L_8c137604;
        }
    } else {
    }
    v43 = (int)0;
L_8c137604:;
    if (v43 == 0) {
        v72 = (int)(v46->fc0 | 1);
        v46->fc0 = (int)(v72);
        goto L_8c13764a;
    }
    v59 = (int)0;
    goto L_8c137638;
L_8c13761c:;
    operation_8c137d18((void *)((int)v45 + 0xc8), *(short *)((char *)((char *)v57 + 0x4) + (v59 << 2)), *(short *)((char *)v57 + (v59 << 2) + 0x6));
    v59 = (int)(v59 + 1);
L_8c137638:;
    v73 = (int)v57->f00;
    if (v73 >= 0) {
        v44 = (int)v73;
        if (!(v73 > 0xa)) {
            goto L_8c137646;
        }
    }
    v44 = (int)0;
L_8c137646:;
    if (v59 != v44) {
        goto L_8c13761c;
    }
L_8c13764a:;
    v45->f120 = 0;
    v45->f10c = (S_vv45_10c *)0;
    v45->f108 = (S_vv45_108 *)0;
    v45->fc4 = 0xffff;
    v45->fc6 = 0;
    return v45;
}
