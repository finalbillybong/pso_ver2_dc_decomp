/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11cbd8
 * function: operation_8c11cbd8
 * language: c
 * reference size: 204 bytes
 * compiled size: 208 bytes (+2.0%)
 * differing lines: 40 of 74 reference instruction lines
 * differing bytes: 138
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
extern void create_effect_7ab8(void *, void *, int);
extern int create_effect_785c(void *, void *, int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern void TObjEnePanarmsAtkColli_create_8c161770(int, int, int, int);
void operation_8c11cbd8(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    float t3;
    o->f3ac->f18 |= 1;
    create_effect_7ab8((void *)(((char *)o + 0x3ec)), (void *)(((char *)o + 0x60)), 0x109);
    (&frame)->f0c = (int)o->f64 + -0x4000;
    (&frame)->f10 = 0;
    (&frame)->f14 = 0x4000;
    t1 = create_effect_785c((void *)(((char *)o + 0x3ec)), (void *)(&(&frame)->f0c), 0x108);
    o->f3b0 = (int)(t1);
    (&frame)->f04 = 0.0f;
    (&frame)->f00 = njSin_8c37eb0c((void *)(o->f64));
    (&frame)->f08 = njCos_8c38c154((void *)(o->f64));
    TObjEnePanarmsAtkColli_create_8c161770((int)o, (int)(((char *)o + 0x3ec)), (int)(&frame), 1);
    o->ff0 = 9;
    o->f3a4 = 0x5a;
}
