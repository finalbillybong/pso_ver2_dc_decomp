/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d7f98
 * function: operation_8c0d7f98
 * language: c++
 * reference size: 764 bytes
 * compiled size: 768 bytes (+0.5%)
 * differing lines: 26 of 302 reference instruction lines
 * differing bytes: 530
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
typedef struct S_c8c0d852c S_c8c0d852c;
typedef struct Frame Frame;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_0 S_vv20_0;
typedef struct S_vv50 S_vv50;
class Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0xa];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0xb2];
    short f1ae;
    char unknown1b0[0x1dc];
    Arg0_38c *f38c;
    char unknown390[0x44];
    int f3d4;
    int f3d8;
    char unknown3dc[0x4];
    int f3e0;
    char unknown3e4[0x14];
    short f3f8;
} ObjectData;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_c8c0d852c {
    char unknown0[0x20];
    short f20;
};
struct S_vv20 {
    S_vv20_0 *f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv50 {
    char unknown0[0x4];
    short f04;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" int call_8c05c2dc(Object *);
extern "C" void operation_8c05c184(void *);
extern "C" float object_random_fraction(void *);
extern "C" S_c8c0d852c *operation_8c0d852c(int, int, int);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void call_8c0d889c(int, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int call_8c24e644(int, void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c0d7de4(Object *, int);
extern "C" void operation_8c0d89e0(int);
extern "C" void operation_8c01c5f0(int);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bit0(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void call_8c0a7608(void *, Frame *);
extern "C" void operation_8c0d7f98(Object *o, int a1)
{
    Frame frame;
    int v8;
    int k;
    unsigned short id;
    int v2;
    int v6;
    int v7;
    int v3;
    int v4;
    S_vv1 *v1;
    int v5;
    int v10;
    int v18;
    int v26;
    S_vv20 *v20;
    S_vv50 *v50;
    int t1;
    float t2;
    S_c8c0d852c *t3;
    int t4;
    int t5;
    int t6;
    float t7;
    float t8;
    int t9;
    v1 = (S_vv1 *)((char *)o + 0x440);
    switch (a1) {
    case 4:
        ((ObjectData *)o)->ff0 = 7;
        operation_8c059ef8((void *)o, 0xe);
        o->v102();
        ((ObjectData *)o)->f3e0 = (unsigned int)((ObjectData *)o)->f3e0 >> 2 << 2;
        v1->f00 = (S_vv1_0 *)0;
        break;
    case 3:
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            break;
        }
        ((ObjectData *)o)->f3d4 = (int)(((ObjectData *)o)->f3d8);
        t1 = call_8c05c2dc(o);
        if (t1 != 0) {
            operation_8c05c184((void *)o);
            t2 = object_random_fraction((void *)o);
            v2 = (int)0;
            v3 = (int)0x3f0;
            *(int *)((char *)((char *)o + 0x0) + (v3)) = (int)(t2 * 5.0f);
            v4 = (int)0x448;
            v6 = (int)0;
            v5 = (int)0xffff;
            while (5 > v2) {
                v7 = (int)*(int *)((char *)((char *)o + 0x0) + (v3));
                if (v7 != v2) {
                    k = v6++;
                    v8 = (int)(k << 1);
                    id = *(unsigned short *)((char *)((char *)((int)o + v4) + 0x0) + (v8));
                    if ((id & 0xffff) == (unsigned short)v5) {
                        t3 = operation_8c0d852c((int)o, (int)(((ObjectData *)o)->f20 + k + 1), (int)(((ObjectData *)o)->f30 + k + 1));
                        v10 = (int)t3;
                        if (t3 != 0) {
                            *(short *)((char *)((char *)((int)o + v4) + 0x0) + (v8)) = t3->f20;
                        }
                    } else {
                        t9 = lookup_object_by_id(id);
                        v10 = (int)t9;
                    }
                    call_8c0d889c(v10, v2);
                }
                v2 = (int)(v2 + 1);
            }
            operation_8c059ea4((void *)o, 8);
            t4 = call_8c24e644(0x30015, (void *)(((ObjectData *)o)->f38c));
            play_se_8c05fbf8(t4, (void *)(((char *)o + 0x3c)), 0, 0);
            break;
        }
        if (((((ObjectData *)o)->f3e0 & 0x10)) != 0) {
            ((ObjectData *)o)->f3e0 &= -0x11;
            ((ObjectData *)o)->f1ae = ((ObjectData *)o)->f3f8;
            v18 = (int)0;
            while (4 > v18) {
                t5 = call_8c0d7de4(o, v18);
                operation_8c0d89e0(t5);
                v18 = (int)(v18 + 1);
            }
        }
        operation_8c059ea4((void *)o, 4);
        break;
    case 0:
        operation_8c01c5f0((int)o);
        if (!(12.0f > ((ObjectData *)o)->ff8)) {
            if (v1->f00 == 0) {
                t6 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x114);
                v1->f00 = (S_vv1_0 *)(int)t6;
                if (v1->f00 != 0) {
                    set_effect_bit0((void *)(v1->f00));
                }
            } else {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
                t7 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
                (&frame)->f00.f00 += t7 * 15.0f;
                (&frame)->f00.f04 += 17.0f;
                t8 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
                (&frame)->f00.f08 += t8 * 15.0f;
                call_8c0a7608((void *)(v1->f00), (Frame *)((&frame)));
            }
        }
        o->v108();
        o->v95();
        break;
    case 5:
        if (v1->f00 != 0) {
            v50 = (S_vv50 *)v1->f00;
            v50->f04 |= 1;
            v1->f00 = (S_vv1_0 *)0;
        }
        break;
    }
}
