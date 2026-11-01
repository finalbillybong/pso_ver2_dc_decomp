/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ad480
 * function: operation_8c1ad480
 * language: c++
 * reference size: 784 bytes
 * compiled size: 804 bytes (+2.6%)
 * differing lines: 162 of 307 reference instruction lines
 * differing bytes: 600
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_L8c4e2290 S_L8c4e2290;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
typedef struct S_x36112 S_x36112;
typedef struct S_x39472 S_x39472;
class Object;
typedef struct Block_frame_4 {
    int f00;
    char unknown4[0x2];
    short f06;
    char unknown8[0x4];
} Block_frame_4;
typedef struct Block_p2_0 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x3c];
} Block_p2_0;
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
    virtual void v88(Arg2 *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x18];
    Vector3 f78;
    char unknown84[0x294];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    int f334;
    char unknown338[0x58];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    int f3a8;
    int f3ac;
    int f3b0;
} ObjectData;
struct Arg2 {
    Block_p2_0 f00;
};
struct S_L8c4e2290 {
    char unknown0[0x2];
    short f02;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_x36112 {
    Vector3 f00;
};
struct S_x39472 {
    Vector3 f00;
};
struct S_c8c1794c8 {
    char unknown0[0x18];
    int f18;
    int f1c;
};
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void set_field_8c1ae1e0(void *);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void call_8c0121a0(Object *, int, int, int);
extern "C" void insert_object_by_id(void *);
extern "C" void operation_8c1adfe4(void *);
extern "C" int operation_8c1ae1a8(void);
extern "C" void bgm_play_area_8c100850(int);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" void operation_8c1ae374(Object *, int);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c1ae010(void *, int);
extern "C" Object *operation_8c1ad480(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    int v7;
    short v1;
    int t1;
    int t5;
    int t3;
    int t2;
    int t4;
    int t6;
    int t7;
    S_c8c1794c8 *t8;
    S_c8c1794c8 *t9;
    int t10;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2748f4;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c325228);
    ((ObjectData *)o)->size = 0x3c4;
    set_field_8c1ae1e0((void *)o);
    if (a2->f00.f02 != 0x200) {
        return o;
    }
    *(Object **)0x8c4e22dc = (Object *)o;
    o->v88(a2);
    *(Block64 *)&*(Block64 *)0x8c4e2290 = *(Block64 *)&a2->f00;
    ((S_L8c4e2290 *)0x8c4e2290)->f02 = 0;
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c1ad51e;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x36112 *)(*(int *)0x8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c1ad51e:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x39472 *)(*(int *)0x8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f31c = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f334 = 0;
    if (*(int *)0x8c4703c0 == 0) {
        t1 = record24_8c17948c(0x37);
        t2 = record30_8c1794a0(0x37);
        t3 = block32_8c1794b4(0x37);
        call_8c0121a0(o, t1, t2, t3);
    } else {
        t4 = record24_8c17948c(0x38);
        t5 = record30_8c1794a0(0x38);
        t6 = block32_8c1794b4(0x38);
        call_8c0121a0(o, t4, t5, t6);
    }
    insert_object_by_id((void *)o);
    ((ObjectData *)o)->f34 |= 0x2000000;
    operation_8c1adfe4((void *)o);
    t7 = operation_8c1ae1a8();
    ((ObjectData *)o)->f3ac = (int)t7;
    *(int *)0x8c4e228c = *(int *)0x8c4e2288 = *(int *)0x8c4e2284 = 0;
    ((ObjectData *)o)->f3b0 = 0;
    ((ObjectData *)o)->f3a4 = 0;
    ((ObjectData *)o)->f3a8 = 0;
    bgm_play_area_8c100850(4);
    *(int *)0x8c4e22d0 = 0;
    ((ObjectData *)o)->f390 = 0;
    t8 = record30_8c1794c8(0x36);
    *(int *)0x8c4e22d4 = (int)(t8->f18);
    if (t8->f18 < 0 || t8->f18 > 0xe) {
        *(int *)0x8c4e22d4 = 0;
    } else {
    }
    t9 = record30_8c1794c8(0x36);
    *(int *)0x8c4e22d8 = (int)(t9->f1c);
    if (t9->f1c < 0 || t9->f1c > 0xe) {
        *(int *)0x8c4e22d8 = 0;
    } else {
    }
    operation_8c1ae374(o, 0);
    ((ObjectData *)o)->f398 = -1;
    t10 = operation_8c03d338();
    if (t10 != 0) {
        operation_8c1ae010((void *)o, 0);
    } else {
        operation_8c1ae010((void *)o, 1);
    }
    return o;
}
