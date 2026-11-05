/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1537c8
 * function: operation_8c1537c8
 * language: c++
 * reference size: 832 bytes
 * compiled size: 832 bytes (+0.0%)
 * differing lines: 20 of 317 reference instruction lines
 * differing bytes: 472
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_334 Arg0_334;
class Object;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
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
    virtual void v76(int, Frame *);
};
typedef struct ObjectData {
    char unknown0[0x64];
    int f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x238];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x36];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x8];
    short f3b0;
    short f3b2;
} ObjectData;
struct Frame {
    char unknown0[0xc];
    Block_frame_c f0c;
};
struct Arg0_334 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern "C" int lookup_low_id(int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void call_8c1549b0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" void call_8c154464(Object *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c15a314(int, Object *, Frame *, int, int);
extern "C" int get_game_mode_8c01c25c(void);
extern "C" void operation_8c1537c8(Object *o)
{
    Frame frame;
    int v15;
    int v14;
    int v10;
    int v19;
    int v11;
    int v12;
    int v13;
    int v24;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (((((ObjectData *)o)->f3a4 & 0x80000)) != 0) {
        ((ObjectData *)o)->f390 = 0;
    }
    t1 = lookup_low_id((int)(((ObjectData *)o)->f354 & 0xffff));
    ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t1;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->f358 = 0x3c;
        ((ObjectData *)o)->f3b2 = 0;
        ((ObjectData *)o)->f398 = 1;
    case 1:
        if (((ObjectData *)o)->f334 != 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f334->f3c;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
            t2 = errno_wrap_8c130334((&frame)->f0c.f00, (&frame)->f0c.f08);
            t3 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t2 * 65536.0f / 6.28318405f) + 0x8000), 0x566);
            ((ObjectData *)o)->f64 = (int)t3;
        }
        if (!((short)--((ObjectData *)o)->f358 > 0)) {
            ((ObjectData *)o)->ff0 = 7;
            operation_8c01c5f0(o);
            ((ObjectData *)o)->f398 = 2;
        }
        call_8c1549b0(o);
        return;
    case 2:
        operation_8c01c5f0(o);
        t4 = check_range_8c01cf68((void *)o, 15.0f);
        if (t4 != 0) {
            play_se_8c05fbf8(0x30011, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        if (22.0f > ((ObjectData *)o)->ff8) {
            return;
        }
        ((ObjectData *)o)->f358 = 0xa;
        ((ObjectData *)o)->f398 = 3;
        return;
    case 3:
        if ((short)--((ObjectData *)o)->f358 > 0) {
            return;
        }
        ((ObjectData *)o)->f398 = 4;
        return;
    case 4:
        ((ObjectData *)o)->f3b2 += 1;
        apply_actor_matrix_frame((void *)o);
        call_8c154464(o);
        v10 = (int)0x128;
        v11 = (int)0x3a8;
        v12 = (int)0x8000;
        v13 = (int)0x3b0;
        v19 = (int)0;
        goto L_8c1539a0;
        v14 = (int)0;
L_8c153954:;
        v15 = (int)(v14 << 1);
        o->v76(*(short *)((char *)((char *)v15 + 0x0) + ((int)((void *)0x8c315e0c))), (&frame));
        t5 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)v10);
        if (t5 != 0) {
            call_8c15a314(t5, o, (Frame *)((&frame)), (int)((int)((ObjectData *)o)->f64 + v12), (int)(*(unsigned short *)((char *)((char *)((int)o + v11) + 0x0) + (v15)) & 0xffff));
        }
        v19 = (int)(v14 + 1);
L_8c1539a0:;
        v14 = (int)v19;
        if (*(short *)((char *)((char *)o + 0x0) + (v13)) > v19) {
            goto L_8c153954;
        }
        if (((ObjectData *)o)->f3b0 > 0) {
            play_se_8c05fbf8(0x30013, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        ((ObjectData *)o)->f358 = 0xf;
        ((ObjectData *)o)->f398 = 5;
    case 5:
        if ((short)--((ObjectData *)o)->f358 > 0) {
            return;
        }
        t6 = get_game_mode_8c01c25c();
        if (t6 == 0x10) {
            v24 = (int)2;
        } else {
            v24 = (int)4;
        }
        if (v24 > ((ObjectData *)o)->f3b2) {
            ((ObjectData *)o)->f398 = 4;
            return;
        }
        ((ObjectData *)o)->f398 = 6;
        play_se_8c05fbf8(0x30012, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 6:
        operation_8c01c5f0(o);
        t7 = check_range_8c01cf68((void *)o, 35.0f);
        if (t7 != 0) {
            play_se_8c05fbf8(0x30012, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        if (((ObjectData *)o)->fec != 4) {
            o->v66();
        }
        return;
    case -1:
        break;
    }
}
