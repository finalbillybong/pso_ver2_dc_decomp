/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f2980
 * function: operation_8c1f2980
 * language: c++
 * reference size: 220 bytes
 * compiled size: 224 bytes (+1.8%)
 * differing lines: 52 of 94 reference instruction lines
 * differing bytes: 186
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_34_0 Arg0_34_0;
typedef struct S_vv1 S_vv1;
class S_vv2;
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0xc];
    Arg0_34 *f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    char unknown68[0x4];
    int f6c;
    char unknown70[0x28];
    float f98;
    float f9c;
    float fa0;
    Vector3 fa4;
};
struct Arg0_24 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_34 {
    Arg0_34_0 *f00;
};
class S_vv2 {
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
    virtual void v76(void *, void *);
};
typedef struct S_vv2Data {
    char unknown0[0x324];
    Vector3 f324;
} S_vv2Data;
extern int g_8c469b68;
extern "C" void operation_8c1f2980(Object *o, int a1)
{
    S_vv2 *v2;
    *(Vector3 *)((char *)o + 0xb0) = *(Vector3 *)&o->f24->f324;
    o->f4c = 0;
    o->f48 = 0;
    o->f44 = 0;
    o->f64 = 0;
    o->f60 = 0;
    o->f5c = 0;
    o->f58 = 0;
    o->f54 = 0;
    o->f50 = 0;
    o->fa0 = 0.0f;
    o->f9c = 0.0f;
    o->f98 = 0.0f;
    o->f40 = 0;
    o->f3c = 0;
    o->f38 = 0;
    o->f34 = (Arg0_34 *)0;
    o->f6c = a1;
    o->f34 = (Arg0_34 *)(g_8c469b68 + a1 * 0x64);
    v2 = (S_vv2 *)o->f24;
    if (v2 != 0) {
        if ((int)(o->f34->f00) == -1) {
            *(Vector3 *)&o->fa4 = *(Vector3 *)&((S_vv2Data *)v2)->f324;
            return;
        }
        v2->v76(o->f34->f00, &o->fa4);
    }
}
