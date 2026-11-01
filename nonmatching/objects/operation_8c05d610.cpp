/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05d610
 * function: operation_8c05d610
 * language: c++
 * reference size: 596 bytes
 * compiled size: 596 bytes (+0.0%)
 * differing lines: 2 of 223 reference instruction lines
 * differing bytes: 4
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
typedef struct Frame Frame;
typedef struct S_g8c4679a0 S_g8c4679a0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv19 S_vv19;
typedef struct S_vv1_0 S_vv1_0;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2e4];
    int f3e0;
    char unknown3e4[0x14];
    Vector3 f3f8;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4679a0 {
    char unknown0[0x18];
    int f18;
};
struct S_vv19 {
    char unknown0[0x4];
    short f04;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" void call_8c0a7608(int, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int operation_8c05bbf8(void);
extern "C" int operation_8c05bc18(int);
extern "C" void TTecMegid_create_8c0b55a0(void *, void *, void *, void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEneRe2Flower_Bomb_ctor_8c05e7c0(int, Object *, Frame *, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c05d610(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v10;
    S_vv19 *v19;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (S_vv1 *)((char *)o + 0x444);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        o->v102();
        ((ObjectData *)o)->fdc->f44 |= 1;
        ((ObjectData *)o)->f3e0 &= -9;
        operation_8c059ef8((void *)o, 3);
        v1->f00 = (S_vv1_0 *)0;
        return;
    case 3:
        if (((((ObjectData *)o)->f3e0 & 2)) != 0) {
            operation_8c059ea4((void *)o, 7);
            v2 = (int)1;
        } else {
            v2 = (int)0;
        }
        if (v2 != 0) {
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4((void *)o, 3);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 == 0) {
            t1 = create_effect_769c((void *)(((char *)o + 0x404)), 0xd1);
            v1->f00 = (S_vv1_0 *)(int)t1;
            if (v1->f00 != 0) {
                set_effect_bit0((void *)(v1->f00));
            }
        }
        v10 = (int)v1->f00;
        if (v10 != 0) {
            if (15.0f > ((ObjectData *)o)->ff8) {
                call_8c0a7608(v10, (void *)(((char *)o + 0x404)));
            } else {
                set_effect_bit0((void *)v10);
            }
        }
        t2 = check_range_8c01cf68((void *)o, 12.0f);
        if (t2 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3f8;
            (&frame)->f00.f04 = ((ObjectData *)o)->f40 + 12.0f;
            t3 = operation_8c05bbf8();
            if (t3 != 0) {
                t4 = operation_8c05bc18((int)((*(S_g8c4679a0 **)0x8c4679a0)->f18));
                TTecMegid_create_8c0b55a0((void *)o, (void *)(&frame), (void *)(((ObjectData *)o)->f64), (void *)t4);
            } else {
                t5 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x138);
                if (t5 != 0) {
                    TObjEneRe2Flower_Bomb_ctor_8c05e7c0(t5, o, (Frame *)((&frame)), (void *)(((ObjectData *)o)->f64));
                }
            }
            play_se_8c05fbf8(0x3000e, (void *)(((char *)o + 0x3f8)), 0, 0);
        }
        o->v108();
        o->v94();
        return;
    case 5:
        if (v1->f00 != 0) {
            v19 = (S_vv19 *)v1->f00;
            v19->f04 |= 1;
            v1->f00 = (S_vv1_0 *)0;
        }
        return;
    case 1:
    case 2:
        break;
    }
}
