/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a068c
 * function: operation_8c1a068c
 * language: c++
 * reference size: 436 bytes
 * compiled size: 464 bytes (+6.4%)
 * differing lines: 140 of 157 reference instruction lines
 * differing bytes: 376
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc5c0 S_g8c4dc5c0;
typedef struct S_g8c4dc5c0_42c S_g8c4dc5c0_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg0_s48 Arg0_s48;
class Object;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
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
    char unknown2c[0xc];
    Arg0_38 *f38;
    Block_p0_3c f3c;
    int f48;
    char unknown4c[0x8];
    Vector3 f54;
    char unknown60[0xf8];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x28];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x5e];
    float f390;
    float f394;
    float f398;
    int f39c;
    float f3a0;
    float f3a4;
    int f3a8;
    Vector3 f3ac;
    int f3b8;
} ObjectData;
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s48 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4dc5c0 {
    char unknown0[0x42c];
    S_g8c4dc5c0_42c *f42c;
};
struct S_g8c4dc5c0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c31cf40;
extern S_g8c4dc5c0 *g_8c4dc5c0;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" Object *operation_8c1a068c(Object *o, int a1, int a2)
{
    Object **home = &o;
    char *v1;
    int v2;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272d18;
    ((ObjectData *)o)->tag = (int)(g_8c31cf40);
    ((ObjectData *)o)->size = 0x3bc;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    v1 = (char *)((ObjectData *)o)->f3c.f00;
    v2 = (int)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    ((ObjectData *)o)->f48 = (int)v1;
    ((Arg0_s48 *)((char *)o + 0x48))->f04 = (int)v2;
    ((Arg0_s48 *)((char *)o + 0x48))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4dc5c0->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4dc5c0->f42c->f0c);
    copy_actor_records((void *)o, (void *)((void *)0x8c31cf14), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    operation_8c05426c((void *)o, 0, 0x10000000);
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f198 = ((ObjectData *)o)->f330 = 0x12c;
    ((ObjectData *)o)->f390 = 400.0f;
    ((ObjectData *)o)->f394 = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f398 = 60.0f;
    ((ObjectData *)o)->f39c = 0;
    ((ObjectData *)o)->f3a0 = 0.0f;
    ((ObjectData *)o)->f3a4 = 0.0f;
    ((ObjectData *)o)->f3a8 = 0;
    *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f54;
    ((ObjectData *)o)->f3b8 = 1;
    return o;
}
