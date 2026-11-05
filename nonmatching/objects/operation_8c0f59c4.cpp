/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f59c4
 * function: operation_8c0f59c4
 * language: c++
 * reference size: 656 bytes
 * compiled size: 652 bytes (-0.6%)
 * differing lines: 164 of 256 reference instruction lines
 * differing bytes: 600
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
typedef struct S_g8c470618 S_g8c470618;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv9 S_vv9;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x29a];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    int f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x10];
    int f3dc;
    char unknown3e0[0x68];
    int f448;
    char unknown44c[0xc];
    int f458;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_g8c470618 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv9 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x20];
    int f28;
};
extern S_g8c470618 *g_8c470618;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" int operation_8c05c1f0(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int step_clamped_angle_velocity(int, int, int, int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c0f59c4(Object *o, int a1)
{
    S_vv1 *v1;
    int v5;
    int v8;
    S_vv9 *v9;
    float v10;
    float v11;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    float t6;
    int t7;
    int t8;
    float t9;
    float t10;
    float t11;
    v1 = (S_vv1 *)((char *)o + 0x474);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        operation_8c059ef8((void *)o, 4);
        o->v102();
        ((ObjectData *)o)->f3dc &= -8;
        v1->f00 = 0;
        return;
    case 3:
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 3);
            return;
        }
        if (!(((ObjectData *)o)->f3c8 < (float)g_8c470618->f2c)) {
            if (2 > ((ObjectData *)o)->f458) {
                operation_8c059ea4((void *)o, 5);
                return;
            }
        }
        if (v1->f00 != 1) {
            return;
        }
        operation_8c059ea4((void *)o, 6);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (((((ObjectData *)o)->f3dc & 8)) == 0) {
            t8 = call_8c05c0dc(o, 300.0f);
            v5 = (int)t8;
        } else {
            t1 = operation_8c05c1f0(o);
            if (t1 == 0) {
                ((ObjectData *)o)->f3dc &= -9;
            }
            v5 = (int)t1;
        }
        if (v5 != 0) {
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
        }
        t9 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        v8 = (int)(int)(t9 * 65536.0f / 6.28318405f);
        t2 = angle_step((int)(((ObjectData *)o)->f64), v8, 0x300);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t2;
        t3 = step_clamped_angle_velocity((int)(((ObjectData *)o)->f64), (int)(((ObjectData *)o)->f448), v8, 0x200, 0x2000);
        ((ObjectData *)o)->f448 = (int)t3;
        v9 = (S_vv9 *)g_8c470618;
        if (!(((ObjectData *)o)->f3c8 > (float)v9->f28)) {
            t11 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            t10 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            v10 = (float)((ObjectData *)o)->f3bc;
            v10 = (float)(v10 * t11);
            v11 = (float)(v10 + ((ObjectData *)o)->f3c4 * t10);
            t4 = njCos_8c38c154((void *)0x1800);
            if (t4 > v11) {
                goto L_8c0f5b88;
            }
            v1->f00 = 1;
        } else {
            t5 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            t6 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            clamp_and_apply_contact((void *)o, t5, t6, v9->f04);
        }
L_8c0f5b88:;
        o->v95();
        t7 = call_8c24e644(0x30008, (void *)(((ObjectData *)o)->f38c));
        call_8c05fd7c(t7, o, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
