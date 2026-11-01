/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f559c
 * function: operation_8c0f559c
 * language: c++
 * reference size: 744 bytes
 * compiled size: 744 bytes (+0.0%)
 * differing lines: 32 of 294 reference instruction lines
 * differing bytes: 37
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
class Arg0_s3e0;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x4];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x232];
    Vector3 f324;
    char unknown330[0x5c];
    Arg0_38c *f38c;
    char unknown390[0x2c];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x14];
    int f3dc;
    char unknown3e0[0x74];
    int f454;
    char unknown458[0x4];
    int f45c;
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
};
class Arg0_s3e0 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3e0Data {

} Arg0_s3e0Data;
extern "C" void operation_8c059ef8(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" void update_last_effect(int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" void operation_8c0f559c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v1 = (S_vv1 *)((char *)o + 0x474);
    v2 = (S_vv2 *)((char *)o + 0x478);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        operation_8c059ef8((void *)o, 4);
        {
            int *pf1 = (int *)((char *)o + 0x3dc);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        ((ObjectData *)o)->f3dc |= 2;
        o->v101();
        ((Arg0_s3e0 *)((char *)o + 0x3e0))->v3();
        v1->f00 = 0;
        v2->f00 = 0;
        t1 = call_8c24e644(0x3000d, (void *)(((ObjectData *)o)->f38c));
        play_se_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&((ObjectData *)o)->f54;
        *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
        *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f45c = 0;
        ((ObjectData *)o)->f454 = 0;
        return;
    case 3:
        if (v2->f00 != 2) {
            return;
        }
        operation_8c059ea4((void *)o, 4);
        return;
    case 0:
        operation_8c01c5f0(o);
        call_8c05c0dc(o, 300.0f);
        v1->f00 += 1;
        switch (v2->f00) {
        case 0:
            if (v1->f00 > 0x14) {
                v2->f00 = 1;
                ((ObjectData *)o)->ff0 = 3;
                t2 = call_8c24e644(0x3000e, (void *)(((ObjectData *)o)->f38c));
                play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
                update_last_effect(-0x200);
            }
            t3 = check_range_8c01cf68((void *)o, 0.0f);
            if (t3 == 0) {
                t4 = check_range_8c01cf68((void *)o, 8.0f);
                if (t4 == 0) {
                    goto L_8c0f5702;
                }
            }
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
L_8c0f5702:;
            slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, 1.2f);
            t5 = call_8c24e644(0x30008, (void *)(((ObjectData *)o)->f38c));
            call_8c05fd7c(t5, o, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        case 1:
            t6 = check_range_8c01cf68((void *)o, 21.0f);
            if (t6 != 0) {
                (&frame)->f00 = -5.0f;
                (&frame)->f04 = 0.0f;
                (&frame)->f08 = 7.0f;
                rotate_scalar_pair((void *)(&frame), (void *)(&(&frame)->f08), (int)(((ObjectData *)o)->f64));
                call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
                create_effect_777c((void *)(&frame), 0xf3);
            }
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                v2->f00 = 2;
            }
        }
        t7 = ((Arg0_s3e0 *)((char *)o + 0x3e0))->v5();
        if (t7 == 0) {
            return;
        }
        ((ObjectData *)o)->f3dc &= -3;
        o->v102();
        o->v95();
        return;
    case 5:
        o->v102();
    }
}
