/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04c6ec
 * function: TObjGrass_ctor_8c04c6ec
 * language: c++
 * reference size: 860 bytes
 * compiled size: 876 bytes (+1.9%)
 * differing lines: 196 of 318 reference instruction lines
 * differing bytes: 734
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TObjGrass.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4671a0 S_g8c4671a0;
typedef struct S_g8c4671a4 S_g8c4671a4;
typedef struct S_g8c4671a4_0 S_g8c4671a4_0;
typedef struct S_g8c4671a8 S_g8c4671a8;
typedef struct S_g8c4671d8 S_g8c4671d8;
typedef struct S_g8c4671d8_42c S_g8c4671d8_42c;
typedef struct Arg0_184 Arg0_184;
class Object;
class Arg0_s3cc;
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x1c];
    float f70;
    char unknown74[0x4];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x14];
    Arg0_184 *f184;
    char unknown188[0x134];
    int f2bc;
    char unknown2c0[0x4a];
    short f30a;
    short f30c;
    char unknown30e[0x16];
    Block_p0_324 f324;
    short f330;
    char unknown332[0x1e];
    int f350;
    char unknown354[0x2];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x10];
    int f36c;
    char unknown370[0x4];
    float f374;
    char unknown378[0xc];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x24];
    float f3b4;
    short f3b8;
    short f3ba;
    int f3bc;
    char unknown3c0[0x4];
    int f3c4;
    int f3c8;
    char unknown3cc[0x1c];
    int f3e8;
    int f3ec;
} ObjectData;
struct S_g8c4671d8 {
    char unknown0[0x42c];
    S_g8c4671d8_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
class Arg0_s3cc {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct Arg0_s3ccData {

} Arg0_s3ccData;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void initialize_object_8c114768(void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int operation_8c108698(int, int);
extern "C" Object *TObjGrass_ctor_8c04c6ec(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int v11;
    int v12;
    int v13;
    int t1;
    int t2;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c261ed4;
    initialize_object_8c114768((void *)(((char *)o + 0x3cc)));
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c2f2cc4);
    ((ObjectData *)o)->size = 0x420;
    o->v88(a2);
    ((ObjectData *)o)->f164 = ((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f158 = ((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f164 = ((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f48 = ((ObjectData *)o)->f3c;
    operation_8c04a43c((void *)o, (void *)0, 0.0f);
    ((ObjectData *)o)->f114 = (int)((*(S_g8c4671d8 **)0x8c4671d8)->f430);
    ((ObjectData *)o)->f70 = 1.3f;
    ((ObjectData *)o)->f384 = 0;
    ((ObjectData *)o)->f38c = 0xc;
    ((ObjectData *)o)->f356 = 0x1e;
    ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
    ((ObjectData *)o)->f350 = 0;
    v1 = (int)(((ObjectData *)o)->f384 << 4);
    ((ObjectData *)o)->f38 = (int)(*(int *)((char *)((char *)(*(S_g8c4671d8 **)0x8c4671d8)->f42c + 0x8) + (v1)));
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)(*(S_g8c4671d8 **)0x8c4671d8)->f42c + 0xc) + (v1)));
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c2f2bfc;
    if (((ObjectData *)o)->f374 > 0.0f) {
        ((ObjectData *)o)->f3b8 = 2;
    } else {
        ((ObjectData *)o)->f3b8 = 1;
    }
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    copy_actor_records((void *)o, (void *)(((ObjectData *)o)->f384 * 0x2c + 0x8c2f2c98), 1);
    ((ObjectData *)o)->f3ba = 0;
    call_8c0121a0(o, (void *)(*(S_g8c4671a0 **)0x8c4671a0), (void *)(*(S_g8c4671a4_0 **)((char *)((char *)*(S_g8c4671a4 **)0x8c4671a4 + 0x0) + (((ObjectData *)o)->f3ba << 2))), (void *)(*(S_g8c4671a8 **)0x8c4671a8));
    ((ObjectData *)o)->f36c = ((ObjectData *)o)->f384 * 0x1c + 0x8c2f2c7c;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f3b4 = 0.0f;
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f3bc = 0;
    v11 = (int)0;
    while (0xc > v11) {
        *(int *)((char *)((char *)o + 0x3f0) + (v11 << 2)) = 0;
        v11 = (int)(v11 + 1);
    }
    ((ObjectData *)o)->f2bc |= 2;
    ((ObjectData *)o)->f34 |= 0x4040000;
    ((Arg0_s3cc *)((char *)o + 0x3cc))->v3();
    ((ObjectData *)o)->f3c8 = 1;
    v12 = (int)-0x5fcfcfd0;
    v13 = (int)-0xff78;
    t1 = operation_8c108698(v12, v13);
    ((ObjectData *)o)->f3e8 = (int)t1;
    t2 = operation_8c108698(-0x5fcfcfd0, -0xff78);
    ((ObjectData *)o)->f3ec = (int)t2;
    ((ObjectData *)o)->f3c4 = 0;
    return o;
}
