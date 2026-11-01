/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c064370
 * function: operation_8c064370
 * language: c++
 * reference size: 612 bytes
 * compiled size: 612 bytes (+0.0%)
 * differing lines: 28 of 238 reference instruction lines
 * differing bytes: 30
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
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_p0_318 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_318;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
};
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
    char unknown48[0x1c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x226];
    Block_p0_318 f318;
    char unknown324[0xc];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x38];
    int f394;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
extern "C" void operation_8c05a11c(Object *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" float normalize_xz_checked(void *);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" int angle_step(int, int, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c064370(Object *o, int a1)
{
    Frame frame;
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv1 *v1;
    int v6;
    float t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)((char *)o + 0x438);
    v2 = (S_vv2 *)((char *)o + 0x43c);
    v3 = (S_vv3 *)((char *)o + 0x448);
    switch (a1) {
    case 4:
        o->v102();
        operation_8c05a11c(o, 0xf1);
        v2->f00 = 0;
        v3->f00 = 0;
        ((ObjectData *)o)->ff0 = 6;
        v1->f00 = 0;
        if (0x14 > (((ObjectData *)o)->f35a - ((ObjectData *)o)->f330)) {
            play_se_8c05fbf8(0x3001b, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x500);
        }
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        v6 = (int)((ObjectData *)o)->f394;
        switch (v6) {
        case 11:
            operation_8c059ea4((void *)o, 0xd);
            return;
        case 2:
            operation_8c059ea4((void *)o, 7);
            return;
        }
        operation_8c059ea4((void *)o, v6);
        return;
    case 0:
        operation_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f318;
        t1 = normalize_xz_checked((void *)(&(&frame)->f0c));
        slide_and_apply_contact((void *)o, (&frame)->f0c.f00, (&frame)->f0c.f08, t1);
        if (v1->f00 == 0) {
            ((ObjectData *)o)->f318.f00 *= 0.5f;
            ((ObjectData *)o)->f318.f08 *= 0.5f;
        } else {
            ((ObjectData *)o)->f318.f00 *= 0.9f;
            ((ObjectData *)o)->f318.f08 *= 0.9f;
            t2 = angle_step((int)(((ObjectData *)o)->f64), (int)(v3->f00), 0x300);
            ((ObjectData *)o)->f64 = (int)t2;
            ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
            t3 = check_range_8c01cf68((void *)o, 22.0f);
            if (t3 != 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                (&frame)->f00.f00 += (&frame)->f0c.f00 * 5.0f;
                (&frame)->f00.f08 += (&frame)->f0c.f08 * 5.0f;
                create_effect_777c((void *)(&frame), 0xf3);
            }
        }
        o->v95();
        return;
    case 5:
        reset_segments_8c05a124((void *)o);
        set_field_8c05af54((void *)o);
    }
}
