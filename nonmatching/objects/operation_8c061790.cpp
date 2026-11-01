/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c061790
 * function: operation_8c061790
 * language: c++
 * reference size: 736 bytes
 * compiled size: 736 bytes (+0.0%)
 * differing lines: 26 of 287 reference instruction lines
 * differing bytes: 28
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
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
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
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2f8];
    int f3f4;
    char unknown3f8[0x8];
    int f400;
    char unknown404[0x20];
    int f424;
    float f428;
} ObjectData;
struct S_vv1 {
    Vector3 f00;
};
struct S_vv2 {
    float f00;
};
struct S_vv3 {
    float f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void reset_link_8c05bf28(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" int call_8c05bfd8(Object *, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c061790(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v4;
    float v14;
    float t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    float t8;
    int t9;
    int t10;
    v1 = (S_vv1 *)((char *)o + 0x460);
    v2 = (S_vv2 *)((char *)o + 0x450);
    v3 = (S_vv3 *)((char *)o + 0x454);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x11;
        operation_8c059ef8((void *)o, 7);
        o->v101();
        {
            int *pf1 = (int *)((char *)o + 0x424);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f424 |= 4;
        reset_link_8c05bf28((void *)o);
        ((ObjectData *)o)->f400 = 0;
        *(Vector3 *)&v1->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        t1 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        ((ObjectData *)o)->f3c.f00 -= t1 * 100.0f;
        t1 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        ((ObjectData *)o)->f3c.f08 -= t1 * 100.0f;
        v2->f00 = 3.33333325f;
        ((ObjectData *)o)->f428 = 0.0f;
        v3->f00 = ((ObjectData *)o)->f3c.f04;
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f3f4 != 0) {
            t9 = call_8c05bfd8(o, 350.0f);
            v4 = (int)t9;
        } else {
            t10 = call_8c05bfd8(o, 250.0f);
            v4 = (int)t10;
        }
        if (v4 != 0) {
            operation_8c059ea4((void *)o, 7);
            return;
        }
        operation_8c059ea4((void *)o, 2);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (((((ObjectData *)o)->fe8 & 4)) == 0) {
            t3 = check_range_8c01cf68((void *)o, 5.0f);
            if (t3 == 0) {
                t4 = check_range_8c01cf68((void *)o, 30.0f);
                if (t4 == 0) {
                    goto L_8c0618e4;
                }
            }
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
L_8c0618e4:;
            t5 = check_range_8c01cf68((void *)o, 6.0f);
            if (t5 != 0) {
                play_se_8c05fbf8(0x30020, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            t6 = check_range_8c01cf68((void *)o, 24.0f);
            if (t6 != 0) {
                play_se_8c05fbf8(0x30021, (void *)(((char *)o + 0x3c)), 0, 0);
                update_last_effect(-0x500);
            }
            v14 = (float)((ObjectData *)o)->ff8;
            if (!(v14 > 30.0f)) {
                ((ObjectData *)o)->f428 = (v14 - 15.0f) * (v14 - 15.0f) * -0.088888891f + 20.0f + v3->f00 - ((ObjectData *)o)->f3c.f04;
            } else {
                v2->f00 *= 0.8f;
            }
            t7 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            ((ObjectData *)o)->f3c.f00 += v2->f00 * t7;
            t8 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            ((ObjectData *)o)->f3c.f08 += v2->f00 * t8;
        }
        o->v108();
        o->v94();
        return;
    case 5:
        ((ObjectData *)o)->f428 = 0.0f;
    }
}
