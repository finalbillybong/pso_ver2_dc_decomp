/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11c96c
 * function: operation_8c11c96c
 * language: c
 * reference size: 176 bytes
 * compiled size: 180 bytes (+2.3%)
 * differing lines: 50 of 66 reference instruction lines
 * differing bytes: 142
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x2b2];
    int f3a4;
    char unknown3a8[0x4];
    Arg0_3ac *f3ac;
    int f3b0;
};
struct Arg0_3ac {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c;
    int f10;
    int f14;
};
extern int create_effect_785c(void *, void *, int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void TObjEnePanarmsAtkColli_create_8c161770(int, int, int, int);
void operation_8c11c96c(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    float t3;
    o->f3ac->f18 |= 1;
    (&frame)->f0c = (int)o->f64 + 0x4000;
    (&frame)->f10 = 0;
    (&frame)->f14 = 0x4000;
    o->f3b0 = create_effect_785c((void *)(((char *)o + 0x3d4)), (void *)(&(&frame)->f0c), 0x105);
    frame.f04 = 0.0f;
    frame.f00 = njSin_8c37eb0c((void *)(o->f64));
    frame.f08 = njCos_8c38c154((void *)(o->f64));
    TObjEnePanarmsAtkColli_create_8c161770((int)o, (int)(((char *)o + 0x3d4)), (int)(&frame), 0);
    o->ff0 = 7;
    o->f3a4 = 0x5a;
}
