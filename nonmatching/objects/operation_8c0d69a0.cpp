/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d69a0
 * function: operation_8c0d69a0
 * language: c++
 * reference size: 1332 bytes
 * compiled size: 1328 bytes (-0.3%)
 * differing lines: 252 of 509 reference instruction lines
 * differing bytes: 1052
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_10 S_frame_10;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_s324 Arg0_s324;
typedef struct Arg0_s3b0 Arg0_s3b0;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv57 S_vv57;
typedef struct S_vv61 S_vv61;
class Object;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
typedef struct Block_p0_324 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Frame {
    int f04;
    int f08;
    int f0c;
    S_frame_10 *f10;
    int f14;
    int f18;
    int f1c;
    float f20;
    char unknown24[0x4];
    float f28;
    Vector3 f2c;
    Vector3 f38;
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
    virtual int v19(void *);
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
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x146];
    short f1ae;
    char unknown1b0[0x174];
    Block_p0_324 f324;
    char unknown330[0x68];
    float f398;
    char unknown39c[0x10];
    Arg0_3ac *f3ac;
    int f3b0;
    char unknown3b4[0x8];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x14];
    int f3e0;
    char unknown3e4[0xc];
    int f3f0;
    char unknown3f4[0x4];
    short f3f8;
    char unknown3fa[0x26];
    int f420;
    char unknown424[0x10];
    Vector3 f434;
} ObjectData;
struct S_frame_0 {
    int f00;
};
struct S_vv1 {
    float f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct Arg0_s3b0 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s324 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_frame_10 {
    float f00;
};
struct S_vv57 {
    char unknown0[0x4];
    short f04;
};
struct S_vv61 {
    char unknown0[0x4];
    short f04;
};
extern "C" char g_8c467960[];
extern "C" float floor_e(float);
extern "C" int call_8c18e768(int, int);
extern "C" void set_field_8c05af48(void *);
extern "C" int operation_8c05a420(int, float);
extern "C" void call_8c05be98(Object *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void clamp_scaled_contact(void *, void *, float, float, float);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void set_effect_words(void *, void *);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0d69a0(Object *o, int a1)
{
    Frame frame;
    int *p420;
    int *p424;
    S_vv3 *v3;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv4 *v4;
    Vector3 *p434;
    float v35;
    int v65;
    int v36;
    int t4;
    S_vv57 *v57;
    S_vv61 *v61;
    p420 = (int *)((char *)o + 0x420);
    p424 = (int *)((char *)o + 0x424);
    v3 = (S_vv3 *)((char *)o + 0x428);
    p434 = (Vector3 *)((char *)o + 0x434);
    v1 = (S_vv1 *)((char *)o + 0x42c);
    v2 = (S_vv2 *)((char *)o + 0x440);
    v4 = (S_vv4 *)((char *)o + 0x444);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->f3e0 = (unsigned int)((ObjectData *)o)->f3e0 >> 2 << 2;
        o->v102();
        o->v100();
        *p420 = 0;
        *p424 = 0;
        v1->f00 = 1.0f;
        ((ObjectData *)o)->f398 = 30.0f;
        v3->f00 = call_8c18e768((((ObjectData *)o)->f3f0 - (int)floor_e(2.5f)) * 0x3333, 0x28);
        *p434 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v2->f00 = (S_vv2_0 *)0;
        v4->f00 = (S_vv4_0 *)0;
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (!(*p420 >= 0x28)) {
            return;
        }
        ((ObjectData *)o)->f3e0 |= 0x10;
        ((ObjectData *)o)->f1ae = call_8c18e768((int)(((ObjectData *)o)->f3f8), 2);
        t4 = operation_8c05a420((int)o, 40000.0f);
        if (t4 > 0) {
            call_8c05be98(o, (int)(*(unsigned short *)((char *)(g_8c467960 - 0x8) + (t4 << 3))));
            operation_8c059ea4((void *)o, 4);
        } else {
            operation_8c059ea4((void *)o, 0xb);
        }
        return;
    case 0:
        operation_8c01c5f0((int)o);
        *p420 += 1;
        if (active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac)) != 0) {
            set_fields_wrapper_8c05c184((void *)o);
        }
        aim_direction_8c05bdd4((void *)o);
        rotate_scalar_pair((void *)(((char *)o + 0x3bc)), (void *)(((char *)o + 0x3c4)), (int)(v3->f00));
        v35 = ((ObjectData *)o)->f3c8;
        if (v35 > 80.0f) {
            v35 -= 3.0f;
            if (80.0f > v35) {
                v35 = 80.0f;
            }
        } else if (80.0f > v35) {
            v35 += 3.0f;
            if (v35 > 80.0f) {
                v35 = 80.0f;
            }
        }
        *(Vector3 *)&(&frame)->f38 = *(Vector3 *)&((ObjectData *)o)->f3c;
        *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&((ObjectData *)o)->f324;
        (&frame)->f04 = (int)(((ObjectData *)o)->f3b0);
        (&frame)->f10 = (S_frame_10 *)((char *)o + 0x3bc);
        (&frame)->f08 = (int)(((Arg0_s3b0 *)((char *)o + 0x3b0))->f04);
        ((ObjectData *)o)->f3c.f00 = (int)((&frame)->f04);
        ((Arg0_s3c *)((char *)o + 0x3c))->f04 = (int)((&frame)->f08);
        ((Arg0_s3c *)((char *)o + 0x3c))->f08 = (int)(((Arg0_s3b0 *)((char *)o + 0x3b0))->f08);
        v65 = ((Arg0_s3c *)((char *)o + 0x3c))->f04;
        v36 = ((ObjectData *)o)->f3c.f00;
        (&frame)->f0c = v65;
        ((ObjectData *)o)->f324.f00 = v36;
        ((Arg0_s324 *)((char *)o + 0x324))->f04 = v65;
        ((Arg0_s324 *)((char *)o + 0x324))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
        ((ObjectData *)o)->f324.f04 += 20.0f;
        clamp_scaled_contact((void *)o, (void *)(&(&frame)->f20), -(&frame)->f10->f00, -((ObjectData *)o)->f3c4, v35 * v1->f00);
        if (o->v19(&(&frame)->f20) == 0) {
            v1->f00 *= 0.8f;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f38;
            *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&(&frame)->f2c;
        } else {
            v1->f00 = 1.0f;
            *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&(&frame)->f38;
            *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&(&frame)->f2c;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(((char *)o + 0x3c)));
            clamp_and_apply_contact((void *)o, (&frame)->f20, (&frame)->f28, normalize_xz_checked((void *)(&(&frame)->f20)));
        }
        ((ObjectData *)o)->f64 = (int)(errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4) * 65536.0f / 6.28318405f);
        if (v3->f00 != 0) {
            (&frame)->f14 = 0;
            if (v3->f00 > 0) {
                (&frame)->f18 = ((ObjectData *)o)->f64;
            } else {
                (&frame)->f18 = ((ObjectData *)o)->f64 + -0x8000;
            }
            (&frame)->f1c = -0x4000;
            if (v2->f00 == 0) {
                v2->f00 = (S_vv2_0 *)create_effect_769c((void *)(((char *)o + 0x3c)), 0x115);
                if (v2->f00 != 0) {
                    set_effect_bit0((void *)(v2->f00));
                    set_effect_bits((void *)(v2->f00), (unsigned short)2);
                }
            } else {
                set_effect_words((void *)(v2->f00), (void *)(&(&frame)->f14));
                call_8c0a7608((void *)(v2->f00), (void *)(((char *)o + 0x3c)));
            }
            if (v4->f00 == 0) {
                v4->f00 = (S_vv4_0 *)create_effect_769c((void *)(((char *)o + 0x3c)), 0x116);
                if (v4->f00 != 0) {
                    set_effect_bit0((void *)(v4->f00));
                    set_effect_bits((void *)(v4->f00), (unsigned short)2);
                }
            } else {
                set_effect_words((void *)(v4->f00), (void *)(&(&frame)->f14));
                call_8c0a7608((void *)(v4->f00), (void *)(((char *)o + 0x3c)));
            }
        }
        o->v94();
        return;
    case 5:
        o->v99();
        ((ObjectData *)o)->f398 = 10.0f;
        if (v2->f00 != 0) {
            v57 = (S_vv57 *)v2->f00;
            v57->f04 |= 1;
            v2->f00 = (S_vv2_0 *)0;
        }
        if (v4->f00 != 0) {
            v61 = (S_vv61 *)v4->f00;
            v61->f04 |= 1;
            v4->f00 = (S_vv4_0 *)0;
        }
        set_field_8c05af54((void *)o);
        return;
    }
}
