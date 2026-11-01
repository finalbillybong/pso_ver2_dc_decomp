/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c063e94
 * function: operation_8c063e94
 * language: c++
 * reference size: 816 bytes
 * compiled size: 816 bytes (+0.0%)
 * differing lines: 36 of 323 reference instruction lines
 * differing bytes: 36
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
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_42c_dc Arg0_42c_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
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
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x232];
    Vector3 f324;
    char unknown330[0x7c];
    int f3ac;
    char unknown3b0[0xc];
    float f3bc;
    float f3c0;
    float f3c4;
    char unknown3c8[0x2c];
    int f3f4;
    char unknown3f8[0x34];
    Arg0_42c *f42c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_42c {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_42c_dc *fdc;
};
struct Arg0_42c_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" int query_scaled_contact(void *, float, float, float);
extern "C" int operation_8c011308(int, void *, int);
extern "C" void call_8c05bfd8(Object *, float);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c0610c8(void *, int);
extern "C" void operation_8c063e94(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    float v7;
    float v8;
    float v14;
    float v15;
    int t1;
    int t2;
    float t3;
    float t4;
    int t5;
    int t6;
    float t8;
    float t7;
    v1 = (S_vv1 *)((char *)o + 0x438);
    v2 = (S_vv2 *)((char *)o + 0x43c);
    v3 = (S_vv3 *)((char *)o + 0x448);
    switch (a1) {
    case 5:
        break;
    case 4:
        ((ObjectData *)o)->ff0 = 0;
        operation_8c059ef8((void *)o, 0xd);
        o->v102();
        v1->f00 = 0;
        v3->f00 = (S_vv3_0 *)0;
        v2->f00 = 0;
        return;
    case 3:
        if (v1->f00 != 2) {
            return;
        }
        if (((ObjectData *)o)->f3ac != 0) {
            operation_8c059ea4((void *)o, 0xa);
            return;
        }
        operation_8c059ea4((void *)o, 7);
        return;
    case 0:
        operation_8c01c5f0(o);
        switch (v1->f00) {
        case 0:
            v3->f00 = (S_vv3_0 *)((v2->f00 >> 1 << 0xc) + 0x1800);
            if (((v2->f00 & 1)) != 0) {
                v3->f00 = (S_vv3_0 *)-(int)(v3->f00);
            }
            if (((((ObjectData *)o)->f20 & 1)) == 0) {
                v3->f00 = (S_vv3_0 *)-(int)(v3->f00);
            }
            v3->f00 = (S_vv3_0 *)((int)v3->f00 + ((ObjectData *)o)->f64);
            v2->f00 += 1;
            if (v2->f00 > 8) {
                v1->f00 = 2;
            }
            t7 = njSin_8c37eb0c((void *)(v3->f00));
            v7 = (float)(t7 * 16.0f);
            t8 = njCos_8c38c154((void *)(v3->f00));
            v8 = (float)(t8 * 16.0f);
            ((ObjectData *)o)->f42c->f3c = ((ObjectData *)o)->f3c + v7;
            ((ObjectData *)o)->f42c->f40 = ((ObjectData *)o)->f40;
            ((ObjectData *)o)->f42c->f44 = ((ObjectData *)o)->f44 + v8;
            refresh_follow_effect_8c052180((void *)(((ObjectData *)o)->f42c));
            if (((((ObjectData *)o)->f42c->fdc->f18 & 0x700000)) != 0) {
                return;
            }
            v14 = (float)(v7 * 2.0f);
            v15 = (float)(v8 * 2.0f);
            t1 = query_scaled_contact((void *)o, v14, v15, 1.0f);
            if (t1 != 0) {
                return;
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
            (&frame)->f00.f00 += v14;
            (&frame)->f00.f08 += v15;
            t2 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x15);
            if (t2 == 0) {
                return;
            }
            v1->f00 = 1;
            ((ObjectData *)o)->ff0 = 0x12;
            t3 = njSin_8c37eb0c((void *)(v3->f00));
            ((ObjectData *)o)->f3bc = t3;
            ((ObjectData *)o)->f3c0 = 0.0f;
            t4 = njCos_8c38c154((void *)(v3->f00));
            ((ObjectData *)o)->f3c4 = t4;
            return;
        case 1:
            if (((((ObjectData *)o)->fe8 & 0x10)) != 0) {
                if (((ObjectData *)o)->f3f4 != 0) {
                    call_8c05bfd8(o, 350.0f);
                } else {
                    call_8c05bfd8(o, 250.0f);
                }
                v1->f00 = 2;
            }
            t5 = check_range_8c01cf68((void *)o, 18.0f);
            if (t5 != 0) {
                play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
                update_last_effect(-0x1000);
            }
            slide_and_apply_contact((void *)o, ((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4, 1.8f);
            t6 = angle_step((int)(((ObjectData *)o)->f64), (int)(v3->f00), 0xf00);
            ((ObjectData *)o)->f64 = (int)t6;
            operation_8c0610c8((void *)o, (int)(v3->f00));
            o->v95();
        }
    }
}
