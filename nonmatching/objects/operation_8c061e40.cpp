/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c061e40
 * function: operation_8c061e40
 * language: c++
 * reference size: 552 bytes
 * compiled size: 556 bytes (+0.7%)
 * differing lines: 42 of 209 reference instruction lines
 * differing bytes: 132
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_4 S_vv9_4;
typedef struct S_x4880 S_x4880;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0x44];
    int f3f4;
    char unknown3f8[0x8];
    int f400;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv9 {
    char unknown0[0x4];
    S_vv9_4 *f04;
    short f08;
};
struct S_x4880 {
    int f00;
};
struct Arg0_3ac {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern int g_8c4688dc;
extern "C" void operation_8c059ef8(Object *, int);
extern "C" void operation_8c059ea4(Object *, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void check_range_8c01cf68(Object *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" int lookup_object_by_id(short);
extern "C" int operation_8c05c1f0(Object *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" float call_8c130334(float, float);
extern "C" void operation_8c0610c8(Object *, int);
extern "C" void call_8c05c0dc(Object *, float);
extern "C" void operation_8c061e40(Object *o, int a1)
{
    S_vv1 *v1;
    short v23;
    int v8;
    S_vv9 *v9;
    int v6;
    int v7;
    float v16;
    float v17;
    int t1;
    int t2;
    int t3;
    float t4;
    v1 = (S_vv1 *)((char *)o + 0x438);
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    return;
                }
                return;
            }
            ((ObjectData *)o)->ff0 = 0x10;
            operation_8c059ef8(o, 7);
            o->v101();
            v1->f00 = 0;
            return;
        }
        if (((((ObjectData *)o)->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c059ea4(o, 7);
        return;
    }
    v1->f00 += 1;
    operation_8c01c5f0(o);
    v23 = (short)((ObjectData *)o)->ff0;
    if (v23 == 0x10) {
        check_range_8c01cf68(o, 7.0f);
    } else {
        if (v23 == 0xb) {
            t1 = ((int (*)(Object *, float))0x8c01cf68)(o, 9.0f);
            if (t1 != 0) {
                play_se_8c05fbf8(0x30019, ((char *)o + 0x3c), 0, 0);
                update_last_effect(-0x200);
            }
        }
    }
    if (v1->f00 == 0x3c) {
        v6 = (int)0x3f8;
        v8 = (int)g_8c4688dc;
        v9 = (S_vv9 *)v8;
        v7 = (int)0x424;
        while (v9 != 0) {
            t2 = lookup_object_by_id(v9->f08);
            if (*(int *)((char *)((char *)o + 0x0) + (v6)) == *(int *)((char *)((char *)t2 + 0x0) + (v6))) {
                ((S_x4880 *)(t2 + v7))->f00 |= 1;
            }
            v9 = (S_vv9 *)v9->f04;
        }
    }
    t3 = operation_8c05c1f0(o);
    if (t3 != 0) {
        if (((ObjectData *)o)->ff0 == 0x10) {
            v16 = ((ObjectData *)o)->f3c + njSin_8c37eb0c(((ObjectData *)o)->f64) * 0.0f;
            v17 = ((ObjectData *)o)->f44 + njCos_8c38c154(((ObjectData *)o)->f64) * 0.0f;
            t4 = call_8c130334(((ObjectData *)o)->f3ac->f3c - v16, ((ObjectData *)o)->f3ac->f44 - v17);
            operation_8c0610c8(o, (int)(t4 * 65536.0f / 6.28318405f));
            goto L_8c061fb8;
        }
        ((ObjectData *)o)->f400 = 0;
    } else {
        if (((ObjectData *)o)->f3f4 != 0) {
            call_8c05c0dc(o, 350.0f);
        } else {
            call_8c05c0dc(o, 250.0f);
        }
    }
L_8c061fb8:;
    o->v108();
    o->v94();
}
