/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3d54
 * function: operation_8c0c3d54
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 46 of 60 reference instruction lines
 * differing bytes: 42
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
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Arg2 Arg2;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    float f08;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct S_frame_0 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
};
struct S_frame_4 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
};
extern void call_8c0c3a8c(int, int, int, void *, Frame *, void *);
void operation_8c0c3d54(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    call_8c0c3a8c(a0, 0x10, a1, (void *)(&(&frame)->f04), (Frame *)((&frame)), (void *)(&(&frame)->f08));
    a2->f00 = (&frame)->f04->f04 + ((&frame)->f00->f04 - (&frame)->f04->f04) * (&frame)->f08;
    a2->f04 = (&frame)->f04->f08 + ((&frame)->f00->f08 - (&frame)->f04->f08) * (&frame)->f08;
    a2->f08 = (&frame)->f04->f0c + ((&frame)->f00->f0c - (&frame)->f04->f0c) * (&frame)->f08;
}
