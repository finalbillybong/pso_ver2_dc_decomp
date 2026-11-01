/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16db00
 * function: quest_op_npc_crppk_8c16db00
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 32 of 84 reference instruction lines
 * differing bytes: 53
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
typedef struct S_g8c4db520 S_g8c4db520;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_g8c4db520 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c1104dc(int, int, int, void *, int);
void quest_op_npc_crppk_8c16db00(int a0)
{
    Frame frame;
    int v1;
    int v3;
    int v2;
    int *t;
    int ang;
    t = *(int **)0x8c4db408;
    (&frame)->f00 = (float)*(int *)((char *)t + (a0++ << 2));
    (&frame)->f04 = (float)*(int *)((char *)t + (a0++ << 2));
    (&frame)->f08 = (float)*(int *)((char *)t + (a0++ << 2));
    ang = (int)((float)*(int *)((char *)t + (a0++ << 2)) * 65536.0f / 360.0f);
    v1 = *(int *)((char *)t + (a0++ << 2));
    v2 = *(int *)((char *)t + (a0++ << 2));
    v3 = *(int *)((char *)t + (a0++ << 2));
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 |= 4;
    }
    operation_8c1104dc(v1, v3, v2, (void *)(&frame), ang);
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 &= -5;
    }
}
