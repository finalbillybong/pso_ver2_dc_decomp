/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e4c70
 * function: operation_8c0e4c70
 * language: c++
 * reference size: 504 bytes
 * compiled size: 504 bytes (+0.0%)
 * differing lines: 4 of 188 reference instruction lines
 * differing bytes: 4
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
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct Frame Frame;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x84];
    int fec;
    char unknownf0[0xa8];
    short f198;
    char unknown19a[0x17e];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x1e];
    int f350;
    char unknown354[0x6];
    short f35a;
    char unknown35c[0x14];
    float f370;
    char unknown374[0x1c];
    short f390;
} ObjectData;
extern S_L8c46f5a0 g_8c46f5a0;
extern "C" char gc_8c46f5a0[];
extern "C" void operation_8c01c5f0(Object *);
extern "C" float operation_8c054228(void *, int);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" int query_capped_segment(void *, void *);
extern "C" void apply_object_velocity(void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c0e4c70(Object *o)
{
    Frame frame;
    int v9;
    int v10;
    float t1;
    int t2;
    int t3;
    operation_8c01c5f0(o);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
    *(float *)(gc_8c46f5a0 + 0x4) = 0.0f;
    *(float *)(gc_8c46f5a0 + 0x0) = 0.0f;
    t1 = operation_8c054228((void *)o, 0);
    *(float *)(gc_8c46f5a0 + 0x8) = t1;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (int)(-(int)(((ObjectData *)o)->f64)));
    call_8c3be38c(0, (void *)(gc_8c46f5a0), (void *)(gc_8c46f5a0));
    njPopMatrixEx_8c38ad10();
    call_8c3bdf60((Frame *)((&frame)), (void *)(gc_8c46f5a0));
    (&frame)->f00.f00 = ((ObjectData *)o)->f318 + (&frame)->f00.f00;
    (&frame)->f00.f08 = ((ObjectData *)o)->f320 + (&frame)->f00.f08;
    t2 = query_capped_segment((void *)o, (void *)(&frame));
    if (t2 == 0) {
        apply_object_velocity((void *)o);
        ((ObjectData *)o)->f318 *= 0.5f;
        ((ObjectData *)o)->f320 *= 0.5f;
    } else {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
    }
    refresh_follow_effect_8c052180((void *)o);
    t3 = check_range_8c01cf68((void *)o, 0.0f);
    if (t3 != 0) {
        o->v95();
    }
    if (((ObjectData *)o)->fec != 8) {
        ((ObjectData *)o)->f34 &= -0x601;
        v9 = (int)0;
        v10 = (int)0x8000000;
        operation_8c05428c((void *)o, v9, v10);
        if (((ObjectData *)o)->f350 == 0 && (((ObjectData *)o)->f370 * (float)((ObjectData *)o)->f198) > (float)((ObjectData *)o)->f330) {
            ((ObjectData *)o)->f34 &= -0x1001;
            ((ObjectData *)o)->f390 = (int)((((ObjectData *)o)->f370 + 1.0f) * 150.0f);
        }
        ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
    }
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
