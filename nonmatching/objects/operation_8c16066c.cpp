/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16066c
 * function: operation_8c16066c
 * language: c++
 * reference size: 692 bytes
 * compiled size: 692 bytes (+0.0%)
 * differing lines: 154 of 296 reference instruction lines
 * differing bytes: 321
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
typedef struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
} Arg0_3bc;
typedef struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2c8];
    short f330;
    char unknown332[0x5e];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x1c];
    Arg0_3bc *f3bc;
    Vector3 f3c0;
    float f3cc;
    int f3d0;
    char unknown3d4[0x4];
    void *f3d8;
    int f3dc;
    int f3e0;
    char unknown3e4[0x40];
    int f424;
} Object;
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
typedef struct StateRow {
    PMF_0 fn;
    char unknownc[0xc];
} StateRow;
extern "C" StateRow g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void call_8c15eb34(Object *, void *);
extern "C" int call_8c18e768(void *, int);
extern "C" void create_effect_777c(void *, int);
static inline int is_7_or_8(Object *o)
{
    int r;
    r = 1;
    if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
        r = 0;
    }
    return r;
}
static inline void set_state(Object *o, int n)
{
    int s;
    if (o->f390 != o->f394) {
        o->f390 = o->f394;
    }
    o->f394 = n;
    s = o->f394;
    if (s < 0 || s >= 0x11) {
        return;
    }
    PMF_0 fn = g_8c316c90[s].fn;
    if (call_8c18e6fc(&fn)) {
        (((PmfObj *)o)->*fn)();
    }
}
extern "C" void operation_8c16066c(Object *o)
{
    int b;
    Vector3 v;
    int a;
    Vector3 pos;
    int c;
    if (--o->f3d0 > 0) {
        if (-1.0f > (o->f3cc += -0.075f)) {
            o->f3cc = -1.0f;
        }
    } else {
        if (!(0.0f > (o->f3cc += 0.025f))) {
            o->f3cc = 0.0f;
            set_state(o, 2);
            return;
        }
    }
    v.x = o->f3cc * njSin_8c37eb0c(o->f64);
    v.z = o->f3cc * njCos_8c38c154(o->f64);
    v.y = 0.0f;
    call_8c15eb34(o, &v);
    c = 0;
    b = 0;
    a = 0;
    if (o->f39c == 0 && !is_7_or_8(o)) {
        a = 1;
    }
    if (a && o->f3dc == 0) {
        b = 1;
    }
    if (b && call_8c18e768(o->f3d8, 2) >= o->f330) {
        c = 1;
    }
    if (c) {
        set_state(o, 0xc);
        return;
    }
    c = 0;
    if (o->f3e0 == 0 && is_7_or_8(o)) {
        c = 1;
    }
    if (c) {
        set_state(o, 0x10);
        return;
    }
    if ((o->f424 & 7) == 0) {
        pos = o->f3c0;
        pos.y += 5.0f;
        create_effect_777c(&pos, 0xf3);
    }
}
