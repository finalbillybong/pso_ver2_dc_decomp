/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7324
 * function: operation_8c0d7324
 * language: c++
 * reference size: 556 bytes
 * compiled size: 556 bytes (+0.0%)
 * differing lines: 44 of 224 reference instruction lines
 * differing bytes: 41
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
typedef struct S_g8c46fdd4 S_g8c46fdd4;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x10];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29a];
    Arg0_38c *f38c;
    char unknown390[0x50];
    int f3e0;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
};
extern S_g8c46fdd4 *g_8c46fdd4;
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void rotate_and_submit_vector_xz(void *, void *, int);
extern "C" void operation_8c108488(int, int);
extern "C" void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void operation_8c1083c4(int);
extern "C" void operation_8c0d7324(Object *o, int a1)
{
    Frame frame;
    float fx;
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x424);
    switch (a1) {
    case 3:
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 4;
        refresh_follow_effect_8c05a194((void *)o);
        o->v100();
        ((ObjectData *)o)->f3e0 = (unsigned int)((ObjectData *)o)->f3e0 >> 2 << 2;
        v1->f00 = 0;
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            operation_8c01c5f0(o);
            t1 = check_range_8c01cf68((void *)o, 13.0f);
            if (t1 == 0) {
                t2 = check_range_8c01cf68((void *)o, 25.0f);
                if (t2 == 0) {
                    goto L_8c0d73d6;
                }
            }
            t3 = call_8c24e644(0x30012, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t3, (void *)(((char *)o + 0x3c)), 0, 0);
L_8c0d73d6:;
            if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
                return;
            }
            v1->f00 = 1;
            v2->f00 = 0;
            (&frame)->f0c = 0.0f;
            (&frame)->f10 = 10.0f;
            (&frame)->f14 = 20.0f;
            rotate_and_submit_vector_xz((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f64));
            operation_8c108488((int)(&(&frame)->f0c), 0x14);
            return;
        case 1:
            v2->f00 += 1;
            if (v2->f00 >= 0x14) {
                v1->f00 = 2;
                ((ObjectData *)o)->f3e0 |= 2;
                TBreakUpMdl_create_8c108644((int)g_8c46fdd4, (int)((void *)0x8c285838), (int)(((ObjectData *)o)->f28), (int)(((char *)o + 0x3c)), (int)(((ObjectData *)o)->f64));
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                t4 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                fx = (&frame)->f00.f00;
                (&frame)->f00.f00 = fx + t4 * 20.0f;
                t5 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                fx = (&frame)->f00.f08;
                (&frame)->f00.f08 = fx + t5 * 20.0f;
                operation_8c1083c4((int)(&frame));
                t6 = call_8c24e644(0x30016, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t6, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            o->v108();
            return;
        case 2:
            ((ObjectData *)o)->f04 |= 1;
        }
    }
}
