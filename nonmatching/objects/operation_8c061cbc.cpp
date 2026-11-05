/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c061cbc
 * function: operation_8c061cbc
 * language: c++
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 22 of 145 reference instruction lines
 * differing bytes: 38
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
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0x44];
    int f3f4;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void check_range_8c01cf68(void *, float);
extern "C" int operation_8c05c1f0(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void njSin_8c37eb0c(void *);
extern "C" void njCos_8c38c154(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" void operation_8c061cbc(Object *o, int a1)
{
    int t1;
    ObjectData *pm11;
    void *pm10;
    int pm6;
    ObjectData *pm5;
    S_vv1 *v1;
    float v2;
    void *pm13;
    int pm3;
    int pm9;
    float pm4;
    float pm8;
    int pm20;
    int pm19;
    float pm15;
    int pm12;
    v1 = (S_vv1 *)((char *)o + 0x438);
    switch (a1) {
        case 5:
        break;
        case 4:
        pm5 = (ObjectData *)o;
        pm6 = 7;
        (pm5)->ff0 = (short)5;
        operation_8c059ef8((void *)o, pm6);
        o->v101();
        pm19 = 0;
        v1->f00 = pm19;
        return;
        case 3:
        if (!(v1->f00 > 0x3c)) {
            return;
        }
        pm9 = 7;
        operation_8c059ea4((void *)o, pm9);
        return;
        case 0:
        v1->f00 += 1;
        pm10 = (void *)o;
        operation_8c01c5f0(o);
        check_range_8c01cf68(pm10, 7.0f);
        pm12 = operation_8c05c1f0(o);
        pm20 = pm12;
        t1 = pm20;
        if (t1 != 0) {
            float pm16;
            float pm17;
            ObjectData *pm14;
            float pm7;
            float pm2;
            pm13 = (void *)o;
            operation_8c05c184(pm13);
            aim_direction_8c05bdd4((void *)o);
            njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            pm4 = 0.0f;
            pm14 = (ObjectData *)o;
            pm11 = pm14;
            v2 = (pm11)->f3c;
            v2 = pm4 + v2;
            njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            pm2 = ((ObjectData *)o)->f3ac->f3c;
            pm16 = 0.0f;
            pm8 = ((ObjectData *)o)->f3ac->f44;
            pm15 = pm16;
            pm17 = errno_wrap_8c130334(pm2 - v2, pm8 - (pm15 + ((ObjectData *)o)->f44));
            pm4 = 65536.0f * pm17;
            pm7 = pm4 / 6.28318405f;
            operation_8c0610c8((void *)o, ((int)(pm7)));
        } else {
            pm11 = (ObjectData *)o;
            a1 = (pm11)->f3f4;
            pm3 = a1;
            t1 = pm3;
            if (!(0 == t1)) {
                call_8c05c0dc(o, 350.0f);
            } else {
                call_8c05c0dc(o, 250.0f);
            }
        }
        o->v108();
        o->v94();
    }
}
