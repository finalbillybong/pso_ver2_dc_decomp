/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04faf0
 * function: TObjEneLappy_ctor_8c04faf0
 * language: c++
 * reference size: 1012 bytes
 * compiled size: 1012 bytes (+0.0%)
 * differing lines: 66 of 388 reference instruction lines
 * differing bytes: 57
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneLappy.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467200 S_g8c467200;
typedef struct S_g8c467208 S_g8c467208;
typedef struct S_g8c467210 S_g8c467210;
typedef struct S_g8c467220 S_g8c467220;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg2 Arg2;
typedef struct S_x43632 S_x43632;
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
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    Vector3 f60;
    char unknown6c[0xc];
    Vector3 f78;
    char unknown84[0x58];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x14];
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
    char unknown334[0x22];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    float f370;
    char unknown374[0x10];
    int f384;
    int f388;
    int f38c;
    short f390;
    char unknown392[0x2];
    char f394;
    char f395;
    short f396;
    char unknown398[0x2];
    short f39a;
    short f39c;
    short f39e;
    short f3a0;
    char unknown3a2[0x10];
    short f3b2;
} ObjectData;
struct S_g8c467220 {
    char unknown0[0x430];
    int f430;
};
struct Arg2 {
    char unknown0[0xa];
    short f0a;
    char unknownc[0x4];
    Vector3 f10;
    Vector3 f1c;
    char unknown28[0x14];
    short f3c;
    short f3e;
};
struct S_x43632 {
    float f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c2f2f68;
extern S_g8c467220 *g_8c467220;
extern "C" void TObjEnemy_ctor_8c012008(void *);
extern "C" float object_random_fraction(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void call_8c05196c(Object *);
extern "C" void attach_and_insert_object(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" int operation_8c05bbf8(void);
extern "C" Object *TObjEneLappy_ctor_8c04faf0(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int v2;
    int v1;
    int v3;
    int v7;
    int v9;
    int v12;
    float t1;
    float t2;
    int t3;
    float t4;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c262040;
    ((ObjectData *)o)->tag = (int)(g_8c2f2f68);
    ((ObjectData *)o)->size = 0x3c0;
    o->v88(a2);
    ((ObjectData *)o)->f114 = (int)(g_8c467220->f430);
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&a2->f10;
    *(Vector3 *)&((ObjectData *)o)->f60 = *(Vector3 *)&a2->f1c;
    v1 = (int)((char *)a2 + 0x28);
    v2 = (int)0;
    while (5 > v2) {
        ((S_x43632 *)((char *)(int *)((char *)o + 0x370) + (v2 << 2)))->f00 = *(float *)((char *)((char *)v1 + 0x0) + (v2 << 2));
        v2 = (int)(v2 + 1);
    }
    v3 = (int)(a2->f3c != 0);
    ((ObjectData *)o)->f384 = (int)v3;
    t1 = object_random_fraction((void *)o);
    if (0.001f > t1) {
        ((ObjectData *)o)->f384 = 1;
    }
    if (((ObjectData *)o)->f384 == 0) {
        ((ObjectData *)o)->f38c = 5;
    } else {
        ((ObjectData *)o)->f38c = 6;
    }
    ((ObjectData *)o)->f388 = a2->f3e;
    ((ObjectData *)o)->f356 = 0xf;
    ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f54 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f390 = 0;
    ((ObjectData *)o)->f3b2 = 0;
    ((ObjectData *)o)->f39e = -1;
    ((ObjectData *)o)->f3a0 = 0;
    ((ObjectData *)o)->f39c = 0;
    {
        Object *base = o;
        if (!((int)((ObjectData *)base)->f370 >= 0)) {
            v9 = (int)0;
        } else {
            if (1 > (int)((ObjectData *)base)->f370) {
                v7 = (int)(int)((ObjectData *)base)->f370;
            } else {
                v7 = (int)1;
            }
            v9 = (int)v7;
        }
        ((ObjectData *)base)->f394 = v9;
    }
    ((ObjectData *)o)->f396 = 0;
    ((ObjectData *)o)->f36c = (void *)(void *)0x8c2f2f04;
    copy_actor_records((void *)o, (void *)((void *)0x8c2f2f3c), 1);
    if (a2->f0a > 0) {
        ((ObjectData *)o)->f390 |= 0x60;
        ((ObjectData *)o)->f394 = 1;
        ((ObjectData *)o)->f34 &= -0x800001;
        ((ObjectData *)o)->fdc->f18 = (unsigned int)((ObjectData *)o)->fdc->f18 >> 1 << 1;
    }
    v12 = (int)(((ObjectData *)o)->f384 << 2);
    call_8c0121a0(o, (void *)(*(S_g8c467200 **)((char *)0x8c467200 + (v12))), (void *)(*(S_g8c467208 **)((char *)0x8c467208 + (v12))), (void *)(*(S_g8c467210 **)((char *)0x8c467210 + (v12))));
    call_8c05196c(o);
    ((ObjectData *)o)->f330 = ((ObjectData *)o)->f198;
    ((ObjectData *)o)->f332 = ((ObjectData *)o)->f19a;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    attach_and_insert_object((void *)o);
    t2 = object_random_fraction((void *)o);
    ((ObjectData *)o)->f39a = (int)((t2 + 1.0f) * 6.0f * 30.0f);
    ((ObjectData *)o)->f2bc |= 1;
    ((ObjectData *)o)->f34 |= 0x40000;
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c2f2e58;
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f395 = ((ObjectData *)o)->f394;
    t3 = operation_8c05bbf8();
    if (t3 != 0) {
        t4 = object_random_fraction((void *)o);
        if (0.0333333351f > t4) {
            ((ObjectData *)o)->f390 |= 0x400;
        }
    }
    return o;
}
