/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c166d1c
 * function: operation_8c166d1c
 * language: c++
 * reference size: 812 bytes
 * compiled size: 812 bytes (+0.0%)
 * differing lines: 64 of 327 reference instruction lines
 * differing bytes: 65
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
typedef struct Arg0_40c Arg0_40c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
class Object;
typedef struct Block_p0_3ac {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3ac;
typedef struct Block_p0_324 {
    float f00;
    float f04;
    float f08;
} Block_p0_324;
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
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual int v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x18];
    int f60;
    char unknown64[0x4];
    int f68;
    char unknown6c[0x2b8];
    Block_p0_324 f324;
    char unknown330[0x78];
    int f3a8;
    Block_p0_3ac f3ac;
    char unknown3b8[0x14];
    int f3cc;
    float f3d0;
    float f3d4;
    int f3d8;
    int f3dc;
    int f3e0;
    char unknown3e4[0x28];
    Arg0_40c *f40c;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct Arg0_40c {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" float operation_8c05b8c0(int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern "C" float normalize_xz_checked(void *);
extern "C" void operation_8c165a6c(void *);
extern "C" void operation_8c166d1c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    S_vv2 *v2;
    float v12;
    float t1;
    int t2;
    float t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x3e4);
    v2 = (S_vv2 *)((char *)o + 0x3e8);
    switch (a1) {
    case 5:
        break;
    case 4:
        o->v102();
        *(int *)((char *)o + 0x3a8) &= -6;
        ((ObjectData *)o)->f3a8 |= 2;
        ((ObjectData *)o)->f60 = 0;
        ((ObjectData *)o)->f3cc = 0;
        v1->f00 = 0;
        t1 = operation_8c05b8c0((int)o);
        v2->f00 = (int)(t1 * 60.0f) + 0xf0;
        ((ObjectData *)o)->f3d4 = 0.25f;
        ((ObjectData *)o)->f3dc = 0x1e;
        ((ObjectData *)o)->f3e0 = 0;
        ((ObjectData *)o)->f3d0 = 0.0f;
        ((ObjectData *)o)->f3d8 = 0;
        return;
    case 3:
        if (((((ObjectData *)o)->f3a8 & 0x100)) != 0) {
            ((ObjectData *)o)->f3a8 &= -0x101;
            operation_8c059ea4((void *)o, 1);
        }
        if (v1->f00 != 1) {
            return;
        }
        operation_8c059ea4((void *)o, 3);
        return;
    case 0:
        v2->f00 -= 1;
        if (!(v2->f00 > 0)) {
            v1->f00 = 1;
        }
        ((ObjectData *)o)->f68 = (int)((float)((ObjectData *)o)->f68 + 2560.0f);
        t2 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f40c));
        if (t2 != 0) {
            *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f40c->f3c;
            call_8c3bdf60((void *)(((char *)o + 0x3ac)), (void *)(((char *)o + 0x414)));
            ((ObjectData *)o)->f3ac.f04 += 17.0f;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3ac;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
        t3 = normalize_xz_checked((void *)(&frame));
        if (0.2f > (t3 * 0.75f)) {
            *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3ac;
        } else {
            v12 = (float)(t3 * 0.75f);
            if ((t3 * 0.75f) > 4.0f) {
                v12 = (float)4.0f;
            }
            ((ObjectData *)o)->f324.f00 += (&frame)->f00.f00 * v12;
            ((ObjectData *)o)->f324.f04 = ((ObjectData *)o)->f3ac.f04;
            ((ObjectData *)o)->f324.f08 += (&frame)->f00.f08 * v12;
        }
        if (0x5a > v2->f00) {
            ((ObjectData *)o)->f3dc = 3;
            ((ObjectData *)o)->f3d4 = 0.5f;
        } else {
            if (0x96 > v2->f00) {
                ((ObjectData *)o)->f3dc = 5;
            } else {
                if (0x12c > v2->f00) {
                    ((ObjectData *)o)->f3dc = 0xa;
                } else {
                    ((ObjectData *)o)->f3dc = 0x1e;
                }
            }
        }
        operation_8c165a6c((void *)o);
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f324.f00;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f324.f08;
        o->v95();
        ((ObjectData *)o)->f324.f00 = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f324.f08 = ((ObjectData *)o)->f44;
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f324.f00;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f324.f08;
        t4 = o->v108();
        if (t4 == 0) {
            ((ObjectData *)o)->f3a8 &= -3;
            return;
        }
        ((ObjectData *)o)->f3a8 |= 2;
    }
}
