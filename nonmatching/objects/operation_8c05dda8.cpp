/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05dda8
 * function: operation_8c05dda8
 * language: c++
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 26 of 164 reference instruction lines
 * differing bytes: 36
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
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
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
    char unknown0[0x40];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2ee];
    int f3e0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    float f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void operation_8c05a11c(Object *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" void create_resource_effect_8c108238(void *, int);
extern "C" void create_effect_at_8c108394(void *, int);
extern "C" void operation_8c05dda8(Object *o, int a1)
{
    Frame frame;
    S_vv2 *v2;
    S_vv1 *v1;
    float v6;
    float t1;
    float t2;
    v1 = (S_vv1 *)((char *)o + 0x42c);
    v2 = (S_vv2 *)((char *)o + 0x440);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 5;
        o->v102();
        ((ObjectData *)o)->fdc->f44 = (unsigned int)((ObjectData *)o)->fdc->f44 >> 1 << 1;
        ((ObjectData *)o)->f3e0 &= -9;
        refresh_follow_effect_8c05a194((void *)o);
        operation_8c05a11c(o, 0xf2);
        v1->f00 = 0;
        v2->f00 = 0.0f;
        play_se_8c05fbf8(0x30012, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x200);
        return;
    case 3:
        if (v1->f00 != 2) {
            return;
        }
        operation_8c059ea4((void *)o, 0xb);
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                v1->f00 = 1;
                t1 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                (&frame)->f00 = t1 * 10.0f;
                (&frame)->f04 = 0.0f;
                t2 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                (&frame)->f08 = t2 * 10.0f;
                call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
                create_resource_effect_8c108238((Frame *)((&frame)), 0x32);
                create_effect_at_8c108394((Frame *)((&frame)), 0x46);
            }
            o->v108();
            return;
        case 1:
            v6 = (float)0.1f;
            ((ObjectData *)o)->f40 -= v6;
            v2->f00 += v6;
            if (v2->f00 > 20.0f) {
                v1->f00 = 2;
            }
        }
    }
}
