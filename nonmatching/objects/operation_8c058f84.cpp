/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c058f84
 * function: operation_8c058f84
 * language: c++
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 2 of 118 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode extern)
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
typedef struct Arg0_38c Arg0_38c;
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
    char unknownf2[0xa6];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x5a];
    Arg0_38c *f38c;
    char unknown390[0x4];
    int f394;
    char unknown398[0x2c];
    int f3c4;
    char unknown3c8[0xb0];
    float f478;
} ObjectData;
extern "C" void operation_8c05a120(Object *);
extern "C" void operation_8c05a11c(Object *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void operation_8c058f84(Object *o, int a1)
{
    int t1;
    int t2;
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c059064;
                }
                return;
            }
            o->v102();
            operation_8c05a120(o);
            operation_8c05a11c(o, 0xf1);
            t1 = call_8c24e644(0x30029, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
            if (((ObjectData *)o)->f3c4 != 0) {
                ((ObjectData *)o)->ff0 = 6;
                ((ObjectData *)o)->f478 = 0.0f;
                return;
            }
            ((ObjectData *)o)->ff0 = 2;
            ((ObjectData *)o)->f478 = -5.0f;
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        if (((ObjectData *)o)->f3c4 != 0) {
            operation_8c059ea4((void *)o, 5);
            return;
        }
        t2 = call_8c18e768((int)(((ObjectData *)o)->f198), 2);
        if (t2 >= ((ObjectData *)o)->f330) {
            operation_8c059ea4((void *)o, 4);
        } else {
            operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
        }
        return;
    }
    operation_8c01c5f0(o);
    o->v108();
    return;
L_8c059064:;
    reset_segments_8c05a124((void *)o);
}
