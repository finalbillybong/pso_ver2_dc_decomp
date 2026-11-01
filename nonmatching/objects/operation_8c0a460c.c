/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a460c
 * function: operation_8c0a460c
 * language: c
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 66 of 205 reference instruction lines
 * differing bytes: 82
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv8 S_vv8;
typedef struct Block_p0_2c {
    float f00;
    float f04;
    float f08;
} Block_p0_2c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    float f20;
    short f24;
    unsigned short f26;
    int f28;
    Block_p0_2c f2c;
    Vector3 f38;
};
struct Arg1 {
    Vector3 f00;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    Vector3 f9c;
};
struct Frame {
    char unknown4[0x14];
    int f18;
    char unknown1c[0x4];
    Vector3 f20;
    Vector3 f2c;
    char unknown38[0x14];
    float f4c;
    float f50;
    float f54;
};
struct S_vv4 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
};
struct S_vv8 {
    char unknown0[0x90];
    Vector3 f90;
    Vector3 f9c;
    char unknowna8[0xc];
    int fb4;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void TObject_ctor_8c0330e4(void *, void *);
extern float call_8c38d7d8(void *, void *);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern void operation_8c0a2144(int);
extern void call_8c0a22fc(void *);
Object *operation_8c0a460c(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    S_vv4 *v4;
    S_vv8 *v8;
    float t1;
    float t2;
    float t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a4);
    o->dispatch = (void *)0x8c265b34;
    t2 = call_8c38d7d8((void *)(&g_8c46ee80->f90), (void *)(&g_8c46ee80->f9c));
    *(Vector3 *)&o->f2c = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f38 = *(Vector3 *)&g_8c46ee80->f9c;
    if (a2 == 0) {
        o->f26 = 1;
    } else {
        o->f26 = a2;
    }
    o->f28 = a3;
    v4 = (S_vv4 *)g_8c46ee80;
    (&frame)->f4c = o->f2c.f00 - v4->f90;
    (&frame)->f50 = o->f2c.f04 - v4->f94;
    (&frame)->f54 = o->f2c.f08 - v4->f98;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f4c));
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f4c));
    }
    o->f2c.f00 = (&frame)->f4c * t2 + g_8c46ee80->f90;
    o->f2c.f04 = (&frame)->f50 * t2 + g_8c46ee80->f94;
    o->f2c.f08 = (&frame)->f54 * t2 + g_8c46ee80->f98;
    t3 = call_8c38d7d8((void *)(&o->f2c), (void *)(&g_8c46ee80->f9c));
    o->f20 = t3 / (float)o->f26;
    o->f24 = 0;
    operation_8c0a2144(6);
    v8 = (S_vv8 *)g_8c46ee80;
    *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&v8->f90;
    *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&v8->f9c;
    (&frame)->f18 = (int)(v8->fb4);
    call_8c0a22fc((void *)(((char *)(&frame))));
    return o;
}
