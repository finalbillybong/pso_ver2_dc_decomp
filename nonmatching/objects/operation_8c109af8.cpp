/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c109af8
 * function: operation_8c109af8
 * language: c++
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 12 of 73 reference instruction lines
 * differing bytes: 18
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
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
class Object;
struct Frame {
    char unknown0[0xc];
};
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
    virtual void v76(int, Frame *);
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x324];
    Arg0_38c *f38c;
} ObjectData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void apply_actor_matrix_frame(void *);
extern "C" float object_random_fraction(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c1117f8(int, Object *, Frame *, void *, int);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c109af8(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    int t3;
    int ang;
    apply_actor_matrix_frame((void *)o);
    o->v76(0x18, (&frame));
    t2 = object_random_fraction((void *)o);
    ang = (int)((t2 * 240.0f - 120.0f) * 65536.0f / 360.0f);
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x128);
    if (t1 != 0) {
        call_8c1117f8(t1, o, (Frame *)((&frame)), (void *)(((ObjectData *)o)->f64), ang);
    }
    create_effect_777c((void *)(&frame), 0xf3);
    t3 = call_8c24e644(0x3000d, (void *)(((ObjectData *)o)->f38c));
    play_se_8c05fbf8(t3, (void *)(((char *)o + 0x3c)), 0, 0);
}
