/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c9410
 * function: operation_8c0c9410
 * language: c++
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 110 of 161 reference instruction lines
 * differing bytes: 190
 * provenance: hand pass on a generator draft (behaviour reviewed; address casts converted to
 *   prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_40c Arg0_40c;
class Object;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_p0_324 {
    float f00;
    float f04;
    float f08;
} Block_p0_324;
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
    Vector3 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0x10];
    Vector3 f78;
    char unknown84[0x2a0];
    Block_p0_324 f324;
    char unknown330[0xdc];
    Arg0_40c *f40c;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
};
extern "C" void set_fields_wrapper_8c05c184(Object *);
extern "C" void aim_direction_8c05bdd4(Object *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void hs_8c3bdf60(Frame *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern "C" float normalize_xz_checked(Frame *);
extern "C" void clamp_scaled_contact(Object *, void *, float, float, float);
extern "C" void hs_8c0c9618(Object *);
extern "C" void operation_8c05b0ec(Object *);
extern "C" int lookup_object_by_id(int);
extern "C" void reset_actor_motion(int);
extern "C" void operation_8c0c9410(Object *o, float f0)
{
    Frame frame;
    int v2;
    int v1;
    float t1;
    float t2;
    float t3;
    int t4;
    set_fields_wrapper_8c05c184(o);
    aim_direction_8c05bdd4(o);
    t1 = njSin_8c37eb0c(((ObjectData *)o)->f40c);
    (&frame)->f00 = f0 * t1;
    (&frame)->f04 = 0.0f;
    t2 = njCos_8c38c154(((ObjectData *)o)->f40c);
    (&frame)->f08 = f0 * t2;
    hs_8c3bdf60((&frame), ((char *)o + 0x3b0));
    vector_sub_in_place_8c37f6f0((&frame), ((char *)o + 0x3c));
    t3 = normalize_xz_checked((&frame));
    clamp_scaled_contact(o, &(&frame)->f0c, (&frame)->f00, (&frame)->f08, t3);
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f0c;
    o->v108();
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f324.f00 = ((ObjectData *)o)->f3c.f00;
    ((ObjectData *)o)->f324.f04 = ((ObjectData *)o)->f3c.f04 + 22.0f;
    ((ObjectData *)o)->f324.f08 = ((ObjectData *)o)->f3c.f08;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    ((ObjectData *)o)->f64 = (int)((ObjectData *)o)->f40c + 0x8000;
    hs_8c0c9618(o);
    ((ObjectData *)o)->f40c = (Arg0_40c *)((int)((ObjectData *)o)->f40c + 0x2aaa);
    operation_8c05b0ec(o);
    v2 = (int)0;
    v1 = (int)0x400;
    while (2 > v2) {
        t4 = lookup_object_by_id(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 1)));
        if (t4 != 0) {
            reset_actor_motion(t4);
        }
        v2 = (int)(v2 + 1);
    }
}
