/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d8294
 * function: operation_8c0d8294
 * language: c++
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 10 of 276 reference instruction lines
 * differing bytes: 14
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv35 S_vv35;
class Object;
class Arg0_s404;
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
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0xb2];
    short f1ae;
    char unknown1b0[0x230];
    int f3e0;
    char unknown3e4[0x14];
    short f3f8;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv35 {
    char unknown0[0x4];
    short f04;
};
class Arg0_s404 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4();
    virtual int v5();
};
typedef struct Arg0_s404Data {

} Arg0_s404Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int call_8c0d7de4(Object *, int);
extern "C" void operation_8c0d89e0(int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void call_8c0a7608(void *, Frame *);
extern "C" void operation_8c0d8294(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    S_vv35 *v35;
    int t1;
    int t2;
    float t3;
    float t4;
    int t5;
    int t6;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x440);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 7;
        operation_8c059ef8((void *)o, 0x10);
        o->v102();
        *(int *)((char *)o + 0x3e0) &= -3;
        ((ObjectData *)o)->f3e0 |= 1;
        v1->f00 = 0;
        v2->f00 = (S_vv2_0 *)0;
        return;
    case 3:
        if (v1->f00 != 3) {
            return;
        }
        if (((((ObjectData *)o)->f3e0 & 0x10)) != 0) {
            ((ObjectData *)o)->f3e0 &= -0x11;
            ((ObjectData *)o)->f1ae = ((ObjectData *)o)->f3f8;
            v3 = (int)0;
            while (4 > v3) {
                t1 = call_8c0d7de4(o, v3);
                operation_8c0d89e0(t1);
                v3 = (int)(v3 + 1);
            }
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                if (((((ObjectData *)o)->f3e0 & 0x80000)) != 0) {
                    ((Arg0_s404 *)((char *)o + 0x404))->v3();
                    v1->f00 = 1;
                } else {
                    ((ObjectData *)o)->f3e0 |= 0x80000;
                    ((Arg0_s404 *)((char *)o + 0x404))->v2();
                    v1->f00 = 2;
                }
            }
            if (12.0f > ((ObjectData *)o)->ff8) {
                goto L_8c0d8480;
            }
            if (v2->f00 == 0) {
                t2 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x114);
                v2->f00 = (S_vv2_0 *)(int)t2;
                if (v2->f00 == 0) {
                    goto L_8c0d8480;
                }
                set_effect_bit0((void *)(v2->f00));
                goto L_8c0d8480;
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            t3 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
            (&frame)->f00.f00 += t3 * 15.0f;
            (&frame)->f00.f04 += 17.0f;
            t4 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
            (&frame)->f00.f08 += t4 * 15.0f;
            call_8c0a7608((void *)(v2->f00), (Frame *)((&frame)));
            break;
        case 1:
            t5 = ((Arg0_s404 *)((char *)o + 0x404))->v5();
            if (t5 == 0) {
                goto L_8c0d8480;
            }
            v1->f00 = 3;
            ((ObjectData *)o)->f3e0 &= -0x80001;
            break;
        case 2:
            t6 = ((Arg0_s404 *)((char *)o + 0x404))->v4();
            if (t6 != 0) {
                v1->f00 = 3;
            }
        }
L_8c0d8480:;
        o->v108();
        o->v95();
        return;
    case 5:
        if (v2->f00 != 0) {
            v35 = (S_vv35 *)v2->f00;
            v35->f04 |= 1;
            v2->f00 = (S_vv2_0 *)0;
        }
    }
}
