/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d28f4
 * function: operation_8c0d28f4
 * language: c++
 * reference size: 1096 bytes
 * compiled size: 1096 bytes (+0.0%)
 * differing lines: 4 of 402 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_s4a0 Arg0_s4a0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv4 S_vv4;
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
    virtual int v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    int f3dc;
    char unknown3e0[0x10];
    int f3f0;
    char unknown3f4[0x1c];
    int f410;
    char unknown414[0x6c];
    int f480;
    int f484;
    char unknown488[0x18];
    float f4a0;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv4 {
    float f00;
};
struct Arg0_s4a0 {
    char unknown0[0x4];
    float f04;
    float f08;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int call_8c0d2074(Object *, void *, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" int operation_8c05bbf8(void);
extern "C" int call_8c0d1cc0(Object *);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" void operation_8c0d28f4(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    Vector3 *v5;
    int v6;
    int v9;
    int v51;
    float t6;
    v1 = (S_vv1 *)((char *)o + 0x488);
    v2 = (S_vv2 *)((char *)o + 0x48c);
    v3 = (S_vv3 *)((char *)o + 0x490);
    v4 = (S_vv4 *)((char *)o + 0x498);
    v5 = (Vector3 *)((char *)o + 0x4a0);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        ((ObjectData *)o)->f3dc &= -8;
        operation_8c059ef8((void *)o, 4);
        v1->f00 = 0;
        v3->f00 = (S_vv3_0 *)0;
        v2->f00 = 0;
        v4->f00 = 0.0f;
        v5->x = 0.0f;
        v5->y = 0.0f;
        v5->z = 0.0f;
        break;
    case 3:
        if (o->v105() != 0) {
            operation_8c059ea4((void *)o, 9);
            v6 = 1;
        } else {
            v6 = 0;
        }
        if (v6 != 0) {
            break;
        }
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 8);
            break;
        }
        if (!(((ObjectData *)o)->f3c8 > 30.0f)) {
            operation_8c059ea4((void *)o, 6);
            break;
        }
        if (v2->f00 == 3) {
            operation_8c059ea4((void *)o, 5);
            break;
        }
        v9 = 1;
        if (!(((ObjectData *)o)->f484 >= ((ObjectData *)o)->f480) && !(-(int)(((ObjectData *)o)->f480) >= ((ObjectData *)o)->f484)) {
            v9 = 0;
        }
        if (v9 == 0) {
            break;
        }
        operation_8c059ea4((void *)o, 7);
        break;
    case 0:
        operation_8c01c5f0(o);
        if (check_range_8c01cf68((void *)o, 4.0f) != 0 || check_range_8c01cf68((void *)o, 20.0f) != 0) {
            play_se_8c05fbf8(0x3001f, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        if (call_8c05c0dc(o, 400.0f) != 0) {
            set_fields_wrapper_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
        }
        switch (v2->f00) {
        case 0:
            if (active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac)) != 0) {
                t6 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                v3->f00 = (S_vv3_0 *)(unsigned short)(int)(t6 * 65536.0f / 6.28318405f);
            } else {
                v3->f00 = (S_vv3_0 *)((ObjectData *)o)->f64;
            }
            v2->f00 = 1;
        case 1:
            if (call_8c0d2074(o, (void *)(v3->f00), 0x100) != 0) {
                v2->f00 = 2;
                v5->x = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                v5->z = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                ((ObjectData *)o)->f480 = ((ObjectData *)o)->f3f0 << 0xf;
                ((ObjectData *)o)->f484 = 0;
            }
            o->v108();
            break;
        case 2:
            if (operation_8c05bbf8() != 0) {
                if (call_8c0d1cc0(o) != 0) {
                    set_fields_wrapper_8c05c184((void *)o);
                    aim_direction_8c05bdd4((void *)o);
                    v2->f00 = 3;
                    break;
                }
                if (active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac)) != 0) {
                    t6 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                    v3->f00 = (S_vv3_0 *)(unsigned short)(int)(t6 * 65536.0f / 6.28318405f);
                } else {
                    v3->f00 = (S_vv3_0 *)((ObjectData *)o)->f64;
                }
                call_8c0d2074(o, (void *)(v3->f00), 0x100);
                break;
            }
            v4->f00 += 0.28f;
            if (!(20.0f > v4->f00)) {
                v4->f00 = 0.0f;
                v1->f00 += 1;
                if (v1->f00 >= 2 && ((ObjectData *)o)->f3c8 > 80.0f) {
                    v51 = !(*(int *)((char *)((char *)o + 0x434) + (((ObjectData *)o)->f410 << 2)) & 2);
                    if (v51 != 0 && call_8c0d1cc0(o) != 0) {
                        v1->f00 = 0;
                        set_fields_wrapper_8c05c184((void *)o);
                        aim_direction_8c05bdd4((void *)o);
                        v2->f00 = 3;
                        goto apply;
                    }
                }
                v2->f00 = 0;
            }
apply:
            clamp_and_apply_contact((void *)o, v5->x, v5->z, 0.28f);
            break;
        }
        o->v95();
        break;
    case 5:
        break;
    }
}
