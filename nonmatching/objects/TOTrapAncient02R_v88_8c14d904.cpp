/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14d904
 * function: TOTrapAncient02R_v88_8c14d904
 * language: c++
 * reference size: 1328 bytes
 * compiled size: 1332 bytes (+0.3%)
 * differing lines: 42 of 451 reference instruction lines
 * differing bytes: 515
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg {
    int a;
    float b;
} Arg;
class Unit;
typedef struct Object {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x4];
    short f32;
    char unknown34[0x8];
    Vector3 f3c;
    char unknown48[0x1c];
    void *f64;
    char unknown68[0x2a2];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    Unit *f334;
    char unknown338[0x18];
    float f350;
    float f354;
    unsigned short f358;
    char unknown35a[0x2];
    int f35c;
    float f360;
    float f364;
    char unknown368[0xc];
    int f374;
    int f378;
} Object;
class Unit {
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
    virtual void v25(Object *, int, Arg);
    char unknown1c[0x10];
    short f2c;
    char unknown2e[0x4];
    short f32;
    char unknown34[0x8];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
};
extern "C" int g_8c44be04;
extern "C" Vector3 g_8c46f5a0;
extern "C" Vector3 g_8c46f5c0;
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void operation_8c027090(Object *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" Unit *lookup_low_id(int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" float operation_8c054228(void *, int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float normalize_vector_checked(void *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" float call_8c130334(float, float);
#define create_effect_777c ((void (*)(Vector3 *, int))0x8c0a777c)
#define heap_alloc_8c122700 ((void *(*)(void *, int))0x8c122700)
#define call_8c0d0788 ((void (*)(void *, int, Vector3 *, Vector3 *, float, float, int, int))0x8c0d0788)
#define call_8c05fbf8 ((void (*)(int, Vector3 *, int, int))0x8c05fbf8)
#define create_effect_b0ffc ((void (*)(Object *, Vector3 *, Vector3 *, int))0x8c0b0ffc)
#define create_effect_b1aa0 ((void (*)(Object *, Vector3 *, int, int))0x8c0b1aa0)
#define create_effect_b55f0 ((void (*)(Object *, Vector3 *, Vector3 *, int))0x8c0b55f0)
#define create_effect_b2190 ((void (*)(Object *, Vector3 *, int))0x8c0b2190)
static inline int same_side(Unit *q, Object *o)
{
    short s = o->f32;
    return q->f32 == s || q->f2c == o->f2c || q->f2c == s;
}
extern "C" void TOTrapAncient02R_v88_8c14d904(Object *o)
{
    Arg arg;
    float d;
    float v;
    float *p;
    unsigned short id;
    Unit *u;
    Unit *q;
    int ang;
    void *e;
    unsigned short k;
    operation_8c05426c(o, 0, 1);
    if (o->f35c == 1) {
        operation_8c027090(o);
    }
    switch (o->f30c) {
    case 0:
        p = &o->f360;
        if (7.0f > *p) {
            *p += 1.0f;
        } else {
            o->f30c = 1;
            *p = 7.0f;
        }
        break;
    case 1:
        p = &o->f364;
        *p += 1.0f;
        if (!(10.15f > *p)) {
            o->f30c = 2;
            *p = 10.15f;
        }
        break;
    case 2:
        o->f358 = call_8c04a52c(o, 0, o->f350);
        id = o->f358;
        k = 0xffff;
        if (id != k) {
            u = lookup_low_id(id);
            o->f334 = u;
            q = o->f334;
            if (q != 0 && u->f37c == g_8c44be04 && same_side(q, o)) {
                d = squared_distance_xz(&q->f3c, &o->f3c);
                o->f354 = o->f350 + operation_8c054228(o->f334, 0);
                if (o->f354 * o->f354 > d) {
                    o->f30a = 3;
                    o->f30c = 2;
                    g_8c46f5a0 = o->f3c;
                    g_8c46f5a0.y = o->f360 + o->f364 + g_8c46f5a0.y;
                    g_8c46f5c0 = o->f334->f324;
                    vector_sub_in_place_8c37f6f0(&g_8c46f5c0, &g_8c46f5a0);
                    if (1e-07f > normalize_vector_checked(&g_8c46f5c0)) {
                        g_8c46f5c0.y = 0.0f;
                        g_8c46f5c0.x = 0.0f;
                        g_8c46f5c0.z = 1.0f;
                        njPushMatrix_8c38ade4((void *)0x8c400500);
                        njRotateY_8c37df90(0, o->f64);
                        call_8c3be38c(0, &g_8c46f5c0, &g_8c46f5c0);
                        njPopMatrixEx_8c38ad10();
                    }
                    ang = (int)(call_8c130334(g_8c46f5c0.x, g_8c46f5c0.z) * 65536.0f / 6.2831855f);
                    switch (o->f374) {
                    case 1:
                        arg.a = 3;
                        arg.b = (float)o->f378 * 20.0f + 240.0f;
                        o->f334->v25(o, 0, arg);
                        create_effect_777c(&g_8c46f5a0, 0xb9);
                        create_effect_777c(&g_8c46f5a0, 0xba);
                        e = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x298);
                        if (e != 0) {
                            call_8c0d0788(e, *(int *)0x8c44bea0, &g_8c46f5a0, &g_8c46f5c0, o->f350, 1.8f, 0x14000000, 0x14);
                        }
                        call_8c05fbf8(0x20008, &g_8c46f5a0, 0, 0);
                        break;
                    case 0:
                        create_effect_b0ffc(o, &g_8c46f5a0, &o->f334->f324, o->f378);
                        break;
                    case 2:
                        create_effect_b1aa0(o, &g_8c46f5a0, ang, o->f378);
                        break;
                    case 3:
                        create_effect_b55f0(o, &g_8c46f5a0, &o->f334->f324, o->f378);
                        break;
                    case 4:
                        create_effect_b2190(o, &g_8c46f5a0, o->f378);
                        break;
                    }
                } else {
                    o->f358 = 0xffff;
                    o->f334 = 0;
                }
            } else {
                o->f358 = 0xffff;
                o->f334 = 0;
            }
        } else {
            o->f334 = 0;
        }
        if (o->f334 == 0) {
            o->f30c = 3;
        }
        break;
    case 3:
        p = &o->f364;
        if (*p > 0.0f) {
            *p -= 1.0f;
        } else {
            o->f30c = 4;
            *p = 0.0f;
        }
        break;
    case 4:
        p = &o->f360;
        if (*p > 0.0f) {
            *p -= 1.0f;
        } else {
            o->f30a = 0;
            o->f30c = 0;
            *p = 0.0f;
            o->f358 = 0xffff;
            o->f334 = 0;
        }
        break;
    }
}
