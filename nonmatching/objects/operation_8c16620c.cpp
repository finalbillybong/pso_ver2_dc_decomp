/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16620c
 * function: operation_8c16620c
 * language: c++
 * reference size: 624 bytes
 * compiled size: 620 bytes (-0.6%)
 * differing lines: 150 of 253 reference instruction lines
 * differing bytes: 468
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
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
class Object;
typedef struct Block_p0_3b8 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3b8;
typedef struct Block_p0_3ac {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3ac;
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
    virtual int v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x18];
    int f60;
    int f64;
    char unknown68[0x2bc];
    float f324;
    float f328;
    float f32c;
    char unknown330[0x78];
    int f3a8;
    Block_p0_3ac f3ac;
    Block_p0_3b8 f3b8;
} ObjectData;
struct S_vv3 {
    float f00;
};
struct S_vv1 {
    float f00;
};
struct S_vv6 {
    float f00;
};
struct S_vv5 {
    float f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv4 {
    float f00;
};
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c16620c(Object *o, int a1)
{
    S_vv6 *v6;
    S_vv5 *v5;
    S_vv4 *v4;
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv1 *v1;
    float v7;
    int v8;
    float t1;
    float t2;
    float t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x400);
    v2 = (S_vv2 *)((char *)o + 0x3f4);
    v3 = (S_vv3 *)((char *)o + 0x3f8);
    v4 = (S_vv4 *)((char *)o + 0x3fc);
    v5 = (S_vv5 *)((char *)o + 0x404);
    v6 = (S_vv6 *)((char *)o + 0x408);
    switch (a1) {
    case 5:
        break;
    case 4:
        o->v101();
        ((ObjectData *)o)->f3a8 &= -8;
        *(Vector3 *)&((ObjectData *)o)->f3b8 = *(Vector3 *)&((ObjectData *)o)->f3ac;
        vector_sub_in_place_8c37f6f0((void *)(((char *)o + 0x3b8)), (void *)(((char *)o + 0x324)));
        t1 = normalize_xz_checked((void *)(((char *)o + 0x3b8)));
        v3->f00 = t1;
        t2 = errno_wrap_8c130334(((ObjectData *)o)->f3b8.f00, ((ObjectData *)o)->f3b8.f08);
        ((ObjectData *)o)->f64 = (int)(t2 * 65536.0f / 6.28318405f);
        ((ObjectData *)o)->f60 = 0x4000;
        t3 = signed_sqrt_8c37f6c0((((ObjectData *)o)->f328 - ((ObjectData *)o)->f3ac.f04) * 2.0f / 0.2f);
        v1->f00 = t3 * 10.0f;
        v6->f00 = 10.0f;
        v5->f00 = 0.0f;
        v2->f00 = 0;
        v4->f00 = v3->f00;
        return;
    case 3:
        v7 = (float)((ObjectData *)o)->f3ac.f04;
        if (!(v7 > ((ObjectData *)o)->f328)) {
            return;
        }
        ((ObjectData *)o)->f328 = v7;
        operation_8c059ea4((void *)o, 2);
        return;
    case 0:
        ((ObjectData *)o)->f324 += ((ObjectData *)o)->f3b8.f00 * v6->f00;
        ((ObjectData *)o)->f32c += ((ObjectData *)o)->f3b8.f08 * v6->f00;
        v4->f00 -= v6->f00;
        if (v4->f00 < v1->f00) {
            v5->f00 -= 0.2f;
            ((ObjectData *)o)->f328 += v5->f00;
            v8 = (int)0x8000;
            if (((ObjectData *)o)->f60 >= v8) {
                ((ObjectData *)o)->f60 = (int)v8;
                goto L_8c1663ac;
            }
            v2->f00 += 0x300;
            ((ObjectData *)o)->f60 = v2->f00 + 0x4000;
        } else {
            ((ObjectData *)o)->f60 = 0x4000;
        }
L_8c1663ac:;
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f324;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f32c;
        t4 = o->v108();
        if (t4 == 0) {
            ((ObjectData *)o)->f3a8 &= -3;
            return;
        }
        ((ObjectData *)o)->f3a8 |= 2;
    }
}
