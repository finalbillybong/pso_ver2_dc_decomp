/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c058dac
 * function: operation_8c058dac
 * language: c++
 * reference size: 472 bytes
 * compiled size: 468 bytes (-0.8%)
 * differing lines: 14 of 168 reference instruction lines
 * differing bytes: 226
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0594a4 S_c8c0594a4;
typedef struct Frame Frame;
typedef struct Arg0_38c Arg0_38c;
class Object;
typedef struct Block_frame_c {
    int f00;
    char unknown4[0x8];
} Block_frame_c;
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
};
typedef struct ObjectData {
    char unknown0[0x30];
    short f30;
    char unknown32[0xb6];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29a];
    Arg0_38c *f38c;
    char unknown390[0x3c];
    int f3cc;
    int f3d0;
    char unknown3d4[0xc];
    volatile unsigned short f3e0;
    char unknown3e2[0x96];
    float f478;
    char unknown47c[0x4];
    int f480;
} ObjectData;
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_c8c0594a4 {
    Vector3 f00;
};
extern Vector3 g_8c2f33ac;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" S_c8c0594a4 *word_operation_8c0594a4(void *);
extern "C" int operation_8c054908(int, int, int, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c058dac(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    S_c8c0594a4 *t2;
    int t3;
    int t4;
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 5;
        o->v102();
        operation_8c059ef8((void *)o, 5);
        ((ObjectData *)o)->f478 = 0.0f;
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4((void *)o, 5);
        return;
    case 0:
        t1 = check_range_8c01cf68((void *)o, 15.0f);
        if (t1 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2f33ac;
            if (!(((ObjectData *)o)->f3cc > 6)) {
                v1 = (int)((int)((ObjectData *)o)->f3d0 + (((ObjectData *)o)->f30 + 1));
                t2 = word_operation_8c0594a4((void *)o);
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&t2->f00;
                t3 = operation_8c054908((int)o, (int)(((ObjectData *)o)->f3e0), v1, (int)(&(&frame)->f0c.f00), (int)(&frame));
                if (t3 != 0) {
                    v2 = (int)((ObjectData *)o)->f3cc;
                    ((ObjectData *)o)->f3cc = v2 + 1;
                    *(short *)((char *)((char *)o + 0x3d4) + (v2 << 1)) = ((ObjectData *)o)->f3e0 & 0xffff;
                    ((ObjectData *)o)->f3e0 += 1;
                    ((ObjectData *)o)->f3d0 += 1;
                    create_effect_777c((void *)(((char *)o + 0x3f0)), 0xc8);
                    t4 = call_8c24e644(0x30027, (void *)(((ObjectData *)o)->f38c));
                    play_se_8c05fbf8(t4, (void *)(((char *)o + 0x3c)), 0, 0);
                    update_last_effect(-0x400);
                }
            }
            ((ObjectData *)o)->f480 -= 1;
        }
        operation_8c01c5f0(o);
        o->v108();
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}
