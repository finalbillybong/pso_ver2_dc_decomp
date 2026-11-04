/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1557e8
 * function: TPhotonLeilla_ctor_8c1557e8
 * language: c++
 * reference size: 696 bytes
 * compiled size: 692 bytes (-0.6%)
 * differing lines: 48 of 274 reference instruction lines
 * differing bytes: 592
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TPhotonLeilla.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct Arg1 Arg1;
class Object;
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
    Vector3 f3c;
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
    unsigned short f1b4;
    char unknown1b6[0x12];
    short f1c8;
    char unknown1ca[0x2];
    int f1cc;
    int f1d0;
    int f1d4;
    char unknown1d8[0xc];
    int f1e4;
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
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
    int f430;
};
struct S_g8c4db380_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c316080;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db380 *g_8c4db380;
extern "C" char g_8c316084[];
extern "C" void call_8c13e784(Object *);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void call_8c01c838(Object *, short);
extern "C" int get_current_area_8c032b10(void);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c14f270(int, Object *, void *, int);
extern "C" void initialize_float_fields_8c155e2c(void *, unsigned char);
extern "C" void operation_8c13f140(void *, int);
extern "C" void TPhotonMagicSquare_ctor_2_8c14ed00(int, Object *, int, void *, int);
extern "C" void call_8c13ec98(Object *, int);
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void call_8c13efb0(int, int);
extern "C" Object *TPhotonLeilla_ctor_8c1557e8(Object *o, Arg1 *a1)
{
    Frame frame;
    Object **home = &o;
    S_c8c053d84 *t1;
    int t2;
    int t3;
    int t4;
    S_c8c053d84 *t5;
    int t6;
    (void)home;
    call_8c13e784(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26eacc;
    ((ObjectData *)o)->tag = (int)(g_8c316080);
    ((ObjectData *)o)->size = 0x1e8;
    ((ObjectData *)o)->f170 = 4;
    *(Vector3 *)&((ObjectData *)o)->f3c = *(Vector3 *)&a1->f00;
    ((ObjectData *)o)->f1b4 = a1->f0c;
    t1 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f1b4));
    if (t1 != 0) {
        ((ObjectData *)o)->f64 = (int)(t1->f64);
    }
    ((ObjectData *)o)->f38 = (int)(g_8c4db380->f42c->f18);
    ((ObjectData *)o)->f28 = (int)(g_8c4db380->f42c->f1c);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c316060;
    ((ObjectData *)o)->f114 = (int)(g_8c4db380->f430);
    ((ObjectData *)o)->ff0 = 1;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f1c8 = 1;
    ((ObjectData *)o)->f1cc = (int)(a1->f10);
    ((ObjectData *)o)->f1d0 = (int)(a1->f14);
    ((ObjectData *)o)->f1d4 = 0;
    ((ObjectData *)o)->f16c = 2;
    o->v15();
    ((ObjectData *)o)->f1e4 = 0;
    t2 = get_current_area_8c032b10();
    switch (t2) {
    case 11:
    case 12:
    case 13:
    case 14:
        t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
        if (t3 == 0) {
            goto L_8c155920;
        }
        call_8c14f270(t3, o, (void *)(((char *)o + 0x3c)), 1);
        break;
    default:
        t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
        if (t4 != 0) {
            call_8c14f270(t4, o, (void *)(((char *)o + 0x3c)), 0);
        }
        break;
    }
L_8c155920:;
    initialize_float_fields_8c155e2c((void *)o, a1->f1c);
    if (((ObjectData *)o)->f1d0 == 1) {
        ((ObjectData *)o)->f18c |= 1;
    }
    ((ObjectData *)o)->f188 = a1->f20;
    if (((ObjectData *)o)->f1cc == 0) {
        ((ObjectData *)o)->ff0 = 0;
        operation_8c13f140((void *)o, 2);
        ((ObjectData *)o)->f1cc = 1;
        ((ObjectData *)o)->f1c8 = 0;
        ((ObjectData *)o)->f1d4 = 1;
        t5 = lookup_object_by_id((unsigned short)(((ObjectData *)o)->f1b4));
        if (t5 != 0) {
            *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&t5->f3c;
        }
        (&frame)->f04.f04 += 30.0f;
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xd4);
        if (t6 != 0) {
            TPhotonMagicSquare_ctor_2_8c14ed00(t6, o, 4, (void *)(&(&frame)->f04.f00), 0x78);
        }
        call_8c13ec98(o, 4);
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c316084 + 0xe));
    } else {
        call_8c13efb0(4, (int)(((ObjectData *)o)->f1b4 & 0xffff));
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c316084 + 0x19));
    }
    return o;
}
