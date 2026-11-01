/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c178968
 * function: operation_8c178968
 * language: c++
 * reference size: 856 bytes
 * compiled size: 852 bytes (-0.5%)
 * differing lines: 60 of 339 reference instruction lines
 * differing bytes: 744
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct Arg0_1b8 Arg0_1b8;
typedef struct Arg1 Arg1;
class Object;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
    short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
    char unknown18[0xc];
} Block_frame_10;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_frame_4 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_frame_4;
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x54];
    int f16c;
    int f170;
    char unknown174[0x14];
    float f188;
    int f18c;
    char unknown190[0x24];
    volatile unsigned short f1b4;
    char unknown1b6[0x2];
    Arg0_1b8 *f1b8;
    char unknown1bc[0x10];
    short f1cc;
    char unknown1ce[0x2];
    int f1d0;
    int f1d4;
    int f1d8;
    int f1dc;
} ObjectData;
struct Arg1 {
    Vector3 f00;
    short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
    char unknown18[0x4];
    unsigned char f1c;
    char unknown1d[0x3];
    float f20;
};
struct Arg0_1b8 {
    char unknown0[0x64];
    int f64;
};
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
    int f430;
};
struct S_g8c4db380_42c {
    char unknown0[0xa8];
    int fa8;
    int fac;
};
struct Frame {
    Block_frame_4 f04;
    Block_frame_10 f10;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int g_8c3195e0;
extern Block36 g_8c3195e4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db380 *g_8c4db380;
extern "C" char g_8c319608[];
extern "C" void call_8c13e784(Object *);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void call_8c01c838(Object *, short);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TPhotonYoulla_ctor_8c174878(int, void *);
extern "C" void initialize_float_fields_8c179144(void *, unsigned char);
extern "C" int get_current_area_8c032b10(void);
extern "C" void call_8c14f270(int, Object *, void *, int);
extern "C" void operation_8c13f140(void *, int);
extern "C" void TPhotonMagicSquare_ctor_3_8c14ee50(int, Object *, int, void *, float, int);
extern "C" void call_8c13ec98(Object *, int);
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void call_8c13efb0(int, int);
extern "C" Object *operation_8c178968(Object *o, Arg1 *a1)
{
    Frame frame;
    Object **home = &o;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    S_c8c053d84 *t6;
    int t7;
    (void)home;
    call_8c13e784(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c270f40;
    ((ObjectData *)o)->tag = (int)(g_8c3195e0);
    ((ObjectData *)o)->size = 0x1e0;
    ((ObjectData *)o)->f170 = 5;
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&a1->f00;
    ((ObjectData *)o)->f1b4 = a1->f0c;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f1b4));
    ((ObjectData *)o)->f1b8 = (Arg0_1b8 *)t1;
    if (((ObjectData *)o)->f1b8 != 0) {
        ((ObjectData *)o)->f64 = (int)(((ObjectData *)o)->f1b8->f64);
    }
    ((ObjectData *)o)->f38 = (int)(g_8c4db380->f42c->fa8);
    ((ObjectData *)o)->f28 = (int)(g_8c4db380->f42c->fac);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c3195c0;
    ((ObjectData *)o)->f114 = (int)(g_8c4db380->f430);
    ((ObjectData *)o)->ff0 = 1;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f1cc = 1;
    ((ObjectData *)o)->f1d0 = (int)(a1->f10);
    ((ObjectData *)o)->f1d4 = (int)(a1->f14);
    ((ObjectData *)o)->f1d8 = 0;
    *(Block36 *)&(&frame)->f10 = *(Block36 *)&g_8c3195e4;
    (&frame)->f10.f00 = ((ObjectData *)o)->f3c.f00;
    (&frame)->f10.f04 = ((ObjectData *)o)->f3c.f04;
    (&frame)->f10.f08 = ((ObjectData *)o)->f3c.f08;
    (&frame)->f10.f0c = ((ObjectData *)o)->f1b4 & 0xffff;
    (&frame)->f10.f10 = (int)(((ObjectData *)o)->f1d0);
    (&frame)->f10.f14 = (int)(((ObjectData *)o)->f1d4);
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x1e0);
    if (t2 != 0) {
        TPhotonYoulla_ctor_8c174878(t2, (void *)(&(&frame)->f10));
    }
    initialize_float_fields_8c179144((void *)o, a1->f1c);
    ((ObjectData *)o)->f16c = 3;
    o->v15();
    ((ObjectData *)o)->f1dc = 0;
    t3 = get_current_area_8c032b10();
    switch (t3) {
    case 11:
    case 12:
    case 13:
    case 14:
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
        if (t4 == 0) {
            goto L_8c178b2c;
        }
        call_8c14f270(t4, o, (void *)(((char *)o + 0x3c)), 1);
        break;
    default:
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
        if (t5 != 0) {
            call_8c14f270(t5, o, (void *)(((char *)o + 0x3c)), 0);
        }
        break;
    }
L_8c178b2c:;
    if (((ObjectData *)o)->f1d4 == 1) {
        ((ObjectData *)o)->f18c |= 1;
    }
    ((ObjectData *)o)->f188 = a1->f20;
    if (((ObjectData *)o)->f1d0 == 0) {
        ((ObjectData *)o)->ff0 = 0;
        operation_8c13f140((void *)o, 3);
        ((ObjectData *)o)->f1d0 = 1;
        ((ObjectData *)o)->f1cc = 0;
        ((ObjectData *)o)->f1d8 = 1;
        t6 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f1b4));
        if (t6 != 0) {
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&t6->f3c;
        }
        (&frame)->f04.f04 += 30.0f;
        t7 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t7 != 0) {
            TPhotonMagicSquare_ctor_3_8c14ee50(t7, o, 5, (void *)(&(&frame)->f04.f00), 0.5f, 0xaa);
        }
        call_8c13ec98(o, 5);
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c319608 + 0xd));
    } else {
        call_8c13efb0(5, (int)(((ObjectData *)o)->f1b4 & 0xffff));
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c319608 + 0x18));
    }
    return o;
}
