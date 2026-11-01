/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d3ab4
 * function: operation_8c0d3ab4
 * language: c++
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 10 of 129 reference instruction lines
 * differing bytes: 25
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
typedef struct Arg0_414 Arg0_414;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
class Arg0_s3f4;
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
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    short ff0;
    char unknownf2[0x2ea];
    int f3dc;
    char unknown3e0[0x8];
    int f3e8;
    char unknown3ec[0x28];
    Arg0_414 *f414;
} ObjectData;
struct S_vv3 {
    float f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv1 {
    int f00;
};
class Arg0_s3f4 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
};
typedef struct Arg0_s3f4Data {

} Arg0_s3f4Data;
extern "C" void operation_8c01c5f0(Object *);
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void set_field_8c0f3df8(void *);
extern "C" void operation_8c1083f8(int);
extern "C" void operation_8c0fc020(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_resource_effect_8c10829c(void *, int);
extern "C" void operation_8c0d3ab4(Object *o, int a1)
{
    S_vv1 *v1;
    unsigned short pm10;
    int pm5;
    int pm7;
    Arg0_414 *pm12;
    int pm6;
    int t1;
    S_vv2 *v2;
    Arg0_s3f4 *pm3;
    S_vv3 *v3;
    int pm8;
    ObjectData *pm4;
    int pm11;
    ObjectData *pm13;
    int pm9;
    char *pm2;
    v3 = (S_vv3 *)(0x498 + (char *)o);
    pm2 = 0x48c + (char *)o;
    v2 = (S_vv2 *)(pm2);
    v1 = (S_vv1 *)((char *)o + (unsigned short)(0x488));
    switch (a1) {
        case 3:
        case 5:
        break;
        case 4:
        ((ObjectData *)o)->ff0 = (short)7;
        o->v102();
        pm8 = 0x3dc;
        pm2 = (char *)o + (int)(int)pm8;
        a1 = *(int *)(pm2) & -8;
        *(int *)(pm2) = a1;
        operation_8c01c5f0(o);
        refresh_follow_effect_8c05a194((void *)o);
        pm4 = (ObjectData *)o;
        pm12 = (pm4)->f414;
        set_field_8c0f3df8((void *)(pm12));
        v3->f00 = (float)((ObjectData *)o)->f3e8;
        v2->f00 = 0;
        v1->f00 = 0;
        pm10 = (unsigned short)0x324;
        pm6 = (int)(((char *)o + pm10));
        operation_8c1083f8(pm6);
        pm5 = 0x3f4;
        pm13 = (ObjectData *)o;
        pm4 = pm13;
        operation_8c0fc020((void *)((pm5 + (char *)o)));
        pm11 = 2 | ((ObjectData *)o)->f3dc;
        (pm4)->f3dc = pm11;
        pm7 = 0;
        play_se_8c05fbf8(0x30025, (void *)((0x3c + (char *)o)), 0, pm7);
        return;
        case 0:
        pm5 = v2->f00;
        pm8 = pm5;
        pm9 = pm8;
        switch (pm9) {
            case 0:
            operation_8c01c5f0(o);
            pm3 = (Arg0_s3f4 *)(0x3f4 + (char *)o);
            t1 = (pm3)->v4();
            if (t1 != 0) {
                ObjectData *pm14;
                int pm15;
                short pm16;
                pm2 = (char *)o;
                v2->f00 = 4;
                pm4 = (ObjectData *)o;
                pm14 = pm4;
                (pm14)->f3dc = ((ObjectData *)o)->f3dc | 1;
                pm15 = 0;
                create_resource_effect_8c10829c((void *)((pm2 + 0x3c)), pm15);
                pm16 = ((ObjectData *)o)->f04;
                ((ObjectData *)o)->f04 = 1 | pm16;
            }
        }
    }
}
