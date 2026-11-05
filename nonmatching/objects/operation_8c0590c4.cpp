/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0590c4
 * function: operation_8c0590c4
 * language: c++
 * reference size: 644 bytes
 * compiled size: 644 bytes (+0.0%)
 * differing lines: 48 of 252 reference instruction lines
 * differing bytes: 75
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
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
class Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
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
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x228];
    Vector3 f324;
    char unknown330[0x5c];
    Arg0_38c *f38c;
    char unknown390[0xe8];
    float f478;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    float f00;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
};
extern "C" void refresh_follow_effect_8c0129f4(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void create_resource_effect_8c108044(void *, int);
extern "C" void operation_8c108428(int, int, float);
extern "C" float object_random_fraction_wrapper_8c05b8e8(int, float, float);
extern "C" int object_random_fraction_wrapper_2_8c05b90c(int);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c0590c4(Object *o, int a1)
{
    Frame frame;
    S_vv4 *v4;
    int t1;
    S_vv3 *v3;
    S_vv1 *v1;
    S_vv2 *v2;
    float t2;
    float t3;
    float t4;
    int t5;
    v1 = (S_vv1 *)((char *)o + 0x490);
    v2 = (S_vv2 *)((char *)o + 0x494);
    v3 = (S_vv3 *)((char *)o + 0x498);
    v4 = (S_vv4 *)((char *)o + 0x4a0);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 7;
        o->v102();
        ((ObjectData *)o)->f478 = 0.0f;
        refresh_follow_effect_8c0129f4((void *)o);
        v1->f00 = 4;
        v2->f00 = 0x14;
        v3->f00 = 0;
        v4->f00 = 0.0f;
        return;
    case 3:
        if (20.0f > v4->f00) {
            return;
        }
        operation_8c059ea4((void *)o, 9);
        return;
    case 0:
        switch (v3->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                v3->f00 = 1;
                (&frame)->f0c = -10.0f;
                (&frame)->f10 = 0.0f;
                (&frame)->f14 = -8.0f;
                rotate_scalar_pair((void *)(&(&frame)->f0c), (void *)(&(&frame)->f14), (int)(((ObjectData *)o)->f64));
                call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
                create_resource_effect_8c108044((void *)(&(&frame)->f0c), 0x32);
                operation_8c108428((int)(&(&frame)->f0c), 0x46, 10.0f);
            }
            if (25.0f > ((ObjectData *)o)->ff8) {
                v1->f00 += 1;
                if (v1->f00 >= 4) {
                    t2 = object_random_fraction_wrapper_8c05b8e8((int)o, 5.0f, 10.0f);
                    t1 = object_random_fraction_wrapper_2_8c05b90c((int)o);
                    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
                    t3 = njSin_8c37eb0c(t1);
                    (&frame)->f00.f00 = t2 * t3 + (&frame)->f00.f00;
                    (&frame)->f00.f04 += 5.0f;
                    t4 = njCos_8c38c154(t1);
                    (&frame)->f00.f08 = t2 * t4 + (&frame)->f00.f08;
                    create_effect_777c((void *)(&frame), 0xf1);
                    v1->f00 = 0;
                }
                v2->f00 += 1;
                if (v2->f00 >= 0x14) {
                    t5 = call_8c24e644(0x3002b, (void *)(((ObjectData *)o)->f38c));
                    play_se_8c05fbf8(t5, (void *)(((char *)o + 0x3c)), 0, 0);
                    v2->f00 = 0;
                }
            }
            o->v108();
            return;
        case 1:
            v4->f00 += 0.1f;
            ((ObjectData *)o)->f40 -= 0.1f;
        }
    }
}
