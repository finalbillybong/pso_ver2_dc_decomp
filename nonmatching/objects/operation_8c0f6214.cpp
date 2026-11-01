/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f6214
 * function: operation_8c0f6214
 * language: c++
 * reference size: 776 bytes
 * compiled size: 780 bytes (+0.5%)
 * differing lines: 138 of 294 reference instruction lines
 * differing bytes: 448
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c470618 S_g8c470618;
typedef struct S_g8c47062c S_g8c47062c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_464 Arg0_464;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_46c;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x290];
    Arg0_38c *f38c;
    char unknown390[0x4c];
    int f3dc;
    char unknown3e0[0x68];
    int f448;
    char unknown44c[0x8];
    int f454;
    int f458;
    int f45c;
    char unknown460[0x4];
    Arg0_464 *f464;
    char unknown468[0x4];
    Arg0_46c *f46c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    char unknownc[0x18];
};
struct S_g8c470618 {
    char unknown0[0x14];
    float f14;
};
class Arg0_46c {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, void *);
};
typedef struct Arg0_46cData {

} Arg0_46cData;
extern S_g8c470618 *g_8c470618;
extern S_g8c47062c *g_8c47062c;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void process_entries_8c0731d8(void *);
extern "C" void operation_8c11895c(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(void *);
extern "C" int step_clamped_angle_velocity(int, int, int, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, int, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0f4ec0(void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c0f6214(Object *o, int a1)
{
    Frame frame;
    int t3;
    S_vv1 *v1;
    int v7;
    char *v12;
    char *v15;
    int t1;
    int t2;
    S_vv2 *v2;
    int t4;
    int t5;
    v1 = (S_vv1 *)((char *)o + 0x474);
    v2 = (S_vv2 *)((char *)o + 0x478);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 4;
        operation_8c059ef8((void *)o, 4);
        {
            int *pf1 = (int *)((char *)o + 0x3dc);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f3dc |= 4;
        process_entries_8c0731d8((void *)(((ObjectData *)o)->f464));
        operation_8c11895c((void *)(((ObjectData *)o)->f46c));
        v1->f00 = 0;
        v2->f00 = 0;
        ((ObjectData *)o)->f458 = 0;
        return;
    case 3:
        if (v2->f00 != 2) {
            return;
        }
        *(int *)((char *)o + 0x454) += 1;
        if (((ObjectData *)o)->f454 >= 2) {
            ((ObjectData *)o)->f454 = 0;
            ((ObjectData *)o)->f3dc &= -9;
        }
        if (((ObjectData *)o)->f45c >= 5) {
            operation_8c059ea4((void *)o, 8);
            v7 = (int)1;
        } else {
            v7 = (int)0;
        }
        if (v7 != 0) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        operation_8c01c5f0((void *)o);
        v12 = (char *)((ObjectData *)o)->f64;
        t1 = step_clamped_angle_velocity((int)(v12), (int)(((ObjectData *)o)->f448), (int)(v12), 0x200, 0x2000);
        ((ObjectData *)o)->f448 = (int)t1;
        switch (v2->f00) {
        case 0:
            t2 = check_range_8c01cf68((void *)o, 11.0f);
            if (t2 != 0) {
                (&frame)->f00 = -5.0f;
                (&frame)->f04 = 0.0f;
                (&frame)->f08 = 7.0f;
                rotate_scalar_pair((void *)(&frame), (void *)(&(&frame)->f08), (int)(((ObjectData *)o)->f64));
                call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
                create_effect_777c((void *)(&frame), 0xf3);
            }
            t3 = call_8c119190(g_8c47062c, ((ObjectData *)o)->ff8);
            if (t3 != 0) {
                njPushMatrixEx_8c38ae68();
                njUnitMatrix_8c37b5c4(0);
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                call_8c3be280(0, (int)(t3 + 0x18), (void *)(((char *)(&frame) + 0xc)));
                v15 = (char *)((char *)(&frame) + 0x18);
                call_8c3be280(0, t3, v15);
                njPopMatrixEx_8c38ad10();
                ((ObjectData *)o)->f46c->v5(((char *)(&frame) + 0xc), v15);
            }
            operation_8c0f4ec0((void *)o);
            t4 = check_range_8c01cf68((void *)o, 10.8f);
            if (t4 != 0) {
                t5 = call_8c24e644(0x3000c, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t5, (void *)(((char *)o + 0x3c)), 0, 0);
                update_last_effect(-0x200);
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
                goto L_8c0f6436;
            }
            ((ObjectData *)o)->ff0 = 0;
            v2->f00 = 1;
            v1->f00 = 0;
            break;
        case 1:
            v1->f00 += 1;
            if (!((float)v1->f00 < g_8c470618->f14)) {
                v2->f00 = 2;
            }
        }
L_8c0f6436:;
        o->v108();
        o->v95();
    }
}
