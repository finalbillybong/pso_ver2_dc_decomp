/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c071b18
 * function: operation_8c071b18
 * language: c++
 * reference size: 920 bytes
 * compiled size: 916 bytes (-0.4%)
 * differing lines: 140 of 343 reference instruction lines
 * differing bytes: 705
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c46891c S_g8c46891c;
typedef struct Arg0_6a4 Arg0_6a4;
typedef struct Arg0_6f4 Arg0_6f4;
typedef struct Arg0_73c Arg0_73c;
typedef struct Arg0_73c_0 Arg0_73c_0;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    float f08;
    char unknownc[0x8];
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
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2b6];
    volatile unsigned short f3a8;
    char unknown3aa[0x12];
    float f3bc;
    float f3c0;
    float f3c4;
    char unknown3c8[0x14];
    int f3dc;
    char unknown3e0[0x24];
    int f404;
    char unknown408[0x1f0];
    float f5f8;
    float f5fc;
    char unknown600[0x98];
    int f698;
    char unknown69c[0x8];
    Arg0_6a4 *f6a4;
    char unknown6a8[0x4];
    float f6ac;
    float f6b0;
    float f6b4;
    float f6b8;
    char unknown6bc[0x38];
    Arg0_6f4 *f6f4;
    char unknown6f8[0x44];
    Arg0_73c *f73c;
    char unknown740[0x104];
    float f844;
    float f848;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    char f14;
    char f15;
    short f16;
    short f18;
    short f1a;
    int f1c;
    float f20;
    float f24;
};
struct S_g8c46891c {
    char unknown0[0x8];
    float f08;
};
struct Arg0_73c_0 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern Block20 g_8c2fd304;
extern S_g8c46891c *g_8c46891c;
extern "C" void normalize_xz_checked(void *);
extern "C" float call_8c130334(float, float);
extern "C" void activate_offset_effect_immediately(void *);
extern "C" void operation_8c0368a8(void *);
extern "C" int offset_effect_threshold_reached(void *);
extern "C" int operation_8c05bbf8(void);
extern "C" void set_position_8c0f3504(void *, void *);
extern "C" void call_8c0f3514(void *, void *, Frame *, int);
extern "C" void call_8c05b338(Object *, void *, Frame *, void *);
extern "C" void TObjBoss1MokoHill_Solo_create_8c0ccdc0(void *);
extern "C" void operation_8c071b18(Object *o, int a1)
{
    Frame frame;
    float *pa;
    float *pb;
    int v3;
    char *v2;
    float t1;
    int t2;
    int t3;
    pa = &((ObjectData *)o)->f844;
    pb = &((ObjectData *)o)->f848;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 0x11;
        o->v102();
        ((ObjectData *)o)->f404 = 2;
        *(int *)((char *)o + 0x3dc) &= -0x101;
        ((ObjectData *)o)->f5f8 = ((ObjectData *)o)->f40 + -400.0f;
        ((ObjectData *)o)->f5fc = -400.0f;
        ((ObjectData *)o)->f3dc |= 0xc00;
        ((ObjectData *)o)->f3dc &= -0x381;
        o->v97();
        o->v100();
        *pa = 0.0f;
        ((ObjectData *)o)->f3bc = -((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f3c0 = 0.0f;
        ((ObjectData *)o)->f3c4 = -((ObjectData *)o)->f44;
        normalize_xz_checked((void *)(((char *)o + 0x3bc)));
        t1 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        ((ObjectData *)o)->f64 = (int)(t1 * 65536.0f / 6.28318405f);
        activate_offset_effect_immediately((void *)(((ObjectData *)o)->f6f4));
        return;
    case 2:
    case 11:
        if (680.0f > *pb) {
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
    case 7:
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f6b4;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f6b8;
        return;
    case 6:
        ((ObjectData *)o)->f6ac = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f6b0 = ((ObjectData *)o)->f44;
        return;
    case 0:
        *pa += 0.1f;
        if (*pa > 12.0f) {
            *pa = 12.0f;
        }
        *pb += *pa;
        ((ObjectData *)o)->f3c += ((ObjectData *)o)->f3bc * *pa;
        ((ObjectData *)o)->f44 += ((ObjectData *)o)->f3c4 * *pa;
        if (((ObjectData *)o)->f6f4 == 0) {
            return;
        }
        t2 = offset_effect_threshold_reached((void *)(((ObjectData *)o)->f6f4));
        if (t2 == 0) {
            return;
        }
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&g_8c2fd304;
        (&frame)->f00.f04 = g_8c46891c->f08;
        t3 = operation_8c05bbf8();
        if (t3 != 0) {
            v2 = (char *)((ObjectData *)o)->f6a4;
            set_position_8c0f3504((void *)(((ObjectData *)o)->f73c), (void *)(((char *)o + 0x3c)));
            v3 = (int)0xdc;
            (*(Arg0_73c_0 **)((char *)((char *)((ObjectData *)o)->f73c + 0x0) + (v3)))->f0c = (&frame)->f00.f08;
            (*(Arg0_73c_0 **)((char *)((char *)((ObjectData *)o)->f73c + 0x0) + (v3)))->f18 = 0x13a03;
            call_8c0f3514((void *)(((ObjectData *)o)->f73c), (void *)(((char *)(&frame) + 0xc)), (Frame *)((&frame)), (int)(v2));
            return;
        }
        call_8c05b338(o, (void *)(((char *)o + 0x3c)), (Frame *)((&frame)), (void *)(((ObjectData *)o)->f6a4));
        return;
    case 5:
        TObjBoss1MokoHill_Solo_create_8c0ccdc0((void *)(((ObjectData *)o)->f6f4));
        return;
    case 1:
    case 3:
    case 8:
    case 9:
    case 10:
        break;
    }
}
