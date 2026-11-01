/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c177dc4
 * function: TObjNpcBringer_ctor_8c177dc4
 * language: c++
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 10 of 146 reference instruction lines
 * differing bytes: 11
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
typedef struct S_g8c47061c S_g8c47061c;
typedef struct S_g8c47061c_42c S_g8c47061c_42c;
typedef struct S_g8c47061c_430 S_g8c47061c_430;
typedef struct Arg0_184 Arg0_184;
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
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93(int, int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x24];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x14];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    char unknown330[0x3c];
    void *f36c;
} ObjectData;
struct S_g8c47061c {
    char unknown0[0x42c];
    S_g8c47061c_42c *f42c;
    S_g8c47061c_430 *f430;
};
struct S_g8c47061c_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c319538;
extern S_g8c47061c *g_8c47061c;
extern "C" void TObjNpcBase_ctor_8c120188(Object *);
extern "C" void call_8c01c908(Object *, void *, void *, short);
extern "C" void call_8c043ca4(Object *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TObjNpcBringer_ctor_8c177dc4(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TObjNpcBase_ctor_8c120188(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c270b30;
    ((ObjectData *)o)->tag = (int)(g_8c319538);
    ((ObjectData *)o)->size = 0x3d4;
    o->v88(a2);
    {
        Vector3 *d = &((ObjectData *)o)->f164;
        Vector3 *v = &((ObjectData *)o)->f3c;
        *d = *v;
        ((ObjectData *)o)->f158 = *v;
        *d = *v;
        ((ObjectData *)o)->f48 = *v;
    }
    o->v93(0, 1);
    ((ObjectData *)o)->f38 = (int)(g_8c47061c->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c47061c->f42c->f0c);
    call_8c01c908(o, (void *)((void *)0x8c3194c0), (void *)(g_8c47061c->f430), ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c311bec;
    call_8c043ca4(o, (void *)((void *)0x8c311bc8));
    copy_actor_records((void *)o, (void *)((void *)0x8c3194e0), 2);
    attach_and_insert_object((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    return o;
}
