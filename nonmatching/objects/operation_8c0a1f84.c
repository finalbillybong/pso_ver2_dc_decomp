/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a1f84
 * function: operation_8c0a1f84
 * language: c
 * reference size: 188 bytes
 * compiled size: 192 bytes (+2.1%)
 * differing lines: 88 of 91 reference instruction lines
 * differing bytes: 172
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct Arg1 {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    int f14;
    char unknown18[0x4];
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    short f44;
};
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x4];
    short f64;
};
extern S_L8c46efc8 g_8c46efc8;
void operation_8c0a1f84(Object *o, Arg1 *a1)
{
    int v1;
    (&g_8c46efc8)->f08 |= 2;
    v1 = (int)a1->f04;
    if (v1 >= o->f24) {
        o->f24 = (int)(v1);
        o->f20 = (int)(a1->f00);
        o->f28 = (int)(a1->f08);
        o->f2c = a1->f0c;
        o->f30 = a1->f10;
        o->f34 = (int)(a1->f14);
        o->f64 = a1->f44;
        o->f3c = a1->f1c;
        o->f40 = a1->f20;
        o->f44 = a1->f24;
        o->f48 = a1->f28;
        o->f4c = a1->f2c;
        o->f50 = a1->f30;
        o->f54 = a1->f34;
        o->f58 = a1->f38;
        o->f5c = a1->f3c;
    }
}
