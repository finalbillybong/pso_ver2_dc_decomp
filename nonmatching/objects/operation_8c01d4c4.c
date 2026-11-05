/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01d4c4
 * function: operation_8c01d4c4
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 2 of 138 reference instruction lines
 * differing bytes: 10
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern char g_8c46ee84[];
extern void call_8c3be280(int, void *, void *);
extern void project_point_to_screen_8c38ad50(int, void *, Frame *);
int operation_8c01d4c4(Object *o, float f0, float f1, float f2)
{
    Frame frame;
    float v1;
    call_8c3be280(0, (void *)(&o->f3c), (void *)(&(&frame)->f08));
    v1 = (float)(&frame)->f10;
    if (0.0f > v1) {
        return 0;
    }
    if (v1 > f1) {
        return 0;
    }
    if (0.0f > (&frame)->f08) {
        (&frame)->f08 = *(float *)(g_8c46ee84 + 0x28) * f2 + o->f3c;
        (&frame)->f0c = *(float *)(g_8c46ee84 + 0x2c) * f2 + o->f40;
        (&frame)->f10 = *(float *)(g_8c46ee84 + 0x30) * f2 + o->f44;
        project_point_to_screen_8c38ad50(0, (void *)(&(&frame)->f08), (Frame *)((&frame)));
        if (0.0f > (&frame)->f00) {
            return 0;
        }
    } else {
        (&frame)->f08 = o->f3c - *(float *)(g_8c46ee84 + 0x28) * f2;
        (&frame)->f0c = o->f40 - *(float *)(g_8c46ee84 + 0x2c) * f2;
        (&frame)->f10 = o->f44 - *(float *)(g_8c46ee84 + 0x30) * f2;
        project_point_to_screen_8c38ad50(0, (void *)(&(&frame)->f08), (Frame *)((&frame)));
        if ((&frame)->f00 > 640.0f) {
            return 0;
        }
    }
    if (v1 > f0) {
        return 2;
    }
    return 1;
}
