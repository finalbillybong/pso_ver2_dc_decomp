/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d55d8
 * function: operation_8c0d55d8
 * language: c++
 * reference size: 1176 bytes
 * compiled size: 1176 bytes (+0.0%)
 * differing lines: 84 of 454 reference instruction lines
 * differing bytes: 403
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
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_2c S_vv5_2c;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_2c S_vv7_2c;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_2c S_vv8_2c;
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
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0x20];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x34];
    Arg0_130 *f130;
    char unknown134[0x258];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x18];
    int f3e0;
    float f3e4;
    float f3e8;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
};
struct S_vv5 {
    char unknown0[0x2c];
    S_vv5_2c *f2c;
};
struct S_vv7 {
    char unknown0[0x2c];
    S_vv7_2c *f2c;
};
struct S_vv4 {
    float f00;
};
struct S_vv8 {
    char unknown0[0x2c];
    S_vv8_2c *f2c;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void set_stream_mode_8c3ab8f8(void *, float);
extern "C" void call_8c3aba08(int, S_vv5 *, int);
extern "C" void call_8c3be280(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int angle_step(int, int, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c0d55d8(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv5 *v5;
    S_vv7 *v7;
    S_vv8 *v8;
    float v6;
    S_vv4 *v4;
    float v9;
    int t1;
    float t2;
    int t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x428);
    v3 = (S_vv3 *)((char *)o + 0x42c);
    v4 = (S_vv4 *)((char *)o + 0x430);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        operation_8c059ef8((void *)o, 0xb);
        o->v102();
        *(int *)((char *)o + 0x3e0) &= -3;
        ((ObjectData *)o)->f3e0 |= 1;
        v1->f00 = 0;
        v3->f00 = 0.0f;
        t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
        if (t1 != 0) {
            set_fields_wrapper_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            t2 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            v2->f00 = (S_vv2_0 *)(int)(t2 * 65536.0f / 6.28318405f);
            return;
        }
        v2->f00 = (S_vv2_0 *)((ObjectData *)o)->f64;
        return;
    case 3:
        if (v1->f00 != 3) {
            return;
        }
        operation_8c059ea4((void *)o, 0xb);
        return;
    case 0:
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c0d582c;
            }
            if (v1->f00 == 2) {
                goto L_8c0d5974;
            }
        } else {
            (&frame)->f18 = 0.0f;
            (&frame)->f1c = 0.0f;
            (&frame)->f20 = 0.0f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            set_stream_mode_8c3ab8f8((void *)(((ObjectData *)o)->f130), ((ObjectData *)o)->ff8);
            v5 = (S_vv5 *)((ObjectData *)o)->f38;
            call_8c3aba08(0, v5, 0);
            call_8c3aba08(0, (S_vv5 *)(v5->f2c), 0);
            call_8c3be280(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f18));
            njPopMatrixEx_8c38ad10();
            v6 = (float)(&frame)->f1c;
            operation_8c01c5f0(o);
            (&frame)->f0c = 0.0f;
            (&frame)->f10 = 0.0f;
            (&frame)->f14 = 0.0f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            set_stream_mode_8c3ab8f8((void *)(((ObjectData *)o)->f130), ((ObjectData *)o)->ff8);
            v7 = (S_vv7 *)((ObjectData *)o)->f38;
            call_8c3aba08(0, (S_vv5 *)v7, 0);
            call_8c3aba08(0, (S_vv5 *)(v7->f2c), 0);
            call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
            njPopMatrixEx_8c38ad10();
            v4->f00 = (&frame)->f10;
            ((ObjectData *)o)->f3e4 = v6 - v4->f00 + ((ObjectData *)o)->f3e4;
            ((ObjectData *)o)->f64 = (Arg0_64 *)((int)((ObjectData *)o)->f64 + 0x8000);
            v1->f00 = 1;
            ((ObjectData *)o)->f3e8 = ((ObjectData *)o)->f3e4 - ((ObjectData *)o)->f40;
            goto L_8c0d59a6;
L_8c0d582c:;
            operation_8c01c5f0(o);
            if (((ObjectData *)o)->ff8 > 29.0f) {
                ((ObjectData *)o)->ff8 = 29.0f;
            }
            t3 = angle_step((int)(((ObjectData *)o)->f64), (int)(v2->f00), 0x800);
            ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t3;
            v3->f00 -= 0.3f;
            if (-5.0f > v3->f00) {
                v3->f00 = -5.0f;
            }
            ((ObjectData *)o)->f3e4 += v3->f00;
            (&frame)->f00 = 0.0f;
            (&frame)->f04 = 0.0f;
            (&frame)->f08 = 0.0f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            set_stream_mode_8c3ab8f8((void *)(((ObjectData *)o)->f130), ((ObjectData *)o)->ff8);
            v8 = (S_vv8 *)((ObjectData *)o)->f38;
            call_8c3aba08(0, (S_vv5 *)v8, 0);
            call_8c3aba08(0, (S_vv5 *)(v8->f2c), 0);
            call_8c3be280(0, (void *)(&frame), (void *)(&frame));
            njPopMatrixEx_8c38ad10();
            ((ObjectData *)o)->f3e4 -= (&frame)->f04 - v4->f00;
            v4->f00 = (&frame)->f04;
            v9 = (float)((ObjectData *)o)->f40;
            if (v9 > ((ObjectData *)o)->f3e4) {
                ((ObjectData *)o)->f3e4 = v9;
                v1->f00 = 2;
                t4 = call_8c24e644(0x30012, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t4, (void *)(((char *)o + 0x3c)), 0, 0);
                create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
                goto L_8c0d59a6;
L_8c0d5974:;
                if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                    ((ObjectData *)o)->ff0 = 8;
                    v1->f00 = 3;
                    ((ObjectData *)o)->f3e4 = ((ObjectData *)o)->f40;
                    ((ObjectData *)o)->f3e8 = 0.0f;
                }
                operation_8c01c5f0(o);
            }
        }
L_8c0d59a6:;
        o->v108();
        if ((((ObjectData *)o)->f3e4 - ((ObjectData *)o)->f40) > 30.0f) {
            o->v103();
        } else {
            o->v104();
        }
        o->v95();
        ((ObjectData *)o)->f3e8 = ((ObjectData *)o)->f3e4 - ((ObjectData *)o)->f40;
        return;
    case 5:
        ((ObjectData *)o)->f3e0 = (unsigned int)((ObjectData *)o)->f3e0 >> 1 << 1;
        ((ObjectData *)o)->f3e8 = 0.0f;
    }
}
