/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c150d90
 * function: operation_8c150d90
 * language: c++
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 16 of 93 reference instruction lines
 * differing bytes: 17
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
typedef struct S_vv1 S_vv1;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x98];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
    char unknown39c[0x8];
    int f3a4;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern "C" void operation_8c01c5f0(Object *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void transform_actor_records(void *);
extern "C" void operation_8c150d90(Object *o)
{
    unsigned short pm2;
    S_vv1 *v1;
    int m;
    void *pm1;
    switch (((ObjectData *)o)->f398) {
        case -1:
        break;
        case 0:
        ((ObjectData *)o)->f3a4 |= 1;
        ((ObjectData *)o)->ff0 = (short)0;
        operation_8c01c5f0(o);
        m = 0x40000;
        ((ObjectData *)o)->f40 = 80.0f;
        ((ObjectData *)o)->f34 = ((ObjectData *)o)->f34 | m;
        ((ObjectData *)o)->fdc->f18 = 4 | ((ObjectData *)o)->fdc->f18;
        pm2 = (unsigned short)0;
        v1 = (S_vv1 *)((ObjectData *)o)->fdc;
        m = -3;
        v1->f18 &= m;
        pm1 = (void *)((0x3c + (char *)o));
        play_se_8c05fbf8(0x30006, pm1, (int)(int)pm2, 0);
        ((ObjectData *)o)->f398 = 1;
        case 1:
        ((ObjectData *)o)->f40 = ((ObjectData *)o)->f40 - 0.5f;
        if (!(((ObjectData *)o)->f40 > 50.0f)) {
            ((ObjectData *)o)->f40 = 50.0f;
            ((ObjectData *)o)->f3a4 = (int)((unsigned int)((ObjectData *)o)->f3a4 >> 1 << 1);
            ((ObjectData *)o)->f34 &= -0x40001;
            o->v67();
        }
    }
    transform_actor_records((void *)o);
}
