/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c9acc
 * function: operation_8c0c9acc
 * language: c++
 * reference size: 780 bytes
 * compiled size: 780 bytes (+0.0%)
 * differing lines: 244 of 314 reference instruction lines
 * differing bytes: 342
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_s418;
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
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ca];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x1c];
    int f3e4;
    char unknown3e8[0x1c];
    int f404;
    char unknown408[0xc];
    float f414;
    float f418;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
class Arg0_s418 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s418Data {

} Arg0_s418Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void run_actor_activation_callbacks(void *);
extern "C" void reset_actor_motion(void *);
extern "C" void call_8c0c7e48(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(int);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void run_actor_release_callbacks(void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void operation_8c0c9acc(Object *o, int a1)
{
    int v3;
    int v4;
    int v8;
    int v10;
    int v11;
    int v15;
    S_vv1 *v1;
    S_vv2 *v2;
    int v22;
    int v44;
    int v45;
    int v49;
    float v51;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    v1 = (S_vv1 *)((char *)o + 0x4ac);
    v2 = (S_vv2 *)((char *)o + 0x4b0);
    if (a1 == 0) {
        v22 = (int)o;
    } else {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c0c9d1c;
                }
                return;
            }
            ((ObjectData *)o)->ff0 = 7;
            operation_8c059ef8((void *)o, 3);
            ((ObjectData *)o)->f3e4 |= 0xe;
            o->v102();
            o->v97();
            o->v100();
            v3 = (int)0x400;
            v8 = (int)0;
            goto L_8c0c9b6e;
            v4 = (int)0;
L_8c0c9b50:;
            t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v3) + 0x0) + (v4 << 1))));
            if (t1 != 0) {
                run_actor_activation_callbacks((void *)t1);
            }
            v8 = (int)(v4 + 1);
L_8c0c9b6e:;
            v4 = (int)v8;
            if (2 > v8) {
                goto L_8c0c9b50;
            }
            ((Arg0_s418 *)((char *)o + 0x418))->v3();
            v10 = (int)0x400;
            v15 = (int)0;
            goto L_8c0c9bac;
            v11 = (int)0;
L_8c0c9b88:;
            t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v10) + 0x0) + (v11 << 1))));
            if (t2 != 0) {
                reset_actor_motion((void *)t2);
                call_8c0c7e48(t2);
            }
            v15 = (int)(v11 + 1);
L_8c0c9bac:;
            v11 = (int)v15;
            if (2 > v15) {
                goto L_8c0c9b88;
            }
            ((ObjectData *)o)->f414 = 0.0f;
            v1->f00 = 0;
            v2->f00 = 0;
            play_se_8c05fbf8(0x30006, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        }
        if (!(v1->f00 >= 0x3c)) {
            return;
        }
        if (((ObjectData *)o)->f404 != 2) {
            operation_8c059ea4((void *)o, 5);
        } else {
            operation_8c059ea4((void *)o, 7);
        }
        return;
    }
    if (!(-0.75f > ((ObjectData *)o)->f418)) {
        operation_8c01c5f0(v22);
        operation_8c05c184((void *)o);
        aim_direction_8c05bdd4((void *)o);
        t3 = call_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
        t4 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)), 0xa00);
        ((ObjectData *)o)->f64 = (int)t4;
    }
    if (v2->f00 != 0) {
        if (v2->f00 == 1) {
            goto L_8c0c9cd0;
        }
    } else {
        t5 = ((Arg0_s418 *)((char *)o + 0x418))->v5();
        if (t5 != 0) {
            v1->f00 = 0;
            v2->f00 = 1;
            ((ObjectData *)o)->f3e4 &= -5;
            o->v98();
            o->v99();
            v44 = (int)0x400;
            v49 = (int)0;
            goto L_8c0c9cc6;
            v45 = (int)0;
L_8c0c9ca8:;
            t6 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v44) + 0x0) + (v45 << 1))));
            if (t6 != 0) {
                run_actor_release_callbacks((void *)t6);
            }
            v49 = (int)(v45 + 1);
L_8c0c9cc6:;
            v45 = (int)v49;
            if (2 > v49) {
                goto L_8c0c9ca8;
            }
            goto L_8c0c9cfa;
L_8c0c9cd0:;
            v1->f00 += 1;
            v51 = (float)((ObjectData *)o)->f414;
            if (1.0f > v51) {
                ((ObjectData *)o)->f414 = v51 + 0.2f;
            }
            o->v95();
        }
    }
L_8c0c9cfa:;
    o->v108();
    call_8c05fd7c(0x3001d, o, (void *)(((char *)o + 0x3c)), 0, 0);
    return;
L_8c0c9d1c:;
    ((ObjectData *)o)->f414 = 1.0f;
    ((ObjectData *)o)->f3e4 &= -5;
}
