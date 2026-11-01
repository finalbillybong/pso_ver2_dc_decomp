/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f1e1c
 * function: operation_8c1f1e1c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 14 of 50 reference instruction lines
 * differing bytes: 27
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
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    char unknown28[0xc];
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    char unknown68[0x30];
    float f98;
    float f9c;
    float fa0;
};
struct Arg0_24 {
    char unknown0[0x324];
    Vector3 f324;
};
void operation_8c1f1e1c(Object *o)
{
    *(Vector3 *)((char *)o + 0xb0) = o->f24->f324;
    o->f34 = o->f38 = o->f3c = o->f40 = o->f50 = o->f54 = o->f58 = o->f5c = o->f60 = o->f64 = o->f44 = o->f48 = o->f4c = 0;
    o->f98 = o->f9c = o->fa0 = 0.0f;
}
