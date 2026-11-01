/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c058390
 * function: operation_8c058390
 * language: c++
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 8 of 234 reference instruction lines
 * differing bytes: 11
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
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
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29a];
    Arg0_38c *f38c;
    char unknown390[0xe8];
    float f478;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv2 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEneBm3FlyNest_CarryFly_ctor_8c057674(int, Object *, int, void *, void *, S_vv2 *, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c058390(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    int v6;
    int v5;
    int t1;
    float t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x490);
    v2 = (S_vv2 *)((char *)o + 0x494);
    v3 = (S_vv3 *)((char *)o + 0x498);
    v4 = (S_vv4 *)((char *)o + 0x49c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 8;
        o->v101();
        operation_8c059ef8((void *)o, 2);
        ((ObjectData *)o)->f478 = 100.0f;
        v1->f00 = 0;
        v3->f00 = 0;
        v4->f00 = (S_vv4_0 *)0;
        return;
    case 3:
        if (v3->f00 != 2) {
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4((void *)o, 1);
        return;
    case 0:
        operation_8c01c5f0(o);
        switch (v3->f00) {
        case 0:
            v1->f00 += 1;
            if (v1->f00 == 1) {
                v2->f00 = 0;
                v6 = (int)0;
                v5 = (int)0x3fc;
                while (6 > v6) {
                    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x6c);
                    if (t1 != 0) {
                        TObjEneBm3FlyNest_CarryFly_ctor_8c057674(t1, o, (int)((int)o + v6 * 0xc + v5), (void *)(((char *)o + 0x3f0)), (void *)(((char *)o + 0x3c)), v2, (int)(v6 + 1));
                    }
                    v6 = (int)(v6 + 1);
                }
            }
            t2 = njSin_8c37eb0c((void *)(v4->f00));
            ((ObjectData *)o)->f478 -= (t2 + 1.0f) * 0.3f + 0.2f;
            v4->f00 = (S_vv4_0 *)((int)v4->f00 + 0x700);
            if (18.0f > ((ObjectData *)o)->f478) {
                if (((ObjectData *)o)->ff0 != 9) {
                    ((ObjectData *)o)->ff0 = 9;
                }
            }
            if (!(-5.0f > ((ObjectData *)o)->f478)) {
                goto L_8c05853c;
            }
            ((ObjectData *)o)->f478 = -5.0f;
            v3->f00 = 1;
            v1->f00 = 0;
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
            play_se_8c05fbf8(call_8c24e644(0x3002a, (void *)(((ObjectData *)o)->f38c)), (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 1:
            v1->f00 += 1;
            if (v1->f00 > 3) {
                v1->f00 = 0;
                v2->f00 += 1;
                if (v2->f00 >= 6) {
                    v3->f00 = 2;
                }
            }
        }
L_8c05853c:;
        o->v108();
        return;
    case 5:
        v2->f00 = 6;
    }
}
