/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16d94c
 * function: quest_op_npc_param_8c16d94c
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 56 of 149 reference instruction lines
 * differing bytes: 114
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
struct Frame {
    short f00;
    short f02;
    int f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    char f20;
    char f21;
    char f22;
    char f23;
    float f24;
};
extern int *g_8c4db408;
extern void operation_8c1117c8(void *, int);
void quest_op_npc_param_8c16d94c(int a0, int a1, int a2, int a3)
{
    Frame frame;
    int *t;
    int v2;
    t = g_8c4db408;
    frame.f00 = *(int *)((char *)t + (a0++ << 2));
    frame.f02 = *(int *)((char *)t + (a0++ << 2));
    v2 = a3;
    switch (*(int *)((char *)t + (a0++ << 2))) {
    case 0: v2 = 0x40; break;
    case 1: v2 = 4; break;
    case 2: v2 = 8; break;
    case 3: case 10: v2 = 0xc0; break;
    case 11: v2 = 0x84; break;
    case 12: v2 = 0x88; break;
    case 13: v2 = 0x90; break;
    }
    frame.f04 = v2;
    frame.f08 = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f0c = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f10 = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f14 = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f18 = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f1c = (float)*(int *)((char *)t + (a0++ << 2));
    frame.f20 = *(int *)((char *)t + (a0++ << 2));
    frame.f21 = *(int *)((char *)t + (a0++ << 2));
    frame.f22 = *(int *)((char *)t + (a0++ << 2));
    frame.f23 = *(int *)((char *)t + (a0++ << 2));
    frame.f24 = (float)*(int *)((char *)t + (a0++ << 2));
    operation_8c1117c8(&frame, a1);
}
