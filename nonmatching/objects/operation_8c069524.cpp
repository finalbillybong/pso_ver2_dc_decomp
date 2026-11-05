/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c069524
 * function: operation_8c069524
 * language: c++
 * reference size: 552 bytes
 * compiled size: 552 bytes (+0.0%)
 * differing lines: 18 of 194 reference instruction lines
 * differing bytes: 239
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
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
class Object;
class Arg0_6a0;
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
    virtual void v93(int, int);
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x1e];
    float f40;
    char unknown44[0xa4];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2b6];
    volatile unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x4];
    Arg0_6a0 *f6a0;
    char unknown6a4[0x8];
    float f6ac;
    float f6b0;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
};
class Arg0_6a0 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct Arg0_6a0Data {

} Arg0_6a0Data;
extern "C" void process_entries_wrapper_2_8c07c1a8(void *);
extern "C" void operation_8c0368a8(void *);
extern "C" void call_8c06741c(Object *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void process_entries_wrapper_8c07c18c(void *);
extern "C" void operation_8c069524(Object *o, int a1)
{
    int pm6;
    ObjectData *pm11;
    Frame frame;
    int t2;
    S_vv1 *v1;
    signed char pm7;
    int t1;
    int pm8;
    ObjectData *pm5;
    int pm9;
    void *pm10;
    int t4;
    int pm13;
    int pm14;
    pm8 = 0x82c;
    v1 = (S_vv1 *)((char *)o + pm8);
    switch (a1) {
        case 4:
        ((ObjectData *)o)->ff0 = (short)7;
        pm11 = (ObjectData *)o;
        o->v102();
        ((ObjectData *)o)->f404 = 0;
        a1 = *(int *)(0x3dc + (char *)o);
        pm14 = 0x100;
        *(int *)(0x3dc + (char *)o) = pm14 | a1;
        (pm11)->f5f8 = ((ObjectData *)o)->f40;
        ((ObjectData *)o)->f5fc = 0.0f;
        ((ObjectData *)o)->f3dc = ((ObjectData *)o)->f3dc & -0xc81;
        ((ObjectData *)o)->f3dc = ((ObjectData *)o)->f3dc | 0x200;
        v1->f00 = 0;
        process_entries_wrapper_2_8c07c1a8((void *)(((ObjectData *)o)->f6a0));
        return;
        case 2:
        case 11:
        pm8 = ((ObjectData *)o)->fe8 & 0x10;
        if (!(0 == ((pm8)))) {
            ObjectData *pm12;
            pm5 = (ObjectData *)o;
            o->v93(0x17, 6);
            (&frame)->f00 = (char)0x12;
            (&frame)->f01 = (char)5;
            pm6 = (int)(int)((ObjectData *)o)->f20;
            (&frame)->f02 = (short)pm6;
            (&frame)->f04 = 0x17;
            pm6 = ((ObjectData *)o)->f698;
            pm12 = (ObjectData *)o;
            (&frame)->f06 = (short)pm6;
            (&frame)->f08 = 0xffff & (int)(int)(pm5)->f3a8;
            (&frame)->f0c = ((ObjectData *)o)->f6ac;
            pm10 = (void *)(&frame);
            (&frame)->f10 = (pm12)->f6b0;
            operation_8c0368a8(pm10);
        } else {
        }
        return;
        case 9:
        pm5 = (ObjectData *)o;
        if (0 == (((pm5)->fe8 & 0x10))) {
            return;
        }
        call_8c06741c(o);
        return;
        case 0:
        operation_8c01c5f0(o);
        v1->f00 += 1;
        t1 = check_range_8c01cf68((void *)o, 0.0f);
        if (0 == t1) {
            t2 = check_range_8c01cf68((void *)o, 12.0f);
            if (t2 == 0) {
                goto L_8c069686;
            }
        }
        pm13 = 0;
        pm9 = pm13;
        play_se_8c05fbf8(0x30009, (void *)((0x658 + (char *)o)), 0, pm9);
    L_8c069686:
        ;
        pm7 = 1;
        t1 = v1->f00;
        t2 = t1;
        pm8 = (int)pm7;
        if (pm8 < t2) {
            int t3;
            t3 = check_range_8c01cf68((void *)o, 10.0f);
            if ((t3 != 0)) {
                process_entries_wrapper_8c07c18c((void *)(((ObjectData *)o)->f6a0));
            } else {
                t4 = check_range_8c01cf68((void *)o, 23.0f);
                if (!(0 == t4)) {
                    process_entries_wrapper_2_8c07c1a8((void *)(((ObjectData *)o)->f6a0));
                }
            }
            ((ObjectData *)o)->f6a0->v1();
        }
        return;
        case 1:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        break;
    }
}
