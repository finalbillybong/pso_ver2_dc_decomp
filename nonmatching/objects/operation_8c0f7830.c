/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f7830
 * function: operation_8c0f7830
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 42 of 121 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s18 Arg0_s18;
typedef struct S_vv3 S_vv3;
typedef struct Color {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
} Color;
struct Frame {
    int f00;
    Color f04;
    Color f08;
};
struct Object {
    int tag;
    char unknown4[0x14];
    char dispatch;
    char unknown19[0x13];
    int f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    float f4c;
    char unknown50[0x4];
    float f54;
    float f58;
    float f5c;
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
};
struct Arg0_s18 {
    char unknown0[0x1];
    char f01;
    char f02;
    char f03;
};
void operation_8c0f7830(Object *o, int a1, float f0)
{
    Frame frame;
    int v2;
    int v1;
    S_vv3 *v3;
    float v20;
    (&frame)->f00 = a1;
    v1 = (int)(&frame)->f00;
    v2 = (int)o->f2c;
    if (v2 != v1) {
        o->f2c = (int)(v1);
        (&frame)->f08 = *(Color *)&(&frame)->f00;
        o->f34 = (float)(&frame)->f08.b2;
        o->f38 = (float)(&frame)->f08.b1;
        o->f3c = (float)(&frame)->f08.b0;
        (&frame)->f04 = *(Color *)((char *)o + 0x18);
        o->f44 = (float)(&frame)->f04.b2;
        o->f48 = (float)(&frame)->f04.b1;
        o->f4c = (float)(&frame)->f04.b0;
        v20 = (float)(1.0f / f0);
        o->f54 = (o->f34 - o->f44) * v20;
        o->f58 = (o->f38 - o->f48) * v20;
        o->f5c = (o->f3c - o->f4c) * v20;
        o->tag |= 0x80;
    }
}
