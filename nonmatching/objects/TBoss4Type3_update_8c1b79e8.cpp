/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b79e8
 * function: TBoss4Type3_update_8c1b79e8
 * language: c++
 * reference size: 1016 bytes
 * compiled size: 1016 bytes (+0.0%)
 * differing lines: 94 of 375 reference instruction lines
 * differing bytes: 118
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss4Type3.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327758 S_L8c327758;
typedef struct S_L8c327a88 S_L8c327a88;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_414 Arg0_414;
typedef struct Arg0_418 Arg0_418;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv51 S_vv51;
typedef struct S_vv51_42c S_vv51_42c;
typedef struct S_vv51_42c_8 S_vv51_42c_8;
typedef struct S_vv51_430 S_vv51_430;
typedef struct S_vv51_430_4 S_vv51_430_4;
typedef struct S_x37008 S_x37008;
typedef struct S_x42992 S_x42992;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x11c];
    Arg0_184 *f184;
    char unknown188[0x19c];
    Block_p0_324 f324;
    short f330;
    char unknown332[0x5e];
    int f390;
    Arg0_394 *f394;
    Arg0_398 *f398;
    Arg0_39c *f39c;
    char unknown3a0[0x8];
    int f3a8;
    char unknown3ac[0xc];
    float f3b8;
    char unknown3bc[0x4];
    unsigned short f3c0;
    unsigned short f3c2;
    char unknown3c4[0xc];
    float f3d0;
    int f3d4;
    int f3d8;
    int f3dc;
    char unknown3e0[0x4];
    float f3e4;
    char unknown3e8[0x4];
    int f3ec;
    float f3f0;
    char unknown3f4[0x20];
    Arg0_414 *f414;
    Arg0_418 *f418;
};
struct Arg0_394 {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    char unknown0[0x18];
    Vector3 f18;
};
struct S_L8c327758 {
    char unknown0[0x14];
    int f14;
    char unknown18[0x8];
    int f20;
};
struct S_x37008 {
    Vector3 f00;
};
struct S_x42992 {
    Vector3 f00;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct Arg0_39c {
    char unknown0[0x18];
    int f18;
    char unknown1c[0xc];
    float f28;
};
struct S_vv51 {
    char unknown0[0x42c];
    S_vv51_42c *f42c;
    S_vv51_430 *f430;
};
struct S_L8c327a88 {
    char unknown0[0x8];
    int f08;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern int g_8c327a70;
extern S_L8c327758 g_8c327758;
extern S_L8c327a88 g_8c327a88;
extern "C" int ring_actor_eligible(unsigned short);
extern "C" int call_8c18e6fc(void *);
extern "C" void call_8c1b7e8c(Object *);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c027090(int);
extern "C" void call_8c1b895c(Object *);
extern "C" void operation_8c1b8464(void *);
extern "C" void call_8c1b8b80(Object *);
extern "C" void operation_8c1b831c(void *);
extern "C" void operation_8c1b811c(void *);
extern "C" int lookup_low_id(int);
extern "C" void operation_8c1b8d10(void *);
extern "C" void operation_8c1b8d98(void *);
extern "C" int game_malloc_8c011ecc(int);
extern "C" void call_8c118ea4(int, int, float, float, float);
extern "C" void call_8c118f94(int, void *, void *, void *, int);
extern "C" int call_8c119190(int, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njUnitMatrix_8c37b5c4(int);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, int, Frame *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c0a7608(void *, Frame *);
extern "C" void destroy_vector_grid(void *, int);
extern "C" void TBoss4Type3_update_8c1b79e8(Object *o)
{
    Frame frame;
    unsigned short v57;
    unsigned short v59;
    unsigned short v58;
    int v13;
    float v48;
    S_vv51 *v51;
    int t7;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int v52;
    v57 = (unsigned short)o->f3c2;
    v59 = (unsigned short)0xffff;
    if ((v57 & 0xffff) != v59) {
        t1 = ring_actor_eligible((unsigned short)v57);
        if (t1 == 0) {
            o->f3c2 = 0xffff;
        }
    }
    v58 = (unsigned short)o->f3c0;
    if ((v58 & 0xffff) != 0xffff) {
        t2 = ring_actor_eligible((unsigned short)v58);
        if (t2 == 0) {
            o->f3c0 = 0xffff;
        }
    }
    v13 = (int)(o->f394->f394 == 0);
    if (v13 != 0) {
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x37008 *)((char *)&g_8c327758.f14 + o->f390 * 0x2c))->f00;
        t3 = call_8c18e6fc((void *)(&(&frame)->f18));
        if (t3 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
        }
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x42992 *)(o->f390 * 0x2c + (char *)&g_8c327758.f20))->f00;
    t4 = call_8c18e6fc((void *)(&(&frame)->f18));
    if (t4 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
    }
    call_8c1b7e8c(o);
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    if (o->f3a8 != 0x11) {
        o->f39c->f18 |= 1;
        refresh_follow_effect_8c052180((void *)o);
        operation_8c027090((int)o);
    } else {
        o->f39c->f18 = (unsigned int)o->f39c->f18 >> 1 << 1;
    }
    call_8c1b895c(o);
    operation_8c1b8464((void *)o);
    o->f39c->f28 = (float)((int)o->f3d4 - (int)o->f3d8) * o->f3b8 + (float)o->f3d8;
    call_8c1b8b80(o);
    if (o->f390 != 2) {
        operation_8c1b831c((void *)o);
        operation_8c1b811c((void *)o);
    }
    if ((o->f3c2 & 0xffff) == 0xffff) {
        if (!(0.0f > (o->f3d0 -= 0.0666666701f))) {
            goto L_8c1b7c36;
        }
        o->f3d0 = 0.0f;
    } else {
        if ((o->f3d0 += 0.0666666701f) > 1.0f) {
            o->f3d0 = 1.0f;
        }
        t5 = lookup_low_id((int)(o->f3c2 & 0xffff));
        if (t5 == 0) {
            o->f3d0 = 0.0f;
        }
    }
L_8c1b7c36:;
    operation_8c1b8d10((void *)o);
    o->f3dc = o->f330;
    operation_8c1b8d98((void *)o);
    if (!(1.0f > (o->f3e4 += 0.0222222228f))) {
        o->f3e4 -= 1.0f;
    }
    v48 = (float)o->f3f0;
    if (o->f3f0 > 29.0f) {
        v48 = (float)29.0f;
    }
    t6 = game_malloc_8c011ecc(0x18);
    if (t6 != 0) {
        call_8c118ea4(t6, 2, v48, v48, 0.6f);
    }
    v51 = (S_vv51 *)o->f398;
    call_8c118f94(t6, (void *)(*(S_vv51_42c_8 **)((char *)((char *)v51->f42c + 0x8) + (g_8c327a70 << 4))), (void *)(*(S_vv51_430_4 **)((char *)((char *)v51->f430 + 0x4) + (*(int *)((char *)&g_8c327a88.f08 + (o->f3ec * 0x14)) << 3))), (void *)((void *)0x8c327c08), 0);
    t7 = call_8c119190(t6, v48);
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    translate_current_matrix_v_8c382a40((void *)(&o->f3c));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be280(0, t7, (Frame *)((&frame)));
    v52 = (int)((char *)(&frame) + 0xc);
    call_8c3be280(0, (int)(t7 + 0xc), (Frame *)v52);
    njPopMatrixEx_8c38ad10();
    if (t7 != 0) {
        if (o->f414 != 0) {
            call_8c0a7608((void *)(o->f414), (Frame *)((&frame)));
        }
        if (o->f418 != 0) {
            call_8c0a7608((void *)(o->f418), (Frame *)v52);
        }
    }
    destroy_vector_grid((void *)t6, 1);
}
