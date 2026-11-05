/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05659c
 * function: operation_8c05659c
 * language: c++
 * reference size: 1448 bytes
 * compiled size: 1452 bytes (+0.3%)
 * differing lines: 338 of 528 reference instruction lines
 * differing bytes: 1001
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
class Object;
typedef struct Block_p0_44c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_44c;
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
    virtual int v109(float);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x1c];
    float f328;
    char unknown32c[0x40];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    Arg0_3ac *f3ac;
    float f3b0;
    float f3b4;
    float f3b8;
    Vector3 f3bc;
    float f3c8;
    char unknown3cc[0x78];
    int f444;
    float f448;
    Block_p0_44c f44c;
    char unknown458[0x10];
    float f468;
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
    S_vv4_0 *f00;
};
struct S_vv5 {
    S_vv5_0 *f00;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c055170(Object *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c2dc(Object *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float object_random_fraction(void *);
extern "C" int call_8c18e768(void *, int);
extern "C" int slide_and_dispatch_contact(void *, float, float, float);
extern "C" float call_8c12c714(float);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c05659c(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    char *v9;
    float v11;
    float v10;
    char *v16;
    float v17;
    float v18;
    char *v19;
    float v21;
    float v20;
    float v28;
    float v40;
    float v44;
    float v39;
    float v45;
    float v58;
    float v46;
    float v47;
    float v55;
    float v56;
    int t1;
    int t2;
    float t3;
    float t4;
    int t6;
    int t7;
    float t8;
    float t9;
    float t10;
    float t11;
    int t12;
    float t13;
    float t14;
    int t15;
    float t16;
    v1 = (S_vv1 *)((char *)o + 0x3dc);
    v2 = (S_vv2 *)((char *)o + 0x3e8);
    v3 = (S_vv3 *)((char *)o + 0x3ec);
    v4 = (S_vv4 *)((char *)o + 0x3f0);
    v5 = (S_vv5 *)((char *)o + 0x3f4);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x444);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        ((ObjectData *)o)->f444 |= 2;
        if (((ObjectData *)o)->f30a == 4) {
            v1->f00 = 2;
            v2->f00 = 0;
            return;
        }
        v1->f00 = 0;
        v3->f00 = (int)((ObjectData *)o)->f64 + 0x8000;
        v4->f00 = (S_vv4_0 *)0;
        v2->f00 = 0;
        v5->f00 = (S_vv5_0 *)0;
        return;
    case 3:
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 5);
            return;
        }
        if (!(v2->f00 > 0x8000)) {
            if (!(-0x8000 > v2->f00)) {
                return;
            }
        }
        call_8c055170(o);
        return;
    case 0:
        operation_8c01c5f0(o);
        t1 = call_8c05c2dc(o);
        if (t1 == 0) {
            t2 = o->v109(200.0f);
            if (t2 == 0) {
                return;
            }
        }
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c05681c;
            }
            if (v1->f00 == 2) {
                goto L_8c0568dc;
            }
            v18 = (float)/* ? fr14 */ 0;
            v28 = (float)/* ? fr15 */ 0;
        } else {
            v9 = (char *)v3->f00;
            set_fields_wrapper_8c05c184((void *)o);
            t3 = njSin_8c37eb0c((int)(v9));
            ((ObjectData *)o)->f3b0 += t3 * 70.0f;
            ((ObjectData *)o)->f3b4 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f468;
            t4 = njCos_8c38c154((int)(v9));
            ((ObjectData *)o)->f3b8 += t4 * 70.0f;
            aim_direction_8c05bdd4((void *)o);
            v10 = (float)((ObjectData *)o)->f36c->f04;
            v11 = (float)0.0f;
            if (!(14.0f > ((ObjectData *)o)->f3c8)) {
                v18 = (float)v11;
                v28 = (float)v10;
            } else {
                if (object_random_fraction((void *)o) > 0.5f) {
                    v4->f00 = (S_vv4_0 *)(int)(v10 * -65536.0f / 439.822876f);
                } else {
                    v4->f00 = (S_vv4_0 *)(int)(v10 * 65536.0f / 439.822876f);
                }
                v1->f00 = 1;
                v39 = (float)v11;
                v40 = (float)v10;
                goto L_8c056960;
L_8c05681c:;
                t6 = call_8c18e768((void *)(v4->f00), 2);
                v3->f00 += t6;
                t7 = call_8c18e768((void *)(v4->f00), 2);
                v2->f00 += t7;
                v16 = (char *)v3->f00;
                set_fields_wrapper_8c05c184((void *)o);
                t8 = njSin_8c37eb0c((int)(v16));
                ((ObjectData *)o)->f3b0 += t8 * 70.0f;
                ((ObjectData *)o)->f3b4 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f468;
                t9 = njCos_8c38c154((int)(v16));
                ((ObjectData *)o)->f3b8 += t9 * 70.0f;
                aim_direction_8c05bdd4((void *)o);
                v17 = (float)((ObjectData *)o)->f36c->f04;
                v18 = (float)0.0f;
                v28 = (float)v17;
                if (v17 > ((ObjectData *)o)->f3c8) {
                    v1->f00 = 2;
                    v39 = (float)v18;
                    v40 = (float)v17;
                    goto L_8c056960;
L_8c0568dc:;
                    v3->f00 += (int)v4->f00;
                    v2->f00 += (int)v4->f00;
                    v19 = (char *)v3->f00;
                    set_fields_wrapper_8c05c184((void *)o);
                    t10 = njSin_8c37eb0c((int)(v19));
                    ((ObjectData *)o)->f3b0 += t10 * 70.0f;
                    ((ObjectData *)o)->f3b4 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f468;
                    t11 = njCos_8c38c154((int)(v19));
                    ((ObjectData *)o)->f3b8 += t11 * 70.0f;
                    aim_direction_8c05bdd4((void *)o);
                    v20 = (float)((ObjectData *)o)->f36c->f04;
                    t16 = njSin_8c37eb0c((int)(v5->f00));
                    v21 = (float)(t16 * 10.0f);
                    v5->f00 = (S_vv5_0 *)((int)v5->f00 + 0x380);
                    v18 = (float)v21;
                    v28 = (float)v20;
                }
            }
        }
        v39 = (float)v18;
        v40 = (float)v28;
L_8c056960:;
        *(Vector3 *)&((ObjectData *)o)->f44c = *(Vector3 *)&((ObjectData *)o)->f3bc;
        t12 = slide_and_dispatch_contact((void *)o, ((ObjectData *)o)->f44c.f00, ((ObjectData *)o)->f44c.f08, v40);
        if (t12 != 0) {
            ((ObjectData *)o)->f444 |= 2;
        } else {
            ((ObjectData *)o)->f444 &= -3;
        }
        v44 = (float)((ObjectData *)o)->f3b4;
        v44 = (float)(v44 + v39);
        v45 = (float)((ObjectData *)o)->f448;
        v58 = (float)(v44 - v45);
        t13 = call_8c12c714(v58);
        if (0.2f > t13) {
            v55 = (float)v44;
        } else {
            if ((v58 * 0.1f) > 1.5f) {
                v46 = (float)1.5f;
                v47 = (float)v46;
            } else {
                v47 = (float)(v58 * 0.1f);
                if (-1.5f > (v58 * 0.1f)) {
                    v47 = (float)-1.5f;
                }
            }
            v55 = (float)(v45 + v47);
        }
        ((ObjectData *)o)->f448 = v55;
        v56 = (float)((ObjectData *)o)->f40;
        if (1.2f > (((ObjectData *)o)->f448 - v56)) {
            ((ObjectData *)o)->f448 = v56 + 1.2f;
        }
        ((ObjectData *)o)->f328 = ((ObjectData *)o)->f448;
        t14 = errno_wrap_8c130334(((ObjectData *)o)->f3ac->f3c - ((ObjectData *)o)->f3c, ((ObjectData *)o)->f3ac->f44 - ((ObjectData *)o)->f44);
        ((ObjectData *)o)->f64 = (int)(t14 * 65536.0f / 6.28318405f);
        o->v95();
        t15 = call_8c24e644(0x30022, (void *)(((ObjectData *)o)->f38c));
        call_8c05fd7c(t15, o, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x400);
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}
