/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c124afc
 * function: TObjEneBalClawBody_ctor_8c124afc
 * language: c++
 * reference size: 632 bytes
 * compiled size: 640 bytes (+1.3%)
 * differing lines: 166 of 217 reference instruction lines
 * differing bytes: 509
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d83a0 S_g8c4d83a0;
typedef struct S_g8c4d9920 S_g8c4d9920;
typedef struct S_g8c4d9928 S_g8c4d9928;
typedef struct S_g8c4d9930 S_g8c4d9930;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_s158 Arg0_s158;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg2 Arg2;
class Object;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xa8];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    int f158;
    char unknown15c[0x8];
    Vector3 f164;
    char unknown170[0x14];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x188];
    Block_p0_324 f324;
    short f330;
    short f332;
    char unknown334[0x26];
    short f35a;
    char unknown35c[0x48];
    int f3a4;
    char unknown3a8[0x20];
    float f3c8;
    float f3cc;
    float f3d0;
    int f3d4;
    float f3d8;
    char unknown3dc[0x18];
    short f3f4;
    char unknown3f6[0x2];
    int f3f8;
    int f3fc;
    int f400;
    int f404;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s158 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4d83a0 {
    char unknown0[0x430];
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg2 {
    char unknown0[0xa];
    short f0a;
};
extern int g_8c312294;
extern S_g8c4d83a0 *g_8c4d83a0;
extern S_g8c4d9920 *g_8c4d9920;
extern S_g8c4d9928 *g_8c4d9928;
extern S_g8c4d9930 *g_8c4d9930;
extern "C" void TObjEneBalClaw_ctor_8c11dbd0(Object *);
extern "C" void copy_actor_records(Object *, void *, int);
extern "C" void hs_8c01c838(Object *, short);
extern "C" void attach_and_insert_object(Object *);
extern "C" void request_actor_mode_seven(Object *);
extern "C" void hs_8c126650(Object *, int, int, int);
extern "C" void hs_8c0121a0(Object *, void *, void *, void *);
extern "C" Object *TObjEneBalClawBody_ctor_8c124afc(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v12;
    (void)home;
    TObjEneBalClaw_ctor_8c11dbd0(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26c004;
    ((ObjectData *)o)->tag = (int)(g_8c312294);
    ((ObjectData *)o)->size = 0x420;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f114 = (int)(g_8c4d83a0->f430);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c312170;
    copy_actor_records(o, (void *)0x8c312268, 1);
    ((ObjectData *)o)->ff0 = 0;
    hs_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    attach_and_insert_object(o);
    ((ObjectData *)o)->f3d4 = 0;
    ((ObjectData *)o)->f3d8 = 0.0f;
    ((ObjectData *)o)->f3a4 &= -0x10001;
    if (a2->f0a != 0) {
        request_actor_mode_seven(o);
    }
    ((ObjectData *)o)->f3c8 = 25.0f;
    ((ObjectData *)o)->f3cc = 40.0f;
    ((ObjectData *)o)->f3d0 = ((ObjectData *)o)->f3c8;
    ((ObjectData *)o)->f3f4 = 4;
    v12 = (int)0;
    while (4 > v12) {
        *(int *)((char *)((char *)o + 0x3e0) + (v12 << 2)) = 0xffff;
        v12 = (int)(v12 + 1);
    }
    hs_8c126650(o, 1, 0x3c8, v12);
    hs_8c0121a0(o, g_8c4d9920, g_8c4d9928, g_8c4d9930);
    ((ObjectData *)o)->f3f8 = 0;
    ((ObjectData *)o)->f3fc = 0;
    ((ObjectData *)o)->f400 = 0;
    ((ObjectData *)o)->f404 = 0;
    ((ObjectData *)o)->f34 |= 0x1000000;
    return o;
}
