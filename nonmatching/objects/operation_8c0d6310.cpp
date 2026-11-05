/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d6310
 * function: operation_8c0d6310
 * language: c++
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 6 of 260 reference instruction lines
 * differing bytes: 5
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
typedef struct S_g8c46fda4 S_g8c46fda4;
typedef struct Arg0_3fc Arg0_3fc;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_64 Arg0_64;
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
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x2c0];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x14];
    int f3dc;
    int f3e0;
    char unknown3e4[0x18];
    Arg0_3fc *f3fc;
    Arg0_400 *f400;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_g8c46fda4 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    int f20;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c11895c(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c2dc(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void advance_and_apply_contact(void *, float, float, float);
extern "C" void operation_8c0d6310(Object *o, int a1)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v4;
    float v11;
    int t1;
    int t2;
    float t3;
    float t4;
    float t5;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x424);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 6;
        operation_8c059ef8((void *)o, 6);
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x3e0);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f3e0 |= 0x10000;
        v1->f00 = 0;
        v2->f00 = 0;
        operation_8c11895c((void *)(((ObjectData *)o)->f3fc));
        operation_8c11895c((void *)(((ObjectData *)o)->f400));
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        o->v112();
        return;
    case 0:
        operation_8c01c5f0(o);
        switch (v1->f00) {
        case 0:
            o->v110();
            if (20.0f > ((ObjectData *)o)->ff8) {
                t1 = call_8c05c2dc(o);
                if (t1 != 0) {
                    operation_8c05c184((void *)o);
                    aim_direction_8c05bdd4((void *)o);
                    t5 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                    v4 = (int)(int)(t5 * 65536.0f / 6.28318405f);
                } else {
                    v4 = (int)((ObjectData *)o)->f64;
                }
                t2 = angle_step((int)(((ObjectData *)o)->f64), v4, 0x300);
                ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t2;
                t3 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                ((ObjectData *)o)->f3bc = t3;
                t4 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                ((ObjectData *)o)->f3c4 = t4;
            }
            o->v117();
            v11 = (float)((ObjectData *)o)->ff8;
            if (!(0.0f > v11)) {
                if (!(v11 > 5.0f)) {
                    advance_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, (*(S_g8c46fda4 **)((char *)0x8c46fda4 + (((ObjectData *)o)->f3dc << 2)))->f08);
                    goto L_8c0d64b6;
                }
            }
            o->v108();
L_8c0d64b6:;
            if (25.0f > ((ObjectData *)o)->ff8) {
                goto L_8c0d6500;
            }
            ((ObjectData *)o)->ff8 = 25.0f;
            v1->f00 = 1;
            break;
        case 1:
            v2->f00 += 1;
            if (v2->f00 <= (*(S_g8c46fda4 **)((char *)0x8c46fda4 + (((ObjectData *)o)->f3dc << 2)))->f20) {
                ((ObjectData *)o)->ff8 = 25.0f;
            }
            o->v108();
        }
L_8c0d6500:;
        o->v95();
    }
}
