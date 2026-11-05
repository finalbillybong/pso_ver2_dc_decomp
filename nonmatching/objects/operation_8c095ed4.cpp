/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c095ed4
 * function: operation_8c095ed4
 * language: c++
 * reference size: 804 bytes
 * compiled size: 808 bytes (+0.5%)
 * differing lines: 96 of 319 reference instruction lines
 * differing bytes: 588
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_4f0 Arg0_4f0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv46 S_vv46;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
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
    virtual void v107(Frame *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0xc];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x1c];
    int f3e4;
    char unknown3e8[0x2c];
    float f414;
    int f418;
    int f41c;
    char unknown420[0xa4];
    float f4c4;
    float f4c8;
    float f4cc;
    char unknown4d0[0x4];
    int f4d4;
    char unknown4d8[0x14];
    int f4ec;
    char unknown4f0[0x20];
    int f510;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv46 {
    int f00;
};
struct Arg0_4f0 {
    char unknown0[0x3e4];
    int f3e4;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" char g_8c284fc8[];
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c05bed8(int, void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void set_fields_wrapper_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c090d88(void *, float);
extern "C" void operation_8c095ed4(Object *o, int a1)
{
    Frame frame;
    char *v10;
    int v7;
    char *v9;
    int v8;
    int v15;
    int v5;
    int v6;
    S_vv46 *v46;
    S_vv1 *v1;
    int v4;
    int v19;
    int v22;
    int v18;
    int v25;
    int v27;
    int v30;
    int v26;
    int t1;
    float t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    goto L_8c096132;
                }
                return;
            }
            if (((ObjectData *)o)->f418 == 5) {
                ((ObjectData *)o)->ff0 = 3;
                ((ObjectData *)o)->f418 = 4;
            }
            operation_8c059ef8((void *)o, 3);
            o->v102();
            ((ObjectData *)o)->f4c4 = *(float *)(g_8c284fc8 + 0x4);
            ((ObjectData *)o)->f4c8 = *(float *)(g_8c284fc8 + 0x8);
            ((ObjectData *)o)->f4cc = *(float *)(g_8c284fc8 + 0xc);
            v1->f00 = 0;
            v4 = (int)0x41c;
            v5 = (int)0x3e4;
            v6 = (int)0x4ec;
            v7 = (int)2;
            v15 = (int)0;
            goto L_8c095f92;
            v8 = (int)0;
            v9 = (char *)v7;
L_8c095f6c:;
            v10 = (char *)*(int *)((char *)((char *)o + 0x4f0) + (v8 << 2));
            operation_8c05bed8((int)(v10), (void *)(((ObjectData *)o)->f3ac));
            *(int *)((char *)((char *)v10 + 0x0) + (v4)) = (int)v9;
            v46 = (S_vv46 *)(v10 + v5);
            v46->f00 |= 1;
            v15 = (int)(v8 + 1);
            v7 = (int)(v9 + 2);
L_8c095f92:;
            if (*(int *)((char *)((char *)o + 0x0) + (v6)) > v15) {
                v8 = (int)v15;
                v9 = (char *)v7;
                goto L_8c095f6c;
            }
            return;
        }
        if (((((ObjectData *)o)->f3e4 & 2)) == 0) {
            return;
        }
        ((ObjectData *)o)->f3e4 &= -3;
        ((ObjectData *)o)->f510 = 1;
        operation_8c059ea4((void *)o, 4);
        return;
    }
    operation_8c01c5f0(o);
    call_8c05c0dc(o, 200.0f);
    if (v1->f00 != 0) {
        if (v1->f00 == 1) {
            goto L_8c096016;
        }
    } else {
        *(int *)((char *)o + 0x41c) -= 1;
        if (!(((ObjectData *)o)->f41c > 0)) {
            ((ObjectData *)o)->f4d4 = 2;
            v1->f00 = 1;
            play_se_8c05fbf8(0x3001a, (void *)(((char *)o + 0x324)), 0, 0);
            goto L_8c0960e2;
L_8c096016:;
            if (((ObjectData *)o)->f4d4 == 0) {
                *(int *)((char *)o + 0x3e4) |= 0x8000;
                v18 = (int)((ObjectData *)o)->f4ec;
                v22 = (int)0;
                goto L_8c09604c;
                v19 = (int)0;
L_8c09603a:;
                v25 = (int)v19;
                if ((((*(Arg0_4f0 **)((char *)((char *)o + 0x4f0) + (v19 << 2)))->f3e4 & 0x8000)) != 0) {
                    v22 = (int)(v19 + 1);
L_8c09604c:;
                    v19 = (int)v22;
                    if (v18 > v22) {
                        goto L_8c09603a;
                    }
                    v25 = (int)v22;
                }
                if (v25 == v18) {
                    ((ObjectData *)o)->f3e4 |= 2;
                    v26 = (int)0x4ec;
                    v30 = (int)0;
                    goto L_8c09607e;
                    v27 = (int)0;
L_8c09606e:;
                    *(int *)((char *)*(Arg0_4f0 **)((char *)((char *)o + 0x4f0) + (v27 << 2)) + 0x3e4) |= 2;
                    v30 = (int)(v27 + 1);
L_8c09607e:;
                    v27 = (int)v30;
                    if (*(int *)((char *)((char *)o + 0x0) + (v26)) > v30) {
                        goto L_8c09606e;
                    }
                }
            }
            t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f3ac));
            if (t1 != 0) {
                set_fields_wrapper_8c05c184((void *)o);
                aim_direction_8c05bdd4((void *)o);
                t2 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
                t3 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t2 * 65536.0f / 6.28318405f)), 0x400);
                ((ObjectData *)o)->f64 = (int)t3;
                ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            }
        }
    }
L_8c0960e2:;
    operation_8c090d88((void *)o, ((ObjectData *)o)->f3c.f04 + 25.0f);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
    (&frame)->f00.f04 = ((ObjectData *)o)->f414;
    o->v107((&frame));
    o->v95();
    return;
L_8c096132:;
    o->v98();
}
