/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c123d8c
 * function: operation_8c123d8c
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 10 of 64 reference instruction lines
 * differing bytes: 10
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_p0_60 {
    int f00;
    char unknown4[0x4];
    int f08;
} Block_p0_60;
typedef struct Block_frame_0 {
    int f00;
    char unknown4[0x4];
    int f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    char unknown4c[0x4];
    float f50;
    char unknown54[0xc];
    Block_p0_60 f60;
};
extern int angle_step(int, int, int);
void operation_8c123d8c(Object *o)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f60;
    o->f60.f00 = (int)((o->f44 - o->f50) * 6000.0f);
    o->f60.f08 = (int)((o->f3c - o->f48) * -6000.0f);
    o->f60.f00 = angle_step((int)((&frame)->f00.f00), (int)(o->f60.f00), 0x40);
    o->f60.f08 = angle_step((int)((&frame)->f00.f08), (int)(o->f60.f08), 0x40);
}
