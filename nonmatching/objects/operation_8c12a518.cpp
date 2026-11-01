/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12a518
 * function: operation_8c12a518
 * language: c++
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 10 of 135 reference instruction lines
 * differing bytes: 19
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
typedef struct S_g8c4d9980 S_g8c4d9980;
typedef struct S_g8c4d9980_42c S_g8c4d9980_42c;
typedef struct S_g8c4d9980_430 S_g8c4d9980_430;
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x18];
    int f38;
    char unknown3c[0x30];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x4];
    int f90;
    char unknown94[0x9c];
    int f130;
    char unknown134[0x220];
    float f354;
    char unknown358[0x10];
    int f368;
    float f36c;
    float f370;
    int f374;
    int f378;
} ObjectData;
struct S_g8c4d9980 {
    char unknown0[0x42c];
    S_g8c4d9980_42c *f42c;
    S_g8c4d9980_430 *f430;
};
struct S_g8c4d9980_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d9980_430 {
    char unknown0[0xc];
    int f0c;
};
extern int g_8c312504;
extern int g_8c4703c0;
extern S_g8c4d9980 *g_8c4d9980;
extern "C" void call_8c043418(Object *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void memset_8c12b880(void *, int, int);
extern "C" Object *operation_8c12a518(Object *o, int a1, int a2)
{
    Object **home = &o;
    float v5;
    (void)home;
    {
        Object *self = o;
        Object **hs = &self;
        (void)hs;
        call_8c043418(o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26c874;
        self->v6(a2);
        ((ObjectData *)self)->f38 = (int)(g_8c4d9980->f42c->f08);
        ((ObjectData *)self)->f130 = (int)(g_8c4d9980->f430->f0c);
        copy_actor_records((void *)self, (void *)((void *)0x8c3124d4), 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
        memset_8c12b880((void *)(((char *)self + 0x358)), 0, 0x10);
        ((ObjectData *)self)->f368 = 0;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26c5a4;
    ((ObjectData *)o)->tag = (int)(g_8c312504);
    ((ObjectData *)o)->size = 0x37c;
    ((ObjectData *)o)->f378 = (int)(((ObjectData *)o)->f88);
    ((ObjectData *)o)->f374 = (int)(((ObjectData *)o)->f90);
    if ((unsigned int)((ObjectData *)o)->f374 >= (unsigned int)3) {
        ((ObjectData *)o)->f374 = 2;
    }
    ((ObjectData *)o)->f36c = ((ObjectData *)o)->f6c + 30.0f - 1.0f;
    if (g_8c4703c0 != 3) {
        v5 = (float)1.0f;
    } else {
        v5 = (float)20.0f;
    }
    ((ObjectData *)o)->f354 = (((ObjectData *)o)->f74 + 100.0f) * v5;
    o->v86();
    ((ObjectData *)o)->f370 = 1.0f - ((ObjectData *)o)->f70;
    return o;
}
