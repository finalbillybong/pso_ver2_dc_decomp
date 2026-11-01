/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c176b64
 * function: operation_8c176b64
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 74 of 108 reference instruction lines
 * differing bytes: 87
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    Arg2 *f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0x8];
    int f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    Vector3 f04;
};
struct Arg2 {
    Vector3 f00;
};
extern S_g8c44be98 *g_8c44be98;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, int);
extern float njScalor_8c37e480(void *);
extern void call_8c0c5018(void *, void *, void *);
extern int rand(void);
Object *operation_8c176b64(Object *o, int a1, Arg2 *a2, int a3, register int a4)
{
    Frame frame;
    Object **home = &o;
    float t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44be98);
    o->dispatch = (void *)0x8c2708fc;
    o->f20 = a1;
    o->f24 = a2;
    o->f28 = a4;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&a2->f00;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f04), a1);
    t1 = njScalor_8c37e480((void *)(&(&frame)->f04));
    o->f44 = t1 * 2.0f;
    call_8c0c5018((void *)(&(&frame)->f04), (void *)(((char *)o + 0x2c)), (void *)(&o->f30));
    t2 = rand();
    o->f30 -= a3 * 0x71c + (int)((float)t2 / 32768.0f * 1820.0f);
    t3 = rand();
    o->f3c = (int)(((float)t3 / 32768.0f * 2.0f + 1.0f) / (float)a4 * 1820.0f) * a3;
    return o;
}
