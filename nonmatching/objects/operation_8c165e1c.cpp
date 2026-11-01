/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c165e1c
 * function: operation_8c165e1c
 * language: c++
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 16 of 221 reference instruction lines
 * differing bytes: 22
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c2f1b7c S_g8c2f1b7c;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
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
    virtual int v11(float, float);
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
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0x1c];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x29e];
    short f30a;
    char unknown30c[0x1c];
    float f328;
    char unknown32c[0x7c];
    int f3a8;
    char unknown3ac[0x1c];
    float f3c8;
    int f3cc;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Vector3 f10;
};
extern S_g8c2f1b7c *g_8c2f1b7c;
extern Vector3 g_8c3174e0;
extern Block16 g_8c3174ec;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" int operation_8c03d338(void);
extern "C" void call_8c04a9e0(Object *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void operation_8c165a38(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void call_8c38c0f0(Frame *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c3a944a(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c165e1c(Object *o)
{
    Frame frame;
    float v6;
    float v9;
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v115();
        return;
    }
    switch (((ObjectData *)o)->f3a8 & 1) {
    case 0:
        t2 = o->v11(400.0f, 20.0f);
        if (t2 == 0) {
            return;
        }
        if (((((ObjectData *)o)->f3a8 & 2)) != 0) {
            {
                Vector3 *p_ = (Vector3 *)&g_8c3174e0;
                *(Vector3 *)&(&frame)->f10 = *p_;
            }
            call_8c04a9e0(o, (void *)(&(&frame)->f10));
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        g_8c46f560 = (int)(g_8c575570);
        operation_8c05baa8();
        operation_8c1086fc();
        operation_8c165a38((void *)o);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f328 - ((ObjectData *)o)->f40, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f68));
        njTranslate_8c3829bc(0, 0.0f, -10.0f, 0.0f);
        if (((((ObjectData *)o)->f3a8 & 4)) != 0) {
            g_8c575570 |= 0x20;
            *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c3174ec;
            v6 = (float)(float)(unsigned int)((unsigned int)((ObjectData *)o)->f3cc >> 0x10);
            (&frame)->f00.f08 = (&frame)->f00.f0c = -v6 / 255.0f;
            (&frame)->f00.f04 = -(&frame)->f00.f08;
            call_8c38c0f0((Frame *)((&frame)));
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        } else {
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        }
        njPopMatrixEx_8c38ad10();
        if (((ObjectData *)o)->f30a == 3) {
            njPushMatrixEx_8c38ae68();
            v9 = (float)((ObjectData *)o)->f3c8;
            v9 = (float)(v9 * 0.5f);
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njScale_8c37e2e4(0, v9, 3.0f, v9);
            call_8c3a944a(g_8c2f1b7c);
            njPopMatrixEx_8c38ad10();
        }
        g_8c575570 = (int)(g_8c46f560);
        reset_state_8c391cc4();
    }
}
