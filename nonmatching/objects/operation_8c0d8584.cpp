/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d8584
 * function: operation_8c0d8584
 * language: c++
 * reference size: 412 bytes
 * compiled size: 412 bytes (+0.0%)
 * differing lines: 60 of 152 reference instruction lines
 * differing bytes: 75
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
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg2 Arg2;
class Object;
class Arg0_s404;
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
    virtual void v88();
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
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x8];
    float f4c;
    char unknown50[0x8c];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
    short f30a;
    char unknown30c[0x68];
    float f374;
    char unknown378[0x68];
    int f3e0;
    char unknown3e4[0x8];
    int f3ec;
    int f3f0;
    char unknown3f4[0x54];
    short f448;
    char unknown44a[0x2];
    float f44c;
    float f450;
    float f454;
    float f458;
} ObjectData;
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x352];
    float f374;
};
struct Arg0_dc {
    char unknown0[0x20];
    float f20;
};
class Arg0_s404 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1(int);
    virtual void v2();
};
typedef struct Arg0_s404Data {

} Arg0_s404Data;
extern int g_8c30719c;
extern int g_8c3071a4;
extern "C" void initialize_object_8c114768(void *);
extern "C" Object *operation_8c0d8584(Object *o, int a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    (void)home;
    {
        Object *base = o;
        Object **bhome = &base;
        (void)bhome;
        ((void (*)(Object *))0x8c05bcc0)(o);
        *(void **)((char *)base + 0x18) = (void *)(void *)0x8c2674dc;
        initialize_object_8c114768(((char *)base + 0x404));
        ((ObjectData *)base)->tag = (int)(g_8c30719c);
        ((ObjectData *)base)->size = 0x448;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2670ec;
    ((ObjectData *)o)->tag = (int)(g_8c3071a4);
    ((ObjectData *)o)->size = 0x45c;
    ((ObjectData *)o)->f448 = a2->f20;
    ((void (*)(Object *, Arg2 *))0x8c05a0b4)(o, a2);
    ((ObjectData *)o)->f374 = a2->f374;
    ((ObjectData *)o)->f20 = a3;
    ((ObjectData *)o)->f30 = a4;
    ((void (*)(Object *))0x8c0d487c)(o);
    ((ObjectData *)o)->f3f0 = 0;
    ((ObjectData *)o)->f3e0 |= 0x1000;
    ((void (*)(Object *))0x8c0d89ec)(o);
    ((ObjectData *)o)->f3ec = -0x4f5000;
    ((ObjectData *)o)->f40 = -500.0f;
    ((ObjectData *)o)->f4c = -500.0f;
    ((ObjectData *)o)->fdc->f20 = -500.0f;
    ((ObjectData *)o)->f34 |= 0x800;
    ((ObjectData *)o)->f44c = 0.0f;
    ((ObjectData *)o)->f450 = 0.0f;
    ((ObjectData *)o)->f454 = 0.0f;
    ((ObjectData *)o)->f458 = 0.0f;
    ((Arg0_s404 *)((char *)o + 0x404))->v1(0);
    ((Arg0_s404 *)((char *)o + 0x404))->v2();
    ((ObjectData *)o)->f30a = 8;
    o->v93(((ObjectData *)o)->f30a, 4);
    return o;
}
