/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1667ac
 * function: operation_8c1667ac
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 66 of 161 reference instruction lines
 * differing bytes: 281
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
typedef struct Target {
    char unknown0[0x3c];
    Vector3 f3c;
} Target;
typedef struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x18];
    int f60;
    int f64;
    char unknown68[0x130];
    short f198;
    char unknown19a[0x18a];
    Vector3 f324;
    short f330;
    char unknown332[0x76];
    int f3a8;
    Vector3 f3ac;
    char unknown3b8[0xc];
    int f3c4;
    char unknown3c8[0x44];
    Target *f40c;
    int f410;
    Vector3 f414;
    Vector3 f420;
} Object;
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern int active_unflagged_8c05b2dc(void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c1667ac(Object *o, Vector3 *a1, Target *a2, int a3)
{
    o->f3a8 |= 0x100;
    o->f324 = *a1;
    o->f40c = a2;
    o->f410 = a3;
    o->f414.x = njSin_8c37eb0c(a3 * 0x5555) * 20.0f;
    o->f414.y = 0.0f;
    o->f414.z = njCos_8c38c154(a3 * 0x5555) * 20.0f;
    if (a3 == 0) {
        a3 = 0x8000;
    } else if (a3 == 1) {
        a3 = 0x6800;
    } else {
        a3 = 0x9800;
    }
    o->f420.x = njSin_8c37eb0c(a3);
    o->f420.y = 0.0f;
    o->f420.z = njCos_8c38c154(a3);
    o->f64 = a3;
    o->f3ac.x = 0.0f;
    o->f3ac.y = 0.0f;
    o->f3ac.z = 0.0f;
    if (active_unflagged_8c05b2dc(o->f40c) != 0) {
        o->f3ac = o->f40c->f3c;
        call_8c3bdf60(&o->f3ac, &o->f414);
        o->f3ac.y += 17.0f;
    }
    o->f60 = 0x4000;
    o->f3c = o->f324;
    o->f3c4 = 0;
    o->f330 = o->f198;
    o->f34 &= ~0xa00;
}
