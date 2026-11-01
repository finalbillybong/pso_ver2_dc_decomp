/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1eb5c0
 * function: operation_8c1eb5c0
 * language: c++
 * reference size: 444 bytes
 * compiled size: 452 bytes (+1.8%)
 * differing lines: 72 of 176 reference instruction lines
 * differing bytes: 351
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    virtual void v76(int, Frame *);
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2ea];
    short f30c;
    char unknown30e[0x42];
    int f350;
} ObjectData;
struct Frame {
    char unknown0[0xc];
};
extern "C" int operation_8c1aaabc(void *);
extern "C" void create_bound_effect_8c02a728(void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void extra_b6394(void *, void *, void *, int, void *, int, float);
extern "C" void operation_8c013b2c(int, float, float);
extern "C" void operation_8c02a764(int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c1eb5c0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c1aaabc((void *)(((char *)o + 0x754)));
    switch ((short)t1) {
    case 0:
        ((ObjectData *)o)->f30c = 3;
        return;
    case 1:
        ((ObjectData *)o)->f30c = 1;
        ((ObjectData *)o)->f350 |= 0x80;
        create_bound_effect_8c02a728((void *)o, 0x1b7);
        create_bound_effect_8c02a728((void *)o, 0xbb);
        *(float *)0x8c46f5a0 = 0.0f;
        *(float *)0x8c46f5a4 = 0.0f;
        *(float *)0x8c46f5a8 = 1.0f;
        *(float *)0x8c46f6a0 = 1.0f;
        *(float *)0x8c46f6a4 = 0.8f;
        *(float *)0x8c46f6a8 = 0.8f;
        *(float *)0x8c46f6ac = 1.0f;
        t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t2 != 0) {
            extra_b6394((void *)t2, (void *)((void *)0x8c46f6a0), (void *)((void *)0x8c46f5a0), 8, (void *)o, (int)(*(S_g8c44bea0 **)0x8c44bea0), 0.2f);
        }
        operation_8c013b2c((int)(((ObjectData *)o)->f20), 1.0f, 0.5f);
        operation_8c02a764((int)o, 0x1001c);
        return;
    case 2:
        ((ObjectData *)o)->f30c = 1;
        ((ObjectData *)o)->f350 |= 0x80;
        o->v76(0x30, (&frame));
        create_effect_777c((void *)(&frame), 0x11);
        create_effect_777c((void *)(&frame), 0x12);
        *(float *)0x8c46f5a0 = 0.0f;
        *(float *)0x8c46f5a4 = 0.0f;
        *(float *)0x8c46f5a8 = 1.0f;
        *(float *)0x8c46f6a0 = 1.0f;
        *(float *)0x8c46f6a4 = 0.8f;
        *(float *)0x8c46f6a8 = 0.8f;
        *(float *)0x8c46f6ac = 1.0f;
        t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t3 != 0) {
            extra_b6394((void *)t3, (void *)((void *)0x8c46f6a0), (void *)((void *)0x8c46f5a0), 8, (void *)o, (int)(*(S_g8c44bea0 **)0x8c44bea0), 0.2f);
        }
        operation_8c013b2c((int)(((ObjectData *)o)->f20), 1.0f, 0.5f);
        operation_8c02a764((int)o, 0x1001d);
    }
}
