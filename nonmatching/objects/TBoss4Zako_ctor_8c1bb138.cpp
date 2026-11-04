/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bb138
 * function: TBoss4Zako_ctor_8c1bb138
 * language: c++
 * reference size: 1008 bytes
 * compiled size: 1020 bytes (+1.2%)
 * differing lines: 274 of 385 reference instruction lines
 * differing bytes: 765
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * class header: src/include/classes/TBoss4Zako.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct Arg2 Arg2;
typedef struct S_x37392 S_x37392;
typedef struct S_x83040 S_x83040;
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
    unsigned short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x6];
    int f38;
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    int f60;
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
    int f390;
    Arg0_394 *f394;
    char unknown398[0x4];
    int f39c;
    int f3a0;
    int f3a4;
    float f3a8;
    float f3ac;
    float f3b0;
    float f3b4;
    float f3b8;
    float f3bc;
    int f3c0;
    int f3c4;
    int f3c8;
    float f3cc;
    Arg0_3d0 *f3d0;
    int f3d4;
    int f3d8;
    int f3dc;
} ObjectData;
struct Arg2 {
    int f00;
};
struct Arg0_394 {
    char unknown0[0x3a4];
    int f3a4;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_x37392 {
    Vector3 f00;
};
struct S_x83040 {
    Vector3 f00;
};
struct S_c8c1794c8 {
    float f00;
};
extern int g_8c327d20;
extern int g_8c46ed10;
extern int g_8c4e2280;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" int copy_actor_records(void *, void *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void call_8c0121a0(Object *, int, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" int call_8c18e8a0(int, int);
extern "C" float object_random_fraction(void *);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" Object *TBoss4Zako_ctor_8c1bb138(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    int v7;
    short v1;
    float v25;
    float v31;
    int t1;
    int t3;
    int t2;
    int t4;
    int t5;
    int t6;
    float t7;
    float t8;
    S_c8c1794c8 *t9;
    S_c8c1794c8 *t10;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275370;
    ((ObjectData *)o)->tag = (int)(g_8c327d20);
    ((ObjectData *)o)->size = 0x3e0;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f394 = (Arg0_394 *)a2->f00;
    *(int *)((char *)((ObjectData *)o)->f394 + 0x3a4) += 1;
    o->v88(((char *)a2 + 0x4));
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c1bb1c8;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x37392 *)(g_8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c1bb1c8:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x83040 *)(g_8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    ((ObjectData *)o)->f39c = (int)(g_8c4e2280);
    ((ObjectData *)o)->f28 = 0;
    ((ObjectData *)o)->f38 = 0;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    t1 = copy_actor_records((void *)o, (void *)((void *)0x8c327d24), 1);
    ((ObjectData *)o)->f3a0 = (int)t1;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f31c = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f334 = 0;
    t2 = record24_8c17948c(0x35);
    t3 = record30_8c1794a0(0x35);
    t4 = block32_8c1794b4(0x35);
    call_8c0121a0(o, t2, t3, t4);
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f38c = 0;
    ((ObjectData *)o)->f3a4 = 0;
    t5 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x103);
    ((ObjectData *)o)->f3d0 = (Arg0_3d0 *)(int)t5;
    if (t5 != 0) {
        set_effect_bits((void *)(((ObjectData *)o)->f3d0), (unsigned short)0x40);
    }
    ((ObjectData *)o)->f3b4 = 0.0f;
    ((ObjectData *)o)->f3b0 = 0.0f;
    ((ObjectData *)o)->f3ac = 0.0f;
    ((ObjectData *)o)->f3a8 = 0.0f;
    ((ObjectData *)o)->f3c0 = (int)((float)(((ObjectData *)o)->f20 & 3) * 10.0f);
    ((ObjectData *)o)->f60 = 0;
    ((ObjectData *)o)->f64 = ((ObjectData *)o)->f20 << 0xe;
    ((ObjectData *)o)->f3d4 = 0;
    ((ObjectData *)o)->f3c4 = 0;
    {
        Object *base = o;
        t6 = call_8c18e8a0((int)(((ObjectData *)base)->f20), 6);
        ((ObjectData *)base)->f3c8 = (t6 + 1) * 0x1c2;
    }
    ((ObjectData *)o)->f3cc = 0.0f;
    t7 = object_random_fraction((void *)o);
    ((ObjectData *)o)->f3d8 = (int)(t7 * 65536.0f);
    t8 = object_random_fraction((void *)o);
    ((ObjectData *)o)->f3dc = (int)(t8 * 2184.0f + 1092.0f);
    t9 = record30_8c1794c8(0x35);
    ((ObjectData *)o)->f3b8 = t9->f00;
    {
        Object *base = o;
        v25 = (float)((ObjectData *)base)->f3b8;
        if (v25 <= 0.333333343f || v25 > 5.83333302f) {
            ((ObjectData *)base)->f3b8 = 0.583333313f;
        } else {
        }
    }
    t10 = record30_8c1794c8(0x39);
    ((ObjectData *)o)->f3bc = t10->f00;
    {
        Object *base = o;
        v31 = (float)((ObjectData *)base)->f3bc;
        if (v31 <= 0.333333343f || v31 > 10.2083321f) {
            ((ObjectData *)base)->f3bc = 1.02083325f;
        } else {
        }
    }
    ((ObjectData *)o)->f390 = 0;
    return o;
}
