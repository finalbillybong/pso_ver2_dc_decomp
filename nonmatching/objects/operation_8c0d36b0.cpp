/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d36b0
 * function: operation_8c0d36b0
 * language: c++
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 4 of 183 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ea];
    int f3dc;
    char unknown3e0[0x4];
    int f3e4;
    int f3e8;
    char unknown3ec[0x4];
    int f3f0;
    char unknown3f4[0x8c];
    int f480;
    int f484;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void emit_control_60320(int, int, int);
extern "C" void operation_8c0d36b0(Object *o, int a1)
{
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv1 *v1;
    int v4;
    int t1;
    v1 = (S_vv1 *)((char *)o + 0x488);
    v2 = (S_vv2 *)((char *)o + 0x48c);
    v3 = (S_vv3 *)((char *)o + 0x490);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 5;
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x3dc);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f3dc |= 4;
        operation_8c059ef8((void *)o, 4);
        v1->f00 = 0;
        v2->f00 = ((ObjectData *)o)->f3f0 * 0x96;
        ((ObjectData *)o)->f3e8 = 0;
        v3->f00 = 0x300;
        return;
    case 3:
        if (!(v1->f00 >= v2->f00)) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        operation_8c01c5f0(o);
        v1->f00 += 1;
        if (v3->f00 > 0) {
            v3->f00 -= 0xb;
            if (v3->f00 > 0x100) {
                v4 = (int)0x100;
            } else {
                v4 = (int)v3->f00;
            }
            if (((ObjectData *)o)->f484 > 0) {
                ((ObjectData *)o)->f64 += v4;
            } else {
                ((ObjectData *)o)->f64 -= v4;
            }
        }
        if (0x10 > (v1->f00 & 0x1f)) {
            ((ObjectData *)o)->f3e4 = -0xcfcfd0;
        } else {
            ((ObjectData *)o)->f3e4 = -1;
        }
        o->v108();
        o->v95();
        t1 = call_8c05fd7c(0x3001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
        emit_control_60320(t1, 0x400, 0);
        return;
    case 5:
        ((ObjectData *)o)->f3dc &= -5;
        *(int *)((char *)o + 0x3f0) += 1;
        ((ObjectData *)o)->f3e4 = -1;
        ((ObjectData *)o)->f3e8 = 0xc;
        ((ObjectData *)o)->f480 = ((ObjectData *)o)->f3f0 << 0xf;
        ((ObjectData *)o)->f484 = 0;
    }
}
