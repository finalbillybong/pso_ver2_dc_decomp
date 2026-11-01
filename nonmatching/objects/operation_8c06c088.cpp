/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c06c088
 * function: operation_8c06c088
 * language: c++
 * reference size: 500 bytes
 * compiled size: 500 bytes (+0.0%)
 * differing lines: 50 of 165 reference instruction lines
 * differing bytes: 65
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
typedef struct Arg0_740 Arg0_740;
typedef struct S_vv1 S_vv1;
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
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x2ea];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0xac];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x84];
    Arg0_740 *f740;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct Arg0_740 {
    char unknown0[0x4];
    int f04;
};
extern "C" char g_8c2fd350[];
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void call_8c06741c(Object *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect(void *, int, int);
extern "C" void operation_8c06c088(Object *o, int a1)
{
    S_vv1 *v1;
    int t1;
    int t2;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x10;
        o->v102();
        ((ObjectData *)o)->f404 = 1;
        *(int *)((char *)o + 0x3dc) |= 0x100;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40 + 180.0f;
        ((ObjectData *)o)->f5fc = 180.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x281;
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c2fd350 + 0x34b));
        o->v97();
        v1->f00 = 0;
        return;
    case 9:
        if (!(v1->f00 >= 0x3c)) {
            return;
        }
        call_8c06741c(o);
        return;
    case 7:
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        operation_8c01c5f0(o);
        v1->f00 += 1;
        t1 = check_range_8c01cf68((void *)o, 5.0f);
        if (t1 != 0) {
            play_se_8c05fbf8(0x30004, (void *)(((char *)o + 0x658)), 0, 0);
        }
        t2 = check_range_8c01cf68((void *)o, 14.0f);
        if (t2 == 0) {
            return;
        }
        create_effect((void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f740->f04), 0x40);
        return;
    case 5:
        o->v98();
        return;
    case 1:
    case 2:
    case 3:
    case 8:
    case 10:
    case 11:
        break;
    }
}
