/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151248
 * function: TBoss3VoloptMonitor_ctor_2_8c151248
 * language: c++
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 4 of 65 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da6d0 S_g8c4da6d0;
typedef struct S_g8c4da6d0_42c S_g8c4da6d0_42c;
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
    char unknown20[0x18];
    int f38;
    char unknown3c[0x31c];
    short f358;
    char unknown35a[0x2a];
    int f384;
} S_c8c122700Data;
struct S_g8c4da6d0 {
    char unknown0[0x42c];
    S_g8c4da6d0_42c *f42c;
};
struct S_g8c4da6d0_42c {
    char unknown0[0x18];
    int f18;
};
extern int g_8c315a34;
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da6d0 *g_8c4da6d0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjEnemyCustom_ctor_8c0c2354(void *, void *);
extern "C" void call_8c1510c8(S_c8c122700 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" S_c8c122700 *TBoss3VoloptMonitor_ctor_2_8c151248(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3b0);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TObjEnemyCustom_ctor_8c0c2354((void *)t1, g_8c44be94);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26e7f4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c315a34);
        ((S_c8c122700Data *)self)->f1e = 0x3b0;
        self->v88(a0);
        ((S_c8c122700Data *)self)->f384 = 0;
        ((S_c8c122700Data *)self)->f358 = 0;
        call_8c1510c8(self);
        copy_actor_records((void *)self, (void *)((void *)0x8c31591c), 1);
        ((S_c8c122700Data *)self)->f38 = (int)(g_8c4da6d0->f42c->f18);
    }
    return t1;
}
