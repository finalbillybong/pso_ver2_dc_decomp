/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c093a1c
 * function: operation_8c093a1c
 * language: c++
 * reference size: 1188 bytes
 * compiled size: 1184 bytes (-0.3%)
 * differing lines: 276 of 453 reference instruction lines
 * differing bytes: 447
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Arg0_424 Arg0_424;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_s4ac Arg0_s4ac;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
class Object;
typedef struct Block_frame_8 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_8;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    Block_frame_8 f08;
    float f14;
    char unknown18[0x4];
    float f1c;
};
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
    virtual int v113();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2ba];
    int f3ac;
    float f3b0;
    char unknown3b4[0x4];
    float f3b8;
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x18];
    int f3e4;
    char unknown3e8[0x1c];
    float f404;
    char unknown408[0x8];
    float f410;
    float f414;
    int f418;
    char unknown41c[0x4];
    int f420;
    Arg0_424 *f424;
    char unknown428[0x84];
    float f4ac;
    char unknown4b0[0x20];
    int f4d0;
} ObjectData;
struct S_vv2 {
    int f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv3 {
    int f00;
};
struct S_vv1 {
    int f00;
};
struct S_frame_4 {
    int f00;
};
struct S_frame_0 {
    float f00;
};
struct S_vv4 {
    float f00;
};
struct S_vv5 {
    float f00;
};
struct Arg0_s4ac {
    char unknown0[0x4];
    float f04;
    float f08;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(int);
extern "C" int call_8c05c0dc(Object *, float);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float operation_8c05b8c0(int);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" void clamp_and_dispatch_contact(void *, float, float, float);
extern "C" float call_8c130334(float, float);
extern "C" void append_position_ring(void *, void *, int, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c090d88(void *, float);
struct V3p {
    float x;
    float y;
    float z;
};
extern "C" void operation_8c093a1c(Object *o, int a1)
{
    Frame frame;
    int *v2;
    int *v3;
    int *v1;
    float *v4;
    float *v5;
    V3p *v6;
    float t;
    float t4;
    int t2;
    v1 = (int *)((char *)o + 0x494);
    (&frame)->f04 = (S_frame_4 *)((char *)o + 0x49c);
    v2 = (int *)((char *)o + 0x48c);
    v3 = (int *)((char *)o + 0x490);
    (&frame)->f00 = (S_frame_0 *)((char *)o + 0x4a0);
    v4 = (float *)((char *)o + 0x4a4);
    v5 = (float *)((char *)o + 0x4a8);
    v6 = (V3p *)((char *)o + 0x4ac);
    switch (a1) {
    case 4:
        if (((ObjectData *)o)->f418 == 4) {
            ((ObjectData *)o)->ff0 = 2;
            ((ObjectData *)o)->f418 = 5;
        }
        operation_8c059ef8((void *)o, 8);
        ((ObjectData *)o)->f3e4 &= -0x400001;
        o->v102();
        ((ObjectData *)o)->f420 = 0;
        *v2 = 1;
        ((ObjectData *)o)->fdc->f18 |= 0x50;
        *v3 = 0;
        *v1 = 0;
        (&frame)->f04->f00 = 0;
        (&frame)->f00->f00 = 0.0f;
        *v4 = 0.0f;
        *v5 = 0.0f;
        v6->x = 0.0f;
        v6->y = 0.0f;
        v6->z = 0.0f;
        return;
    case 3:
        if (o->v113() != 0) {
            return;
        }
        if (((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 0xe);
            t2 = 1;
        } else {
            t2 = 0;
        }
        if (t2 != 0) {
            return;
        }
        if (!(*v1 >= 4)) {
            return;
        }
        o->v110();
        return;
    case 0:
        operation_8c01c5f0((int)o);
        if (call_8c05c0dc(o, 200.0f) == 0) {
            return;
        }
        switch (*v2) {
        case 1:
            if (*v3 == 0) {
                operation_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
                t = operation_8c05b8c0((int)o);
                t *= 8192.0f;
                if (!(0.0f > t)) {
                    t += 12288.0f;
                } else {
                    t -= 12288.0f;
                }
                (&frame)->f04->f00 = (int)(t * 0.125f);
                v6->x = -((ObjectData *)o)->f3bc;
                v6->z = -((ObjectData *)o)->f3c4;
                (&frame)->f00->f00 = (((ObjectData *)o)->f404 - ((ObjectData *)o)->f410) * 0.125f;
                *v5 = (70.0f - ((ObjectData *)o)->f3c8) * 0.125f;
                *v4 = ((ObjectData *)o)->f3c8;
            }
            *v3 += 1;
            if (*v3 >= 8) {
                *v1 += 1;
                *v2 = 0;
                ((ObjectData *)o)->fdc->f18 &= -0x51;
            }
            ((ObjectData *)o)->f414 += (&frame)->f00->f00;
            rotate_scalar_pair((void *)v6, (void *)((char *)v6 + 8), (&frame)->f04->f00);
            *v4 += *v5;
            (&frame)->f14 = v6->x * *v4 + ((ObjectData *)o)->f3b0;
            (&frame)->f1c = v6->z * *v4 + ((ObjectData *)o)->f3b8;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f14), (void *)(((char *)o + 0x3c)));
            t4 = normalize_xz_checked((void *)(&(&frame)->f14));
            clamp_and_dispatch_contact((void *)o, (&frame)->f14, (&frame)->f1c, t4);
            ((ObjectData *)o)->f64 = (int)(call_8c130334(v6->x, v6->z) * 65536.0f / 6.28318405f) + 0x8000;
            append_position_ring((void *)(((ObjectData *)o)->f424), (void *)(((char *)o + 0x430)), ((ObjectData *)o)->f4d0, 0.8f);
            break;
        case 0:
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            ((ObjectData *)o)->f64 = angle_step(((ObjectData *)o)->f64, (int)(call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4) * 65536.0f / 6.28318405f), 0x400);
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            operation_8c090d88((void *)o, ((ObjectData *)o)->f404 + ((ObjectData *)o)->f3c.f04);
            *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f08.f04 = ((ObjectData *)o)->f414;
            o->v107();
            *v3 += 1;
            if (*v3 > 0x1e) {
                *v3 = 0;
                *v2 = 1;
            }
            break;
        }
        o->v95();
        return;
    case 5:
        ((ObjectData *)o)->fdc->f18 &= -0x51;
        return;
    }
}
