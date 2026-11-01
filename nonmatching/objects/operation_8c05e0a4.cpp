/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05e0a4
 * function: operation_8c05e0a4
 * language: c++
 * reference size: 688 bytes
 * compiled size: 692 bytes (+0.6%)
 * differing lines: 34 of 266 reference instruction lines
 * differing bytes: 456
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
class Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x2ee];
    int f3e0;
    char unknown3e4[0xc];
    int f3f0;
    int f3f4;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
struct S_vv1 {
    int f00;
};
struct S_vv3 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void create_effect(Frame *, int, int);
extern "C" void call_8c05b410(Object *, void *);
extern "C" void operation_8c05e0a4(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    int v10;
    int v13;
    int v16;
    int v23;
    int t1;
    v1 = (S_vv1 *)((char *)o + 0x42c);
    v2 = (S_vv2 *)((char *)o + 0x430);
    v3 = (S_vv3 *)((char *)o + 0x43c);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 1;
        o->v102();
        ((ObjectData *)o)->fdc->f44 = (unsigned int)((ObjectData *)o)->fdc->f44 >> 1 << 1;
        *(int *)((char *)o + 0x3e0) &= -9;
        ((void (*)(Object *, int))0x8c059ef8)(o, 8);
        if (((((ObjectData *)o)->f3e0 & 4)) != 0) {
            return;
        }
        ((ObjectData *)o)->f3e0 |= 4;
        v1->f00 = 0;
        v3->f00 = 0;
        v2->f00 = 1;
        ((ObjectData *)o)->f3f4 = 0;
        ((ObjectData *)o)->f3f0 = 0;
        return;
    case 3:
        if (!(v1->f00 > 0x1c2)) {
            return;
        }
        ((ObjectData *)o)->f34 |= 0x800;
        ((void (*)(Object *, int))0x8c059ea4)(o, 0xa);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        (&frame)->f00.f04 += 5.0f;
        create_effect((&frame), 0xd3, 0x40);
        call_8c05b410(o, (void *)0x8c284be8);
        play_se_8c05fbf8(0x30011, ((char *)o + 0x3c), 0, 0);
        return;
    case 0:
        ((void (*)(Object *))0x8c01c5f0)(o);
        if (((ObjectData *)o)->f3f0 > 0) {
            ((ObjectData *)o)->f3f0 -= 1;
            if (((ObjectData *)o)->f3f0 == 0) {
                ((void (*)(Object *))0x8c05a124)(o);
            }
        }
        t1 = ((int (*)(void))0x8c05bbf8)();
        if (t1 != 0) {
            v1->f00 += 0x14;
        } else {
            v1->f00 += 1;
        }
        if (0x12c > v1->f00) {
            ((ObjectData *)o)->f64 += 0x400;
            v16 = (int)0x11;
        } else {
            if (0x168 > v1->f00) {
                ((ObjectData *)o)->f64 += 0x800;
                v13 = (int)0x22;
            } else {
                if (0x1b3 > v1->f00) {
                    ((ObjectData *)o)->f64 += 0x1000;
                    v10 = (int)0x44;
                } else {
                    v10 = (int)0x44;
                }
                v13 = (int)v10;
            }
            v16 = (int)v13;
        }
        if (0x1b3 > v1->f00) {
            if (v2->f00 == 0) {
                *(int *)((char *)o + 0x3f4) += v16;
                if (!(((ObjectData *)o)->f3f4 > 0xff)) {
                    goto L_8c05e2a6;
                }
                ((ObjectData *)o)->f3f4 = 0xff - ((int)((ObjectData *)o)->f3f4 + -0xff);
                v2->f00 = 1;
                play_se_8c05fbf8(0x30010, ((char *)o + 0x3c), 0, 0);
                v16 = (int)/* ? clobbered */ 0;
                goto L_8c05e2a6;
            }
            *(int *)((char *)o + 0x3f4) -= v16;
            if (((ObjectData *)o)->f3f4 >= 0) {
                goto L_8c05e2a6;
            }
            ((ObjectData *)o)->f3f4 = -(int)(((ObjectData *)o)->f3f4);
            v2->f00 = 0;
        } else {
            ((ObjectData *)o)->f3f4 = 0xff;
        }
L_8c05e2a6:;
        o->v108();
        o->v94();
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}
