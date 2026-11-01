/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15dd48
 * function: TObjEnePanBARA_ctor_8c15dd48
 * language: c++
 * reference size: 1160 bytes
 * compiled size: 1176 bytes (+1.4%)
 * differing lines: 296 of 440 reference instruction lines
 * differing bytes: 838
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct S_g8c4d8360 S_g8c4d8360;
typedef struct S_g8c4d8360_42c S_g8c4d8360_42c;
typedef struct S_x2416 S_x2416;
typedef struct S_x67216 S_x67216;
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
    virtual void v88(int);
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
    char unknown60[0x18];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    int f110;
    int f114;
    char unknown118[0x1a4];
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
    char unknown35c[0x10];
    int f36c;
    char unknown370[0x1c];
    int f38c;
    int f390;
    int f394;
    int f398;
    int f39c;
    char unknown3a0[0x20];
    Vector3 f3c0;
    float f3cc;
    char unknown3d0[0x10];
    int f3e0;
    char unknown3e4[0x14];
    int f3f8;
    char unknown3fc[0x2c];
    float f428;
    float f42c;
    float f430;
    float f434;
} ObjectData;
struct Frame {
    Block_frame_4 f04;
};
struct S_x2416 {
    Vector3 f00;
};
struct S_x67216 {
    Vector3 f00;
};
struct S_g8c4d8360 {
    char unknown0[0x42c];
    S_g8c4d8360_42c *f42c;
    int f430;
};
struct S_c8c1794c8 {
    float f00;
    float f04;
    float f08;
};
extern int g_8c316988;
extern int g_8c46ed10;
extern S_g8c4d8360 *g_8c4d8360;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void initialize_context_blend(void *);
extern "C" int copy_actor_records(void *, void *, int);
extern "C" void call_8c01c838(Object *, int);
extern "C" int record24_8c17948c(int);
extern "C" int record30_8c1794a0(int);
extern "C" int block32_8c1794b4(int);
extern "C" void call_8c0121a0(Object *, int, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" int call_8c161bdc(void *, void *);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" void start_context_blend(void *);
extern "C" void operation_8c15e92c(void *, int);
extern "C" Object *TObjEnePanBARA_ctor_8c15dd48(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v7;
    short v1;
    float v27;
    int t1;
    int t2;
    int t5;
    int t4;
    int t3;
    int t6;
    int t7;
    int t8;
    S_c8c1794c8 *t9;
    S_c8c1794c8 *t10;
    S_c8c1794c8 *t11;
    S_c8c1794c8 *t12;
    S_c8c1794c8 *t13;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26f4c0;
    initialize_context_blend((void *)(((char *)o + 0x408)));
    ((ObjectData *)o)->tag = (int)(g_8c316988);
    ((ObjectData *)o)->size = 0x438;
    ((ObjectData *)o)->f2bc |= 2;
    o->v88(a2);
    v1 = (short)((ObjectData *)o)->f30;
    if ((short)v1 < 0 || (short)v1 > 0xb4f) {
        v7 = (int)0;
        goto L_8c15ddf2;
    }
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&((S_x2416 *)(g_8c46ed10 + (short)v1 * 0xc))->f00;
    v7 = (int)1;
L_8c15ddf2:;
    if (v7 != 0) {
        (&frame)->f04.f00 = 0;
        (&frame)->f04.f06 = 0;
        if ((short)v1 >= 0 && !((short)v1 > 0xb4f)) {
            *(Vector3 *)&((S_x67216 *)(g_8c46ed10 + (short)v1 * 0xc))->f00 = *(Vector3 *)&(&frame)->f04;
        }
    }
    ((ObjectData *)o)->f39c = a3;
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c4d8360->f42c + 0xc) + (*(int *)((char *)0x8c2863e0 + (((ObjectData *)o)->f39c << 2)) << 4)));
    ((ObjectData *)o)->f38 = (int)(*(int *)((char *)((char *)g_8c4d8360->f42c + 0x8) + (*(int *)((char *)0x8c2863e0 + (((ObjectData *)o)->f39c << 2)) << 4)));
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    t1 = copy_actor_records((void *)o, (void *)((void *)0x8c31698c), 1);
    ((ObjectData *)o)->f398 = (int)t1;
    ((ObjectData *)o)->f110 = (int)(*(int *)((char *)0x8c316e48 + (((ObjectData *)o)->f39c << 2)));
    ((ObjectData *)o)->f114 = (int)(g_8c4d8360->f430);
    call_8c01c838(o, 0);
    ((ObjectData *)o)->ff0 = 0;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f320 = 0.0f;
    ((ObjectData *)o)->f31c = 0.0f;
    ((ObjectData *)o)->f318 = 0.0f;
    ((ObjectData *)o)->f334 = 0;
    switch (((ObjectData *)o)->f39c) {
    case 0:
        t2 = record24_8c17948c(0x32);
        t3 = record30_8c1794a0(0x32);
        t4 = block32_8c1794b4(0x32);
        call_8c0121a0(o, t2, t3, t4);
        break;
    case 1:
        t5 = record24_8c17948c(0x33);
        t6 = record30_8c1794a0(0x33);
        t7 = block32_8c1794b4(0x33);
        call_8c0121a0(o, t5, t6, t7);
        break;
    default:
        return o;
    }
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f36c = 0;
    if (((ObjectData *)o)->f39c == 0) {
        ((ObjectData *)o)->f38c = 0x17;
    } else {
        ((ObjectData *)o)->f38c = 0x16;
    }
    t8 = call_8c161bdc((void *)((void *)0x8c316e28), (void *)(((char *)o + 0x3fc)));
    ((ObjectData *)o)->f3f8 = (int)t8;
    if (((ObjectData *)o)->f3f8 == 0) {
        return o;
    }
    ((ObjectData *)o)->f3cc = 0.0f;
    ((ObjectData *)o)->f3e0 = 0;
    if (((ObjectData *)o)->f39c == 0) {
        t9 = record30_8c1794c8(0x32);
        ((ObjectData *)o)->f428 = t9->f00;
        t10 = record30_8c1794c8(0x32);
        ((ObjectData *)o)->f42c = t10->f04;
    } else {
        t11 = record30_8c1794c8(0x33);
        ((ObjectData *)o)->f428 = t11->f00;
        t12 = record30_8c1794c8(0x33);
        ((ObjectData *)o)->f430 = t12->f04;
        if (0.0f > ((ObjectData *)o)->f430) {
            ((ObjectData *)o)->f430 = 0.0f;
        } else {
            if (((ObjectData *)o)->f430 > 1.0f) {
                ((ObjectData *)o)->f430 = 1.0f;
            }
        }
        t13 = record30_8c1794c8(0x33);
        ((ObjectData *)o)->f434 = t13->f08;
        if (0.0f > ((ObjectData *)o)->f434) {
            ((ObjectData *)o)->f434 = 0.0f;
        } else {
            if (((ObjectData *)o)->f434 > 1.0f) {
                ((ObjectData *)o)->f434 = 1.0f;
            }
        }
        v27 = (float)((ObjectData *)o)->f430;
        if ((v27 + ((ObjectData *)o)->f434) > 1.0f) {
            ((ObjectData *)o)->f434 = 1.0f - v27;
        }
    }
    *(Vector3 *)&((ObjectData *)o)->f3c0 = *(Vector3 *)&((ObjectData *)o)->f3c;
    start_context_blend((void *)(((char *)o + 0x408)));
    ((ObjectData *)o)->f394 = 0;
    ((ObjectData *)o)->f390 = 0;
    operation_8c15e92c((void *)o, 0);
    return o;
}
