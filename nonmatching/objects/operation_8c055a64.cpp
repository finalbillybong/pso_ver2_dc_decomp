/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c055a64
 * function: operation_8c055a64
 * language: c++
 * reference size: 1528 bytes
 * compiled size: 1528 bytes (+0.0%)
 * differing lines: 248 of 588 reference instruction lines
 * differing bytes: 1288
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
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
class Object;
typedef struct Block_p0_3bc {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3bc;
typedef struct Block_vv3_0 {
    float f00;
    float f04;
    float f08;
} Block_vv3_0;
typedef struct Block_p0_44c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_44c;
typedef struct Block_vv4_0 {
    float f00;
    float f04;
    float f08;
} Block_vv4_0;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual int v109(float);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x232];
    Block_p0_324 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    int f3ac;
    char unknown3b0[0x4];
    float f3b4;
    char unknown3b8[0x4];
    Block_p0_3bc f3bc;
    float f3c8;
    char unknown3cc[0x78];
    int f444;
    float f448;
    Block_p0_44c f44c;
    float f458;
    char unknown45c[0xc];
    float f468;
} ObjectData;
struct S_vv3 {
    Block_vv3_0 f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv1 {
    int f00;
};
struct S_vv5 {
    float f00;
    float f04;
    float f08;
};
struct S_vv4 {
    Block_vv4_0 f00;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
extern "C" int cross_xz_negative(void *, void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c055170(Object *);
extern "C" void operation_8c01c5f0(int);
extern "C" int call_8c05c2dc(Object *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" void vector_sub_in_place_8c37f6f0(S_vv4 *, S_vv5 *);
extern "C" float call_8c3845f0(void *, void *);
extern "C" void normalize_vector_checked(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void call_8c3bdf60(void *, S_vv5 *);
extern "C" float normalize_xz_checked(void *);
extern "C" int slide_and_dispatch_contact(void *, float, float, float);
extern "C" float call_8c12c714(float);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c055a64(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int v12;
    float v33;
    float v34;
    float v32;
    float v38;
    float v39;
    float v48;
    float v55;
    float v56;
    float v57;
    float v58;
    float v64;
    float v67;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    float t6;
    int t7;
    float t8;
    float t9;
    int t10;
    float t11;
    v1 = (S_vv1 *)((char *)o + 0x3e0);
    v2 = (S_vv2 *)((char *)o + 0x3e8);
    v3 = (S_vv3 *)((char *)o + 0x404);
    v4 = (S_vv4 *)((char *)o + 0x410);
    v5 = (S_vv5 *)((char *)o + 0x41c);
    switch (a1) {
    case 4:
            ((ObjectData *)o)->ff0 = 1;
            o->v102();
            {
                int *pf1 = (int *)((char *)o + 0x444);
                *pf1 = (unsigned int)*pf1 >> 1 << 1;
            }
            ((ObjectData *)o)->f444 |= 2;
            v3->f00.f00 = ((ObjectData *)o)->f44c.f00 * ((ObjectData *)o)->f458;
            v3->f00.f04 = 0.0f;
            v3->f00.f08 = ((ObjectData *)o)->f44c.f08 * ((ObjectData *)o)->f458;
            t1 = cross_xz_negative((void *)(((char *)o + 0x44c)), (void *)(((char *)o + 0x3bc)));
            if (t1 != 0) {
                v2->f00 = (S_vv2_0 *)0x8000;
            } else {
                v2->f00 = (S_vv2_0 *)0;
            }
            v1->f00 = 0;
            v5->f00 = 0.0f;
            v5->f04 = 0.0f;
            v5->f08 = 0.0f;
            v4->f00.f00 = 0.0f;
            v4->f00.f04 = ((ObjectData *)o)->f448 - ((ObjectData *)o)->f40;
            v4->f00.f08 = 0.0f;
            return;
    case 3:
        if (((ObjectData *)o)->f3c8 > 450.0f || ((ObjectData *)o)->f3ac == 0) {
            operation_8c059ea4((void *)o, 5);
            return;
        }
        if (!(100.0f > ((ObjectData *)o)->f3c8)) {
            return;
        }
        call_8c055170(o);
        return;
    case 0:
    operation_8c01c5f0((int)o);
    t2 = call_8c05c2dc(o);
    if (t2 == 0) {
        t3 = o->v109(200.0f);
        if (t3 == 0) {
            return;
        }
    }
    set_fields_wrapper_8c05c184((void *)o);
    ((ObjectData *)o)->f3b4 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f468;
    aim_direction_8c05bdd4((void *)o);
    *(Vector3 *)&v4->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    vector_sub_in_place_8c37f6f0(v4, v5);
    if (v1->f00 != 0) {
    } else {
        t4 = call_8c3845f0((void *)(((char *)o + 0x44c)), (void *)(((char *)o + 0x3bc)));
        if (0.99f > t4) {
            t5 = cross_xz_negative((void *)(((char *)o + 0x44c)), (void *)(((char *)o + 0x3bc)));
            if (t5 != 0) {
                v32 = (float)((ObjectData *)o)->f44c.f00;
                v33 = (float)-((ObjectData *)o)->f44c.f08;
            } else {
                v32 = (float)-((ObjectData *)o)->f44c.f00;
                v33 = (float)((ObjectData *)o)->f44c.f08;
            }
            v34 = (float)(v3->f00.f00 + v33 * 0.18f);
            v3->f00.f00 = v34;
            v3->f00.f04 = 0.0f;
            v3->f00.f08 += v32 * 0.18f;
            *(Vector3 *)&((ObjectData *)o)->f44c = *(Vector3 *)&v3->f00;
            normalize_vector_checked((void *)(((char *)o + 0x44c)));
            goto L_8c055db6;
        }
        v1->f00 = 1;
        *(Vector3 *)&((ObjectData *)o)->f44c = *(Vector3 *)&((ObjectData *)o)->f3bc;
        goto L_8c055db6;
    }
    *(Vector3 *)&((ObjectData *)o)->f44c = *(Vector3 *)&((ObjectData *)o)->f3bc;
    t11 = njSin_8c37eb0c((void *)(v2->f00));
    v38 = (float)(t11 * 5.0f);
    v2->f00 = (S_vv2_0 *)((int)v2->f00 + 0x600);
    v39 = (float)(((ObjectData *)o)->f3bc.f08 * v38);
    v5->f00 = v39;
    v5->f04 = 0.0f;
    v5->f08 = -((ObjectData *)o)->f3bc.f00 * v38;
L_8c055db6:;
    v48 = (float)((ObjectData *)o)->f458;
    if (v48 > ((ObjectData *)o)->f36c->f04) {
        ((ObjectData *)o)->f458 = v48 * 0.96f;
    } else {
        ((ObjectData *)o)->f458 = ((ObjectData *)o)->f36c->f04;
    }
    v3->f00.f00 = ((ObjectData *)o)->f44c.f00 * ((ObjectData *)o)->f458;
    v3->f00.f04 = 0.0f;
    v3->f00.f08 = ((ObjectData *)o)->f44c.f08 * ((ObjectData *)o)->f458;
    v4->f00.f00 += v3->f00.f00;
    v4->f00.f08 += v3->f00.f08;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v4->f00;
    call_8c3bdf60((void *)(&(&frame)->f0c), v5);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(&frame)->f0c;
    vector_sub_in_place_8c37f6f0((S_vv4 *)(&frame), (S_vv5 *)(((char *)o + 0x3c)));
    (&frame)->f00.f04 = 0.0f;
    t6 = normalize_xz_checked((void *)(&frame));
    t7 = slide_and_dispatch_contact((void *)o, (&frame)->f00.f00, (&frame)->f00.f08, t6);
    if (t7 != 0) {
        ((ObjectData *)o)->f444 |= 2;
    } else {
        ((ObjectData *)o)->f444 &= -3;
    }
    v55 = (float)((ObjectData *)o)->f3b4;
    v56 = (float)v4->f00.f04;
    t8 = call_8c12c714(v55 - v56);
    if (0.2f > t8) {
        v64 = (float)v55;
    } else {
        if (((v55 - v56) * 0.1f) > 1.5f) {
            v57 = (float)1.5f;
            v58 = (float)v57;
        } else {
            v58 = (float)((v55 - v56) * 0.1f);
            if (-1.5f > ((v55 - v56) * 0.1f)) {
                v58 = (float)-1.5f;
            }
        }
        v64 = (float)(v56 + v58);
    }
    ((ObjectData *)o)->f448 = v64;
    v4->f00.f04 = ((ObjectData *)o)->f448;
    v67 = (float)((ObjectData *)o)->f40;
    if (1.2f > (((ObjectData *)o)->f448 - v67)) {
        ((ObjectData *)o)->f448 = v67 + 1.2f;
    }
    ((ObjectData *)o)->f324.f04 = ((ObjectData *)o)->f448;
    t9 = errno_wrap_8c130334(((ObjectData *)o)->f44c.f00, ((ObjectData *)o)->f44c.f08);
    ((ObjectData *)o)->f64 = (int)(t9 * 65536.0f / 6.28318405f);
    o->v95();
    v4->f00.f00 -= ((ObjectData *)o)->f3c;
    v4->f00.f04 -= ((ObjectData *)o)->f448;
    v4->f00.f08 -= ((ObjectData *)o)->f44;
    t10 = call_8c24e644(0x30022, (void *)(((ObjectData *)o)->f38c));
    call_8c05fd7c(t10, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x400);
    return;
    case 5:
    ((ObjectData *)o)->f458 = ((ObjectData *)o)->f36c->f04;
    return;
    }
}
