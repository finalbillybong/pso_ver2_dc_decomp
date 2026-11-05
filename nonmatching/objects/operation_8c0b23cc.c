/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b23cc
 * function: operation_8c0b23cc
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 50 of 172 reference instruction lines
 * differing bytes: 68
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, constant loading; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285418 S_L8c285418;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_0 Arg0_20_0;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    Arg0_40 *f40;
    int f44;
    int f48;
};
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct S_L8c285418 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c285418 g_8c285418;
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(void *);
extern float errno_wrap_8c130334(float, float);
extern void call_8c0a7608(void *, void *);
extern void set_effect_words(void *, void *);
void operation_8c0b23cc(Object *o)
{
    Frame frame;
    unsigned int v7;
    int v8;
    float t1;
    float t2;
    float t3;
    float t4;
    o->f44 += 1;
    o->f3c += 0.55f;
    o->f40 = (Arg0_40 *)((int)o->f40 + (int)((float)((int)o->f48 + 9) * 65536.0f / 360.0f));
    if (o->f48 == 2) {
        t1 = njSin_8c37eb0c((int)((int)((float)(o->f44 * 0xf) * 65536.0f / 360.0f)));
        o->f34 = o->f28 + t1 * 7.0f;
    } else {
        o->f34 = o->f28;
    }
    t2 = njCos_8c38c154((void *)(o->f40));
    o->f30 = o->f3c * t2 + o->f24;
    t3 = njSin_8c37eb0c((int)(o->f40));
    o->f38 = o->f3c * t3 + o->f2c;
    t4 = errno_wrap_8c130334(o->f30 - o->f24, o->f38 - o->f2c);
    (&frame)->f04 = (int)(t4 * 65536.0f / 6.28318405f);
    (&frame)->f00 = (&frame)->f04 + -0x8000;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0x4000;
    v7 = (unsigned int)0;
    while ((unsigned int)*(int *)((char *)&g_8c285418.f04 + (o->f48 << 3)) > v7) {
        v8 = (int)(v7 << 2);
        call_8c0a7608((void *)(*(Arg0_20_0 **)((char *)((char *)o->f20 + 0x0) + (v8))), (void *)(&o->f30));
        set_effect_words((void *)(*(Arg0_20_0 **)((char *)((char *)o->f20 + 0x0) + (v8))), (void *)(&frame));
        v7 = (unsigned int)(v7 + 1);
    }
}
