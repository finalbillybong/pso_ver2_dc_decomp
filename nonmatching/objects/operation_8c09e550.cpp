/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09e550
 * function: operation_8c09e550
 * language: c++
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 58 of 163 reference instruction lines
 * differing bytes: 33
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
typedef struct Arg2_28 Arg2_28;
typedef struct Arg2_2c Arg2_2c;
typedef struct S_vv11 S_vv11;
class S_vv14;
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x8];
};
struct S_vv11 {
    char unknown0[0x2];
    short f02;
    short f04;
    char unknown6[0x6];
    short f0c;
    short f0e;
    char unknown10[0x34];
    S_vv14 *f44;
};
class S_vv14 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86(int);
};
typedef struct S_vv14Data {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x52];
    S_vv11 *f84;
} S_vv14Data;
struct Arg2 {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg2_28 *f28;
    Arg2_2c *f2c;
};
extern int g_8c46ec44;
extern int g_8c46ec54;
extern int g_8c46ed10;
extern "C" int operation_8c09dfec(S_vv11 *, void *);
extern "C" int operation_8c09e550(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    int v1;
    int v3;
    int v2;
    int v4;
    int v13;
    int v12;
    int v5;
    int v10;
    S_vv11 *v11;
    int v44;
    short v17;
    int v19;
    S_vv14 *v14;
    int t1;
    v13 = 0;
    v1 = (int)g_8c46ec44;
    if (!(v1 >= 0)) {
        return v13;
    }
    if (v1 > 0x11) {
        v10 = (int)0;
    } else {
        v2 = (int)0;
        v3 = (int)0;
        while (v1 > v3) {
            v4 = (int)(v2 + *(int *)((char *)0x8c46eca0 + (v3 << 2)));
            v2 = (int)v4;
            v3 = (int)(v3 + 1);
        }
        v5 = (int)(g_8c46ec54 + v2 * 0x48);
        v10 = (int)v5;
    }
    (&frame)->f00 = (int)(*(int *)((char *)0x8c46eca0 + (v1 << 2)));
    v11 = (S_vv11 *)v10;
    v12 = (int)0;
    while ((&frame)->f00 > v12) {
        if (((v11->f02 & 8)) == 0 && ((v11->f02 & 2)) == 0 && v11->f0c == (short)a0 && v11->f0e == (short)a1) {
            t1 = operation_8c09dfec(v11, (void *)(&(&frame)->f04));
            if (t1 >= 0) {
                v14 = (S_vv14 *)((int (*)(void *))((&frame)->f08))((void *)((int)v11 + 4));
            } else {
                v14 = (S_vv14 *)0;
            }
            if (v14 != 0) {
                v11->f44 = (S_vv14 *)v14;
                v11->f02 |= 2;
                ((S_vv14Data *)v14)->f2c = v11->f0c;
                v17 = (short)-1;
                ((S_vv14Data *)v14)->f2e = v11->f0e;
                ((S_vv14Data *)v14)->f30 = v11->f04;
                ((S_vv14Data *)v14)->f84 = (S_vv11 *)v11;
                v44 = (int)((S_vv14Data *)v14)->f30;
                if (v44 != v17) {
                    v14->v86(g_8c46ed10 + v44 * 0xc);
                }
                if (a2->f24 < a2->f20) {
                    *(S_vv14 **)((char *)((char *)a2->f28 + 0x0) + (a2->f24 << 2)) = (S_vv14 *)v14;
                    v19 = (int)a2->f24;
                    a2->f24 = v19 + 1;
                    *(int *)((char *)((char *)a2->f2c + 0x0) + (v19 << 2)) = (int)(((S_vv14Data *)v14)->f84);
                }
                v13 = (int)(v13 + 1);
            } else {
                v11->f44 = (S_vv14 *)0;
            }
        }
        v12 = (int)(v12 + 1);
        v11 = (S_vv11 *)((char *)v11 + 72);
    }
    return (int)(v13);
}
