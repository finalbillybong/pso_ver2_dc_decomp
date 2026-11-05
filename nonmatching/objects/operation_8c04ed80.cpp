/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04ed80
 * function: operation_8c04ed80
 * language: c++
 * reference size: 1028 bytes
 * compiled size: 1024 bytes (-0.4%)
 * differing lines: 108 of 373 reference instruction lines
 * differing bytes: 505
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4671a4 S_g8c4671a4;
typedef struct S_g8c4671a4_4 S_g8c4671a4_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
class S_vv18;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0x26];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    Block_frame_c f0c;
    Vector3 f18;
};
struct Arg0_334 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
struct S_g8c4671a4 {
    char unknown0[0x4];
    S_g8c4671a4_4 *f04;
};
struct S_g8c4671a4_4 {
    char unknown0[0xc];
    int f0c;
};
class S_vv18 {
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
    virtual void v57(int);
};
typedef struct S_vv18Data {
    char unknown0[0x34];
    int f34;
} S_vv18Data;
extern int g_8c2e2ad8;
extern int g_8c44be04;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4671a4 *g_8c4671a4;
extern int g_8c4703c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" int operation_43fb4(void *, int, void *);
extern "C" void operation_8c04a43c(void *, void *, float);
extern "C" int call_8c24e644(int, void *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_difference(int, int);
extern "C" float signed_sqrt_8c37f6c0(float);
extern "C" void create_effect_7ab8(void *, void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjGrassWeb_ctor_8c04f854(void *, int, void *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void update_last_effect(int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c04ed80(Object *o)
{
    Frame frame;
    unsigned short v34;
    S_vv18 *v18;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    float t4;
    int t5;
    float t6;
    float t7;
    float t8;
    int t9;
    int t10;
    v34 = (unsigned short)o->f354;
    if ((unsigned int)0x1000 > (unsigned int)(v34 & 0xffff)) {
        t1 = lookup_low_id((int)(v34 & 0xffff));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = (S_c8c021ef8 *)t1;
            goto L_8c04ede6;
        }
        o->f334 = (S_c8c021ef8 *)0;
    } else {
        o->f354 = 0xffff;
        o->f334 = (S_c8c021ef8 *)0;
    }
L_8c04ede6:;
    o->f34 &= -0x4040001;
    operation_8c01c5f0(o);
    switch (o->f30c) {
    case 0:
        if (o->f334 == 0) {
            o->f34 &= -0x200001;
            o->f358 = 0;
            goto L_8c04f10e;
        }
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f334->f324;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x324)));
        t2 = operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(&(&frame)->f18));
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        if (!(g_8c4671a4->f04->f0c > t2)) {
            goto L_8c04f10e;
        }
        o->f30c = 1;
        o->ff0 = 4;
        o->f358 = 0;
        break;
    case 1:
        t3 = call_8c24e644(0x30007, (void *)(o->f38c));
        call_8c05fd7c(t3, o, (void *)(((char *)o + 0x3c)), 0, 0);
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        if (o->f334 == 0) {
        } else {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f334->f324;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x324)));
            t4 = errno_wrap_8c130334((&frame)->f0c.f00, (&frame)->f0c.f08);
            t5 = angle_difference((int)(o->f64), (int)((int)(t4 * 65536.0f / 6.28318405f)));
            if (!(g_8c4671a4->f04->f0c > t5)) {
            } else {
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f334->f3c;
                vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x39c)));
                t6 = signed_sqrt_8c37f6c0((&frame)->f0c.f00 * (&frame)->f0c.f00 + (&frame)->f0c.f04 * (&frame)->f0c.f04);
                t7 = errno_wrap_8c130334((&frame)->f0c.f08, t6);
                (&frame)->f00 = (int)(t7 * 65536.0f / 6.28318405f);
                (&frame)->f04 = 0;
                t8 = errno_wrap_8c130334((&frame)->f0c.f00, (&frame)->f0c.f04);
                (&frame)->f08 = -(int)(t8 * 65536.0f / 6.28318405f);
                create_effect_7ab8((void *)(((char *)o + 0x39c)), (void *)(&frame), 0xca);
                if (o->fec == 4) {
                    goto L_8c04f0b6;
                }
                v18 = (S_vv18 *)o->f334;
                if (((((S_vv18Data *)v18)->f34 & 0x4000000)) != 0) {
                    goto L_8c04f0b6;
                }
                if (g_8c2e2ad8 == 1) {
                    if (g_8c4703c0 == 3) {
                        v18->v57(0);
                        goto L_8c04f0b6;
                    }
                }
                t9 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
                if (t9 == 0) {
                    goto L_8c04f0b6;
                }
                TObjGrassWeb_ctor_8c04f854((void *)t9, (int)g_8c44be98, (void *)(o->f334));
                goto L_8c04f0b6;
            }
            o->fec &= -5;
            goto L_8c04f0b6;
        }
        o->fec &= -5;
L_8c04f0b6:;
        if (o->fec == 4) {
            goto L_8c04f10e;
        }
        o->f30c = 2;
        o->ff0 = 1;
        o->f358 = 0xf;
        break;
    case 2:
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        *(short *)((char *)o + 0x358) -= 1;
        if (!(o->f358 >= 0)) {
            o->f34 &= -0x200001;
            o->f358 = 0;
        }
    }
L_8c04f10e:;
    refresh_follow_effect_8c052180((void *)o);
    t10 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t10, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x200);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
