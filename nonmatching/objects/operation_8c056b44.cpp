/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c056b44
 * function: operation_8c056b44
 * language: c++
 * reference size: 740 bytes
 * compiled size: 744 bytes (+0.5%)
 * differing lines: 166 of 279 reference instruction lines
 * differing bytes: 582
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4678ec S_g8c4678ec;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_464 Arg0_464;
typedef struct S_vv1 S_vv1;
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
};
typedef struct ObjectData {
    char unknown0[0x40];
    float f40;
    char unknown44[0xac];
    short ff0;
    char unknownf2[0x236];
    float f328;
    char unknown32c[0x40];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    char unknown390[0x20];
    float f3b0;
    float f3b4;
    float f3b8;
    char unknown3bc[0xc];
    float f3c8;
    char unknown3cc[0x6c];
    float f438;
    float f43c;
    float f440;
    int f444;
    float f448;
    char unknown44c[0x14];
    float f460;
    Arg0_464 *f464;
} ObjectData;
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct S_vv1 {
    float f00;
};
struct S_g8c4678ec {
    float f00;
};
extern "C" float operation_8c05b8c0(int);
extern "C" int object_random_fraction_wrapper_2_8c05b90c(int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" float scale_by_half_angle(int, float);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" float call_8c12c714(float);
extern "C" int call_8c05c69c(Object *, void *, float);
extern "C" void operation_8c05b0ec(void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c056b44(Object *o, int a1)
{
    S_vv1 *v1;
    float v2;
    float v3;
    float v19;
    float v4;
    float v5;
    float v11;
    float v17;
    float t1;
    int t2;
    float t3;
    float t4;
    float t5;
    int t6;
    float t7;
    int t8;
    int t9;
    v1 = (S_vv1 *)((char *)o + 0x3fc);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x444);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        ((ObjectData *)o)->f444 |= 2;
        t1 = operation_8c05b8c0((int)o);
        ((ObjectData *)o)->f460 = ((ObjectData *)o)->f43c + 45.0f + t1 * 2.0f;
        t2 = object_random_fraction_wrapper_2_8c05b90c((int)o);
        ((ObjectData *)o)->f464 = (Arg0_464 *)(int)t2;
        t3 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f464));
        ((ObjectData *)o)->f3b0 = ((ObjectData *)o)->f438 + t3 * 30.0f;
        ((ObjectData *)o)->f3b4 = ((ObjectData *)o)->f460;
        t4 = njCos_8c38c154((void *)(((ObjectData *)o)->f464));
        ((ObjectData *)o)->f3b8 = ((ObjectData *)o)->f440 + t4 * 30.0f;
        t5 = scale_by_half_angle((int)(((ObjectData *)o)->f36c->f08), ((ObjectData *)o)->f36c->f04);
        v1->f00 = t5 + 2.0f;
        aim_direction_8c05bdd4((void *)o);
        return;
    case 3:
        t6 = call_8c05c0dc(o, 200.0f);
        if (t6 != 0) {
            operation_8c059ea4((void *)o, 2);
            return;
        }
        if (!(v1->f00 > ((ObjectData *)o)->f3c8)) {
            return;
        }
        operation_8c059ea4((void *)o, 1);
        return;
    case 0:
        operation_8c01c5f0(o);
        aim_direction_8c05bdd4((void *)o);
        v2 = (float)((ObjectData *)o)->f3b4;
        v3 = (float)((ObjectData *)o)->f448;
        v19 = (float)(v2 - v3);
        t7 = call_8c12c714(v19);
        if (0.2f > t7) {
            v11 = (float)v2;
        } else {
            if ((v19 * 0.1f) > 1.5f) {
                v4 = (float)1.5f;
                v5 = (float)v4;
            } else {
                v5 = (float)(v19 * 0.1f);
                if (-1.5f > (v19 * 0.1f)) {
                    v5 = (float)-1.5f;
                }
            }
            v11 = (float)(v3 + v5);
        }
        ((ObjectData *)o)->f448 = v11;
        t8 = call_8c05c69c(o, (void *)(((ObjectData *)o)->f36c->f08), (*(S_g8c4678ec **)0x8c4678ec)->f00);
        if (t8 != 0) {
            ((ObjectData *)o)->f444 |= 2;
        } else {
            ((ObjectData *)o)->f444 &= -3;
        }
        o->v94();
        v17 = (float)((ObjectData *)o)->f40;
        if (1.2f > (((ObjectData *)o)->f448 - v17)) {
            ((ObjectData *)o)->f448 = v17 + 1.2f;
        }
        ((ObjectData *)o)->f328 = ((ObjectData *)o)->f448;
        operation_8c05b0ec((void *)o);
        t9 = call_8c24e644(0x30022, (void *)(((ObjectData *)o)->f38c));
        call_8c05fd7c(t9, o, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x400);
    }
}
