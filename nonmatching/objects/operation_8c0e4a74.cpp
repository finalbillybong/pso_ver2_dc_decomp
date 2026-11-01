/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e4a74
 * function: operation_8c0e4a74
 * language: c++
 * reference size: 432 bytes
 * compiled size: 432 bytes (+0.0%)
 * differing lines: 4 of 166 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
class Object;
class Arg0_334;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
} ObjectData;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
class Arg0_334 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {

} Arg0_334Data;
extern int g_8c44be04;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0e4a74(Object *o)
{
    unsigned int v1;
    short v23;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    v1 = (unsigned short)((ObjectData *)o)->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v1));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            ((ObjectData *)o)->f334 = (Arg0_334 *)t1;
            goto L_8c0e4ac8;
        }
        ((ObjectData *)o)->f334 = (Arg0_334 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v1) {
            t2 = operation_8c012a14(v1);
            ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t2;
        } else {
            ((ObjectData *)o)->f334 = (Arg0_334 *)0;
        }
    }
L_8c0e4ac8:;
    operation_8c01c5f0(o);
    v23 = (short)((ObjectData *)o)->f30c;
    switch (v23) {
    case 0:
        ((ObjectData *)o)->f30c = 1;
    case 1:
        t3 = check_range_8c01cf68((void *)o, 7.0f);
        if (t3 != 0) {
            if (((ObjectData *)o)->f334 != 0) {
                t4 = ((ObjectData *)o)->f334->v22(o, 1.0f);
                if (t4 != 0) {
                    ((ObjectData *)o)->f334->v24(o, 1.0f);
                    ((ObjectData *)o)->f334->v27(o, 3.0f);
                }
            }
            o->v94();
        }
        o->v91();
        if (((ObjectData *)o)->fec == 4) {
            goto L_8c0e4b90;
        }
        ((ObjectData *)o)->f30c = 2;
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f358 = 0xf;
        break;
    case 2:
        *(short *)((char *)o + 0x358) -= 1;
        if (!(((ObjectData *)o)->f358 >= 0)) {
            ((ObjectData *)o)->f34 &= -0x200001;
            ((ObjectData *)o)->f358 = 0;
        }
    }
L_8c0e4b90:;
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
