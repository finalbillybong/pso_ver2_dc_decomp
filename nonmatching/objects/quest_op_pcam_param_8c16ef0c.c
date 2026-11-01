/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16ef0c
 * function: quest_op_pcam_param_8c16ef0c
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 40 of 66 reference instruction lines
 * differing bytes: 48
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
typedef struct S_g8c4db408 S_g8c4db408;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
extern void forward_effect_view(void *, void *);
void quest_op_pcam_param_8c16ef0c(int a0)
{
    Frame frame;
    char *base;
    base = *(char **)0x8c4db408;
    (&frame)->f0c = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f10 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f14 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f00 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f04 = (float)*(int *)(base + (a0++ << 2));
    (&frame)->f08 = (float)*(int *)(base + (a0 << 2));
    forward_effect_view((void *)(&(&frame)->f0c), (void *)(&frame));
}
