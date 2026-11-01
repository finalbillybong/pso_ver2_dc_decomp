/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13e100
 * function: TOMineIcon03_ctor_8c13e100
 * language: c++
 * reference size: 548 bytes
 * compiled size: 564 bytes (+2.9%)
 * differing lines: 110 of 209 reference instruction lines
 * differing bytes: 477
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4706a0 S_g8c4706a0;
typedef struct S_g8c4706a0_42c S_g8c4706a0_42c;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
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
    virtual void v93();
    virtual void v94();
    virtual void v95();
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
    char unknown54[0x18];
    float f6c;
    float f70;
    char unknown74[0x14];
    int f88;
    int f8c;
    int f90;
    char unknown94[0xc4];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x50];
    float f35c;
    float f360;
    int f364;
    float f368;
    unsigned short f36c;
    char unknown36e[0x16];
    int f384;
    int f388;
} ObjectData;
struct S_g8c4706a0 {
    char unknown0[0x42c];
    S_g8c4706a0_42c *f42c;
};
struct S_g8c4706a0_42c {
    char unknown0[0x28];
    int f28;
    int f2c;
    char unknown30[0x38];
    int f68;
    int f6c;
};
extern int g_8c313800;
extern int g_8c4703c0;
extern S_g8c4706a0 *g_8c4706a0;
extern "C" void TOMine_ctor_8c0fcd7c(Object *);
extern "C" void update_object_center(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TOMineIcon03_ctor_8c13e100(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TOMine_ctor_8c0fcd7c(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26d854;
    ((ObjectData *)o)->tag = (int)(g_8c313800);
    ((ObjectData *)o)->size = 0x390;
    o->v6(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    update_object_center((void *)o);
    ((ObjectData *)o)->f38 = (int)(g_8c4706a0->f42c->f68);
    ((ObjectData *)o)->f28 = (int)(g_8c4706a0->f42c->f6c);
    ((ObjectData *)o)->f384 = (int)(g_8c4706a0->f42c->f28);
    ((ObjectData *)o)->f388 = (int)(g_8c4706a0->f42c->f2c);
    ((ObjectData *)o)->f30a = 0;
    if (!(((ObjectData *)o)->f88 >= 0)) {
        ((ObjectData *)o)->f88 = 0;
    }
    if (6 > ((ObjectData *)o)->f8c) {
        ((ObjectData *)o)->f8c = 6;
    } else {
        if (((ObjectData *)o)->f8c > 8) {
            ((ObjectData *)o)->f8c = 8;
        }
    }
    if (!(((ObjectData *)o)->f90 >= 0)) {
        ((ObjectData *)o)->f90 = 0;
    }
    ((ObjectData *)o)->f368 = (float)((ObjectData *)o)->f88 * ((float)g_8c4703c0 * 2.0f + 1.0f);
    if (g_8c4703c0 == 3) {
        ((ObjectData *)o)->f368 *= 2.0f;
    }
    ((ObjectData *)o)->f364 = (int)(((ObjectData *)o)->f8c);
    ((ObjectData *)o)->f35c = ((ObjectData *)o)->f6c * 0.5f + 30.0f;
    ((ObjectData *)o)->f360 = ((ObjectData *)o)->f70 * 0.5f + 60.0f;
    o->v95();
    ((ObjectData *)o)->f36c = 0xffff;
    ((ObjectData *)o)->f34 |= 0x60040000;
    copy_actor_records((void *)o, (void *)((void *)0x8c30aad8), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    return o;
}
