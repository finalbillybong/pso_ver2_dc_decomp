/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13a688
 * function: operation_8c13a688
 * language: c++
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 50 of 157 reference instruction lines
 * differing bytes: 60
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c00 S_g8c4d9c00;
typedef struct S_g8c4d9c04 S_g8c4d9c04;
typedef struct S_g8c4d9c08 S_g8c4d9c08;
typedef struct S_g8c4d9c10 S_g8c4d9c10;
typedef struct S_g8c4d9c10_42c S_g8c4d9c10_42c;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_dc Arg0_dc;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x1a];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x6c];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x120];
    int f2bc;
    char unknown2c0[0x64];
    Block_p0_324 f324;
    short f330;
    short f332;
    char unknown334[0x26];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x14];
    int f3a4;
    char unknown3a8[0x4];
    int f3ac;
    char unknown3b0[0x34];
    int f3e4;
} ObjectData;
struct S_g8c4d9c10 {
    char unknown0[0x42c];
    S_g8c4d9c10_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_g8c4d9c10_42c {
    char unknown0[0x188];
    int f188;
    int f18c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern int g_8c3136c8;
extern int g_8c4d9b9c;
extern S_g8c4d9c00 *g_8c4d9c00;
extern S_g8c4d9c04 *g_8c4d9c04;
extern S_g8c4d9c08 *g_8c4d9c08;
extern S_g8c4d9c10 *g_8c4d9c10;
extern int g_8c4d9c1c;
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0439bc(Object *, void *, void *, void *, float, float);
extern "C" void call_8c01c838(Object *, short);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c13a688(Object *o)
{
    int v8;
    int off;
    ((ObjectData *)o)->tag = (int)(g_8c3136c8);
    ((ObjectData *)o)->size = 0x3f0;
    ((ObjectData *)o)->f114 = (int)(g_8c4d9c10->f430);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c313630;
    copy_actor_records((void *)o, (void *)((void *)0x8c31369c), 1);
    ((ObjectData *)o)->f384 = 0;
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c313680;
    call_8c0439bc(o, g_8c4d9c00, g_8c4d9c04, g_8c4d9c08, 1.0f, 1.0f);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    off = 0x330;
    *(short *)((char *)o + off) = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = *(short *)((char *)o + off);
    ((ObjectData *)o)->f38c = 0x2e;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f38 = (int)(g_8c4d9c10->f42c->f188);
    ((ObjectData *)o)->f28 = (int)(g_8c4d9c10->f42c->f18c);
    ((ObjectData *)o)->f3a4 |= 0x10000;
    ((ObjectData *)o)->f3ac = 0;
    ((ObjectData *)o)->fdc->f18 |= 0x1800;
    o->v66();
    ((ObjectData *)o)->f2bc |= 4;
    ((ObjectData *)o)->f3e4 = 0;
    ((ObjectData *)o)->f34 |= 0x8000;
    if (g_8c4d9b9c != 0) {
        v8 = (int)0xa00;
    } else {
        v8 = (int)0x200;
    }
    g_8c4d9c1c = (int)v8;
}
