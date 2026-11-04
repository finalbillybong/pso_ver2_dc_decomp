/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c060e4c
 * function: TObjEneBm5Wolf_update_8c060e4c
 * language: c++
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 2 of 119 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneBm5Wolf.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x2aa];
    short f30a;
    char unknown30c[0xf0];
    unsigned short f3fc;
    char unknown3fe[0x32];
    int f430;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void hierarchy_is_active(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c060fbc(void *);
extern "C" void call_8c05a108(Object *);
extern "C" void TObjEneBm5Wolf_update_8c060e4c(Object *o)
{
    short v12;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f3fc));
    if (t2 != 0) {
        hierarchy_is_active((void *)t2);
    }
    t3 = o->v89();
    if (t3 != 4) {
        if (((ObjectData *)o)->f430 != 0) {
            ((ObjectData *)o)->f430 -= 1;
            if (((ObjectData *)o)->f430 == 0 && ((ObjectData *)o)->f30a != 0x10 && ((ObjectData *)o)->f30a != 0x11) {
                operation_8c059ea4((void *)o, 0xe);
            }
        }
        o->v91();
    } else {
        v12 = (short)((ObjectData *)o)->f30a;
        if (v12 == 0) {
            o->v91();
        } else {
            if (v12 == 1) {
                *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f54;
                operation_8c059ea4((void *)o, 7);
                o->v91();
            }
        }
    }
    operation_8c060fbc((void *)o);
    call_8c05a108(o);
    o->v106();
}
