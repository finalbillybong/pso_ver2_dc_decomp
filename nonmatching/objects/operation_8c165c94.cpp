/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c165c94
 * function: operation_8c165c94
 * language: c++
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 8 of 106 reference instruction lines
 * differing bytes: 14
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0xc];
} Block_frame_0;
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
};
typedef struct ObjectData {
    char unknown0[0xdc];
    int fdc;
    char unknowne0[0x2c8];
    int f3a8;
    char unknown3ac[0x20];
    int f3cc;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
};
extern Block20 g_8c2864f0;
extern "C" void create_effect_7cc0(void *, int, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" float operation_8c14491c(void);
extern "C" void call_8c05b410(Object *, Frame *);
extern "C" void create_effect(void *, int, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c165c94(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int pm4;
    S_vv2 *v2;
    v1 = (S_vv1 *)(0x3e4 + (char *)o);
    v2 = (S_vv2 *)(0x3e8 + (char *)o);
    switch (a1) {
        case 5:
        break;
        case 4:
        o->v102();
        ((ObjectData *)o)->f3a8 &= -8;
        ((ObjectData *)o)->f3cc = 0;
        v1->f00 = 0;
        v2->f00 = 0;
        a1 = ((ObjectData *)o)->fdc;
        pm4 = 0;
        create_effect_7cc0((void *)(a1 + 0x1c), 0x16a, pm4, 6);
        return;
        case 3:
        if (!(2 == v2->f00)) {
            return;
        }
        operation_8c059ea4((void *)o, (int)(char)0);
        return;
        case 0:
        v1->f00 = 1 + v1->f00;
        if (v1->f00 > 0x1e) {
            float t1;
            *(Block20 *)&(&frame)->f00 = *(&g_8c2864f0);
            t1 = operation_8c14491c();
            (&frame)->f00.f04 = t1;
            call_8c05b410(o, ((&frame)));
            create_effect((void *)(0x1c + ((ObjectData *)o)->fdc), 0x16b, 0x40);
            v2->f00 = 2;
            play_se_8c05fbf8(0x30005, (void *)(((char *)o + 0x324)), 0, 0);
        }
    }
}
