/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18a4ac
 * function: operation_8c18a4ac
 * language: c++
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 4 of 72 reference instruction lines
 * differing bytes: 2
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
typedef struct S_c8c021ef8_184 S_c8c021ef8_184;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c021ef8;
class S_c8c021ef8 {
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
typedef struct S_c8c021ef8Data {
    char unknown0[0x184];
    S_c8c021ef8_184 *f184;
} S_c8c021ef8Data;
struct S_c8c021ef8_184 {
    char unknown0[0x10];
    float f10;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float call_8c38d7d8(void *, Frame *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TItemEffArmor_ctor_8c18a568(int, S_c8c021ef8 *, float, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c18a4ac(int a0)
{
    Frame frame;
    float v2;
    float v1;
    S_c8c021ef8 *t1;
    int t2;
    float t3;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0 && ((S_c8c021ef8Data *)t1)->f184 != 0) {
        v1 = (float)((S_c8c021ef8Data *)t1)->f184->f10;
        t1->v76(0x28, &(&frame)->f0c);
        t1->v76(0x1b, (&frame));
        v2 = call_8c38d7d8((void *)(&(&frame)->f0c), (Frame *)((&frame))) / 20.0f;
        v2 = (float)(v2 * 1.2f);
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x80);
        if (t2 != 0) {
            TItemEffArmor_ctor_8c18a568(t2, t1, v2, v1);
        }
        play_se_8c05fbf8(0xa, (void *)(((char *)t1 + 0x3c)), 0, 0);
    }
}
