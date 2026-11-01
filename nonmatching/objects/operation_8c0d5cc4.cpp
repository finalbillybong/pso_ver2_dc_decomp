/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d5cc4
 * function: operation_8c0d5cc4
 * language: c++
 * reference size: 1612 bytes
 * compiled size: 1612 bytes (+0.0%)
 * differing lines: 68 of 587 reference instruction lines
 * differing bytes: 91
 * provenance: generator draft (mode switch2)
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
typedef struct Frame Frame;
typedef struct S_g8c46fde0 S_g8c46fde0;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
class Arg0_3ac;
class Arg0_3fc;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
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
    virtual int v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x288];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    char unknown3cc[0x14];
    int f3e0;
    float f3e4;
    float f3e8;
    char unknown3ec[0x10];
    Arg0_3fc *f3fc;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    float f00;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    Block_frame_18 f18;
};
struct S_vv3 {
    float f00;
};
class Arg0_3ac {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_3acData {

} Arg0_3acData;
class Arg0_3fc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3fcData {

} Arg0_3fcData;
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c11895c(void *);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int call_8c05c2dc(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int operation_8c0d4c80(void *, int, float);
extern "C" int operation_8c011290(int, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void slide_and_dispatch_contact(void *, float, float, float);
extern "C" int active_unflagged_8c05b258(void *);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0d5cc4(Object *o, int a1)
{
    Frame frame;
    S_vv2 *v2;
    int t14;
    int v7;
    float v29;
    float v30;
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    S_vv3 *v3;
    float t15;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x42c);
    v3 = (S_vv3 *)((char *)o + 0x430);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 5;
        operation_8c059ef8((void *)o, 4);
        o->v102();
        {
            int *pf1 = (int *)((char *)o + 0x3e0);
            *pf1 = (unsigned int)*pf1 >> 2 << 2;
        }
        ((ObjectData *)o)->f3e0 |= 0x10000;
        v1->f00 = 0;
        v2->f00 = 0.0f;
        operation_8c11895c((void *)(((ObjectData *)o)->f3fc));
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (v1->f00 != 5) {
            if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
                return;
            }
        }
        t1 = o->v108();
        if (t1 == 0) {
            operation_8c059ea4((void *)o, 9);
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            operation_8c01c5f0(o);
            if (((((ObjectData *)o)->fe8 & 8)) != 0) {
                v1->f00 = 1;
            }
            o->v108();
            o->v95();
            break;
        case 1:
            operation_8c01c5f0(o);
            t2 = call_8c05c2dc(o);
            if (t2 != 0) {
                operation_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
                t15 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                v7 = (int)(int)(t15 * 65536.0f / 6.28318405f);
            } else {
                v7 = (int)((ObjectData *)o)->f64;
            }
            t3 = angle_step((int)(((ObjectData *)o)->f64), v7, 0x1000);
            ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t3;
            t4 = check_range_8c01cf68((void *)o, 10.0f);
            if (t4 != 0) {
                v1->f00 = 2;
            }
            o->v108();
            o->v95();
            break;
        case 2:
            operation_8c01c5f0(o);
            t5 = call_8c05c2dc(o);
            if (t5 != 0) {
                operation_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
            }
            if (14.0f > (((ObjectData *)o)->ff8 + ((ObjectData *)o)->f100)) {
            } else {
                t6 = operation_8c0d4c80((void *)o, (int)(((ObjectData *)o)->f64), ((ObjectData *)o)->f3c8 - 20.0f);
                if (t6 != 0) {
                    v1->f00 = 5;
                } else {
                    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f3c;
                    v29 = (float)((ObjectData *)o)->f3c8;
                    v30 = (float)(v29 - 20.0f);
                    (&frame)->f18.f00 += ((ObjectData *)o)->f3bc * v30;
                    (&frame)->f18.f04 += 20.0f;
                    (&frame)->f18.f08 += ((ObjectData *)o)->f3c4 * v30;
                    t7 = operation_8c011290((int)(&(&frame)->f18), 0x15);
                    if (t7 != 0) {
                        v1->f00 = 3;
                        v3->f00 = (((ObjectData *)o)->f3c8 - 20.0f) / 12.8571434f;
                        o->v97();
                        t8 = call_8c24e644(0x30011, (void *)(((ObjectData *)o)->f38c));
                        play_se_8c05fbf8(t8, (void *)(((char *)o + 0x3c)), 0, 0);
                    } else {
                        v1->f00 = 5;
                    }
                }
            }
            o->v108();
            o->v95();
            break;
        case 3:
            operation_8c01c5f0(o);
            if (!(23.0f > (((ObjectData *)o)->ff8 + ((ObjectData *)o)->f100))) {
                v1->f00 = 4;
                o->v98();
                t9 = call_8c24e644(0x30012, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t9, (void *)(((char *)o + 0x3c)), 0, 0);
                create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
            }
            slide_and_dispatch_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, v3->f00);
            o->v94();
            break;
        case 4:
            operation_8c01c5f0(o);
            t10 = check_range_8c01cf68((void *)o, 25.0f);
            if (t10 != 0) {
                t11 = active_unflagged_8c05b258((void *)(((ObjectData *)o)->f3ac));
                if (t11 != 0) {
                    t12 = ((ObjectData *)o)->f3ac->v22(o, 1.0f);
                    if (t12 != 0) {
                        ((ObjectData *)o)->f3ac->v24(o, 1.0f);
                        ((ObjectData *)o)->f3ac->v27(o, 3.0f);
                    }
                }
                t13 = call_8c24e644(0x30013, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t13, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            v3->f00 *= 0.85f;
            slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, v3->f00);
            o->v95();
        }
        if (v1->f00 == 0) {
            return;
        }
        t14 = call_8c119190((void *)(*(S_g8c46fde0 **)0x8c46fde0), ((ObjectData *)o)->ff8);
        if (t14 == 0) {
            return;
        }
        njPushMatrixEx_8c38ae68();
        njUnitMatrix_8c37b5c4(0);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3be2dc(0, t14, (Frame *)((&frame)), 2);
        njPopMatrixEx_8c38ad10();
        ((ObjectData *)o)->f3fc->v5((&frame), &(&frame)->f0c);
        return;
    case 5:
        ((ObjectData *)o)->f3e4 = ((ObjectData *)o)->f3c.f04;
        ((ObjectData *)o)->f3e8 = 0.0f;
        o->v98();
        set_field_8c05af54((void *)o);
    }
}
