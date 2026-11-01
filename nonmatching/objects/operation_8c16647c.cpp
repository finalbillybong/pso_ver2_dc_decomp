/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16647c
 * function: operation_8c16647c
 * language: c++
 * reference size: 472 bytes
 * compiled size: 472 bytes (+0.0%)
 * differing lines: 26 of 180 reference instruction lines
 * differing bytes: 55
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Object {
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
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
};
typedef struct ObjectData {
    char unknown0[0x60];
    int f60;
    char unknown64[0x344];
    int f3a8;
    char unknown3ac[0x18];
    int f3c4;
    char unknown3c8[0x4];
    int f3cc;
    float f3d0;
    float f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
extern "C" float operation_8c05b8c0(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c165a6c(void *);
extern "C" void operation_8c16647c(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v8;
    float t1;
    v1 = (S_vv1 *)((char *)o + 0x3e4);
    v2 = (S_vv2 *)((char *)o + 0x3e8);
    switch (a1) {
    case 4:
        o->v102();
        *(int *)((char *)o + 0x3a8) &= -6;
        ((ObjectData *)o)->f3a8 |= 2;
        ((ObjectData *)o)->f60 = 0x8000;
        ((ObjectData *)o)->f3cc = 0;
        v1->f00 = 0;
        t1 = operation_8c05b8c0((int)o);
        v2->f00 = (int)(t1 * 30.0f) + 0xb4;
        play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x324)), 0, 0);
        ((ObjectData *)o)->f3d4 = 0.25f;
        ((ObjectData *)o)->f3dc = 0x1e;
        ((ObjectData *)o)->f3e0 = 0;
        ((ObjectData *)o)->f3d0 = 0.0f;
        ((ObjectData *)o)->f3d8 = 0;
        break;
    case 3:
        if (((((ObjectData *)o)->f3a8 & 0x100)) != 0) {
            ((ObjectData *)o)->f3a8 &= -0x101;
            operation_8c059ea4((void *)o, 1);
        }
        if (v1->f00 == 2) {
            operation_8c059ea4((void *)o, 3);
        }
        break;
    case 5:
        break;
    case 0:
        switch (v1->f00) {
        case 0:
            *(int *)((char *)o + 0x3c4) += 0x280;
            v8 = (int)0x38e3;
            if (((ObjectData *)o)->f3c4 >= v8) {
                ((ObjectData *)o)->f3c4 = (int)v8;
                v1->f00 = 1;
            }
            break;
        case 1:
            v2->f00 -= 1;
            if (!(v2->f00 > 0)) {
                v1->f00 = 2;
            }
            if (0x5a > v2->f00) {
                ((ObjectData *)o)->f3dc = 3;
                ((ObjectData *)o)->f3d4 = 0.5f;
            } else if (0x96 > v2->f00) {
                ((ObjectData *)o)->f3dc = 5;
            } else if (0x12c > v2->f00) {
                ((ObjectData *)o)->f3dc = 0xa;
            } else {
                ((ObjectData *)o)->f3dc = 0x1e;
            }
            operation_8c165a6c((void *)o);
            break;
        }
        break;
    }
}
