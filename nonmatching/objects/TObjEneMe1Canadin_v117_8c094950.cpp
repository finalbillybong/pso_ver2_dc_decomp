/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c094950
 * function: TObjEneMe1Canadin_v117_8c094950
 * language: c++
 * reference size: 244 bytes
 * compiled size: 248 bytes (+1.6%)
 * differing lines: 26 of 92 reference instruction lines
 * differing bytes: 160
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjEneMe1Canadin.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c469e20 S_g8c469e20;
typedef struct Object Object;
class Arg0_3dc;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
    char unknown2c[0x38];
    int f64;
    char unknown68[0x2bc];
    Vector3 f324;
    char unknown330[0xac];
    Arg0_3dc *f3dc;
    int f3e0;
    int f3e4;
    char unknown3e8[0xfc];
    unsigned short f4e4;
};
struct Frame {
    Block_frame_0 f00;
};
class Arg0_3dc {
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
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual void v121();
    virtual void v122(Object *);
};
typedef struct Arg0_3dcData {

} Arg0_3dcData;
extern S_g8c469e20 *g_8c469e20;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern "C" void operation_8c1083c4(int);
extern "C" void refresh_follow_effect_8c05a194(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void TObjEneMe1Canadin_v117_8c094950(Object *o, int a1)
{
    Frame frame;
    int t1;
    if (a1 != 0) {
        if (a1 == 3) {
            return;
        }
        if (a1 != 4) {
            if (a1 == 5) {
                return;
            }
            return;
        }
        if (o->f3e0 == 1) {
            t1 = lookup_object_by_id((unsigned short)(o->f4e4));
            o->f3dc = (Arg0_3dc *)(int)t1;
            o->f3dc->v122(o);
        }
        TBreakUpMdl_create_8c108644((int)g_8c469e20, 0, (int)(o->f28), (int)(&o->f324), (int)(o->f64));
        o->f3e4 |= 0x400000;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f04 -= 5.0f;
        operation_8c1083c4((int)(&frame));
        refresh_follow_effect_8c05a194((void *)o);
        play_se_8c05fbf8(0x3001e, (void *)(&o->f324), 0, 0);
        return;
    }
    o->f04 |= 1;
}
