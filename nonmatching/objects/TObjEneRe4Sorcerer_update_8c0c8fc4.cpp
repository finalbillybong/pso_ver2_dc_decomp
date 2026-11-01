/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c8fc4
 * function: TObjEneRe4Sorcerer_update_8c0c8fc4
 * language: c++
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 6 of 123 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_3ac Arg0_3ac;
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
    virtual int v89();
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
    virtual void v109();
    virtual void v110();
};
typedef struct ObjectData {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    Arg0_3ac *f3ac;
    char unknown3b0[0x2c];
    short f3dc;
    char unknown3de[0x2];
    float f3e0;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05b238(int);
extern "C" int hierarchy_is_active(void *);
extern "C" void reset_link_8c05bf28(void *);
extern "C" void call_8c0c9618(Object *);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void mark_actor_flag_2000(void *);
extern "C" void set_actor_raised_position(void *);
extern "C" void call_8c05a108(Object *);
extern "C" void update_context_blend(void *);
extern "C" void TObjEneRe4Sorcerer_update_8c0c8fc4(Object *o)
{
    float v5;
    int v7;
    int v6;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    t2 = o->v89();
    if (t2 != 4) {
        t3 = operation_8c05b238((int)(((ObjectData *)o)->f3a8));
        if (t3 != 0) {
            t4 = hierarchy_is_active((void *)(((ObjectData *)o)->f3ac));
            if (t4 == 0) {
                reset_link_8c05bf28((void *)o);
            }
        }
        o->v91();
        call_8c0c9618(o);
        *(short *)((char *)o + 0x3dc) += 5;
        ((ObjectData *)o)->f3dc = (unsigned char)((ObjectData *)o)->f3dc;
        ((ObjectData *)o)->f3e0 += 0.01f;
        v5 = (float)((ObjectData *)o)->f3e0;
        if (1.0f > v5) {
            goto L_8c0c908c;
        }
        ((ObjectData *)o)->f3e0 = v5 - 1.0f;
    } else {
        v7 = (int)0;
        v6 = (int)0x400;
        while (2 > v7) {
            t5 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v6) + 0x0) + (v7 << 1))));
            if (t5 != 0) {
                mark_actor_flag_2000((void *)t5);
            }
            v7 = (int)(v7 + 1);
        }
    }
L_8c0c908c:;
    set_actor_raised_position((void *)o);
    call_8c05a108(o);
    o->v106();
    update_context_blend((void *)(((char *)o + 0x490)));
}
