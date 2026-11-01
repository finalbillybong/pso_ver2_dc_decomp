/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13d690
 * function: operation_8c13d690
 * language: c++
 * reference size: 688 bytes
 * compiled size: 688 bytes (+0.0%)
 * differing lines: 42 of 280 reference instruction lines
 * differing bytes: 26
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_frame_44 S_frame_44;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4d9c2c S_g8c4d9c2c;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv6 S_vv6;
typedef struct S_x55120 S_x55120;
typedef struct S_x56912 S_x56912;
class S_vv13;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Vector3 f08;
    char f14;
    char f15;
    short f16;
    short f18;
    char unknown1a[0x6];
    Vector3 f20;
    Vector3 f2c;
    Vector3 f38;
    int f44[4];
};
struct S_g8c4d9c2c {
    char unknown0[0x18];
    int f18;
};
struct S_vv6 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x2ac];
    float f3a8;
};
struct S_x55120 {
    Vector3 f00;
};
struct S_x56912 {
    Vector3 f00;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
class S_vv13 {
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
    virtual void v25(Object *, int, Block8);
};
typedef struct S_vv13Data {

} S_vv13Data;
extern short g_8c31311a;
extern Vector3 g_8c3137a8;
extern Block8 g_8c3137b4;
extern int g_8c41cb64;
extern S_g8c44bea0 *g_8c44bea0;
extern int g_8c467874;
extern S_vv6 *g_8c467240[];
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4d9c2c *g_8c4d9c2c;
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c01cfc0(void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c3be280(int, void *, void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float njUnitVector_8c37b630(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TTecZondeEff_ctor_1_8c0d0360(int, void *, void *, void *, float);
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int operation_8c150e84(void *);
extern "C" void operation_8c036840(int);
extern "C" void play_se_8c05fbf8(int, int, int, int);
extern "C" int operation_8c13d690(Object *o)
{
    int i;
    unsigned int mask;
    Frame frame;
    int count;
    S_vv6 *e;
    unsigned short lim;
    int v2;
    int v12;
    int v10;
    int v11;
    S_vv13 *v13;
    int t1;
    float t2;
    S_c8c053d84 *t3;
    int t4;
    float t5;
    int t6;
    v2 = 0;
    *(Block8 *)&frame.f00 = g_8c3137b4;
    frame.f00.f04 = (float)g_8c4d9c2c->f18;
    i = 0;
    lim = 0x1000;
    count = g_8c467874;
    mask = 0x2000800;
    while (i < count) {
        e = *(S_vv6 **)((char *)g_8c467240 + (i << 2));
        if (e == 0 || !(e->f20 < lim)) {
            break;
        }
        if ((e->f34 & mask) == 0) {
            *(S_vv6 **)((char *)frame.f44 + (v2 << 2)) = e;
            v2++;
        }
        i++;
    }
    if (!(v2 > 0)) {
    } else {
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njTranslate_8c3829bc(0, o->f3c, o->f40 + o->f3a8, o->f44);
        njRotateY_8c37df90(0, (void *)(o->f64));
        operation_8c01cfc0((void *)o, o->ff8);
        njPopMatrixEx_8c38ad10();
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&g_8c3137a8;
        njPushMatrix_8c38ade4((void *)(g_8c41cb64 + 0x300));
        call_8c3be280(0, (void *)(&(&frame)->f08), (void *)(&(&frame)->f38));
        njPopMatrixEx_8c38ad10();
        v10 = (int)0x324;
        v12 = (int)0;
        v11 = (int)0x298;
        while (v2 > v12) {
            v13 = *(S_vv13 **)((v12 << 2) + (char *)frame.f44);
            *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&((S_x55120 *)((char *)v13 + v10))->f00;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f2c), (void *)(&(&frame)->f38));
            t2 = njUnitVector_8c37b630((void *)(&(&frame)->f2c));
            t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)v11);
            if (t1 != 0) {
                TTecZondeEff_ctor_1_8c0d0360(t1, g_8c44bea0, (void *)(&(&frame)->f38), (void *)(&(&frame)->f2c), t2);
            }
            *(Vector3 *)&(&frame)->f38 = *(Vector3 *)&((S_x56912 *)((char *)v13 + v10))->f00;
            v13->v25(o, 0, *(Block8 *)&(&frame)->f00);
            v12 = (int)(v12 + 1);
        }
        t3 = lookup_object_by_id((unsigned short)g_8c31311a);
        if (t3 != 0) {
            *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&t3->f3c;
            vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)(&(&frame)->f38));
            t5 = njUnitVector_8c37b630((void *)(&(&frame)->f20));
            t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x298);
            if (t4 != 0) {
                TTecZondeEff_ctor_1_8c0d0360(t4, g_8c44bea0, (void *)(&(&frame)->f38), (void *)(&(&frame)->f20), t5);
            }
            t6 = operation_8c150e84((void *)t3);
            if (t6 != 0) {
                (&frame)->f14 = 0x15;
                (&frame)->f15 = 3;
                (&frame)->f16 = o->f20;
                (&frame)->f18 = 2;
                operation_8c036840((int)(&(&frame)->f14));
            }
        }
        play_se_8c05fbf8(0x20009, 0, 0, 0);
    }
    return (int)(v2);
}
