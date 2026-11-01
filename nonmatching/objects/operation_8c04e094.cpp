/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04e094
 * function: operation_8c04e094
 * language: c++
 * reference size: 1044 bytes
 * compiled size: 1056 bytes (+1.1%)
 * differing lines: 58 of 377 reference instruction lines
 * differing bytes: 372
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c4671dc S_g8c4671dc;
typedef struct S_g8c4671e0 S_g8c4671e0;
typedef struct Object Object;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
class Arg0_334;
class Arg0_3e8;
class S_vv57;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x210];
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
    Vector3 f18;
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
    virtual void v22();
    virtual void v23();
    virtual float v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {
    char unknown0[0x324];
    Vector3 f324;
} Arg0_334Data;
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_33c {
    char unknown0[0xc];
    int f0c;
};
class S_vv57 {
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
};
typedef struct S_vv57Data {

} S_vv57Data;
class Arg0_3e8 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, void *);
};
typedef struct Arg0_3e8Data {

} Arg0_3e8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" float object_random_fraction(void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" int get_current_area_8c032b10(void);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" int call_8c119190(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(float);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c3be2dc(int, int, Frame *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void update_last_effect(int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c04e094(Object *o)
{
    Frame frame;
    int v35;
    S_vv57 *v57;
    int v37;
    int t10;
    unsigned short v1;
    int v34;
    S_c8c021ef8 *t1;
    int t2;
    int t11;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    int v36;
    int t3;
    v1 = (unsigned short)o->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v1));
        if (t1 != 0 && (int)t1->f37c == *(int *)0x8c44be04) {
            o->f334 = (Arg0_334 *)t1;
            goto L_8c04e11a;
        }
        o->f334 = (Arg0_334 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v1) {
            t2 = operation_8c012a14(v1);
            o->f334 = (Arg0_334 *)(int)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (Arg0_334 *)0;
        }
    }
L_8c04e11a:;
    o->f34 &= -0x4040001;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c04e214;
        }
        if (o->f30c == 2) {
            goto L_8c04e408;
        }
        o->f30c = 0;
    }
    if (o->f334 == 0) {
        o->f34 &= -0x200001;
        o->f358 = 0;
    } else {
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((Arg0_334Data *)o->f334)->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x324)));
        t3 = operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(&(&frame)->f18));
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        if (!(o->f33c->f0c > t3)) {
        } else {
            o->f30c = 1;
            if (object_random_fraction((void *)o) > 0.5f) {
                o->ff0 = 2;
            } else {
                o->ff0 = 3;
                goto L_8c04e432;
L_8c04e214:;
                operation_8c04a43c((void *)o, (void *)(int)(0.0f), (float)0);
                t5 = check_range_8c01cf68((void *)o, 14.0f);
                if (t5 != 0) {
                    v57 = (S_vv57 *)o->f334;
                    if (v57 != 0) {
                        t6 = v57->v22(o, 1.0f);
                        if (t6 != 0) {
                            t7 = o->f334->v24(o, 1.0f);
                            o->f334->v27(o, t7);
                        }
                    }
                    t8 = get_current_area_8c032b10();
                    switch (t8) {
                    case 3:
                    case 4:
                    case 5:
                        play_se_8c05fbf8(0x3000d, (void *)(((char *)o + 0x3c)), 0, 0);
                        break;
                    case 16:
                    case 17:
                        if (*(int *)0x8c2e2ad8 == 1) {
                            play_se_8c05fbf8(0x30022, (void *)(((char *)o + 0x3c)), 0, 0);
                        }
                    }
                }
                if (20.0f > o->ff8) {
                    switch (o->ff0) {
                    case 2:
                        t10 = call_8c119190((void *)(*(S_g8c4671dc **)0x8c4671dc), o->ff8);
                        v34 = (int)0;
                        v35 = (int)t10;
                        break;
                    case 3:
                        t11 = call_8c119190((void *)(*(S_g8c4671e0 **)0x8c4671e0), o->ff8);
                        v36 = (int)1;
                        v34 = (int)v36;
                        v35 = (int)t11;
                        break;
                    default:
                        v37 = (int)0;
                        v35 = (int)v37;
                        break;
                    }
                    if (v35 != 0) {
                        njPushMatrixEx_8c38ae68(o->ff8);
                        njUnitMatrix_8c37b5c4(0);
                        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                        njRotateY_8c37df90(0, (void *)(o->f64));
                        njScale_8c37e2e4(0, 1.3f, 1.3f, 1.3f);
                        call_8c3be2dc(0, v35, (Frame *)((&frame)), 2);
                        njPopMatrixEx_8c38ad10();
                        if (*(int *)((char *)((char *)o + 0x3e8) + (v34 << 2)) != 0) {
                            (*(Arg0_3e8 **)((char *)((char *)o + 0x3e8) + (v34 << 2)))->v5((&frame), &(&frame)->f0c);
                        }
                    }
                }
                if (o->fec != 4) {
                    o->f30c = 2;
                    o->ff0 = 0;
                    o->f358 = 0xf;
                    goto L_8c04e432;
L_8c04e408:;
                    operation_8c04a43c((void *)o, (void *)(int)(0.0f), (float)0);
                    *(short *)((char *)o + 0x358) -= 1;
                    if (!(o->f358 >= 0)) {
                        o->f34 &= -0x200001;
                        o->f358 = 0;
                    }
                }
            }
        }
    }
L_8c04e432:;
    refresh_follow_effect_8c052180((void *)o);
    t9 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t9, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x200);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
