/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13c45c
 * function: TBoss3VoloptP01_update_8c13c45c
 * language: c++
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 14 of 163 reference instruction lines
 * differing bytes: 9
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_dc Arg0_dc;
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
    virtual int v41();
    virtual int v42();
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x58];
    Arg0_dc *fdc;
    char unknowne0[0x210];
    int f2f0;
    float f2f4;
    int f2f8;
    char unknown2fc[0xe];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0xc];
    float f3a8;
    char unknown3ac[0x24];
    int f3d0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c13c694(Object *);
extern "C" void operation_8c13c604(void *);
extern "C" void TBoss3VoloptP01_update_8c13c45c(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c13c694(o);
        return;
    }
    t2 = o->v42();
    if (t2 != 0) {
        o->v71();
    } else {
        t3 = o->v41();
        if (t3 != 0 && ((((ObjectData *)o)->f34 & 0x4000000)) == 0) {
            o->v70();
        }
    }
    if (((((ObjectData *)o)->f34 & 0x4000)) != 0) {
        if (--((ObjectData *)o)->f2f8 <= 0) {
            ((ObjectData *)o)->f2f0 = 0;
            ((ObjectData *)o)->f2f4 = 0.0f;
            ((ObjectData *)o)->f2f8 = 0;
            ((ObjectData *)o)->f34 &= -0x4001;
        }
        return;
    }
    if (((ObjectData *)o)->f30a != ((ObjectData *)o)->f390) {
        if (((ObjectData *)o)->f398 != -1) {
            ((ObjectData *)o)->f398 = -1;
            operation_8c13c604((void *)o);
        }
        ((ObjectData *)o)->f30a = ((ObjectData *)o)->f390;
        ((ObjectData *)o)->f398 = 0;
    }
    operation_8c13c604((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f324.f04 = ((ObjectData *)o)->f3a8 + 18.0f + ((ObjectData *)o)->f324.f04;
    ((ObjectData *)o)->fdc->f04 = ((ObjectData *)o)->f3a8 + 18.0f;
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
    ((ObjectData *)o)->f3d0 += 0x400;
    o->v64();
}
