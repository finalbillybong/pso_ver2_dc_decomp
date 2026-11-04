/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1db678
 * function: TOSoulDF_update_8c1db678
 * language: c
 * reference size: 480 bytes
 * compiled size: 484 bytes (+0.8%)
 * differing lines: 74 of 196 reference instruction lines
 * differing bytes: 358
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TOSoulDF.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct Arg0_c0 Arg0_c0;
typedef struct Arg0_c4 Arg0_c4;
typedef struct Arg0_c8 Arg0_c8;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x14];
    int f8c;
    int f90;
    char unknown94[0xc];
    float fa0;
    float fa4;
    char unknowna8[0xc];
    float fb4;
    float fb8;
    float fbc;
    Arg0_c0 *fc0;
    Arg0_c4 *fc4;
    Arg0_c8 *fc8;
    int fcc;
    int fd0;
};
extern S_g8c46ee80 *g_8c46ee80;
void TOSoulDF_update_8c1db678(Object *o)
{
    Frame frame;
    float t1;
    float t2;
    float t3;
    float t4;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c46ee80->f90;
    ((void (*)(Frame *, void *))0x8c37f6f0)((&frame), ((char *)o + 0x3c));
    t1 = ((float (*)(float, float))0x8c130334)((&frame)->f00.f00, (&frame)->f00.f08);
    o->f64 = (int)(t1 * 65536.0f / 6.28318405f);
    o->fc4 = (Arg0_c4 *)((int)o->fc4 + 0x100);
    o->fc0 = (Arg0_c0 *)((int)o->fc0 + o->f8c);
    o->fc8 = (Arg0_c8 *)((int)o->fc8 + o->f90);
    t2 = ((float (*)(void *))0x8c37eb0c)(o->fc0);
    o->fb4 = o->f6c * t2;
    t3 = ((float (*)(void *))0x8c37eb0c)(o->fc4);
    o->fb8 = o->f70 * t3;
    t4 = ((float (*)(void *))0x8c37eb0c)(o->fc8);
    o->fbc = o->f74 * t4;
    o->fcc += 1;
    if (o->fcc >= 0xc) {
        o->fcc = 0;
    }
    if (o->fd0 != 1) {
        if (o->fd0 == 2) {
            goto L_8c1db7aa;
        }
        if (o->fd0 == 3) {
            goto L_8c1db7ca;
        }
        if (!(250000.0f > ((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08))) {
            return;
        }
        o->fd0 = 1;
        return;
    }
    o->fa0 += 0.1f;
    if (!(1.0f > o->fa0)) {
        o->fd0 = 2;
        o->fa0 = 1.0f;
    }
    o->fa4 = o->fa0;
    return;
L_8c1db7aa:;
    if (((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08) > 360000.0f) {
        o->fd0 = 3;
        return;
L_8c1db7ca:;
        o->fa0 -= 0.1f;
        if (!(o->fa0 > 0.0f)) {
            o->fd0 = 0;
            o->fa0 = 0.0f;
        }
        o->fa4 = o->fa0;
    }
}
