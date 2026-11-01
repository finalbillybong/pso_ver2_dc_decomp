/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05da80
 * function: operation_8c05da80
 * language: c++
 * reference size: 436 bytes
 * compiled size: 436 bytes (+0.0%)
 * differing lines: 14 of 172 reference instruction lines
 * differing bytes: 21
 * provenance: generator draft (mode switch2)
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_3ac_dc Arg0_3ac_dc;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_3ac;
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
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0x30];
    int f3e0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
class Arg0_3ac {
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
    virtual void v25(Object *, void *, Block8);
};
typedef struct Arg0_3acData {
    char unknown0[0xdc];
    Arg0_3ac_dc *fdc;
} Arg0_3acData;
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int operation_8c05d048(int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEneRe2Flower_EffCurse3_ctor_8c05f4c4(void *, void *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void operation_8c05da80(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x42c);
    v2 = (S_vv2 *)((char *)o + 0x430);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        o->v97();
        ((ObjectData *)o)->fdc->f44 = (unsigned int)((ObjectData *)o)->fdc->f44 >> 1 << 1;
        ((ObjectData *)o)->f3e0 &= -9;
        v1->f00 = 0;
        v2->f00 = 0;
        return;
    case 3:
        if (!(v1->f00 >= 0x1e)) {
            return;
        }
        operation_8c059ea4((void *)o, 3);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 == 6) {
            t1 = operation_8c05d048((int)o);
            if (t1 == 0) {
                goto L_8c05db94;
            }
            t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
            if (t2 != 0) {
                TObjEneRe2Flower_EffCurse3_ctor_8c05f4c4((void *)t2, (void *)o, (void *)t1);
            }
            ((ObjectData *)o)->f3ac = (Arg0_3ac *)(int)t1;
            v2->f00 = 1;
            play_se_8c05fbf8(0x3000f, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
        } else {
            if (v1->f00 == 0x19) {
                if (v2->f00 != 0) {
                    t3 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
                    if (t3 != 0) {
                        ((ObjectData *)o)->f3ac->v25(o, ((Arg0_3acData *)((ObjectData *)o)->f3ac)->fdc, *(Block8 *)&*(Block8 *)0x8c284be0);
                    }
                }
            }
        }
L_8c05db94:;
        v1->f00 += 1;
        o->v108();
        o->v94();
        return;
    case 5:
        ((ObjectData *)o)->f34 &= -0x4000001;
        ((ObjectData *)o)->f3e0 &= -3;
    }
}
