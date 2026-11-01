/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1207a0
 * function: operation_8c1207a0
 * language: c++
 * reference size: 568 bytes
 * compiled size: 568 bytes (+0.0%)
 * differing lines: 46 of 221 reference instruction lines
 * differing bytes: 317
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
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
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
    virtual void v94(int);
    virtual void v95();
    virtual void v96();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x9c];
    int f17c;
    char unknown180[0x18c];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x48];
    Arg0_36c *f36c;
    float f370;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern "C" float object_random_fraction(void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be38c(int, Frame *, Frame *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3bdf60(Frame *, void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void call_8c0441d8(Object *, Vector3);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void apply_object_velocity(void *);
extern "C" int check_range_8c01cf68(Object *, float);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c1207a0(Object *o)
{
    Frame frame;
    int v1;
    float t1;
    int t2;
    int t3;
    float t4;
    float t5;
    float r;
    Arg0_dc *d;
    switch (((ObjectData *)o)->f30c) {
    case 0:
        (&frame)->f00.f04 = 0.0f;
        (&frame)->f00.f00 = 0.0f;
        (&frame)->f00.f08 = 1.0f;
        t5 = object_random_fraction((void *)o);
        v1 = (int)(int)(t5 * 360.0f * 65536.0f / 360.0f);
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v1);
        call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrixEx_8c38ad10();
        (&frame)->f00.f00 = ((ObjectData *)o)->f370 * (&frame)->f00.f00;
        (&frame)->f00.f08 *= ((ObjectData *)o)->f370;
        call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x54)));
        t1 = squared_distance_xz((void *)(&frame), (void *)(((char *)o + 0x3c)));
        if (t1 > 100.0f) {
            call_8c0441d8(o, *(Vector3 *)&(&frame)->f00);
            ((ObjectData *)o)->f320 = 0.0f;
            ((ObjectData *)o)->f318 = 0.0f;
            ((ObjectData *)o)->f30c = 1;
            o->v94(1);
        }
        break;
    case 1:
        call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
        call_8c044410(o, (void *)(((ObjectData *)o)->f64), ((ObjectData *)o)->f36c->f04);
        apply_object_velocity((void *)o);
        t2 = check_range_8c01cf68(o, 1.0f);
        if (t2 == 0) {
            t3 = check_range_8c01cf68(o, 15.0f);
            if (t3 == 0) {
                goto L_8c1208d8;
            }
        }
        o->v96();
L_8c1208d8:;
        t4 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x324)));
        d = ((ObjectData *)o)->fdc;
        r = ((ObjectData *)o)->f36c->f04 + d->f0c;
        if (!(r * r > t4)) {
            if ((d->f18 & 0x700000) == 0) {
                goto L_8c12094a;
            }
        }
        ((ObjectData *)o)->f30c = 3;
        o->v94(0);
        break;
    case 3:
        *(int *)((char *)o + 0x17c) += 1;
        if ((float)((ObjectData *)o)->f17c > 120.0f) {
            ((ObjectData *)o)->f30c = 0;
            ((ObjectData *)o)->f17c = 0;
        }
    }
L_8c12094a:;
    refresh_follow_effect_8c052180((void *)o);
}
