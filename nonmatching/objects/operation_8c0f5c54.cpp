/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f5c54
 * function: operation_8c0f5c54
 * language: c++
 * reference size: 1472 bytes
 * compiled size: 1468 bytes (-0.3%)
 * differing lines: 52 of 534 reference instruction lines
 * differing bytes: 919
 * provenance: generator draft (mode switch2)
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
typedef struct Frame Frame;
typedef struct S_g8c470618 S_g8c470618;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_464 Arg0_464;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
typedef struct Block_frame_18 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_18;
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
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x29a];
    Arg0_38c *f38c;
    char unknown390[0x1c];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x14];
    int f3dc;
    char unknown3e0[0x68];
    int f448;
    int f44c;
    char unknown450[0x4];
    int f454;
    int f458;
    int f45c;
    char unknown460[0x4];
    Arg0_464 *f464;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_g8c470618 {
    float f00;
    char unknown4[0x18];
    int f1c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Block_frame_18 f18;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void process_entries_8c0731d8(void *);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" int operation_8c05c1f0(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int step_clamped_angle_velocity(int, int, int, int, int);
extern "C" int query_scaled_contact(void *, float, float, float);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" int operation_8c05af28(void *, int);
extern "C" void operation_8c05237c(void *);
extern "C" int operation_8c0f4fd8(Object *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0f5c54(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    char *v17;
    int v5;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    float t13;
    float t14;
    float t15;
    int t16;
    int t17;
    int t18;
    v1 = (S_vv1 *)((char *)o + 0x474);
    v2 = (S_vv2 *)((char *)o + 0x478);
    v3 = (S_vv3 *)((char *)o + 0x484);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 7;
        operation_8c059ef8((void *)o, 4);
        ((ObjectData *)o)->f3dc &= -8;
        v1->f00 = 0;
        v2->f00 = 0;
        v3->f00 = (*(S_g8c470618 **)0x8c470618)->f00;
        process_entries_8c0731d8((void *)(((ObjectData *)o)->f464));
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (v1->f00 != 3) {
            return;
        }
        ((ObjectData *)o)->f454 = 0;
        ((ObjectData *)o)->f458 += 1;
        ((ObjectData *)o)->f3dc &= -9;
        v5 = (int)0;
        if (((ObjectData *)o)->f45c >= 5) {
            operation_8c059ea4((void *)o, 8);
            v5 = (int)1;
        }
        if (v5 != 0) {
            return;
        }
        operation_8c059ea4((void *)o, 7);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c0f5ef0;
            }
            if (v1->f00 == 2) {
                goto L_8c0f60dc;
            }
            return;
        }
        t1 = check_range_8c01cf68((void *)o, 11.0f);
        if (t1 == 0) {
            t2 = check_range_8c01cf68((void *)o, 21.0f);
            if (t2 == 0) {
                goto L_8c0f5dce;
            }
        }
        (&frame)->f0c = -5.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 7.0f;
        rotate_scalar_pair((void *)(&(&frame)->f0c), (void *)(&(&frame)->f14), (int)(((ObjectData *)o)->f64));
        call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
        create_effect_777c((void *)(&(&frame)->f0c), 0xf3);
L_8c0f5dce:;
        if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
            ((ObjectData *)o)->ff0 = 2;
            v1->f00 = 1;
            ((ObjectData *)o)->f3dc |= 4;
            ((ObjectData *)o)->fdc->f18 |= 0xe00;
        }
        t3 = operation_8c05c1f0(o);
        if (t3 != 0) {
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
        }
        t4 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t5 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t4 * 65536.0f / 6.28318405f)), 0x280);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t5;
        v17 = (char *)((ObjectData *)o)->f64;
        t6 = step_clamped_angle_velocity((int)(v17), (int)(((ObjectData *)o)->f448), (int)(v17), 0x200, 0x2000);
        ((ObjectData *)o)->f448 = (int)t6;
        o->v95();
        return;
L_8c0f5ef0:;
        t7 = check_range_8c01cf68((void *)o, 0.0f);
        if (t7 == 0) {
            t8 = check_range_8c01cf68((void *)o, 8.0f);
            if (t8 == 0) {
                goto L_8c0f5f14;
            }
        }
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
L_8c0f5f14:;
        v22 = (int)0;
        t9 = query_scaled_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, (*(S_g8c470618 **)0x8c470618)->f00 * 30.0f);
        v23 = (int)v22;
        if (t9 != 0) {
            v23 = (int)1;
        }
        clamp_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, (*(S_g8c470618 **)0x8c470618)->f00);
        t10 = operation_8c05af28((void *)o, 1);
        v24 = (int)v23;
        if (t10 != 0) {
            v24 = (int)1;
        }
        operation_8c05237c((void *)o);
        v25 = (int)v24;
        if (((((ObjectData *)o)->fdc->f18 & 0x400000)) != 0) {
            v25 = (int)1;
        }
        t11 = operation_8c0f4fd8(o);
        v26 = (int)v25;
        if (t11 != 0) {
            v26 = (int)1;
        }
        t12 = operation_8c05c1f0(o);
        if (t12 != 0) {
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f3ac->f3c;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
            t13 = normalize_xz_checked((void *)(&(&frame)->f18));
            if (!(30.0f > t13)) {
                t14 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                t15 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                if (0.0f > ((&frame)->f18.f00 * t14 + (&frame)->f18.f08 * t15)) {
                    v26 = (int)1;
                }
            }
        }
        if (v26 != 0) {
            v1->f00 = 2;
            v2->f00 = 0;
            ((ObjectData *)o)->f44c = (int)((*(S_g8c470618 **)0x8c470618)->f1c);
            ((ObjectData *)o)->f3dc &= -5;
            operation_8c059ef8((void *)o, 7);
            t16 = call_8c24e644(0x3000e, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t16, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
        }
        t17 = call_8c24e644(0x30009, (void *)(((ObjectData *)o)->f38c));
        call_8c05fd7c(t17, o, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
L_8c0f60dc:;
        v2->f00 += 1;
        if (v2->f00 >= 0xa) {
            ((ObjectData *)o)->ff0 = 3;
            t18 = check_range_8c01cf68((void *)o, 21.0f);
            if (t18 != 0) {
                (&frame)->f00 = -5.0f;
                (&frame)->f04 = 0.0f;
                (&frame)->f08 = 7.0f;
                rotate_scalar_pair((void *)(&frame), (void *)(&(&frame)->f08), (int)(((ObjectData *)o)->f64));
                call_8c3bdf60((void *)(&frame), (void *)(((char *)o + 0x3c)));
                create_effect_777c((void *)(&frame), 0xf3);
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                v1->f00 = 3;
            }
            v3->f00 *= 0.95f;
        }
        if (!(3.0f > v3->f00)) {
            operation_8c0f4fd8(o);
        } else {
            o->v95();
        }
        clamp_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, v3->f00);
        return;
    case 5:
        ((ObjectData *)o)->f3dc &= -5;
        ((ObjectData *)o)->fdc->f18 &= -0xe01;
        set_field_8c05af54((void *)o);
    }
}
