/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13c298
 * function: TBoss3VoloptP01_ctor_2_8c13c298
 * language: c++
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 8 of 77 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss3VoloptP01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c122700;
class S_c8c122700 {
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
typedef struct S_c8c122700Data {
    int f00;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x3b4];
    S_c8c122700 *f3d4;
    int f3d8;
} S_c8c122700Data;
extern int g_8c3137a4;
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEnemyCustom_ctor_8c0c2354(void *, void *);
extern "C" void call_8c18e044(void *, void *, int, int, int);
extern "C" void call_8c13c0b4(S_c8c122700 *);
extern "C" void TObjVoloptShutter_ctor_8c15af90(void *, int);
extern "C" void operation_8c07de9c();
extern "C" S_c8c122700 *TBoss3VoloptP01_ctor_2_8c13c298(int a0)
{
    void *pm6;
    S_c8c122700 *t1;
    short pm7;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x434);
    if (!(t1 == 0)) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 *t2;
        unsigned int pm3;
        S_c8c122700 **home = &self;
        int pm5;
        pm6 = (void *)t1;
        TObjEnemyCustom_ctor_8c0c2354(pm6, g_8c44be94);
        *(void **)((char *)self + 0x18) = (void *)0x8c26d3b8;
        call_8c18e044((void *)((0x3dc + (char *)self)), operation_8c07de9c, 0, 8, 0xb);
        pm5 = 0;
        pm7 = (short)0x434;
        ((S_c8c122700Data *)self)->f3d8 = pm5;
        ((S_c8c122700Data *)self)->f00 = (g_8c3137a4);
        ((S_c8c122700Data *)self)->f1e = (int)(int)(int)pm7;
        self->v88(a0);
        call_8c13c0b4(self);
        pm3 = (unsigned int)0x38;
        t2 = heap_alloc_8c122700(g_8c4d97e0, pm3);
        (void)home;
        if (t2 != 0) {
            TObjVoloptShutter_ctor_8c15af90((void *)t2, 0);
        }
        ((S_c8c122700Data *)self)->f3d4 = t2;
    }
    return t1;
}
