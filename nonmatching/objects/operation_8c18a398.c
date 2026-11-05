/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18a398
 * function: operation_8c18a398
 * language: c
 * reference size: 276 bytes
 * compiled size: 280 bytes (+1.4%)
 * differing lines: 64 of 127 reference instruction lines
 * differing bytes: 252
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    char unknown8[0x4];
} Block_p0_24;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Block_p0_24 f24;
    char unknown30[0x24];
    float f54;
    float f58;
    float f5c;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Vector3 f18;
    Block_frame_24 f24;
};
extern Vector3 g_8c319eac;
extern char g_8c46ee84[];
extern void hs_8c0c5018(void *, void *, void *);
extern void hs_8c3bdf60(void *, void *);
extern void hs_8c0a7608(void *, void *);
void operation_8c18a398(Object *o)
{
    Frame frame;
    if (o->f20 != 0) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f24;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c319eac;
        o->f54 = -*(float *)(g_8c46ee84 + 0xc);
        o->f58 = -*(float *)(g_8c46ee84 + 0x10);
        o->f5c = -*(float *)(g_8c46ee84 + 0x14);
        hs_8c0c5018(&o->f54, &(&frame)->f18, ((char *)(&frame) + 0x1c));
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)(g_8c46ee84 + 0x28);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)(g_8c46ee84 + 0x34);
        (&frame)->f24.f00 = (&frame)->f0c.f00 * o->f24.f00 + (&frame)->f00.f00 * o->f24.f04;
        (&frame)->f24.f04 = (&frame)->f0c.f04 * o->f24.f00 + (&frame)->f00.f04 * o->f24.f04;
        (&frame)->f24.f08 = (&frame)->f0c.f08 * o->f24.f00 + (&frame)->f00.f08 * o->f24.f04;
        hs_8c3bdf60(&(&frame)->f24, ((char *)o + 0x48));
        hs_8c0a7608(o->f20, &(&frame)->f24);
    }
}
