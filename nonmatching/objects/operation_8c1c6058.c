/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c6058
 * function: operation_8c1c6058
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 8 of 33 reference instruction lines
 * differing bytes: 5
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
typedef struct Arg3 Arg3;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern void create_effect_777c(void *, int);
void operation_8c1c6058(int a0, int a1, int a2, Arg3 *a3)
{
    Frame frame;
    float k;
    create_effect_777c((void *)a3, 0x1d0);
    create_effect_777c((void *)a3, 0x1d1);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a3->f00;
    k = 15.0f;
    (&frame)->f00.f04 -= k;
    create_effect_777c((void *)(&frame), 0x1d2);
}
