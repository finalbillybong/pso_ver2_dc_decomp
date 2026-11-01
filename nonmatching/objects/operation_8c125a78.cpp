/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c125a78
 * function: operation_8c125a78
 * language: c++
 * reference size: 1572 bytes
 * compiled size: 1572 bytes (+0.0%)
 * differing lines: 226 of 567 reference instruction lines
 * differing bytes: 1168
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
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv37 S_vv37;
typedef struct S_vv40 S_vv40;
typedef struct S_vv63 S_vv63;
class Object;
class Arg0_334;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
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
    virtual void v76(int, void *);
};
typedef struct ObjectData {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0xba];
    unsigned short f1b6;
    char unknown1b8[0x160];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x34];
    float f3dc;
    char unknown3e0[0x20];
    Arg0_400 *f400;
    Arg0_404 *f404;
    char unknown408[0xc];
    int f414;
    int f418;
    int f41c;
} ObjectData;
struct S_vv63 {
    char unknown0[0x34];
    int f34;
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x2ec];
    Vector3 f324;
    short f330;
} Arg0_334Data;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
};
struct S_vv37 {
    char unknown0[0x4];
    short f04;
};
struct S_vv40 {
    char unknown0[0x4];
    short f04;
};
extern "C" void request_actor_mode_zero_8c1275a8(void *);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void call_8c0c3128(Object *, float);
extern "C" void call_8c044320(Object *, float, Vector3, Vector3);
extern "C" int query_capped_segment(void *, void *);
extern "C" void apply_object_velocity(void *);
extern "C" void operation_43fb4(void *, int, void *);
extern "C" float distance_xz(void *, void *);
extern "C" int create_effect_78d0(void *, void *, int, int);
extern "C" void set_effect_bit0(void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c01cfc0(void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void set_effect_words(void *, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c02a5a8(short, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" void operation_8c0521a0(void *);
extern "C" void operation_8c05228c(void *);
extern "C" void operation_8c125a78(Object *o)
{
    Frame frame;
    int v1;
    unsigned short v2;
    S_vv63 *v63;
    float v64;
    float v14;
    float v19;
    S_vv37 *v37;
    S_vv40 *v40;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    if (((ObjectData *)o)->f398 == -1) {
    } else {
        if (((ObjectData *)o)->f398 != 0) {
            if (((ObjectData *)o)->f398 == 1) {
                goto L_8c125b90;
            }
            if (((ObjectData *)o)->f398 == 2) {
                goto L_8c125d24;
            }
            goto L_8c126056;
        }
        v1 = (int)(((((ObjectData *)o)->f3a4 & 0x1000000)) != 0);
        if (v1 != 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            return;
        }
        v2 = (unsigned short)((ObjectData *)o)->f1b6;
        if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v2) {
            ((ObjectData *)o)->f354 = v2;
            t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f354));
            ((ObjectData *)o)->f334 = (Arg0_334 *)(int)t1;
            v63 = (S_vv63 *)((ObjectData *)o)->f334;
            if (v63 == 0) {
                goto L_8c125b32;
            }
            if (((v63->f34 & 0x4000800)) == 0) {
                goto L_8c125b32;
            }
            ((ObjectData *)o)->f354 = 0xffff;
            ((ObjectData *)o)->f334 = (Arg0_334 *)0;
        } else {
            call_8c0c3128(o, 250.0f);
        }
L_8c125b32:;
        if ((((ObjectData *)o)->f354 & 0xffff) != 0xffff) {
            ((ObjectData *)o)->f3a4 &= -0x20001;
            ((ObjectData *)o)->ff0 = 6;
            ((ObjectData *)o)->f398 = 1;
            goto L_8c126056;
        }
        o->v66();
        goto L_8c126056;
L_8c125b90:;
        if (((ObjectData *)o)->f334 == 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            goto L_8c126056;
        }
        ((ObjectData *)o)->f31c = 0.0f;
        call_8c044320(o, 0.7f, *(Vector3 *)&((ObjectData *)o)->f324, *(Vector3 *)&((Arg0_334Data *)((ObjectData *)o)->f334)->f324);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f324;
        (&frame)->f0c.f00 = ((ObjectData *)o)->f318 + (&frame)->f0c.f00;
        (&frame)->f0c.f08 += ((ObjectData *)o)->f320;
        t2 = query_capped_segment((void *)o, (void *)(&(&frame)->f0c));
        if (t2 == 0) {
            apply_object_velocity((void *)o);
        }
        operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(((char *)o + 0x318)));
        t3 = distance_xz((void *)(((char *)o + 0x324)), (void *)(((char *)((ObjectData *)o)->f334 + 0x324)));
        ((ObjectData *)o)->f3dc = t3;
        v64 = (float)((ObjectData *)o)->f33c->f08;
        if ((v64 * v64) < ((ObjectData *)o)->f3dc) {
            goto L_8c126056;
        }
        ((ObjectData *)o)->ff0 = 7;
        ((ObjectData *)o)->f398 = 2;
        t4 = create_effect_78d0((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x414)), 0x12b, 2);
        ((ObjectData *)o)->f400 = (Arg0_400 *)(int)t4;
        set_effect_bit0((void *)(((ObjectData *)o)->f400));
        t5 = create_effect_78d0((void *)(((char *)o + 0x324)), (void *)(((char *)o + 0x414)), 0x12c, 2);
        ((ObjectData *)o)->f404 = (Arg0_404 *)(int)t5;
        set_effect_bit0((void *)(((ObjectData *)o)->f404));
        goto L_8c126056;
L_8c125d24:;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x324)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        operation_8c01cfc0((void *)o, ((ObjectData *)o)->ff8);
        njPopMatrixEx_8c38ad10();
        o->v76(8, ((char *)o + 0x408));
        ((ObjectData *)o)->f414 = 0;
        ((ObjectData *)o)->f418 = (int)((ObjectData *)o)->f64 + 0x4000;
        ((ObjectData *)o)->f41c = -0x4000;
        v14 = (float)((ObjectData *)o)->ff8;
        if (9.0f > v14 || 17.0f <= v14) {
            set_effect_bit0((void *)(((ObjectData *)o)->f400));
        } else {
            call_8c0a7608((void *)(((ObjectData *)o)->f400), (void *)(((char *)o + 0x408)));
            set_effect_words((void *)(((ObjectData *)o)->f400), (void *)(((char *)o + 0x414)));
        }
        v19 = (float)((ObjectData *)o)->ff8;
        if (12.0f > v19 || 17.0f <= v19) {
            set_effect_bit0((void *)(((ObjectData *)o)->f404));
        } else {
            call_8c0a7608((void *)(((ObjectData *)o)->f404), (void *)(((char *)o + 0x408)));
            set_effect_words((void *)(((ObjectData *)o)->f404), (void *)(((char *)o + 0x414)));
        }
        ((ObjectData *)o)->f31c = 0.0f;
        call_8c044320(o, 0.7f, *(Vector3 *)&((ObjectData *)o)->f324, *(Vector3 *)&((Arg0_334Data *)((ObjectData *)o)->f334)->f324);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f324;
        (&frame)->f00.f00 = ((ObjectData *)o)->f318 + (&frame)->f00.f00;
        (&frame)->f00.f08 += ((ObjectData *)o)->f320;
        t6 = query_capped_segment((void *)o, (void *)(&frame));
        if (t6 == 0) {
            apply_object_velocity((void *)o);
        }
        operation_43fb4((void *)o, (int)(((ObjectData *)o)->f36c->f08), (void *)(((char *)o + 0x318)));
        t7 = check_range_8c01cf68((void *)o, 10.0f);
        if (t7 != 0) {
            play_se_8c05fbf8(0x30034, (void *)(((char *)o + 0x3c)), 0, 0);
            t8 = ((ObjectData *)o)->f334->v22(o, 1.0f);
            if (t8 != 0) {
                ((ObjectData *)o)->f334->v24(o, 1.0f);
                ((ObjectData *)o)->f334->v27(o, 3.0f);
                if (((((Arg0_334Data *)((ObjectData *)o)->f334)->f34 & 0x800)) == 0 && ((Arg0_334Data *)((ObjectData *)o)->f334)->f330 > 0) {
                    operation_8c02a5a8(((ObjectData *)o)->f20, (int)(((ObjectData *)o)->f354), 1);
                }
            }
        }
        if (((ObjectData *)o)->fec == 4) {
            goto L_8c126056;
        }
        ((ObjectData *)o)->f34 |= 0x800;
        goto L_8c126056;
    }
    if (((ObjectData *)o)->f400 != 0) {
        v37 = (S_vv37 *)((ObjectData *)o)->f400;
        v37->f04 |= 1;
        ((ObjectData *)o)->f400 = (Arg0_400 *)0;
    }
    if (((ObjectData *)o)->f404 != 0) {
        v40 = (S_vv40 *)((ObjectData *)o)->f404;
        v40->f04 |= 1;
        ((ObjectData *)o)->f404 = (Arg0_404 *)0;
    }
    ((ObjectData *)o)->f3a4 |= 0x20000;
L_8c126056:;
    operation_8c01c5f0(o);
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    operation_8c0521a0((void *)o);
    operation_8c05228c((void *)o);
}
