/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c061a70
 * function: operation_8c061a70
 * language: c++
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 2 of 129 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_c8c053d84 S_c8c053d84;
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
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2ba];
    int f3ac;
    char unknown3b0[0x44];
    int f3f4;
    char unknown3f8[0x4];
    unsigned short f3fc;
    char unknown3fe[0x2];
    int f400;
    char unknown404[0x20];
    int f424;
} ObjectData;
struct S_c8c053d84 {
    char unknown0[0x424];
    int f424;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void reset_link_8c05bf28(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c05c184(void *);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c061a70(Object *o, int a1)
{
    S_c8c053d84 *t1;
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c061b62;
                }
                return;
            }
            ((ObjectData *)o)->ff0 = 4;
            operation_8c059ef8((void *)o, 2);
            o->v101();
            reset_link_8c05bf28((void *)o);
            ((ObjectData *)o)->f400 = 0;
            ((ObjectData *)o)->f424 = (unsigned int)((ObjectData *)o)->f424 >> 1 << 1;
            return;
        }
        if (((((ObjectData *)o)->f424 & 1)) != 0) {
            operation_8c059ea4((void *)o, 4);
            return;
        }
        if (((ObjectData *)o)->f3ac == 0) {
            return;
        }
        operation_8c05c184((void *)o);
        if (((ObjectData *)o)->f3f4 != 0) {
            operation_8c059ea4((void *)o, 6);
        } else {
            operation_8c059ea4((void *)o, 5);
        }
        t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f3fc));
        if (t1 == 0) {
            return;
        }
        t1->f424 |= 1;
        return;
    }
    if (((ObjectData *)o)->f3f4 != 0) {
        call_8c05c0dc(o, 350.0f);
    } else {
        call_8c05c0dc(o, 250.0f);
    }
    operation_8c01c5f0(o);
    o->v108();
    o->v94();
    return;
L_8c061b62:;
    ((ObjectData *)o)->f424 = (unsigned int)((ObjectData *)o)->f424 >> 1 << 1;
}
