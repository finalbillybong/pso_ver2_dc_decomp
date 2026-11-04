/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c248bf8
 * function: TItemWpnYasumuraShiki_v49_8c248bf8
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 14 of 64 reference instruction lines
 * differing bytes: 16
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnYasumuraShiki.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x100];
    int f240;
};
struct Arg0_13c {
    char unknown0[0x64];
    int f64;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
};
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern void call_8c175918(void *, Object *, int, void *, void *);
extern void operation_8c075894(void *, void *, int, int);
extern void create_effect_777c(void *, int);
void TItemWpnYasumuraShiki_v49_8c248bf8(Object *o)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    o->f240 = 2;
    v1 = (int)(o->f13c->f64 + -0x4000);
    t1 = njSin_8c37eb0c(v1);
    (&frame)->f18 = t1;
    (&frame)->f1c = 1.0f;
    t2 = njCos_8c38c154(v1);
    (&frame)->f20 = t2;
    (&frame)->f0c = 0x4000;
    (&frame)->f10 = (int)(o->f13c->f64);
    (&frame)->f14 = 0;
    call_8c175918((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 3, (void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
    operation_8c075894((void *)o, (void *)(o->f13c), 2, (int)(&frame));
    create_effect_777c((void *)(&frame), 9);
}
