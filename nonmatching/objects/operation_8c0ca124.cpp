/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ca124
 * function: operation_8c0ca124
 * language: c++
 * reference size: 1284 bytes
 * compiled size: 1284 bytes (+0.0%)
 * differing lines: 92 of 463 reference instruction lines
 * differing bytes: 168
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
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
    char unknownfc[0x2b0];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    float f3c8;
    int f3cc;
    char unknown3d0[0x14];
    int f3e4;
    char unknown3e8[0x18];
    unsigned short f400;
    char unknown402[0x2];
    int f404;
    int f408;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
extern "C" int lookup_object_by_id(int);
extern "C" void operation_8c059ef8(Object *, int);
extern "C" void operation_8c059ea4(Object *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int actor_mode_allows_action(int);
extern "C" int hs_8c0c9258(Object *, float, float);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void reset_link_8c05bf28(Object *);
extern "C" void set_fields_wrapper_8c05c184(Object *);
extern "C" void aim_direction_8c05bdd4(Object *);
extern "C" void set_actor_action_kind(int, int);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(void *, int, int);
extern "C" void hs_8c05fd7c(int, Object *, void *, int, int);
extern "C" int get_actor_state_value(int);
extern "C" void hs_8c0c96cc(Object *);
extern "C" void mark_actor_flag_2(int);
extern "C" void operation_8c0ca124(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v8;
    int v9;
    int v11;
    int v39;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    float t7;
    int t8;
    int t9;
    float t10;
    int t11;
    int t12;
    int t13;
    v1 = (S_vv1 *)((char *)o + 0x4ac);
    v2 = (S_vv2 *)((char *)o + 0x4b0);
    t1 = lookup_object_by_id(((ObjectData *)o)->f400);
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c0ca5fc;
                }
                return;
            }
            ((ObjectData *)o)->ff0 = 0;
            operation_8c059ef8(o, 3);
            ((ObjectData *)o)->f3e4 |= 0xa;
            v1->f00 = 0;
            v2->f00 = 0;
            return;
        }
        if (v2->f00 != 5) {
            return;
        }
        *(int *)((char *)o + 0x404) += 1;
        if (((ObjectData *)o)->f404 >= 3) {
            ((ObjectData *)o)->f404 = 0;
        }
        ((ObjectData *)o)->f408 += 1;
        operation_8c059ea4(o, 3);
        return;
    }
    operation_8c01c5f0(o);
    v1->f00 += 1;
    switch (v2->f00) {
    case 0:
        if (t1 == 0) {
        } else {
            t2 = actor_mode_allows_action(t1);
            if (t2 == 0) {
            } else {
                v1->f00 = 0;
                if (((ObjectData *)o)->f3cc >= 0x1e) {
                    ((ObjectData *)o)->f3cc = 0;
                    v8 = (int)1;
                } else {
                    ((ObjectData *)o)->f3cc += 1;
                    v8 = (int)0;
                }
                if (v8 != 0) {
                    t12 = hs_8c0c9258(o, 10000.0f, 10000.0f);
                    v11 = (int)t12;
                } else {
                    t3 = active_unflagged_8c05b2dc(((ObjectData *)o)->f3ac);
                    if (t3 != 0) {
                        v9 = (int)1;
                    } else {
                        reset_link_8c05bf28(o);
                        v9 = (int)0;
                    }
                    v11 = (int)v9;
                }
                if (v11 == 0) {
                    v2->f00 = 4;
                    goto L_8c0ca3b0;
                }
                set_fields_wrapper_8c05c184(o);
                aim_direction_8c05bdd4(o);
                if (!(100.0f > ((ObjectData *)o)->f3c8)) {
                    v2->f00 = 4;
                } else {
                    v2->f00 = 1;
                    ((ObjectData *)o)->ff0 = 1;
                    ((ObjectData *)o)->f3e4 |= 8;
                    if (((ObjectData *)o)->f404 == 0) {
                        t4 = lookup_object_by_id(((ObjectData *)o)->f400);
                        if (t4 == 0) {
                            goto L_8c0ca356;
                        }
                        set_actor_action_kind(t4, 0);
                    } else {
                        t5 = lookup_object_by_id(((ObjectData *)o)->f400);
                        if (t5 != 0) {
                            set_actor_action_kind(t5, 1);
                        }
                    }
                }
L_8c0ca356:;
                t6 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                ((ObjectData *)o)->f64 = (Arg0_64 *)(int)(t6 * 65536.0f / 6.28318405f);
                goto L_8c0ca3b0;
            }
        }
        if (v1->f00 >= 0xf0) {
            v2->f00 = 5;
        }
L_8c0ca3b0:;
        set_fields_wrapper_8c05c184(o);
        aim_direction_8c05bdd4(o);
        t7 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t8 = angle_step(((ObjectData *)o)->f64, (int)(t7 * 65536.0f / 6.28318405f), 0xa00);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t8;
        if (((ObjectData *)o)->f404 == 0) {
            hs_8c05fd7c(0x30012, o, ((char *)o + 0x3c), 0, 0);
            goto L_8c0ca5bc;
        }
        hs_8c05fd7c(0x30013, o, ((char *)o + 0x3c), 0, 0);
        break;
    case 1:
        if (t1 != 0) {
            t9 = actor_mode_allows_action(t1);
            if (t9 == 0) {
                v2->f00 = 5;
                goto L_8c0ca488;
            }
        }
        if (v1->f00 >= 0x5a) {
            ((ObjectData *)o)->ff0 = 3;
            v2->f00 = 3;
        }
L_8c0ca488:;
        set_fields_wrapper_8c05c184(o);
        aim_direction_8c05bdd4(o);
        t10 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t11 = angle_step(((ObjectData *)o)->f64, (int)(t10 * 65536.0f / 6.28318405f), 0xa00);
        ((ObjectData *)o)->f64 = (Arg0_64 *)(int)t11;
        if (((ObjectData *)o)->f404 == 0) {
            hs_8c05fd7c(0x30012, o, ((char *)o + 0x3c), 0, 0);
            goto L_8c0ca5bc;
        }
        hs_8c05fd7c(0x30013, o, ((char *)o + 0x3c), 0, 0);
        break;
    case 2:
    case 3:
        if (!(11.0f > ((ObjectData *)o)->ff8)) {
            if (v2->f00 == 3) {
                if (t1 != 0) {
                    t13 = get_actor_state_value(t1);
                    v39 = (int)t13;
                } else {
                    v39 = (int)3;
                }
                if (v39 != 2) {
                    if (v39 == 3) {
                        goto L_8c0ca588;
                    }
                } else {
                    v2->f00 = 2;
                    hs_8c0c96cc(o);
                    goto L_8c0ca58c;
L_8c0ca588:;
                    v2->f00 = 2;
                }
            }
        }
L_8c0ca58c:;
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            goto L_8c0ca5bc;
        }
        v2->f00 = 5;
        if (t1 == 0) {
            goto L_8c0ca5bc;
        }
        mark_actor_flag_2(t1);
        break;
    case 4:
        if (v1->f00 >= 0x3c) {
            v2->f00 = 5;
        }
    case 5:
        break;
    }
L_8c0ca5bc:;
    o->v95();
    o->v94();
    hs_8c05fd7c(0x3001d, o, ((char *)o + 0x3c), 0, 0);
    return;
L_8c0ca5fc:;
    if (t1 != 0) {
        mark_actor_flag_2(t1);
    }
    ((ObjectData *)o)->f3e4 &= -9;
}
