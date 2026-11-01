/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c80f8
 * function: operation_8c0c80f8
 * language: c++
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 50 of 173 reference instruction lines
 * differing bytes: 65
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_3dc Arg0_3dc;
class Object;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_p0_324 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_324;
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
    virtual int v107(Frame *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2dc];
    Block_p0_324 f324;
    char unknown330[0xac];
    Arg0_3dc *f3dc;
    char unknown3e0[0x8];
    int f3e8;
    char unknown3ec[0x8];
    float f3f4;
    char unknown3f8[0x1c];
    float f414;
    float f418;
    float f41c;
} ObjectData;
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct Arg0_3dc {
    Vector3 f00;
};
extern "C" void operation_8c059ef8(void *, int);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_vector_checked(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void operation_8c0c80f8(Object *o, int a1)
{
    Frame frame;
    int v1;
    float v2;
    int t1;
    float t2;
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    return;
                }
                return;
            }
            operation_8c059ef8((void *)o, 1);
            ((ObjectData *)o)->f3e8 &= -0x1001;
            return;
        }
        v1 = (int)((ObjectData *)o)->f3e8;
        if (((v1 & 1)) != 0) {
            ((ObjectData *)o)->f3e8 = (unsigned int)v1 >> 1 << 1;
            operation_8c059ea4((void *)o, 2);
            return;
        }
        if (((v1 & 2)) == 0) {
            return;
        }
        ((ObjectData *)o)->f3e8 = v1 & -3;
        operation_8c059ea4((void *)o, 3);
        return;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f3dc->f00;
    (&frame)->f0c.f04 += ((ObjectData *)o)->f3f4;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x324)));
    t2 = normalize_vector_checked((void *)(&(&frame)->f0c));
    v2 = (float)(t2 * 0.01f);
    ((ObjectData *)o)->f414 = (((ObjectData *)o)->f414 + (&frame)->f0c.f00 * v2) * 0.9f;
    ((ObjectData *)o)->f418 = (((ObjectData *)o)->f418 + (&frame)->f0c.f04 * v2) * 0.9f;
    ((ObjectData *)o)->f41c = (((ObjectData *)o)->f41c + (&frame)->f0c.f08 * v2) * 0.9f;
    call_8c3bdf60((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x414)));
    ((ObjectData *)o)->f3c = ((ObjectData *)o)->f324.f00;
    ((ObjectData *)o)->f44 = ((ObjectData *)o)->f324.f08;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    t1 = o->v107((&frame));
    if (t1 == 0) {
        ((ObjectData *)o)->f3e8 &= -0x801;
        return;
    }
    ((ObjectData *)o)->f3e8 |= 0x800;
}
