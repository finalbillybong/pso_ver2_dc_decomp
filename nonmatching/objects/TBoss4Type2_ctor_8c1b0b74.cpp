/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b0b74
 * function: TBoss4Type2_ctor_8c1b0b74
 * language: c++
 * reference size: 1004 bytes
 * compiled size: 1020 bytes (+1.6%)
 * differing lines: 170 of 388 reference instruction lines
 * differing bytes: 736
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TBoss4Type2.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
typedef struct S_vv25_0 S_vv25_0;
typedef struct S_x21360 S_x21360;
typedef struct S_x80304 S_x80304;
class Object;
typedef struct Block_frame_4 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_4;
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
    virtual void v88(void *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x6];
    int f38;
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x4];
    int f64;
    char unknown68[0x10];
    Vector3 f78;
    char unknown84[0x238];
    int f2bc;
    char unknown2c0[0x58];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x2];
    int f334;
    char unknown338[0x22];
    short f35a;
    char unknown35c[0x30];
    int f38c;
    char unknown390[0x4];
    int f394;
    int f398;
    int f39c;
    char unknown3a0[0x8];
    int f3a8;
    char unknown3ac[0x1c];
    float f3c8;
    unsigned short f3cc;
    char unknown3ce[0x2];
    int f3d0;
    int f3d4;
    float f3d8;
    float f3dc;
    int f3e0;
    char unknown3e4[0x4];
    int f3e8;
    int f3ec;
    float f3f0;
    int f3f4;
    char unknown3f8[0x24];
    int f41c;
    int f420;
    int f424;
    int f428;
    char unknown42c[0x20];
    int f44c;
} ObjectData;
struct Arg2 {
    int f00;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_x80304 {
    Vector3 f00;
};
struct S_x21360 {
    Vector3 f00;
};
struct S_c8c1794c8 {
    float f00;
    char unknown4[0x14];
    int f18;
    int f1c;
};
extern int g_8c326138;
extern Vector3 g_8c326674;
extern int g_8c46ed10;
extern int g_8c4e2280;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" int copy_actor_records(void *, void *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void call_8c0121a0(Object *, int, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int call_8c161bdc(void *, void *);
extern "C" int create_effect_769c(void *, int);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" float floor_e(float);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c1b1668(void *, int);
extern "C" Object *TBoss4Type2_ctor_8c1b0b74(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    short v1;
    int v7;
    int v24;
    int v26;
    int v23;
    int t2;
    int v28;
    int v32;
    int v35;
    int t1;
    int v25;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c1794c8 *t7;
    float t8;
    S_c8c1794c8 *t9;
    int t10;
    S_c8c1794c8 *t11;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274c38;
    ((ObjectData *)o)->tag = (int)(g_8c326138);
    ((ObjectData *)o)->size = 0x474;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f394 = (int)(a2->f00);
    o->v88(((char *)a2 + 0x4));
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c1b0bf8;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x80304 *)(g_8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c1b0bf8:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x21360 *)(g_8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    ((ObjectData *)o)->f398 = (int)(g_8c4e2280);
    ((ObjectData *)o)->f28 = 0;
    ((ObjectData *)o)->f38 = 0;
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&g_8c326674;
    ((ObjectData *)o)->f64 = 0;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    t1 = copy_actor_records((void *)o, (void *)((void *)0x8c326560), 1);
    ((ObjectData *)o)->f39c = (int)t1;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f31c = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f334 = 0;
    t2 = record24_8c17948c(0x37);
    t3 = record30_8c1794a0(0x37);
    t4 = block32_8c1794b4(0x37);
    call_8c0121a0(o, t2, t3, t4);
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f38c = 0x2f;
    ((ObjectData *)o)->f3d4 = 0;
    ((ObjectData *)o)->f3d0 = 0;
    ((ObjectData *)o)->f3e0 = 0;
    ((ObjectData *)o)->f3dc = 0.4f;
    ((ObjectData *)o)->f3d8 = 0.0f;
    t5 = call_8c161bdc((void *)((void *)0x8c326634), (void *)(((char *)o + 0x450)));
    ((ObjectData *)o)->f44c = (int)t5;
    v24 = (int)0;
    v23 = (int)0x42c;
    while (2 > v24) {
        v25 = (int)(v24 << 2);
        t6 = create_effect_769c((void *)(((char *)o + 0x3c)), (int)(*(S_vv25_0 **)((char *)((char *)v25 + 0x0) + ((int)((void *)0x8c288f28)))));
        *(int *)((char *)((char *)((int)o + v23) + 0x0) + (v25)) = (int)t6;
        v24 = (int)(v24 + 1);
    }
    v26 = (int)v24;
    while (8 > v26) {
        *(int *)((char *)((char *)o + 0x42c) + (v26 << 2)) = 0;
        v26 = (int)(v26 + 1);
    }
    ((ObjectData *)o)->f3a8 = 0;
    ((ObjectData *)o)->f3e8 = 0;
    ((ObjectData *)o)->f3cc = 0xffff;
    t7 = record30_8c1794c8(0x37);
    t8 = floor_e(t7->f00);
    ((ObjectData *)o)->f41c = (int)t8;
    {
        Object *base = o;
        v28 = (int)((ObjectData *)base)->f41c;
        if (1 > v28 || v28 > 0x19) {
            ((ObjectData *)base)->f41c = 4;
        } else {
        }
    }
    ((ObjectData *)o)->f41c *= 0x4b;
    ((ObjectData *)o)->f420 = (int)((ObjectData *)o)->f41c + -7;
    t11 = record30_8c1794c8(0x37);
    v32 = (int)t11->f18;
    if (1 > v32 || v32 > 4) {
        v35 = (int)1;
    } else {
        v35 = (int)v32;
    }
    ((ObjectData *)o)->f424 = v35 + 8;
    t9 = record30_8c1794c8(0x37);
    ((ObjectData *)o)->f428 = (int)(t9->f1c);
    {
        Object *base = o;
        if (((ObjectData *)base)->f428 < 0 || ((ObjectData *)base)->f428 > 0xe) {
            ((ObjectData *)base)->f428 = 0;
        } else {
        }
    }
    ((ObjectData *)o)->f3c8 = 0.0f;
    ((ObjectData *)o)->f3ec = 0;
    ((ObjectData *)o)->f3f0 = 0.0f;
    {
        Object *base = o;
        t10 = call_8c18e768((int)(((ObjectData *)base)->f330), 2);
        ((ObjectData *)base)->f3f4 = (int)t10;
    }
    operation_8c1b1668((void *)o, 0);
    return o;
}
