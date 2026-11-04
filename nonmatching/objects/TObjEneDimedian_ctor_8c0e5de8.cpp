/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e5de8
 * function: TObjEneDimedian_ctor_8c0e5de8
 * language: c++
 * reference size: 1040 bytes
 * compiled size: 1056 bytes (+1.5%)
 * differing lines: 368 of 382 reference instruction lines
 * differing bytes: 960
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TObjEneDimedian.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe80 S_g8c46fe80;
typedef struct S_g8c46fe80_0 S_g8c46fe80_0;
typedef struct S_g8c46fe84 S_g8c46fe84;
typedef struct S_g8c46fe84_0 S_g8c46fe84_0;
typedef struct S_g8c46fe88 S_g8c46fe88;
typedef struct S_g8c46fe88_0 S_g8c46fe88_0;
typedef struct S_g8c46fe8c S_g8c46fe8c;
typedef struct S_g8c46fe8c_0 S_g8c46fe8c_0;
typedef struct S_g8c46fe90 S_g8c46fe90;
typedef struct S_g8c46fe90_42c S_g8c46fe90_42c;
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
    char unknown54[0x24];
    Vector3 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x40];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0xc];
    int f17c;
    char unknown180[0x4];
    Arg0_184 *f184;
    char unknown188[0x134];
    int f2bc;
    char unknown2c0[0x4c];
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
    char unknown370[0x14];
    int f384;
    char unknown388[0x8];
    short f390;
    short f392;
    int f394;
    int f398;
    char unknown39c[0x8];
    float f3a4;
    char unknown3a8[0x4];
    int f3ac;
    char unknown3b0[0x4];
    float f3b4;
    float f3b8;
    float f3bc;
    float f3c0;
    char unknown3c4[0x1c];
    int f3e0;
    int f3e4;
} ObjectData;
struct S_g8c46fe90 {
    char unknown0[0x42c];
    S_g8c46fe90_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_g8c46fe8c_0 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern "C" void call_8c0e3730(Object *);
extern "C" void initialize_object_8c0fbf7c(void *);
extern "C" void initialize_context_blend(void *);
extern "C" void operation_8c0e692c(void *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void call_8c0121a0(Object *, void *, void *, void *);
extern "C" void attach_and_insert_object(void *);
extern "C" float object_random_fraction(void *);
extern "C" int operation_8c05bbf8(void);
extern "C" int operation_8c108698(int, int);
extern "C" void start_context_blend(void *);
extern "C" Object *TObjEneDimedian_ctor_8c0e5de8(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v9;
    float t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    call_8c0e3730(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c267b24;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x3c4)));
    initialize_context_blend((void *)(((char *)o + 0x3e8)));
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c307e04);
    ((ObjectData *)o)->size = 0x404;
    o->v88(a2);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f350 = (int)(((ObjectData *)o)->f384);
    operation_8c0e692c((void *)o);
    v1 = (int)(((ObjectData *)o)->f384 << 4);
    ((ObjectData *)o)->f38 = (int)(*(int *)((char *)((char *)(*(S_g8c46fe90 **)0x8c46fe90)->f42c + 0x8) + (v1)));
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)(*(S_g8c46fe90 **)0x8c46fe90)->f42c + 0xc) + (v1)));
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c307c7c;
    ((ObjectData *)o)->f114 = (int)((*(S_g8c46fe90 **)0x8c46fe90)->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    copy_actor_records((void *)o, (void *)(((ObjectData *)o)->f350 * 0x2c + 0x8c307d80), 1);
    call_8c0121a0(o, (void *)(*(S_g8c46fe80_0 **)((char *)((char *)*(S_g8c46fe80 **)0x8c46fe80 + 0x0) + (((ObjectData *)o)->f350 << 2))), (void *)(*(S_g8c46fe84_0 **)((char *)((char *)*(S_g8c46fe84 **)0x8c46fe84 + 0x0) + (((ObjectData *)o)->f350 << 2))), (void *)(*(S_g8c46fe88_0 **)((char *)((char *)*(S_g8c46fe88 **)0x8c46fe88 + 0x0) + (((ObjectData *)o)->f350 << 2))));
    ((ObjectData *)o)->f36c = ((ObjectData *)o)->f350 * 0x1c + 0x8c307d2c;
    ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    attach_and_insert_object((void *)o);
    t1 = object_random_fraction((void *)o);
    ((ObjectData *)o)->f17c = (int)(t1 * 360.0f * 65536.0f / 360.0f);
    ((ObjectData *)o)->f356 = 0xf;
    ((ObjectData *)o)->f358 = ((ObjectData *)o)->f356;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f390 = 0;
    ((ObjectData *)o)->f392 = 0;
    ((ObjectData *)o)->f394 = 0;
    ((ObjectData *)o)->f398 = 0;
    ((ObjectData *)o)->f2bc |= 8;
    ((ObjectData *)o)->f34 |= 0x40000;
    ((ObjectData *)o)->f3a4 = -4.0f;
    t2 = operation_8c05bbf8();
    if (t2 != 0) {
        if (((ObjectData *)o)->f350 != 0) {
            if (((ObjectData *)o)->f350 == 1) {
                goto L_8c0e6018;
            }
            if (((ObjectData *)o)->f350 == 2) {
                goto L_8c0e601e;
            }
        }
        v9 = (int)-0xdf00e0;
        goto L_8c0e6040;
L_8c0e6018:;
        v10 = (int)-0xffc0;
        v9 = (int)v10;
        goto L_8c0e6040;
L_8c0e601e:;
        v11 = (int)-0x100;
        v14 = (int)v11;
    } else {
        if (((ObjectData *)o)->f350 != 1) {
            if (((ObjectData *)o)->f350 == 2) {
                goto L_8c0e603e;
            }
            v12 = (int)-0xffff01;
            v14 = (int)v12;
        } else {
            v13 = (int)-0x10000;
            v9 = (int)v13;
            goto L_8c0e6040;
L_8c0e603e:;
            v14 = (int)-0x100;
        }
    }
    v9 = (int)v14;
L_8c0e6040:;
    t3 = operation_8c108698(-0x5fcfcfd0, v9);
    ((ObjectData *)o)->f3e0 = (int)t3;
    t4 = operation_8c108698(-0x5fcfcfd0, v9);
    ((ObjectData *)o)->f3e4 = (int)t4;
    ((ObjectData *)o)->f3ac = 1;
    ((ObjectData *)o)->f3b4 = (*(S_g8c46fe8c_0 **)((char *)((char *)*(S_g8c46fe8c **)0x8c46fe8c + 0x0) + (((ObjectData *)o)->f350 << 2)))->f00;
    ((ObjectData *)o)->f3bc = (*(S_g8c46fe8c_0 **)((char *)((char *)*(S_g8c46fe8c **)0x8c46fe8c + 0x0) + (((ObjectData *)o)->f350 << 2)))->f04;
    ((ObjectData *)o)->f3b8 = (*(S_g8c46fe8c_0 **)((char *)((char *)*(S_g8c46fe8c **)0x8c46fe8c + 0x0) + (((ObjectData *)o)->f350 << 2)))->f08;
    ((ObjectData *)o)->f3c0 = (*(S_g8c46fe8c_0 **)((char *)((char *)*(S_g8c46fe8c **)0x8c46fe8c + 0x0) + (((ObjectData *)o)->f350 << 2)))->f0c;
    start_context_blend((void *)(((char *)o + 0x3e8)));
    return o;
}
