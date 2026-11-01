/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05d34c
 * function: operation_8c05d34c
 * language: c++
 * reference size: 708 bytes
 * compiled size: 704 bytes (-0.6%)
 * differing lines: 44 of 281 reference instruction lines
 * differing bytes: 271
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
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
    virtual int v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x30];
    Arg0_33c *f33c;
    char unknown340[0x2c];
    Arg0_36c *f36c;
    char unknown370[0x3c];
    int f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x14];
    int f3e0;
    char unknown3e4[0x8];
    int f3ec;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_33c {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int angle_difference(int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int operation_8c05a4d8(int, float);
extern "C" int operation_8c05a24c(int, float);
extern "C" void call_8c05be98(Object *, int);
extern "C" int call_8c05c2dc(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c05d34c(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v5;
    float v25;
    int v13;
    int v11;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    int t7;
    v1 = (S_vv1 *)((char *)o + 0x430);
    v2 = (S_vv2 *)((char *)o + 0x43c);
    switch (a1) {
    case 5:
        break;
    case 4:
        if (((ObjectData *)o)->f30a == 2) {
            ((ObjectData *)o)->ff0 = 3;
        } else {
            ((ObjectData *)o)->ff0 = 2;
        }
        o->v102();
        ((ObjectData *)o)->fdc->f44 |= 1;
        ((ObjectData *)o)->f3e0 &= -9;
        operation_8c059ef8((void *)o, 3);
        v1->f00 = 0;
        v2->f00 = 0;
        return;
    case 3:
        if (((((ObjectData *)o)->f3e0 & 2)) != 0) {
            operation_8c059ea4((void *)o, 7);
            v5 = (int)1;
        } else {
            v5 = (int)0;
        }
        if (v5 != 0) {
            return;
        }
        v25 = (float)((ObjectData *)o)->f3c8;
        if (!(v25 > 300.0f)) {
            if (((ObjectData *)o)->f3ac != 0) {
                goto L_8c05d414;
            }
        }
        operation_8c059ea4((void *)o, 2);
        return;
L_8c05d414:;
        if (50.0f > v25) {
            t1 = angle_difference((int)(((ObjectData *)o)->f64), (int)(v2->f00));
            if (!(((ObjectData *)o)->f33c->f0c > t1)) {
                return;
            }
            operation_8c059ea4((void *)o, 5);
            return;
        }
        if (!((float)v1->f00 > 100.0f)) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        operation_8c01c5f0(o);
        v11 = (int)0xffff;
        if (((ObjectData *)o)->f3ec >= 0x14) {
            ((ObjectData *)o)->f3ec = 0;
            v13 = (int)1;
        } else {
            ((ObjectData *)o)->f3ec += 1;
            v13 = (int)0;
        }
        if (v13 != 0) {
            if (!(((ObjectData *)o)->f3c8 > 30.0f)) {
                goto L_8c05d4fa;
            }
            t2 = o->v105();
            if (t2 != 0) {
                t7 = operation_8c05a4d8((int)o, ((ObjectData *)o)->f3c8 - 30.0f);
                v11 = (int)t7;
            }
            if ((unsigned short)v11 == 0xffff) {
                t3 = operation_8c05a24c((int)o, ((ObjectData *)o)->f3c8 - 30.0f);
                v11 = (int)t3;
            }
            if ((unsigned short)v11 == 0xffff) {
                goto L_8c05d4fa;
            }
            call_8c05be98(o, v11);
        } else {
            t4 = call_8c05c2dc(o);
            if (t4 == 0) {
                return;
            }
        }
L_8c05d4fa:;
        operation_8c05c184((void *)o);
        aim_direction_8c05bdd4((void *)o);
        v1->f00 += 1;
        t5 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        v2->f00 = (int)(t5 * 65536.0f / 6.28318405f);
        t6 = angle_step((int)(((ObjectData *)o)->f64), (int)(v2->f00), (int)(((ObjectData *)o)->f36c->f08));
        ((ObjectData *)o)->f64 = (int)t6;
        ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
        o->v108();
        o->v94();
    }
}
