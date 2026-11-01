/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e45cc
 * function: operation_8c0e45cc
 * language: c++
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 16 of 197 reference instruction lines
 * differing bytes: 20
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
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_dc Arg0_dc;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x1c];
    Vector3 f54;
    char unknown60[0x7c];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    short ff0;
    char unknownf2[0x8a];
    int f17c;
    char unknown180[0x18c];
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x38];
    int f3a8;
    char unknown3ac[0x4];
    float f3b0;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int operation_8c054248(void *, int, int);
extern "C" void operation_8c0e4ffc(Object *);
extern "C" void operation_8c0e50e0(void *);
extern "C" void call_8c04500c(Object *, void *, float, Vector3);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0e45cc(Object *o)
{
    Frame frame;
    void *v5;
    float v6;
    int v9;
    float v12;
    int v21;
    int t1;
    int t2;
    float t3;
    float r;
    switch (((ObjectData *)o)->f30c) {
    case 0:
        v5 = (void *)0;
        v6 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v5, v6);
        operation_8c01c5f0(o);
        t1 = check_range_8c01cf68((void *)o, 0.0f);
        if (t1 != 0) {
            o->v93();
        }
        if (((ObjectData *)o)->fec == 0x20) {
            goto L_8c0e4732;
        }
        ((ObjectData *)o)->f30c = 1;
        ((ObjectData *)o)->ff0 = 2;
        break;
    default:
        if (((ObjectData *)o)->f334 == 0) {
        } else {
            t2 = operation_8c054248((void *)o, 0, 0x600000);
            if (t2 != 0) {
                v9 = (int)((ObjectData *)o)->f3a8;
                ((ObjectData *)o)->f3a8 = v9 + 1;
                v12 = (float)(float)(unsigned int)v9;
                if (60.0f > v12) {
                    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f54;
                    goto L_8c0e46a6;
                }
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            } else {
                ((ObjectData *)o)->f3a8 = 0;
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f334->f324;
            }
L_8c0e46a6:;
            operation_8c0e4ffc(o);
            operation_8c0e50e0((void *)o);
            operation_8c01c5f0(o);
            call_8c04500c(o, (void *)(((ObjectData *)o)->f36c->f08), ((ObjectData *)o)->f3b0, *(Vector3 *)&(&frame)->f00);
            if ((((ObjectData *)o)->f354 & 0xffff) == 0xffff) {
                t3 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x3c)));
                r = ((ObjectData *)o)->f3b0 + ((ObjectData *)o)->fdc->f0c;
                if (!(r * r > t3)) {
                    v21 = (int)((ObjectData *)o)->f17c;
                    ((ObjectData *)o)->f17c = v21 + 1;
                    if (!((float)v21 > 150.0f)) {
                        goto L_8c0e4732;
                    }
                }
                ((ObjectData *)o)->f334 = (Arg0_334 *)0;
                ((ObjectData *)o)->f17c = 0;
            }
        }
        break;
    }
L_8c0e4732:;
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    ((ObjectData *)o)->f34 &= -0x200001;
}
