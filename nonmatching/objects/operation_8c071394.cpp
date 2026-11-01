/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c071394
 * function: operation_8c071394
 * language: c++
 * reference size: 972 bytes
 * compiled size: 972 bytes (+0.0%)
 * differing lines: 58 of 388 reference instruction lines
 * differing bytes: 74
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_6f4 Arg0_6f4;
typedef struct Arg0_700 Arg0_700;
typedef struct Arg0_s858 Arg0_s858;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
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
    virtual void v93(int, int);
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
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x9c];
    volatile unsigned short f3a8;
    char unknown3aa[0x32];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x10];
    float f6ac;
    float f6b0;
    float f6b4;
    char unknown6b8[0x3c];
    Arg0_6f4 *f6f4;
    char unknown6f8[0x8];
    Arg0_700 *f700;
    char unknown704[0x140];
    float f844;
    float f848;
    char unknown84c[0xc];
    Vector3 f858;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_s858 {
    char unknown0[0x4];
    float f04;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
    float f0c;
    float f10;
    char f14;
    char f15;
    short f16;
    short f18;
    short f1a;
    int f1c;
    float f20;
    float f24;
    char f28;
    char f29;
    short f2a;
    short f2c;
    short f2e;
    int f30;
    float f34;
    float f38;
};
struct Arg0_700 {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    float f1c;
};
extern "C" char g_8c284c60[];
extern "C" void activate_offset_effect(void *);
extern "C" void operation_8c0368a8(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void TObjBoss1MokoHill_Solo_create_8c0ccdc0(void *);
extern "C" void operation_8c071394(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    Vector3 *p858;
    float *p844;
    float *p848;
    int v4;
    float t1;
    float t2;
    float t3;
    float t4;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    v2 = (S_vv2 *)((char *)o + 0x830);
    p858 = (Vector3 *)((char *)o + 0x858);
    p844 = (float *)((char *)o + 0x844);
    p848 = (float *)((char *)o + 0x848);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x11;
        o->v102();
        ((ObjectData *)o)->f404 = 2;
        *(int *)((char *)o + 0x3dc) &= -0x101;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f3c.f04 + -400.0f;
        ((ObjectData *)o)->f5fc = -400.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x381;
        o->v97();
        o->v100();
        *p858 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v1->f00 = 0x64;
        v2->f00 = 0;
        ((Arg0_s858 *)p858)->f04 = *(float *)(g_8c284c60 + 0x4);
        *p844 = 0.0f;
        *p848 = 0.0f;
        activate_offset_effect((void *)(((ObjectData *)o)->f6f4));
        return;
    case 2:
    case 11:
        if (v2->f00 == 1) {
            o->v93(0x1b, 6);
            (&frame)->f28 = 0x12;
            (&frame)->f29 = 5;
            (&frame)->f2a = ((ObjectData *)o)->f20;
            (&frame)->f2c = 0x1b;
            (&frame)->f2e = ((ObjectData *)o)->f698;
            (&frame)->f30 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f34 = ((ObjectData *)o)->f6ac;
            (&frame)->f38 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f28));
            return;
        }
        if (((((ObjectData *)o)->f700->f08 & 2)) == 0) {
        } else {
            o->v93(0x13, 6);
            (&frame)->f14 = 0x12;
            (&frame)->f15 = 5;
            (&frame)->f16 = ((ObjectData *)o)->f20;
            (&frame)->f18 = 0x13;
            (&frame)->f1a = ((ObjectData *)o)->f698;
            (&frame)->f1c = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f20 = ((ObjectData *)o)->f6ac;
            (&frame)->f24 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&(&frame)->f14));
        }
        return;
    case 8:
        v1->f00 += 1;
        v4 = (int)v1->f00;
        if (!(v4 >= 0x1e)) {
            return;
        }
        v1->f00 = 0;
        if (!(((ObjectData *)o)->f700->f1c > 0.1f)) {
            v2->f00 = 1;
        } else {
            ((ObjectData *)o)->f64 = (Arg0_64 *)((ObjectData *)o)->f700->f18;
            ((ObjectData *)o)->f6ac = (float)(int)((ObjectData *)o)->f64;
            ((ObjectData *)o)->f6b0 = 0.0f;
            (&frame)->f00 = 0x12;
            (&frame)->f01 = 5;
            (&frame)->f02 = ((ObjectData *)o)->f20;
            (&frame)->f04 = ((ObjectData *)o)->f30a;
            (&frame)->f06 = ((ObjectData *)o)->f698;
            (&frame)->f08 = ((ObjectData *)o)->f3a8 & 0xffff;
            (&frame)->f0c = ((ObjectData *)o)->f6ac;
            (&frame)->f10 = ((ObjectData *)o)->f6b0;
            operation_8c0368a8((void *)(&frame));
        }
        return;
    case 7:
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)((ObjectData *)o)->f6b4;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = (float)(int)((ObjectData *)o)->f64;
        ((ObjectData *)o)->f6b0 = 0.0f;
        return;
    case 0:
        t1 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
        t2 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
        ((ObjectData *)o)->f3c.f00 += t1 * 4.0f;
        ((ObjectData *)o)->f3c.f08 += t2 * 4.0f;
        t3 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)p858);
        t4 = signed_sqrt_8c37f6c0(t3);
        *p858 = *(Vector3 *)&((ObjectData *)o)->f3c;
        *p844 += t4;
        return;
    case 5:
        TObjBoss1MokoHill_Solo_create_8c0ccdc0((void *)(((ObjectData *)o)->f6f4));
        return;
    case 1:
    case 3:
    case 9:
    case 10:
        break;
    }
}
