/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0641c4
 * function: operation_8c0641c4
 * language: c++
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 14 of 175 reference instruction lines
 * differing bytes: 12
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_4 S_vv4_4;
class Object;
typedef struct Block_frame_8 {
    int f00;
    float f04;
} Block_frame_8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
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
    virtual void v25(S_c8c053d84 *, int, Block8);
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
    char unknown0[0x64];
    int f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x306];
    int f3f8;
    unsigned short f3fc;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    short f08;
};
struct S_c8c053d84 {
    char unknown0[0x3f8];
    int f3f8;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
};
extern int g_8c4688dc;
extern "C" void operation_8c059ef8(void *, int);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c0610c8(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void operation_8c0641c4(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v3;
    int v5;
    S_vv4 *v4;
    S_c8c053d84 *t1;
    int t2;
    S_c8c053d84 *t3;
    S_c8c053d84 *t4;
    v1 = (S_vv1 *)((char *)o + 0x438);
    switch (a1) {
    case 5:
        break;
    case 4:
        o->v102();
        operation_8c059ef8((void *)o, 7);
        ((ObjectData *)o)->ff0 = 0xb;
        v1->f00 = 0;
        v2 = (int)((ObjectData *)o)->f3f8;
        v5 = 0x3f8;
        v4 = (S_vv4 *)g_8c4688dc;
        while (v4 != 0) {
            t1 = lookup_object_by_id((unsigned short)(v4->f08));
            if (t1 != 0 && *(int *)((char *)t1 + v5) == v2) {
                return;
            }
            v4 = (S_vv4 *)v4->f04;
        }
        return;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4((void *)o, 7);
        return;
    case 0:
        operation_8c01c5f0(o);
        operation_8c0610c8((void *)o, (int)(((ObjectData *)o)->f64));
        t2 = check_range_8c01cf68((void *)o, 10.0f);
        if (t2 != 0) {
            play_se_8c05fbf8(0x3001a, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x100);
        }
        v1->f00 += 1;
        if (v1->f00 == 0x1e) {
            t3 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f3fc));
            if (t3 == 0) {
                goto L_8c064308;
            }
            (&frame)->f08.f00 = 0xc;
            (&frame)->f08.f04 = 1.0f;
            o->v25(t3, 0, *(Block8 *)&(&frame)->f08);
        } else {
            if (v1->f00 == 0x28) {
                t4 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f3fc));
                if (t4 != 0) {
                    (&frame)->f00.f00 = 0xb;
                    (&frame)->f00.f04 = 1.0f;
                    o->v25(t4, 0, *(Block8 *)&(&frame)->f00);
                }
            }
        }
L_8c064308:;
        o->v95();
    }
}
