/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c094084
 * function: operation_8c094084
 * language: c++
 * reference size: 708 bytes
 * compiled size: 708 bytes (+0.0%)
 * differing lines: 38 of 288 reference instruction lines
 * differing bytes: 46
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
typedef struct Arg0_3dc Arg0_3dc;
typedef struct Arg0_484 Arg0_484;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
class Object;
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
    char unknown0[0x40];
    float f40;
    char unknown44[0xac];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0xc];
    Block_p0_318 f318;
    char unknown324[0x70];
    int f394;
    char unknown398[0x44];
    Arg0_3dc *f3dc;
    char unknown3e0[0x4];
    int f3e4;
    char unknown3e8[0x20];
    float f408;
    char unknown40c[0x8];
    float f414;
    int f418;
    char unknown41c[0x68];
    Arg0_484 *f484;
    char unknown488[0x5c];
    unsigned short f4e4;
} ObjectData;
struct Arg0_3dc {
    char unknown0[0x41c];
    int f41c;
};
struct S_vv5 {
    char unknown0[0x3e4];
    int f3e4;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv4 {
    float f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_484 {
    char unknown0[0x28];
    int f28;
};
extern "C" void operation_8c01c5f0(Object *);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void operation_8c059ea4(void *, int);
extern "C" float normalize_xz_checked(void *);
extern "C" void slide_and_apply_contact(void *, float, float, float);
extern "C" void reset_segments_8c05a124(void *);
extern "C" void operation_8c094084(Object *o, int a1)
{
    Frame frame;
    S_vv5 *v5;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    float v9;
    float v18;
    int t1;
    float t2;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    v2 = (S_vv2 *)((char *)o + 0x490);
    v3 = (S_vv3 *)((char *)o + 0x4a0);
    v4 = (S_vv4 *)((char *)o + 0x4a4);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = ((ObjectData *)o)->f418;
        operation_8c01c5f0(o);
        if (((ObjectData *)o)->f30a == 2) {
            t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f4e4));
            ((ObjectData *)o)->f3dc = (Arg0_3dc *)(int)t1;
            v5 = (S_vv5 *)((ObjectData *)o)->f3dc;
            ((ObjectData *)o)->f3dc->f41c = 0;
            v5->f3e4 |= 1;
        }
        ((ObjectData *)o)->f3e4 &= -0x400001;
        o->v102();
        v1->f00 = 0;
        if ((((ObjectData *)o)->f40 + ((ObjectData *)o)->f408 + 5.0f) < ((ObjectData *)o)->f414) {
            v2->f00 = 0;
        } else {
            v2->f00 = 2;
        }
        v3->f00 = 0.0f;
        v4->f00 = 0.0f;
        return;
    case 3:
        if (v2->f00 != 3) {
            return;
        }
        operation_8c059ea4((void *)o, (int)(((ObjectData *)o)->f394));
        return;
    case 0:
        operation_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f318;
        t2 = normalize_xz_checked((void *)(&frame));
        slide_and_apply_contact((void *)o, (&frame)->f00.f00, (&frame)->f00.f08, t2);
        v9 = (float)(t2 * 0.5f);
        ((ObjectData *)o)->f318.f00 = (&frame)->f00.f00 * v9;
        ((ObjectData *)o)->f318.f08 = (&frame)->f00.f08 * v9;
        switch (v2->f00) {
        case 0:
            v3->f00 -= 0.13f;
            if (-4.0f > v3->f00) {
                v3->f00 = -4.0f;
            }
            ((ObjectData *)o)->f414 += v3->f00;
            if (!((((ObjectData *)o)->f40 + ((ObjectData *)o)->f408 + 12.0f) > ((ObjectData *)o)->f414)) {
                goto L_8c094284;
            }
            v2->f00 = 1;
            if (v3->f00 > -2.0f) {
                v3->f00 = -2.0f;
            }
            v18 = (float)v3->f00;
            v4->f00 = v18 * v18 / 30.0f;
            break;
        case 1:
            v3->f00 += v4->f00;
            ((ObjectData *)o)->f414 += v3->f00;
            if (0.0f > v3->f00) {
                goto L_8c094284;
            }
            if (!((((ObjectData *)o)->f40 + ((ObjectData *)o)->f408) < ((ObjectData *)o)->f414)) {
                goto L_8c094284;
            }
            ((ObjectData *)o)->f414 = ((ObjectData *)o)->f40 + ((ObjectData *)o)->f408;
            v1->f00 = 0;
            v2->f00 = 2;
            break;
        case 2:
            v1->f00 += 1;
            if (v1->f00 >= ((ObjectData *)o)->f484->f28) {
                v2->f00 = 3;
            }
        }
L_8c094284:;
        o->v95();
        return;
    case 5:
        reset_segments_8c05a124((void *)o);
        if (((ObjectData *)o)->f418 == 5) {
            ((ObjectData *)o)->ff0 = 1;
            return;
        }
        ((ObjectData *)o)->ff0 = 0;
    }
}
