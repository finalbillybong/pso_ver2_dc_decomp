/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05dc34
 * function: operation_8c05dc34
 * language: c++
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 18 of 140 reference instruction lines
 * differing bytes: 30
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
typedef struct Arg0_dc Arg0_dc;
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0xa6];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x62];
    int f394;
    char unknown398[0x48];
    int f3e0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
extern "C" void operation_8c05a11c(Object *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int call_8c18e768(int, int);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void operation_8c05dc34(Object *o, int a1)
{
    int t1;
    float t2;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 4;
        o->v102();
        ((ObjectData *)o)->fdc->f44 = (unsigned int)((ObjectData *)o)->fdc->f44 >> 1 << 1;
        ((ObjectData *)o)->f3e0 &= -9;
        operation_8c05a11c(o, 0xf2);
        play_se_8c05fbf8(0x30013, &((ObjectData *)o)->f3c, 0, 0);
        update_last_effect(-0x200);
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f394 == 8) {
            operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
            return;
        }
        t1 = call_8c18e768((int)(((ObjectData *)o)->f198), 4);
        if (t1 > ((ObjectData *)o)->f330) {
            operation_8c059ea4((void *)o, 8);
            return;
        }
        t2 = object_random_fraction((void *)o);
        if (0.3f > t2) {
            operation_8c059ea4((void *)o, 6);
            return;
        }
        operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
        return;
    case 0:
        operation_8c01c5f0(o);
        o->v108();
        o->v94();
        return;
    case 5:
        ((ObjectData *)o)->f34 &= -0x201;
        ((ObjectData *)o)->f3e0 &= -3;
        reset_segments_8c05a124((void *)o);
    }
}
