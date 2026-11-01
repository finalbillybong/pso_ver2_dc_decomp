/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0645d4
 * function: operation_8c0645d4
 * language: c++
 * reference size: 1056 bytes
 * compiled size: 1056 bytes (+0.0%)
 * differing lines: 90 of 385 reference instruction lines
 * differing bytes: 104
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv14 S_vv14;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
class Object;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_p0_318 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_318;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x1e];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x200];
    Block_p0_318 f318;
    char unknown324[0x74];
    float f398;
    char unknown39c[0x58];
    int f3f4;
    int f3f8;
    char unknown3fc[0x4c];
    int f448;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv6 {
    char unknown0[0x94];
    int f94;
    float f98;
};
struct Arg0_114_4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv2 {
    float f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv14 {
    char unknown0[0x4];
    int f04;
    short f08;
};
struct S_c8c053d84 {
    char unknown0[0x3f8];
    int f3f8;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    float f18;
    float f1c;
    float f20;
};
extern int g_8c4688c8;
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int operation_8c0612d0(void *, void *);
extern "C" void operation_8c05a11c(Object *, int);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" float object_random_fraction(void *);
extern "C" void set_field_8c05af48(void *);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void rotate_scalar_pair(void *, void *, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void create_resource_effect_8c1080a8(void *, int);
extern "C" void create_effect_at_8c108364(void *, int);
extern "C" int angle_step(int, int, int);
extern "C" float normalize_xz_checked(void *);
extern "C" void clamp_and_apply_contact(void *, float, float, float);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void set_field_8c05af54(void *);
extern "C" void operation_8c0645d4(Object *o, int a1)
{
    Frame frame;
    unsigned short v15;
    S_vv6 *v6;
    S_c8c053d84 *t2;
    float v9;
    S_vv3 *v3;
    int v13;
    S_vv14 *v14;
    int v26;
    S_vv2 *v2;
    int v11;
    int v12;
    S_vv1 *v1;
    int *v0;
    float v45;
    float v50;
    int t1;
    int v10;
    float t3;
    int t4;
    float t5;
    int t6;
    v1 = (S_vv1 *)((char *)o + 0x438);
    v0 = (int *)((char *)o + 0x448);
    v2 = (S_vv2 *)((char *)o + 0x450);
    v3 = (S_vv3 *)((char *)o + 0x458);
    switch (a1) {
    case 4:
        o->v102();
        refresh_follow_effect_8c05a194((void *)o);
        play_se_8c05fbf8(0x3001d, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x300);
        t1 = operation_8c0612d0((void *)o, (void *)v0);
        if (t1 == 0) {
            ((ObjectData *)o)->ff0 = 0xf;
        } else {
            ((ObjectData *)o)->ff0 = 0xe;
        }
        operation_8c05a11c(o, 0xf1);
        v1->f00 = 0;
        v6 = (S_vv6 *)((ObjectData *)o)->f110;
        v9 = (float)(float)(unsigned int)((*(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (v6->f94 << 3)))->f04 + -1);
        v2->f00 = 28.0f / (v9 / v6->f98);
        v3->f00 = 0.0f;
        ((ObjectData *)o)->f398 = 0.0f;
        if (((ObjectData *)o)->f3f4 != 0) {
            v10 = (int)0x1b6;
            v11 = (int)0x430;
            v12 = (int)0x434;
            v13 = (int)g_8c4688c8;
            v26 = (int)v13;
            goto L_8c064786;
            v14 = (S_vv14 *)v13;
            do {
                t2 = lookup_object_by_id((unsigned short)(v14->f08));
                if (t2 != 0) {
                    if (t2->f3f8 == ((ObjectData *)o)->f3f8) {
                        v15 = (unsigned short)*(unsigned short *)((char *)((char *)o + 0x0) + (v10));
                        t3 = object_random_fraction((void *)o);
                        *(int *)((char *)((char *)t2 + 0x0) + (v11)) = (int)(t3 * 50.0f) + 0x14;
                        *(short *)((char *)((char *)t2 + 0x0) + (v12)) = v15;
                    }
                }
                v26 = (int)v14->f04;
L_8c064786:;
                v14 = (S_vv14 *)v26;
            } while (v26 != 0);
        }
        set_field_8c05af48((void *)o);
        return;
    case 3:
        if (v1->f00 != 2) {
            return;
        }
        operation_8c059ea4((void *)o, 0x11);
        return;
    case 0:
        if (v1->f00 != 0) {
            if (v1->f00 == 1) {
                goto L_8c0649a8;
            }
            return;
        }
        operation_8c01c5f0(o);
        if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
            v1->f00 = 1;
            (&frame)->f1c = 0.0f;
            if (((ObjectData *)o)->ff0 == 0xe) {
                (&frame)->f18 = 12.0f;
                (&frame)->f20 = -10.0f;
            } else {
                (&frame)->f18 = -12.0f;
                (&frame)->f20 = -10.0f;
            }
            rotate_scalar_pair((void *)(&(&frame)->f18), (void *)(&(&frame)->f20), (int)(((ObjectData *)o)->f64));
            call_8c3bdf60((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
            create_resource_effect_8c1080a8((void *)(&(&frame)->f18), 0x32);
            create_effect_at_8c108364((void *)(&(&frame)->f18), 0x46);
        }
        t4 = angle_step((int)(((ObjectData *)o)->f64), *v0, 0x300);
        ((ObjectData *)o)->f64 = (int)t4;
        ((ObjectData *)o)->f64 = (short)((ObjectData *)o)->f64;
        v45 = (float)((ObjectData *)o)->f398;
        if (28.0f > v45) {
            ((ObjectData *)o)->f398 = v45 + v2->f00;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f318;
        t5 = normalize_xz_checked((void *)(&(&frame)->f0c));
        clamp_and_apply_contact((void *)o, (&frame)->f0c.f00, (&frame)->f0c.f08, t5);
        t6 = check_range_8c01cf68((void *)o, 22.0f);
        if (t6 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            (&frame)->f00.f00 += (&frame)->f0c.f00 * 5.0f;
            (&frame)->f00.f08 += (&frame)->f0c.f08 * 5.0f;
            create_effect_777c((void *)(&frame), 0xf3);
        }
        ((ObjectData *)o)->f318.f00 *= 0.8f;
        ((ObjectData *)o)->f318.f08 *= 0.8f;
        operation_8c0610c8((void *)o, (int)(((ObjectData *)o)->f64));
        o->v94();
        return;
L_8c0649a8:;
        v50 = (float)0.1f;
        ((ObjectData *)o)->f3c.f04 -= v50;
        v3->f00 += v50;
        if (!(v3->f00 > 20.0f)) {
            return;
        }
        v1->f00 = 2;
        return;
    case 5:
        set_field_8c05af54((void *)o);
        return;
    case 1:
    case 2:
        break;
    }
}
