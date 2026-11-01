/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c090680
 * function: operation_8c090680
 * language: c++
 * reference size: 896 bytes
 * compiled size: 900 bytes (+0.4%)
 * differing lines: 164 of 294 reference instruction lines
 * differing bytes: 643
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_g8c469de0 S_g8c469de0;
typedef struct S_g8c469dec S_g8c469dec;
typedef struct S_g8c469df8 S_g8c469df8;
typedef struct S_g8c469e10 S_g8c469e10;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_3dc Arg0_3dc;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x2896 S_x2896;
class Object;
class Arg0_s3e8;
typedef struct Block_p0_4c0 {
    float f00;
    char unknown4[0xc];
} Block_p0_4c0;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x1f2];
    short f30a;
    char unknown30c[0x60];
    void *f36c;
    char unknown370[0x28];
    float f398;
    char unknown39c[0x40];
    Arg0_3dc *f3dc;
    int f3e0;
    char unknown3e4[0x20];
    float f404;
    float f408;
    float f40c;
    float f410;
    float f414;
    int f418;
    int f41c;
    int f420;
    int f424;
    int f428;
    int f42c;
    char unknown430[0x54];
    int f484;
    int f488;
    int f48c;
    int f490;
    int f494;
    int f498;
    int f49c;
    float f4a0;
    float f4a4;
    float f4a8;
    float f4ac;
    float f4b0;
    float f4b4;
    int f4b8;
    int f4bc;
    Block_p0_4c0 f4c0;
    int f4d0;
    int f4d4;
    int f4d8;
    int f4dc;
    int f4e0;
    unsigned short f4e4;
} ObjectData;
struct S_g8c469e10 {
    char unknown0[0x430];
    int f430;
};
struct S_x2896 {
    Vector3 f00;
};
struct Arg0_3dc {
    char unknown0[0x20];
    short f20;
};
class Arg0_s3e8 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
typedef struct Arg0_s3e8Data {

} Arg0_s3e8Data;
extern Block16 g_8c284fd8;
extern S_g8c469e10 *g_8c469e10;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void call_8c059c74(Object *);
extern "C" void refresh_follow_effect_8c05af60(void *, void *, int);
extern "C" void call_8c01c838(Object *, short);
extern "C" void operation_8c05b950(void *, void *, void *, void *);
extern "C" void operation_8c05b68c(void *);
extern "C" void operation_8c05b92c(void *, int);
extern "C" void operation_8c05bf44(void *, int);
extern "C" void operation_8c05c1bc(void *, int);
extern "C" void set_field_8c05af48(void *);
extern "C" int rand(void);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c0cba20(int, Object *, int);
extern "C" void operation_8c090bac(void *);
extern "C" void call_8c05b08c(Object *, void *, int);
extern "C" void operation_8c090680(Object *o)
{
    int v1;
    int v4;
    int v9;
    int t1;
    int t2;
    call_8c059c74(o);
    o->v111();
    refresh_follow_effect_8c05af60((void *)o, (void *)((void *)0x8c300984), 1);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c3009e8;
    ((ObjectData *)o)->f114 = (int)(g_8c469e10->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    v1 = (int)(((ObjectData *)o)->f3e0 << 2);
    operation_8c05b950((void *)o, (void *)(*(S_g8c469de0 **)((char *)0x8c469de0 + (v1))), (void *)(*(S_g8c469dec **)((char *)0x8c469dec + (v1))), (void *)(*(S_g8c469df8 **)((char *)0x8c469df8 + (v1))));
    operation_8c05b68c((void *)o);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c300968;
    operation_8c05b92c((void *)o, 0x1c);
    ((ObjectData *)o)->f398 = 10.0f;
    operation_8c05bf44((void *)o, 0x2d);
    operation_8c05c1bc((void *)o, 0x2d);
    set_field_8c05af48((void *)o);
    ((ObjectData *)o)->f34 |= 0x1000000;
    ((ObjectData *)o)->f484 = (int)(*(int *)((char *)0x8c469e04 + (((ObjectData *)o)->f3e0 << 2)));
    ((Arg0_s3e8 *)((char *)o + 0x3e8))->v2();
    ((ObjectData *)o)->f404 = 45.0f;
    ((ObjectData *)o)->f408 = 15.0f;
    t1 = rand();
    ((ObjectData *)o)->f40c = (float)t1 / 32768.0f * 5.0f + 15.0f;
    ((ObjectData *)o)->f410 = ((ObjectData *)o)->f408;
    ((ObjectData *)o)->f414 = ((ObjectData *)o)->f3c.f04 + ((ObjectData *)o)->f410;
    ((ObjectData *)o)->f418 = 4;
    ((ObjectData *)o)->f41c = 0;
    ((ObjectData *)o)->f420 = 0;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3c);
    if (t2 != 0) {
        call_8c0cba20(t2, o, 5);
    }
    ((ObjectData *)o)->f424 = (int)t2;
    ((ObjectData *)o)->f428 = 0;
    ((ObjectData *)o)->f42c = 0;
    v9 = (int)0;
    goto L_8c0907fa;
    v4 = (int)0;
L_8c0907e2:;
    *(Vector3 *)&((S_x2896 *)((char *)(int *)((char *)o + 0x430) + v4 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v9 = (int)(v4 + 1);
L_8c0907fa:;
    v4 = (int)v9;
    if (7 > v9) {
        goto L_8c0907e2;
    }
    ((ObjectData *)o)->f488 = 0;
    ((ObjectData *)o)->f48c = 0;
    ((ObjectData *)o)->f490 = 0;
    ((ObjectData *)o)->f494 = 0;
    ((ObjectData *)o)->f498 = 0;
    ((ObjectData *)o)->f49c = 0;
    ((ObjectData *)o)->f4a0 = 0.0f;
    ((ObjectData *)o)->f4a4 = 0.0f;
    ((ObjectData *)o)->f4a8 = 0.0f;
    ((ObjectData *)o)->f4ac = 0.0f;
    ((ObjectData *)o)->f4b0 = 0.0f;
    ((ObjectData *)o)->f4b4 = 0.0f;
    ((ObjectData *)o)->f4b8 = 0;
    ((ObjectData *)o)->f4bc = 0;
    *(Block16 *)&((ObjectData *)o)->f4c0 = *(Block16 *)&g_8c284fd8;
    ((ObjectData *)o)->f4c0.f00 = 0.0f;
    ((ObjectData *)o)->f4d4 = 0;
    ((ObjectData *)o)->f4d0 = 0;
    ((ObjectData *)o)->f4d8 = 0;
    ((ObjectData *)o)->f4dc = 0;
    ((ObjectData *)o)->f4e0 = 0;
    operation_8c090bac((void *)o);
    call_8c05b08c(o, (void *)(((ObjectData *)o)->fdc), 0);
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
    if (((ObjectData *)o)->f3dc != 0) {
        ((ObjectData *)o)->f4e4 = ((ObjectData *)o)->f3dc->f20;
        return;
    }
    ((ObjectData *)o)->f4e4 = 0xffff;
}
