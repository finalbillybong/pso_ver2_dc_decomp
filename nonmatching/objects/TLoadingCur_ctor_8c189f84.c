/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c189f84
 * function: TLoadingCur_ctor_8c189f84
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 32 of 125 reference instruction lines
 * differing bytes: 60
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s24 Arg0_s24;
typedef struct Arg0_s30 Arg0_s30;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    float f24;
    float f28;
    float f2c;
    int f30;
    char unknown34[0x8];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
};
struct Arg0_s24 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s30 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_L8c46ee84 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
extern int g_8c319ea8;
extern S_L8c46ee84 g_8c46ee84;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c0c5094(void *, void *, void *);
extern int create_effect_794c(void *, void *, int, int);
Object *TLoadingCur_ctor_8c189f84(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    char *v1;
    int v2;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27220c;
    o->tag = (int)(g_8c319ea8);
    o->size = 0x60;
    o->f24 = 0.0f;
    o->f28 = 0.0f;
    o->f2c = 0.0f;
    *(Vector3 *)((char *)o + 0x30) = *(Vector3 *)((char *)o + 0x24);
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = (&g_8c46ee84)->f00 + (&g_8c46ee84)->f0c * 100.0f;
    o->f4c = (&g_8c46ee84)->f04 + (&g_8c46ee84)->f10 * 100.0f;
    o->f50 = (&g_8c46ee84)->f08 + (&g_8c46ee84)->f14 * 100.0f;
    o->f54 = -(&g_8c46ee84)->f0c;
    o->f58 = -(&g_8c46ee84)->f10;
    o->f5c = -(&g_8c46ee84)->f14;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0;
    (&frame)->f0c = 0;
    call_8c0c5094((void *)(&o->f54), (void *)(&(&frame)->f04), (void *)(&(&frame)->f0c));
    t1 = create_effect_794c((void *)(&o->f24), (void *)(&(&frame)->f04), 0x16, 1);
    o->f20 = (int)(t1);
    return o;
}
