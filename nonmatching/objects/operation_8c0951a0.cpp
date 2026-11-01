/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0951a0
 * function: operation_8c0951a0
 * language: c++
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 18 of 132 reference instruction lines
 * differing bytes: 36
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
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x350];
    float f370;
    char unknown374[0x68];
    Object *f3dc;
    int f3e0;
    int f3e4;
    char unknown3e8[0x1c];
    float f404;
    char unknown408[0xe0];
    int f4e8;
    int f4ec;
    char unknown4f0[0x20];
    int f510;
} ObjectData;
extern int g_8c300a6c;
extern int g_8c300a70;
extern "C" void call_8c05bcc0(Object *);
extern "C" void initialize_object_8c114768(void *);
extern "C" void operation_8c05a02c(void *, int);
extern "C" float floor_e(float);
extern "C" void call_8c090680(Object *);
extern "C" void operation_8c05b92c(void *, int);
extern "C" Object *operation_8c0951a0(Object *o, int a1, int a2)
{
    Object **home = &o;
    char *pm8;
    void *pm4;
    float pm10;
    int pm7;
    int v6;
    ObjectData *pm2;
    ObjectData *pm11;
    ObjectData *pm6;
    char *pm9;
    int pm14;
    float pm15;
    int pm1;
    (void)home;
    {
        Object *self = o;
        Object **home2 = &self;
        ObjectData *pm13;
        ObjectData *pm5;
        (void)home2;
        call_8c05bcc0(o);
        *(void **)(0x18 + (char *)self) = (void *)0x8c265520;
        initialize_object_8c114768((void *)((0x3e8 + (char *)self)));
        ((ObjectData *)self)->tag = (g_8c300a6c);
        pm13 = (ObjectData *)self;
        (pm13)->size = (short)0x4e8;
        operation_8c05a02c((void *)self, a2);
        ((ObjectData *)self)->f3e4 = 0;
        pm10 = floor_e(((ObjectData *)self)->f370);
        if (!((int)pm10 != 0)) {
            pm2 = (ObjectData *)self;
            a2 = (pm2)->f3e4 | 0x100;
            ((ObjectData *)self)->f3e4 = a2;
            pm6 = (ObjectData *)self;
            a2 = ((ObjectData *)self)->f3e4 & -0x201;
            (pm6)->f3e4 = a2;
        } else {
            ((ObjectData *)self)->f3e4 |= 0x200;
            pm6 = (ObjectData *)self;
            a2 = -0x101 & (pm6)->f3e4;
            (pm6)->f3e4 = a2;
        }
        pm5 = (ObjectData *)self;
        (pm5)->f3dc = self;
        pm2 = (ObjectData *)self;
        (pm2)->f3e0 = 2;
        call_8c090680(self);
    }
    pm9 = (char *)o;
    pm8 = pm9;
    pm4 = (void *)0x8c26532c;
    *(void **)(0x18 + pm8) = pm4;
    ((ObjectData *)o)->tag = (g_8c300a70);
    pm6 = (ObjectData *)o;
    pm1 = 0x514;
    v6 = 0;
    (pm6)->size = (int)(short)(pm1);
    o->v111();
    pm15 = ((ObjectData *)o)->f404;
    pm11 = (ObjectData *)o;
    pm14 = 0;
    pm10 = 10.0f + pm15;
    pm2 = pm11;
    (pm2)->f404 = pm10;
    pm7 = 8;
    ((ObjectData *)o)->f4e8 = pm7;
    ((ObjectData *)o)->f4ec = pm14;
    while (8 > v6) {
        pm8 = (v6 << 2) + (0x4f0 + (char *)o);
        *(int *)(pm8) = 0;
        pm7 = 1 + v6;
        v6 = pm7;
    }
    pm6 = (ObjectData *)o;
    pm2 = pm6;
    (pm2)->f510 = 0;
    pm4 = (void *)o;
    operation_8c05b92c(pm4, 0x1d);
    return o;
}
