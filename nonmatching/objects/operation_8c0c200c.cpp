/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c200c
 * function: operation_8c0c200c
 * language: c++
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 52 of 76 reference instruction lines
 * differing bytes: 77
 * provenance: generator draft (mode ccastext)
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
typedef struct Arg0_64 Arg0_64;
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
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76(int, void *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x4];
    float f6c;
    char unknown70[0x88];
    float ff8;
    char unknownfc[0x304];
    float f400;
    char unknown404[0x1c];
    float f420;
} ObjectData;
extern "C" void operation_8c0c200c(Object *o)
{
    ((void (*)(void *))0x8c38ade4)((void *)0x8c400500);
    ((void (*)(int, float, float, float))0x8c3829bc)(0, ((ObjectData *)o)->f3c, ((ObjectData *)o)->f40 + ((ObjectData *)o)->f400 + ((ObjectData *)o)->f420, ((ObjectData *)o)->f44);
    ((void (*)(int, void *))0x8c37df90)(0, ((ObjectData *)o)->f64);
    ((void (*)(int, float, float, float))0x8c37e2e4)(0, ((ObjectData *)o)->f6c, ((ObjectData *)o)->f6c, ((ObjectData *)o)->f6c);
    ((void (*)(Object *, float))0x8c01cfc0)(o, ((ObjectData *)o)->ff8);
    ((void (*)(void))0x8c38ad10)();
    o->v76(0x55, ((char *)o + 0x3b8));
    o->v76(0x54, ((char *)o + 0x3c4));
}
