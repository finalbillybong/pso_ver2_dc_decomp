/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1318a4
 * function: TODragonfly_ctor_8c1318a4
 * language: c
 * reference size: 400 bytes
 * compiled size: 400 bytes (+0.0%)
 * differing lines: 42 of 147 reference instruction lines
 * differing bytes: 64
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_s10c Arg0_s10c;
typedef struct Arg0_s3c Arg0_s3c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    int f3c;
    char unknown40[0x2c];
    float f6c;
    char unknown70[0x18];
    int f88;
    int f8c;
    char unknown90[0x74];
    int f104;
    float f108;
    int f10c;
    char unknown110[0x8];
    float f118;
    float f11c;
    float f120;
    float f124;
    float f128;
    float f12c;
    int f130;
    Arg0_134 *f134;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s10c {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c3128a0;
extern S_g8c44be98 *g_8c44be98;
extern void operation_8c0ee870(void *, void *);
extern int rand(int);
extern float njSin_8c37eb0c(void *);
Object *TODragonfly_ctor_8c1318a4(Object *o)
{
    Object **home = &o;
    char *v1;
    int v2;
    int t1;
    float t2;
    (void)home;
    operation_8c0ee870((void *)o, g_8c44be98);
    o->dispatch = (void *)0x8c26cc80;
    o->tag = (int)(g_8c3128a0);
    o->size = 0x138;
    o->f104 = 0;
    o->f108 = o->f6c + 50.0f;
    *(Vector3 *)&o->f10c = *(Vector3 *)&o->f3c;
    o->f120 = 0.0f;
    o->f11c = 0.0f;
    o->f118 = 0.0f;
    o->f12c = (float)o->f88 * 0.1f + 1.0f;
    o->f130 = (int)(360.0f / (30.0f / o->f12c) * 65536.0f / 360.0f);
    t1 = rand(0x130);
    o->f134 = (Arg0_134 *)(int)((float)t1 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    o->f124 = (float)o->f8c * 0.1f + 1.0f;
    {
        Object *base = o;
        t2 = njSin_8c37eb0c((void *)(base->f134));
        base->f128 = base->f124 * t2;
    }
    return o;
}
