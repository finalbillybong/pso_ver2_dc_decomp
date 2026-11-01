/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c054d80
 * function: TObjEneBm3Fly_update_8c054d80
 * language: c++
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 14 of 182 reference instruction lines
 * differing bytes: 10
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
typedef struct Arg0_474 Arg0_474;
typedef struct Arg0_64 Arg0_64;
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
    char unknown0[0x4];
    short f04;
    char unknown6[0x5e];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x18];
    float f324;
    float f328;
    float f32c;
    char unknown330[0x104];
    unsigned short f434;
    char unknown436[0x3e];
    Arg0_474 *f474;
    int f478;
} ObjectData;
struct Arg0_474 {
    char unknown0[0x50];
    float f50;
    float f54;
    float f58;
};
extern "C" int operation_8c03d338(void);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" int hierarchy_is_active(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" int operation_8c05bbf8(void);
extern "C" float njCos_8c38c154(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void operation_8c055090(void *);
extern "C" void call_8c05a108(Object *);
extern "C" void TObjEneBm3Fly_update_8c054d80(Object *o)
{
    int v3;
    float v6;
    float v7;
    float v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    float t7;
    float t8;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    t2 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f434));
    if (t2 != 0) {
        t3 = hierarchy_is_active((void *)t2);
        if (t3 != 0) {
            goto L_8c054dc8;
        }
    }
    ((ObjectData *)o)->f04 |= 1;
    return;
L_8c054dc8:;
    t4 = o->v89();
    if (t4 != 4) {
        o->v91();
        v3 = (int)((ObjectData *)o)->f474;
        if (v3 == 0) {
            t5 = create_effect_769c((void *)(((char *)o + 0x324)), 0xc7);
            ((ObjectData *)o)->f474 = (Arg0_474 *)(int)t5;
            if (((ObjectData *)o)->f474 == 0) {
                goto L_8c054ec8;
            }
            set_effect_bit0((void *)(((ObjectData *)o)->f474));
            goto L_8c054ec8;
        }
        if (((ObjectData *)o)->f30a == 9 || (unsigned int)1 >= (unsigned int)(unsigned short)(((ObjectData *)o)->f30a + -7)) {
            set_effect_bit0((void *)v3);
            goto L_8c054ec8;
        }
        if (((ObjectData *)o)->f478 == 0) {
            v6 = (float)3.0f;
            ((ObjectData *)o)->f478 = 1;
            v7 = (float)v6;
        } else {
            v7 = (float)-3.0f;
            ((ObjectData *)o)->f478 = 0;
        }
        t6 = operation_8c05bbf8();
        if (t6 != 0) {
            v7 = (float)(v7 * 3.0f);
        }
        t8 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        v11 = (float)(v7 * t8);
        t7 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        ((ObjectData *)o)->f474->f50 = ((ObjectData *)o)->f324 + v11;
        ((ObjectData *)o)->f474->f54 = ((ObjectData *)o)->f328 + -1.5f;
        ((ObjectData *)o)->f474->f58 = ((ObjectData *)o)->f32c + v7 * -t7;
    } else {
        if (((ObjectData *)o)->f474 != 0) {
            set_effect_bit0((void *)(((ObjectData *)o)->f474));
        }
    }
L_8c054ec8:;
    operation_8c055090((void *)o);
    call_8c05a108(o);
    o->v106();
}
