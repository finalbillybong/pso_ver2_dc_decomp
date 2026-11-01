/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7bec
 * function: operation_8c0d7bec
 * language: c++
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 16 of 80 reference instruction lines
 * differing bytes: 27
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
    char unknown20[0x2ea];
    short f30a;
    char unknown30c[0xd4];
    int f3e0;
    char unknown3e4[0xc];
    int f3f0;
} ObjectData;
extern int g_8c30719c;
extern int g_8c3071a0;
extern "C" void call_8c05bcc0(Object *);
extern "C" void initialize_object_8c114768(void *);
extern "C" void operation_8c05a02c(Object *, int);
extern "C" void call_8c0d487c(Object *);
extern "C" Object *operation_8c0d7bec(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v2;
    int v1;
    int v3;
    (void)home;
    {
        Object *self = o;
        Object **home2 = &self;
        (void)home2;
        call_8c05bcc0(o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2674dc;
        initialize_object_8c114768(((char *)self + 0x404));
        ((ObjectData *)self)->tag = (int)(g_8c30719c);
        ((ObjectData *)self)->size = 0x448;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2672e4;
    ((ObjectData *)o)->tag = (int)(g_8c3071a0);
    ((ObjectData *)o)->size = 0x450;
    operation_8c05a02c(o, a2);
    call_8c0d487c(o);
    ((ObjectData *)o)->f3f0 = 0;
    ((ObjectData *)o)->f3e0 &= -0x1001;
    v2 = (int)0;
    v1 = (int)0xffff;
    v3 = 0x448;
    while (4 > v2) {
        *(short *)((char *)((char *)o + v3) + (v2 << 1)) = v1;
        v2 = (int)(v2 + 1);
    }
    ((ObjectData *)o)->f30a = 0;
    o->v93(((ObjectData *)o)->f30a, 4);
    return o;
}
