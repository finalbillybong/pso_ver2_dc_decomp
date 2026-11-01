/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05d864
 * function: operation_8c05d864
 * language: c++
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 24 of 209 reference instruction lines
 * differing bytes: 22
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
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
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
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0xa];
    float ffc;
    float f100;
    char unknown104[0x2a8];
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
struct S_vv3 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_3acData {

} Arg0_3acData;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c05c1f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int active_unflagged_8c05b258(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c05d864(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x42c);
    v2 = (S_vv2 *)((char *)o + 0x430);
    v3 = (S_vv3 *)((char *)o + 0x434);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 7;
        o->v102();
        ((ObjectData *)o)->fdc->f44 |= 1;
        ((ObjectData *)o)->f3e0 &= -9;
        operation_8c059ef8((void *)o, 3);
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = 0;
        return;
    case 3:
        if (!(v1->f00 >= 0x14)) {
            return;
        }
        operation_8c059ea4((void *)o, 3);
        return;
    case 0:
        operation_8c01c5f0(o);
        operation_8c05c1f0(o);
        switch (v2->f00) {
        case 0:
            t1 = check_range_8c01cf68((void *)o, ((ObjectData *)o)->ffc - 1.0f - ((ObjectData *)o)->f100);
            if (t1 != 0) {
                v3->f00 += 1;
                if (3.0f > (float)v3->f00) {
                    goto L_8c05d9ea;
                }
                v2->f00 = 1;
                ((ObjectData *)o)->f100 = 0.0f;
                goto L_8c05d9ea;
            }
            t2 = check_range_8c01cf68((void *)o, 10.0f);
            if (t2 == 0) {
                goto L_8c05d9ea;
            }
            t3 = active_unflagged_8c05b258((void *)(((ObjectData *)o)->f3ac));
            if (t3 != 0) {
                t4 = ((ObjectData *)o)->f3ac->v22(o, 1.0f);
                if (t4 != 0) {
                    ((ObjectData *)o)->f3ac->v24(o, 1.0f);
                    ((ObjectData *)o)->f3ac->v27(o, 3.0f);
                }
            }
            play_se_8c05fbf8(0x30014, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
            break;
        case 1:
            v1->f00 += 1;
        }
L_8c05d9ea:;
        o->v108();
        o->v94();
        return;
    case 5:
        ((ObjectData *)o)->f3e0 &= -3;
        return;
    case 1:
    case 2:
        break;
    }
}
