/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ea374
 * function: operation_8c1ea374
 * language: c
 * reference size: 308 bytes
 * compiled size: 308 bytes (+0.0%)
 * differing lines: 112 of 119 reference instruction lines
 * differing bytes: 110
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Object Object;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x2b0];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x6c];
    Arg0_390 *f390;
    char unknown394[0x4];
    float f398;
    char unknown39c[0x4];
    float f3a0;
    char unknown3a4[0x1c0];
    float f564;
    char unknown568[0x8];
    int f570;
};
extern int angle_between_xz(void *, void *);
extern int angle_fraction_step(void *, void *);
extern int angle_halfway(void *, void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern int hs_8c025a44(Object *);
extern void operation_8c028738(Object *, float, float);
void operation_8c1ea374(Object *o)
{
    float v1;
    float v2;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    t1 = angle_between_xz(&o->f3c, &o->f398);
    o->f390 = (Arg0_390 *)t1;
    t2 = angle_fraction_step(o->f64, o->f390);
    o->f64 = (Arg0_64 *)t2;
    t3 = angle_halfway(o->f64, o->f390);
    v1 = (float)o->f564;
    t4 = njSin_8c37eb0c(t3);
    o->f318 = v1 * t4;
    o->f31c = 0.0f;
    v2 = (float)o->f564;
    t5 = njCos_8c38c154(t3);
    o->f320 = v2 * t5;
    if ((o->f564 * 2.0f * (o->f564 * 2.0f)) > ((o->f398 - o->f3c) * (o->f398 - o->f3c) + (o->f3a0 - o->f44) * (o->f3a0 - o->f44))) {
        o->f570 |= 4;
    }
    t6 = hs_8c025a44(o);
    if (t6 != 0) {
        o->f570 |= 4;
    }
    operation_8c028738(o, 1.0f, 10.0f);
}
