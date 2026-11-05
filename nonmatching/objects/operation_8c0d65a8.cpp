/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d65a8
 * function: operation_8c0d65a8
 * language: c++
 * reference size: 1016 bytes
 * compiled size: 1016 bytes (+0.0%)
 * differing lines: 36 of 372 reference instruction lines
 * differing bytes: 111
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
typedef struct Arg0_38c Arg0_38c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
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
    virtual int v109(float);
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x26c];
    float f370;
    float f374;
    char unknown378[0x14];
    Arg0_38c *f38c;
    char unknown390[0x2c];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
    char unknown3c8[0x18];
    int f3e0;
    char unknown3e4[0x10];
    int f3f4;
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
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c05c184(void *);
extern "C" void aim_direction_8c05bdd4(void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int operation_8c0d4c80(void *, int, float);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int operation_8c05bbf8(void);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int angle_step(int, int, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0d65a8(Object *o, int a1)
{
    S_vv2 *v2;
    S_vv1 *v1;
    S_vv3 *v3;
    int v9;
    char *v14;
    int v28;
    int v10;
    int v15;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v1 = (S_vv1 *)((char *)o + 0x420);
    v2 = (S_vv2 *)((char *)o + 0x428);
    v3 = (S_vv3 *)((char *)o + 0x42c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 2;
        operation_8c059ef8((void *)o, 7);
        o->v102();
        ((ObjectData *)o)->f3e0 = (unsigned int)((ObjectData *)o)->f3e0 >> 2 << 2;
        ((ObjectData *)o)->f3f4 = 0;
        v1->f00 = 3;
        t1 = o->v109(200.0f);
        if (t1 != 0) {
            operation_8c05c184((void *)o);
            aim_direction_8c05bdd4((void *)o);
            t2 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
            v2->f00 = (int)(t2 * 65536.0f / 6.28318405f);
            t3 = operation_8c0d4c80((void *)o, (int)(v2->f00 + 0x8000), 80.0f);
            if (t3 == 0) {
                ((ObjectData *)o)->f3bc *= -1.0f;
                ((ObjectData *)o)->f3c4 *= -1.0f;
                v1->f00 = 0;
                v3->f00 = 7.11111116f;
            }
        }
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (v1->f00 != 3) {
            return;
        }
        v9 = (int)(1.0f <= ((ObjectData *)o)->f374);
        if (v9 != 0) {
            operation_8c059ea4((void *)o, 0xa);
            return;
        }
        v14 = (char *)((ObjectData *)o)->f3e0;
        v28 = (int)0x20000;
        if ((((int)(v14) & v28)) == 0) {
            v10 = (int)(1.0f > ((ObjectData *)o)->f370);
            if (v10 != 0) {
                goto L_8c0d67a8;
            }
        }
        ((ObjectData *)o)->f3e0 &= -0x30001;
        t4 = operation_8c05bbf8();
        if (t4 != 0) {
            v15 = (int)(1.0f > ((ObjectData *)o)->f370);
            if (v15 == 0) {
                operation_8c059ea4((void *)o, 0x10);
                return;
            }
        }
        operation_8c059ea4((void *)o, 4);
        return;
L_8c0d67a8:;
        ((ObjectData *)o)->f3e0 |= v28;
        operation_8c059ea4((void *)o, 0xe);
        return;
    case 0:
        operation_8c01c5f0(o);
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c0d6888;
            }
            if (v1->f00 == 2) {
                goto L_8c0d693c;
            }
            return;
        }
        t5 = angle_step((int)(((ObjectData *)o)->f64), (int)(v2->f00), 0x31c7);
        ((ObjectData *)o)->f64 = (int)t5;
        if (!(15.0f > (((ObjectData *)o)->ff8 + ((ObjectData *)o)->f100))) {
            v1->f00 = 1;
            o->v97();
            t6 = call_8c24e644(0x30011, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t6, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        o->v108();
        o->v95();
        return;
L_8c0d6888:;
        if (!(24.0f > (((ObjectData *)o)->ff8 + ((ObjectData *)o)->f100))) {
            v1->f00 = 2;
            o->v98();
            t7 = call_8c24e644(0x30012, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t7, (void *)(((char *)o + 0x3c)), 0, 0);
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
        }
        clamp_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, v3->f00);
        o->v94();
        return;
L_8c0d693c:;
        if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
            v1->f00 = 3;
        }
        o->v108();
        o->v95();
        return;
    case 5:
        o->v98();
        set_field_8c05af54((void *)o);
    }
}
